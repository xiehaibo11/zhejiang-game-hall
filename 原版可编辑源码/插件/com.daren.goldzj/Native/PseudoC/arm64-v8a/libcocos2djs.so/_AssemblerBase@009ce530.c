
/* cocos2d::renderer::AssemblerBase::~AssemblerBase() */

void __thiscall cocos2d::renderer::AssemblerBase::~AssemblerBase(AssemblerBase *this)

{
  Mat4 *this_00;
  
  *(undefined ***)this = &PTR__AssemblerBase_01c6b570;
  if (*(Object **)(this + 0x10) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 0x10));
    se::RefCounter::decRef(*(RefCounter **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  this_00 = *(Mat4 **)(this + 0x30);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (this_00 != (Mat4 *)0x0) {
    Mat4::~Mat4(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 0x30) = 0;
  }
  Ref::~Ref((Ref *)this);
  return;
}

