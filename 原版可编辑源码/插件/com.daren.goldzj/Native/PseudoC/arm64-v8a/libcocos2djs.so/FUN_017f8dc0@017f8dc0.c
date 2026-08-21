
void FUN_017f8dc0(long param_1,ulong param_2)

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
  byte local_64 [3];
  byte abStack_61 [9];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    goto LAB_017f8f34;
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
      if (uVar3 == 0xffffffff) goto LAB_017f8f34;
      abStack_61[uVar5 + 1] = (byte)uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    uVar6 = (ulong)uVar1;
    while( true ) {
      uVar7 = **(undefined8 **)(param_1 + 0x50);
      iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),abStack_61 + 1,
                         abStack_61 + uVar6 + 1,auStack_70,local_64,(ulong)local_64 | 1,auStack_78);
      if (iVar4 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar7;
      if ((uVar6 == 8) || (iVar4 = getc(*(FILE **)(param_1 + 0x40)), iVar4 == -1))
      goto LAB_017f8f30;
      abStack_61[uVar6 + 1] = (byte)iVar4;
      uVar6 = uVar6 + 1;
    }
    if (iVar4 == 2) {
LAB_017f8f30:
      uVar3 = 0xffffffff;
      goto LAB_017f8f34;
    }
    if (iVar4 == 3) goto LAB_017f8e58;
  }
  else {
LAB_017f8e58:
    local_64[0] = abStack_61[1];
  }
  if ((param_2 & 1) == 0) {
    uVar6 = uVar6 & 0xffffffff;
    do {
      if ((long)uVar6 < 1) {
        uVar3 = (uint)local_64[0];
        goto LAB_017f8f34;
      }
      iVar4 = ungetc((uint)abStack_61[uVar6],*(FILE **)(param_1 + 0x40));
      uVar6 = uVar6 - 1;
    } while (iVar4 != -1);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)local_64[0];
    *(uint *)(param_1 + 0x5c) = (uint)local_64[0];
  }
LAB_017f8f34:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

