
/* cocos2d::ui::EditBoxImplCommon::setFont(char const*, int) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setFont(EditBoxImplCommon *this,char *param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  float local_60 [4];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x68),param_1,sVar2);
  *(int *)(this + 0x98) = param_2;
                    /* try { // try from 00deeaa0 to 00eeeb3b has its CatchHandler @ 00deeaa0
                       catch() { ... } // from try @ 00deeaa0 with catch @ 00deeaa0
                       catch() { ... } // from try @ 00deecc8 with catch @ 00deeaa0
                       catch() { ... } // from try @ 00deeda8 with catch @ 00deeaa0 */
  (**(code **)(**(long **)(this + 0x18) + 0x438))(local_60);
  (**(code **)(*(long *)this + 0x148))(this,param_1,(int)(local_60[0] * (float)param_2));
  if (((byte)this[0x68] & 1) == 0) {
    if ((byte)this[0x68] >> 1 == 0) goto LAB_00deeb20;
  }
  else if (*(long *)(this + 0x70) == 0) goto LAB_00deeb20;
  plVar3 = *(long **)(this + 0x18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_60,param_1);
  (**(code **)(*plVar3 + 0x560))(plVar3,local_60);
  if (((byte)local_60[0]._0_1_ & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00deeb20:
  if (0 < param_2) {
    (**(code **)(**(long **)(this + 0x18) + 0x570))((float)param_2);
  }
                    /* try { // try from 00deeb3c to 00eeeb5f has its CatchHandler @ 00deef04 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

