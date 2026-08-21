
void FUN_00c1dec8(long param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = (uint)((long)*param_2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)((*param_2 & 0x7fffffffffff) + 0x20);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = 0x23;
    if (0xfffffff2 < uVar1) {
      uVar4 = 0x15 - uVar1;
    }
    lVar2 = *(long *)(lVar5 + (ulong)uVar4 * 8 + 0x170);
  }
  if (lVar2 == 0) {
    puVar3 = (ulong *)(lVar5 + 0xe8);
  }
  else {
    puVar3 = (ulong *)FUN_00c1bc28(lVar2,*(undefined8 *)(lVar5 + 0x1b8));
    if (puVar3 == (ulong *)0x0) {
      puVar3 = (ulong *)(*(long *)(param_1 + 0x10) + 0xe8);
    }
  }
  if ((int)((long)*puVar3 >> 0x2f) != -9) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb124(param_1,param_2);
  }
  for (; param_2 + 2 < param_3; param_3 = param_3 + -1) {
    *param_3 = param_3[-1];
  }
  param_2[2] = *param_2;
  *param_2 = *puVar3;
  return;
}

