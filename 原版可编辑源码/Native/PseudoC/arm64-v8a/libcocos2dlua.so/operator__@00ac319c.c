
/* fairygui::TweenValue::operator[](int) */

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
  
                    /* catch() { ... } // from try @ 00ac30bc with catch @ 00ac319c
                       catch() { ... } // from try @ 00ac3140 with catch @ 00ac319c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch((__ndk1 *)(ulong)(uint)param_1) {
  case (__ndk1 *)0x0:
    break;
  case (__ndk1 *)0x1:
    this = this + 4;
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
    *puVar3 = 0;
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
    __stack_chk_fail(this);
  }
  return;
}

