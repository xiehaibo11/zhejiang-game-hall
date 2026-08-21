
void FUN_00bfb020(long param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_s_not_enough_memory_01776bf0 + param_3;
  uVar2 = (uint)((long)*param_2 >> 0x2f);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  uVar4 = 0xd;
  if (0xfffffff2 < uVar2) {
    uVar4 = ~uVar2;
  }
  puVar6 = (&PTR_DAT_01697110)[uVar4];
  if (*(char *)(uVar5 + 10) == '\0') {
    lVar3 = FUN_00bfca0c(*(long *)(uVar5 + 0x20) + -0x68,
                         *(long *)((*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xa8) + -4,
                         (ulong)((long)param_2 - *(long *)(param_1 + 0x20)) >> 3);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfae80(param_1,0xf1,puVar1,lVar3,0,puVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfae80(param_1,0x114,puVar1,puVar6);
}

