
/* dragonBones::DataParser::_getArmatureType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

char dragonBones::DataParser::_getArmatureType(basic_string *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
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
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_50 = *(char **)(param_1 + 0x10);
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d8bd54;
LAB_00d8bdd8:
    pcVar7 = local_50 + uStack_58;
    pcVar5 = local_50;
    if (local_50 == pcVar7) goto LAB_00d8be00;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
      pcVar7 = (char *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00d8bdbc;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pcVar7 = operator_new(uVar8);
      local_60 = uVar8 | 1;
      uStack_58 = uVar4;
      local_50 = pcVar7;
LAB_00d8bdbc:
      memcpy(pcVar7,__src,uVar4);
    }
    pcVar7[uVar4] = '\0';
    uVar4 = local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_00d8bdd8;
LAB_00d8bd54:
    pcVar5 = (char *)((ulong)&local_60 | 1);
    pcVar7 = pcVar5 + (uVar4 >> 1);
    if (pcVar5 == pcVar7) goto LAB_00d8be00;
  }
  do {
    iVar3 = tolower((int)*pcVar5);
    pcVar6 = pcVar5 + 1;
    *pcVar5 = (char)iVar3;
    pcVar5 = pcVar6;
  } while (pcVar7 != pcVar6);
  uVar4 = local_60 & 0xff;
LAB_00d8be00:
  uVar8 = uVar4 >> 1;
  if ((uVar4 & 1) != 0) {
    uVar8 = uStack_58;
  }
  if (uVar8 == 5) {
    pcVar7 = (char *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      pcVar7 = local_50;
    }
    iVar3 = memcmp(pcVar7,"stage",5);
    cVar2 = (iVar3 == 0) << 1;
  }
  else if (uVar8 == 9) {
    pcVar7 = (char *)((ulong)&local_60 | 1);
    if ((uVar4 & 1) != 0) {
      pcVar7 = local_50;
    }
    iVar3 = memcmp(pcVar7,"movieClip",9);
    cVar2 = iVar3 == 0;
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

