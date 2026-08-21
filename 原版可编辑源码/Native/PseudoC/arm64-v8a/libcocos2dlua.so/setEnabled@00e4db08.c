
/* cocos2d::PUObserver::setEnabled(bool) */

void __thiscall cocos2d::PUObserver::setEnabled(PUObserver *this,bool param_1)

{
  this[0x60] = (PUObserver)param_1;
  if (this[0x62] != (PUObserver)0x0) {
    return;
  }
  this[0x61] = (PUObserver)param_1;
  this[0x62] = (PUObserver)0x1;
  return;
}

