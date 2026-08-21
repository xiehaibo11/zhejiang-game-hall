
/* cocos2d::PUOnPositionObserver::PUOnPositionObserver() */

void __thiscall cocos2d::PUOnPositionObserver::PUOnPositionObserver(PUOnPositionObserver *this)

{
  undefined4 uVar1;
  
  PUObserver::PUObserver((PUObserver *)this);
  *(undefined ***)this = &PTR__PUObserver_016f1638;
  *(undefined8 *)(this + 0xa4) = DEFAULT_POSITION_THRESHOLD;
  uVar1 = DAT_01788fc4;
  *(undefined2 *)(this + 0xb0) = 0;
  this[0xb2] = (PUOnPositionObserver)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xac) = uVar1;
  return;
}

