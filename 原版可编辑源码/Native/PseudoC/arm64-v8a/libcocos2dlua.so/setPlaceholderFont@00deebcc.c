
/* cocos2d::ui::EditBoxImplCommon::setPlaceholderFont(char const*, int) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setPlaceholderFont
          (EditBoxImplCommon *this,char *param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  float local_60 [4];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00deebe4 to 00eeebfb has its CatchHandler @ 00deef00 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x80),param_1,sVar2);
                    /* try { // try from 00deec1c to 00eeec27 has its CatchHandler @ 00deef34 */
  *(int *)(this + 0x9c) = param_2;
  (**(code **)(**(long **)(this + 0x20) + 0x438))(local_60);
                    /* try { // try from 00deec38 to 00eeec4b has its CatchHandler @ 00deef28 */
                    /* try { // try from 00deec54 to 00eeec6b has its CatchHandler @ 00deeefc */
  (**(code **)(*(long *)this + 0x158))(this,param_1,(int)(local_60[0] * (float)param_2));
  if (((byte)this[0x80] & 1) == 0) {
    if ((byte)this[0x80] >> 1 == 0) goto LAB_00deeca8;
  }
  else if (*(long *)(this + 0x88) == 0) goto LAB_00deeca8;
  plVar3 = *(long **)(this + 0x20);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_60,param_1);
                    /* try { // try from 00deec8c to 00eeec97 has its CatchHandler @ 00deef30 */
  (**(code **)(*plVar3 + 0x560))(plVar3,local_60);
  if (((byte)local_60[0]._0_1_ & 1) != 0) {
                    /* try { // try from 00deeca4 to 00eeecab has its CatchHandler @ 00deef14 */
    operator_delete(local_50);
  }
LAB_00deeca8:
  if (0 < param_2) {
                    /* try { // try from 00deecb0 to 00eeecc7 has its CatchHandler @ 00deef18 */
    (**(code **)(**(long **)(this + 0x20) + 0x570))((float)param_2);
  }
                    /* try { // try from 00deecc8 to 00eeed93 has its CatchHandler @ 00deeaa0 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

