
/* cocos2d::PUMaterial::~PUMaterial() */

void __thiscall cocos2d::PUMaterial::~PUMaterial(PUMaterial *this)

{
  *(undefined ***)this = &PTR__PUMaterial_016f1f78;
  if (((byte)this[0xb0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  Vec4::~Vec4((Vec4 *)(this + 0x8c));
  Vec4::~Vec4((Vec4 *)(this + 0x7c));
  Vec4::~Vec4((Vec4 *)(this + 0x6c));
  Vec4::~Vec4((Vec4 *)(this + 0x5c));
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  return;
}

