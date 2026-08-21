
uint FUN_00c25690(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 100) {
    uVar2 = param_1[1];
    *(undefined2 *)(param_1 + (ulong)uVar1 * 6 + 0x12) = 0;
    param_1[(ulong)uVar1 * 6 + 0x10] = param_2;
    uVar3 = *(undefined2 *)((long)param_1 + (ulong)uVar2 * 0x18 + 0x4a);
    param_1[(ulong)uVar1 * 6 + 0x11] = param_3;
    (param_1 + (ulong)uVar1 * 6 + 0x14)[0] = 0;
    (param_1 + (ulong)uVar1 * 6 + 0x14)[1] = 0;
    *(undefined2 *)((long)param_1 + (ulong)uVar1 * 0x18 + 0x4a) = uVar3;
    *(short *)((long)param_1 + (ulong)uVar2 * 0x18 + 0x4a) = (short)uVar1;
    *param_1 = uVar1 + 1;
    param_1[1] = uVar1;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c2520c(*(undefined8 *)(param_1 + 4),0x863);
}

