#ifndef __FILLER_H__
#define __FILLER_H__

#include "Locations.h"
#include "ItemPool.h"
#include "LogicGraph.h"
#include "Random.h"

namespace Filler {

    class PlacementSet {
    public:
        PlacementSet ();
        ~PlacementSet ();

        ItemIndex set[ALL_LOCATIONS_SIZE];
        int size;

        void init (ItemIndex* initItems, int count);
        void clear ();
        PlacementSet* add (ItemIndex itemIndex);
        void shuffle ();
        ItemIndex take ();
    };

    class LocationSet {
    public:
        LocationSet ();
        ~LocationSet ();

        LocationID set[ALL_LOCATIONS_SIZE];
        int size;

        void clear ();
        void copyFrom (LocationSet* source);
        LocationSet* add (LocationID location);
        // Filter to locations where the item can be placed
        void filter (ItemIndex item);
        LocationID pick ();
        LocationID take ();
        void removeLocation (LocationID location);
        void print ();
    };

    class LinkSet {
    public:
        LinkSet ();
        ~LinkSet ();

        MapLink* set[ALL_LOCATIONS_SIZE];
        int size;

        void clear ();
        void add (MapLink* link);
        // Pick a link where inventory meets requirement
        // Remove it from the set
        // Return NULL if no links are met
        MapLink* pick (ItemPool inventory);
    };

    void getEmptyLocations (LogicMap* map, LocationSet& locationSet);
    bool placeItems (LogicMap* map, PlacementSet& placementSet, ItemPool& inventory);
    bool dummyPlacement (LogicMap* map, PlacementSet& placementSet, LocationSet& locationSet);
    bool dummyPlacementWithFilter (LogicMap* map, PlacementSet& placementSet, LocationSet& locationSet);

    void testPlacement ();
}

#endif //__FILLER_H__
