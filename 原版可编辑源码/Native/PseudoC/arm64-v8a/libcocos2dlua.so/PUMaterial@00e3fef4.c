
/* cocos2d::PUMaterial::PUMaterial() */

void __thiscall cocos2d::PUMaterial::PUMaterial(PUMaterial *this)

{
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__PUMaterial_016f1f78;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x58] = (PUMaterial)0x1;
  Vec4::Vec4((Vec4 *)(this + 0x5c),(Vec4 *)Vec4::ONE);
  Vec4::Vec4((Vec4 *)(this + 0x6c),(Vec4 *)Vec4::ONE);
  Vec4::Vec4((Vec4 *)(this + 0x7c),(Vec4 *)&Vec4::ZERO);
  Vec4::Vec4((Vec4 *)(this + 0x8c),(Vec4 *)&Vec4::ZERO);
  *(undefined2 *)(this + 0xa8) = 0x101;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0x812f;
  *(undefined8 *)(this + 0xa0) = 1;
  return;
}

