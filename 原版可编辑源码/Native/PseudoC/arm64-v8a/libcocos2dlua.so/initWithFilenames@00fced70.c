
/* cocos2d::GLProgram::initWithFilenames(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
cocos2d::GLProgram::initWithFilenames
          (GLProgram *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  char *local_78;
  byte local_70 [16];
  char *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00fcedc0 with catch @ 00fced88 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)FileUtils::getInstance();
  plVar6 = (long *)FileUtils::getInstance();
                    /* try { // try from 00fcedb8 to 010cedbf has its CatchHandler @ 00fcee38 */
                    /* try { // try from 00fcedc0 to 010cee53 has its CatchHandler @ 00fced88 */
  (**(code **)(*plVar6 + 0x50))(local_88,plVar6,param_1);
  (**(code **)(*plVar5 + 0x18))(local_70,plVar5,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0x50))(local_a0,plVar6,param_2);
  (**(code **)(*plVar5 + 0x18))(local_88,plVar5,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
                    /* catch() { ... } // from try @ 00fcedb8 with catch @ 00fcee38 */
  pcVar1 = (char *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar2 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    pcVar2 = local_78;
  }
  uVar4 = initWithByteArrays(this,pcVar1,pcVar2,param_3,param_4);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00fceedc with catch @ 00fceeac */
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

