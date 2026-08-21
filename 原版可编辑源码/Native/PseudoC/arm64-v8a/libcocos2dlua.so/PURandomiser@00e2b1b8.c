
/* cocos2d::PURandomiser::PURandomiser() */

void __thiscall cocos2d::PURandomiser::PURandomiser(PURandomiser *this)

{
  undefined4 uVar1;
  
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined ***)this = &PTR__PURandomiser_016efb90;
  *(undefined8 *)(this + 0xac) = DEFAULT_MAX_DEVIATION;
  uVar1 = DAT_01788dbc;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined2 *)(this + 0xc0) = 0x101;
  *(undefined4 *)(this + 0xb4) = uVar1;
  return;
}

