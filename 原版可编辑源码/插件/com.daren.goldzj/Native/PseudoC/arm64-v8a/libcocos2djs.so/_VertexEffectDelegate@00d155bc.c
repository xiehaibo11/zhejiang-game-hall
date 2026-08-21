
/* spine::VertexEffectDelegate::~VertexEffectDelegate() */

void __thiscall spine::VertexEffectDelegate::~VertexEffectDelegate(VertexEffectDelegate *this)

{
  *(undefined ***)this = &PTR__VertexEffectDelegate_01c8fcc8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"none",4);
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

