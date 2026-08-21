
/* dragonBones::DataParser::_getDisplayType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

char dragonBones::DataParser::_getDisplayType(basic_string *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  void *__src;
  long *plVar7;
  ulong uVar8;
  ulong local_60;
  ulong uStack_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_60 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_50 = *(long **)(param_1 + 0x10);
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d8bf20;
LAB_00d8bfa4:
    plVar7 = (long *)((long)local_50 + uStack_58);
    plVar5 = local_50;
    if (local_50 == plVar7) goto LAB_00d8bfcc;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
      plVar7 = (long *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00d8bf88;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      plVar7 = operator_new(uVar8);
      local_60 = uVar8 | 1;
      uStack_58 = uVar4;
      local_50 = plVar7;
LAB_00d8bf88:
      memcpy(plVar7,__src,uVar4);
    }
    *(undefined1 *)((long)plVar7 + uVar4) = 0;
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_00d8bfa4;
LAB_00d8bf20:
    plVar5 = (long *)((ulong)&local_60 | 1);
    plVar7 = (long *)((long)plVar5 + (uVar4 >> 1));
    if (plVar5 == plVar7) goto LAB_00d8bfcc;
  }
  do {
    iVar3 = tolower((int)(char)*plVar5);
                    /* try { // try from 00d8bfbc to 00e8bfc7 has its CatchHandler @ 00d8cb60 */
    plVar6 = (long *)((long)plVar5 + 1);
    *(char *)plVar5 = (char)iVar3;
    plVar5 = plVar6;
  } while (plVar7 != plVar6);
  uVar4 = local_60 & 0xff;
LAB_00d8bfcc:
  uVar8 = uVar4 >> 1;
  if ((uVar4 & 1) != 0) {
    uVar8 = uStack_58;
  }
  if (uVar8 == 4) {
                    /* try { // try from 00d8c0a4 to 00e8c0bf has its CatchHandler @ 00d8cc8c */
    plVar7 = (long *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      plVar7 = local_50;
    }
    cVar2 = ((int)*plVar7 == 0x6873656d) << 1;
                    /* try { // try from 00d8c0c4 to 00e8c0d3 has its CatchHandler @ 00d8cc90 */
  }
  else if (uVar8 == 0xb) {
    plVar7 = (long *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      plVar7 = local_50;
    }
    iVar3 = memcmp(plVar7,"boundingbox",0xb);
    cVar2 = '\x03';
    if (iVar3 != 0) {
      cVar2 = '\0';
    }
  }
  else if (uVar8 == 8) {
    plVar7 = (long *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      plVar7 = local_50;
    }
                    /* try { // try from 00d8c020 to 00e8c02f has its CatchHandler @ 00d8cc2c */
    cVar2 = *plVar7 == 0x65727574616d7261;
  }
  else {
    cVar2 = '\0';
  }
  if ((uVar4 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

