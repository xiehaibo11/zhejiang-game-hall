
void lua_replace(long param_1,int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  
  if (param_2 == -0x2712) {
    puVar5 = (ulong *)(*(long *)(param_1 + 0x28) + -8);
    uVar3 = *puVar5;
    *(ulong **)(param_1 + 0x28) = puVar5;
    *(ulong *)(param_1 + 0x48) = uVar3 & 0x7fffffffffff;
    return;
  }
  if (param_2 == -0x2711) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar3 + 9) != '\b') {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x327);
    }
    *(ulong *)(uVar3 + 0x10) = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    lVar4 = *(long *)(param_1 + 0x28);
    if (((int)((long)*(ulong *)(lVar4 + -8) >> 0x2f) + 4U < 0xfffffff7) ||
       ((*(byte *)((*(ulong *)(lVar4 + -8) & 0x7fffffffffff) + 8) & 3) == 0)) goto LAB_00c03674;
    bVar1 = *(byte *)(uVar3 + 8);
  }
  else {
    puVar2 = (undefined8 *)FUN_00c03214();
    lVar4 = *(long *)(param_1 + 0x28);
    *puVar2 = *(undefined8 *)(lVar4 + -8);
    if (((-0x2713 < param_2) || ((int)((long)*(ulong *)(lVar4 + -8) >> 0x2f) + 4U < 0xfffffff7)) ||
       ((*(byte *)((*(ulong *)(lVar4 + -8) & 0x7fffffffffff) + 8) & 3) == 0)) goto LAB_00c03674;
    bVar1 = *(byte *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 8);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10));
    lVar4 = *(long *)(param_1 + 0x28);
  }
LAB_00c03674:
  *(long *)(param_1 + 0x28) = lVar4 + -8;
  return;
}

