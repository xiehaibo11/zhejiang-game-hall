
/* dragonBones::DataParser::_getTextureFormat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 dragonBones::DataParser::_getTextureFormat(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
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
    if ((local_60 & 1) != 0) goto LAB_00d8bb6c;
LAB_00d8bae8:
    plVar5 = (long *)((ulong)&local_60 | 1);
    plVar7 = (long *)((long)plVar5 + (uVar4 >> 1));
    if (plVar5 == plVar7) goto LAB_00d8bb94;
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
      if (uVar4 != 0) goto LAB_00d8bb50;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      plVar7 = operator_new(uVar8);
      local_60 = uVar8 | 1;
      uStack_58 = uVar4;
      local_50 = plVar7;
LAB_00d8bb50:
      memcpy(plVar7,__src,uVar4);
    }
    *(char *)((long)plVar7 + uVar4) = '\0';
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d8bae8;
LAB_00d8bb6c:
    plVar7 = (long *)((long)local_50 + uStack_58);
    plVar5 = local_50;
    if (local_50 == plVar7) goto LAB_00d8bb94;
  }
  do {
    iVar2 = tolower((int)(char)*plVar5);
    plVar6 = (long *)((long)plVar5 + 1);
    *(char *)plVar5 = (char)iVar2;
    plVar5 = plVar6;
  } while (plVar7 != plVar6);
  uVar4 = local_60 & 0xff;
LAB_00d8bb94:
  uVar8 = uVar4 >> 1;
  if ((uVar4 & 1) != 0) {
    uVar8 = uStack_58;
  }
  if (uVar8 == 6) {
    plVar7 = (long *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      plVar7 = local_50;
    }
    iVar2 = memcmp(plVar7,"rgb888",6);
    if (iVar2 == 0) {
      uVar3 = 4;
    }
    else {
      iVar2 = memcmp(plVar7,"rgb565",6);
      uVar3 = 5;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
    }
  }
  else if (uVar8 == 8) {
    plVar7 = (long *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      plVar7 = local_50;
    }
    if (*plVar7 == 0x3838383861626772) {
      uVar3 = 1;
    }
    else if (*plVar7 == 0x3838383861726762) {
      uVar3 = 2;
    }
    else if (*plVar7 == 0x3434343461626772) {
      uVar3 = 3;
    }
    else {
      uVar3 = 6;
      if (*plVar7 != 0x3135353561626772) {
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

