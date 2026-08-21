
/* cocos2d::EventListenerPhysicsContactWithBodies::~EventListenerPhysicsContactWithBodies() */

void __thiscall
cocos2d::EventListenerPhysicsContactWithBodies::~EventListenerPhysicsContactWithBodies
          (EventListenerPhysicsContactWithBodies *this)

{
  EventListenerPhysicsContactWithGroup::~EventListenerPhysicsContactWithGroup
            ((EventListenerPhysicsContactWithGroup *)this);
  operator_delete(this);
  return;
}

