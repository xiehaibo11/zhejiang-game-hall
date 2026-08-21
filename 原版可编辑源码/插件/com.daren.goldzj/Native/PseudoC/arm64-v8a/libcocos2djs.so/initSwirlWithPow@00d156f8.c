
/* spine::VertexEffectDelegate::initSwirlWithPow(float, int) */

undefined8 __thiscall
spine::VertexEffectDelegate::initSwirlWithPow(VertexEffectDelegate *this,float param_1,int param_2)

{
  undefined8 *puVar1;
  SwirlVertexEffect *this_00;
  ulong extraout_x1;
  
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
  puVar1 = operator_new(0x10);
  *(int *)(puVar1 + 1) = param_2;
  *puVar1 = &PTR_apply_01c8fd00;
  *(undefined8 **)(this + 0x18) = puVar1;
  this_00 = SpineObject::operator_new((SpineObject *)0x28,extraout_x1);
  SwirlVertexEffect::SwirlVertexEffect(this_00,param_1,*(Interpolation **)(this + 0x18));
  *(SwirlVertexEffect **)(this + 0x10) = this_00;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"swirl",5);
  return *(undefined8 *)(this + 0x10);
}

