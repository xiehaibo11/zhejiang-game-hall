
/* dragonBones::DataParser::_getBoundingBoxType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

int dragonBones::DataParser::_getBoundingBoxType(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  void *__src;
  char *pcVar6;
  ulong uVar7;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_50 = *(char **)(param_1 + 0x10);
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    uVar3 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d8c12c;
LAB_00d8c1b0:
    pcVar6 = local_50 + uStack_58;
                    /* try { // try from 00d8c1b8 to 00e8c1c7 has its CatchHandler @ 00d8cc88 */
    pcVar4 = local_50;
    if (local_50 == pcVar6) goto LAB_00d8c1d8;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar3 < 0x17) {
      pcVar6 = (char *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar3 << 1);
      if (uVar3 != 0) goto LAB_00d8c194;
    }
    else {
      uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pcVar6 = operator_new(uVar7);
      local_60 = uVar7 | 1;
      uStack_58 = uVar3;
      local_50 = pcVar6;
LAB_00d8c194:
                    /* try { // try from 00d8c198 to 00e8c1b3 has its CatchHandler @ 00d8cc74 */
      memcpy(pcVar6,__src,uVar3);
    }
    pcVar6[uVar3] = '\0';
    uVar3 = local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_00d8c1b0;
LAB_00d8c12c:
    pcVar4 = (char *)((ulong)&local_60 | 1);
    pcVar6 = pcVar4 + (uVar3 >> 1);
    if (pcVar4 == pcVar6) goto LAB_00d8c1d8;
  }
  do {
    iVar2 = tolower((int)*pcVar4);
    pcVar5 = pcVar4 + 1;
    *pcVar4 = (char)iVar2;
    pcVar4 = pcVar5;
  } while (pcVar6 != pcVar5);
  uVar3 = local_60 & 0xff;
LAB_00d8c1d8:
  uVar7 = uVar3 >> 1;
  if ((uVar3 & 1) != 0) {
    uVar7 = uStack_58;
  }
  if (uVar7 == 7) {
    pcVar6 = (char *)((ulong)&local_60 | 1);
    if ((uVar3 & 1) != 0) {
      pcVar6 = local_50;
    }
    iVar2 = memcmp(pcVar6,"ellipse",7);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = memcmp(pcVar6,"polygon",7);
      iVar2 = (uint)(iVar2 == 0) << 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((uVar3 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

