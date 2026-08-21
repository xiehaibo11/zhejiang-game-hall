
/* cocos2d::NotificationObserver::~NotificationObserver() */

void __thiscall cocos2d::NotificationObserver::~NotificationObserver(NotificationObserver *this)

{
  *(undefined ***)this = &PTR__NotificationObserver_01724ca8;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

