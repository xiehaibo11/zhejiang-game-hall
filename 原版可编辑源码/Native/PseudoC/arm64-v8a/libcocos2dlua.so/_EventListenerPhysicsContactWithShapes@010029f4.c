
/* cocos2d::EventListenerPhysicsContactWithShapes::~EventListenerPhysicsContactWithShapes() */

void __thiscall
cocos2d::EventListenerPhysicsContactWithShapes::~EventListenerPhysicsContactWithShapes
          (EventListenerPhysicsContactWithShapes *this)

{
                    /* try { // try from 01002a04 to 01102a83 has its CatchHandler @ 01002a04
                       catch() { ... } // from try @ 01002a04 with catch @ 01002a04
                       catch() { ... } // from try @ 01002a98 with catch @ 01002a04 */
  EventListenerPhysicsContactWithGroup::~EventListenerPhysicsContactWithGroup
            ((EventListenerPhysicsContactWithGroup *)this);
  operator_delete(this);
  return;
}

