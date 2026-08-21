
/* cocos2d::FileUtils::getFileExtension(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getFileExtension(basic_string *param_1)

{
  ulong __n;
  long lVar1;
  long lVar2;
  uint uVar3;
  byte *in_x1;
  ulong *in_x8;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uVar7 = *(ulong *)(in_x1 + 8);
  pbVar4 = *(byte **)(in_x1 + 0x10);
  if ((*in_x1 & 1) == 0) {
    pbVar4 = in_x1 + 1;
    uVar7 = (ulong)(*in_x1 >> 1);
  }
  uVar8 = uVar7;
  if (uVar7 == 0) goto LAB_0087719c;
  do {
    if (uVar8 == 0) goto LAB_0087719c;
    lVar2 = uVar8 - 1;
    uVar8 = uVar8 - 1;
  } while (pbVar4[lVar2] != 0x2e);
  if (uVar8 == 0xffffffffffffffff) goto LAB_0087719c;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  if (uVar7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar7 - uVar8;
  if (uVar7 <= uVar7 - uVar8) {
    __n = uVar7;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00877138;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_70 = uVar7 | 1;
    uStack_68 = __n;
    local_60 = __dest;
LAB_00877138:
    param_1 = memcpy(__dest,pbVar4 + uVar8,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  in_x8[1] = uStack_68;
  *in_x8 = local_70;
  in_x8[2] = (ulong)local_60;
  if (((byte)*in_x8 & 1) == 0) {
    pbVar4 = (byte *)((long)in_x8 + 1);
    pbVar6 = pbVar4 + (byte)((byte)*in_x8 >> 1);
    if (pbVar4 == pbVar6) goto LAB_0087719c;
  }
  else {
    pbVar4 = (byte *)in_x8[2];
    pbVar6 = pbVar4 + in_x8[1];
    if (pbVar4 == pbVar6) goto LAB_0087719c;
  }
  do {
    uVar3 = tolower((int)(char)*pbVar4);
    param_1 = (basic_string *)(ulong)uVar3;
    pbVar5 = pbVar4 + 1;
    *pbVar4 = (byte)uVar3;
    pbVar4 = pbVar5;
  } while (pbVar6 != pbVar5);
LAB_0087719c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

