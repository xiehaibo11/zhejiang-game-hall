
/* spine::VertexEffectDelegate::initJitter(float, float) */

undefined8 __thiscall
spine::VertexEffectDelegate::initJitter(VertexEffectDelegate *this,float param_1,float param_2)

{
  JitterVertexEffect *this_00;
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
  this_00 = SpineObject::operator_new((SpineObject *)0x10,extraout_x1);
  JitterVertexEffect::JitterVertexEffect(this_00,param_1,param_2);
  *(JitterVertexEffect **)(this + 0x10) = this_00;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"jitter",6);
  return *(undefined8 *)(this + 0x10);
}

