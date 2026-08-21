
/* cocos2d::PUBillboardChain::Element::Element(cocos2d::Vec3 const&, float, float, cocos2d::Vec4
   const&, cocos2d::Quaternion const&) */

void __thiscall
cocos2d::PUBillboardChain::Element::Element
          (Element *this,Vec3 *param_1,float param_2,float param_3,Vec4 *param_4,Quaternion *param_5
          )

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0xc) = param_2;
  *(float *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)this = uVar2;
  Vec4::Vec4((Vec4 *)(this + 0x14),param_4);
  Quaternion::Quaternion((Quaternion *)(this + 0x24),param_5);
  return;
}

