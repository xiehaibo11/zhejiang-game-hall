
/* cocos2d::EventListenerPhysicsContact::~EventListenerPhysicsContact() */

void __thiscall
cocos2d::EventListenerPhysicsContact::~EventListenerPhysicsContact
          (EventListenerPhysicsContact *this)

{
  EventListenerPhysicsContactWithGroup::~EventListenerPhysicsContactWithGroup
            ((EventListenerPhysicsContactWithGroup *)this);
  operator_delete(this);
  return;
}

