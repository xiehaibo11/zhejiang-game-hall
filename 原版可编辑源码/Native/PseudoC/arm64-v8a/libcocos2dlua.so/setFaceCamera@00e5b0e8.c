
/* cocos2d::PUBillboardChain::setFaceCamera(bool, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUBillboardChain::setFaceCamera(PUBillboardChain *this,bool param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  
  this[0x2c] = (PUBillboardChain)param_1;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x38) = uVar1;
  Vec3::normalize((Vec3 *)(this + 0x30));
  this[0x1f] = (PUBillboardChain)0x1;
  return;
}

