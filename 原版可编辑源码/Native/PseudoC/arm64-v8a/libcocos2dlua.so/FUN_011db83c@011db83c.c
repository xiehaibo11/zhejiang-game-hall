
void FUN_011db83c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  byte local_64 [3];
  byte local_61 [9];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    goto LAB_011db99c;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar4 = 0;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar5 = (ulong)uVar2;
  do {
    uVar2 = getc(*(FILE **)(param_1 + 0x40));
    if (uVar2 == 0xffffffff) goto LAB_011db99c;
    local_61[uVar4 + 1] = (byte)uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar5);
  if (*(char *)(param_1 + 0x61) == '\0') {
    while( true ) {
      uVar6 = **(undefined8 **)(param_1 + 0x50);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_61 + 1,
                         local_61 + uVar5 + 1,auStack_70,local_64,(ulong)local_64 | 1,auStack_78);
      if (iVar3 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar6;
      if ((uVar5 == 8) || (iVar3 = getc(*(FILE **)(param_1 + 0x40)), iVar3 == -1))
      goto LAB_011db998;
      local_61[uVar5 + 1] = (byte)iVar3;
      uVar5 = uVar5 + 1;
    }
    if (iVar3 == 2) {
LAB_011db998:
      uVar2 = 0xffffffff;
      goto LAB_011db99c;
    }
    if (iVar3 == 3) goto LAB_011db8c8;
  }
  else {
LAB_011db8c8:
    local_64[0] = local_61[1];
  }
  if ((param_2 & 1) == 0) {
    uVar4 = uVar5 & 0xffffffff;
    do {
      if ((long)uVar4 < 1) {
        uVar2 = (uint)local_64[0];
        goto LAB_011db99c;
      }
      iVar3 = ungetc((uint)local_61[uVar4],*(FILE **)(param_1 + 0x40));
      uVar4 = uVar4 - 1;
    } while (iVar3 != -1);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)local_64[0];
    *(uint *)(param_1 + 0x5c) = (uint)local_64[0];
  }
LAB_011db99c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

