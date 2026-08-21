
/* fairygui::TweenValue::operator[](int) const */

void __thiscall fairygui::TweenValue::operator[](TweenValue *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ac30b4 to 00bc30bb has its CatchHandler @ 00ac3194 */
  switch((__ndk1 *)(ulong)(uint)param_1) {
  case (__ndk1 *)0x0:
    break;
  case (__ndk1 *)0x1:
    this = this + 4;
                    /* try { // try from 00ac30bc to 00bc3117 has its CatchHandler @ 00ac319c */
    break;
  case (__ndk1 *)0x2:
    this = this + 8;
    break;
  case (__ndk1 *)0x3:
    this = this + 0xc;
    break;
  default:
    auVar6 = __cxa_allocate_exception(0x18);
    puVar2 = auVar6._0_8_;
    std::__ndk1::to_string((__ndk1 *)(ulong)(uint)param_1,auVar6._8_4_);
                    /* try { // try from 00ac3118 to 00bc313f has its CatchHandler @ 00ac3064 */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       (abStack_50,0,"Index out of bounds: ",0x15);
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    puVar2[2] = puVar3[2];
    puVar2[1] = uVar5;
    *puVar2 = uVar4;
    puVar3[1] = 0;
    puVar3[2] = 0;
                    /* try { // try from 00ac3140 to 00bc3153 has its CatchHandler @ 00ac319c */
    *puVar3 = 0;
                    /* try { // try from 00ac3154 to 00bc31b7 has its CatchHandler @ 00ac3064 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::typeinfo,
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                ~basic_string);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)this);
  }
  return;
}

