
void FUN_017f9184(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  undefined4 local_64;
  byte local_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    goto LAB_017f92f8;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar6 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      uVar3 = getc(*(FILE **)(param_1 + 0x40));
      if (uVar3 == 0xffffffff) goto LAB_017f92f8;
      local_60[uVar5] = (byte)uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    uVar6 = (ulong)uVar1;
    while( true ) {
      uVar7 = **(undefined8 **)(param_1 + 0x50);
      iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_60,
                         local_60 + uVar6,auStack_70,&local_64,local_60,auStack_78);
      if (iVar4 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar7;
      if ((uVar6 == 8) || (iVar4 = getc(*(FILE **)(param_1 + 0x40)), iVar4 == -1))
      goto LAB_017f92f4;
      local_60[uVar6] = (byte)iVar4;
      uVar6 = uVar6 + 1;
    }
    if (iVar4 == 2) {
LAB_017f92f4:
      uVar3 = 0xffffffff;
      goto LAB_017f92f8;
    }
    if (iVar4 == 3) goto LAB_017f921c;
  }
  else {
LAB_017f921c:
    local_64 = (uint)local_60[0];
  }
  if ((param_2 & 1) == 0) {
    uVar6 = uVar6 & 0xffffffff;
    do {
      uVar3 = local_64;
      if ((long)uVar6 < 1) goto LAB_017f92f8;
      iVar4 = ungetc((uint)local_60[uVar6 - 1],*(FILE **)(param_1 + 0x40));
      uVar6 = uVar6 - 1;
    } while (iVar4 != -1);
    uVar3 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x5c) = local_64;
    uVar3 = local_64;
  }
LAB_017f92f8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

