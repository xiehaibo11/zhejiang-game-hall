
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
cocos2d::JniHelper::
getJNISignature<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1_00,undefined8 param_2,undefined4 param_1,ulong *param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *__src;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 009d9720 to 00ad975f has its CatchHandler @ 009d9e48 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = &DAT_00004902;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
                    /* try { // try from 009d9760 to 00ad9923 has its CatchHandler @ 009d9e64 */
  if ((*param_4 & 1) == 0) {
    local_90 = (void *)param_4[2];
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    goto LAB_009d97e0;
  }
  uVar4 = param_4[1];
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_4[2];
  if (uVar4 < 0x17) {
    __dest = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_009d97cc;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_a0 = uVar5 | 1;
    uStack_98 = uVar4;
    local_90 = __dest;
LAB_009d97cc:
    memcpy(__dest,__src,uVar4);
  }
  *(undefined1 *)((long)__dest + uVar4) = 0;
LAB_009d97e0:
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_88,param_1,&local_a0);
  uVar4 = (ulong)(local_88[0] >> 1);
  pcVar2 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar4 = local_80;
    pcVar2 = local_78;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_70,pcVar2,uVar4);
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  param_1_00[2] = puVar3[2];
  param_1_00[1] = uVar7;
  *param_1_00 = uVar6;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

