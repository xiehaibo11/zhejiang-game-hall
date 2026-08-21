
/* dragonBones::DataParser::_getActionType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 dragonBones::DataParser::_getActionType(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  void *__src;
  char *pcVar7;
  ulong uVar8;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00d8c2b8 to 00e8c2c3 has its CatchHandler @ 00d8cb5c */
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
                    /* try { // try from 00d8c2c8 to 00e8c2d3 has its CatchHandler @ 00d8cb4c */
  if (((byte)*param_1 & 1) == 0) {
    local_50 = *(char **)(param_1 + 0x10);
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d8c2e4;
LAB_00d8c368:
    pcVar7 = local_50 + uStack_58;
    pcVar5 = local_50;
    if (local_50 == pcVar7) goto LAB_00d8c390;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
                    /* try { // try from 00d8c304 to 00e8c30b has its CatchHandler @ 00d8cb48 */
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
      pcVar7 = (char *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00d8c34c;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00d8c338 to 00e8c353 has its CatchHandler @ 00d8cbf0 */
      pcVar7 = operator_new(uVar8);
      local_60 = uVar8 | 1;
      uStack_58 = uVar4;
      local_50 = pcVar7;
LAB_00d8c34c:
                    /* try { // try from 00d8c358 to 00e8c367 has its CatchHandler @ 00d8cbf4 */
      memcpy(pcVar7,__src,uVar4);
    }
    pcVar7[uVar4] = '\0';
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_00d8c368;
LAB_00d8c2e4:
                    /* try { // try from 00d8c2e4 to 00e8c2e7 has its CatchHandler @ 00d8cb44 */
    pcVar5 = (char *)((ulong)&local_60 | 1);
    pcVar7 = pcVar5 + (uVar4 >> 1);
    if (pcVar5 == pcVar7) goto LAB_00d8c390;
  }
  do {
    iVar2 = tolower((int)*pcVar5);
    pcVar6 = pcVar5 + 1;
    *pcVar5 = (char)iVar2;
    pcVar5 = pcVar6;
  } while (pcVar7 != pcVar6);
  uVar4 = local_60 & 0xff;
LAB_00d8c390:
  uVar8 = uVar4 >> 1;
  if ((uVar4 & 1) != 0) {
    uVar8 = uStack_58;
  }
  if (uVar8 == 5) {
    pcVar7 = (char *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      pcVar7 = local_50;
    }
    iVar2 = memcmp(pcVar7,"frame",5);
    if (iVar2 == 0) {
      uVar3 = 10;
    }
    else {
      iVar2 = memcmp(pcVar7,"sound",5);
      uVar3 = 0xb;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  if ((uVar4 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00d8c420 to 00e8c4b3 has its CatchHandler @ 00d8cbcc */
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

