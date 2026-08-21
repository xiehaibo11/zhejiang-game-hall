
void FUN_011dbbec(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  undefined4 local_64;
  byte local_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    goto LAB_011dbd4c;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar4 = 0;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar5 = (ulong)uVar2;
  do {
    uVar2 = getc(*(FILE **)(param_1 + 0x40));
    if (uVar2 == 0xffffffff) goto LAB_011dbd4c;
    local_60[uVar4] = (byte)uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar5);
  if (*(char *)(param_1 + 0x61) == '\0') {
    while( true ) {
      uVar6 = **(undefined8 **)(param_1 + 0x50);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_60,
                         local_60 + uVar5,auStack_70,&local_64,local_60,auStack_78);
      if (iVar3 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar6;
      if ((uVar5 == 8) || (iVar3 = getc(*(FILE **)(param_1 + 0x40)), iVar3 == -1))
      goto LAB_011dbd48;
      local_60[uVar5] = (byte)iVar3;
      uVar5 = uVar5 + 1;
    }
    if (iVar3 == 2) {
LAB_011dbd48:
      uVar2 = 0xffffffff;
      goto LAB_011dbd4c;
    }
    if (iVar3 == 3) goto LAB_011dbc78;
  }
  else {
LAB_011dbc78:
    local_64 = (uint)local_60[0];
  }
  if ((param_2 & 1) == 0) {
    uVar4 = uVar5 & 0xffffffff;
    do {
      uVar2 = local_64;
      if ((long)uVar4 < 1) goto LAB_011dbd4c;
      iVar3 = ungetc((uint)local_60[uVar4 - 1],*(FILE **)(param_1 + 0x40));
      uVar4 = uVar4 - 1;
    } while (iVar3 != -1);
    uVar2 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x5c) = local_64;
    uVar2 = local_64;
  }
LAB_011dbd4c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

