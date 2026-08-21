
void FUN_00bfb470(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  
  if (param_2 < -9999) {
    if (-0x2713 < param_2) {
      pcVar7 = "table";
      goto LAB_00bfb4e8;
    }
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if ((int)(uint)*(byte *)(uVar6 + 0xb) < -0x2712 - param_2) goto LAB_00bfb53c;
    iVar3 = (int)((ulong)*(undefined8 *)(uVar6 + (long)(-0x2713 - param_2) * 8 + 0x30) >> 0x20);
  }
  else {
    if (param_2 < 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      puVar1 = puVar5 + param_2;
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8);
    }
    if (puVar5 <= puVar1) {
LAB_00bfb53c:
      pcVar7 = "no value";
      goto LAB_00bfb4e8;
    }
    iVar3 = (int)((ulong)*puVar1 >> 0x20);
  }
  uVar4 = 0xd;
  if (0xfffffff2 < (uint)(iVar3 >> 0xf)) {
    uVar4 = ~(iVar3 >> 0xf);
  }
  pcVar7 = (&PTR_DAT_01697110)[uVar4];
LAB_00bfb4e8:
  uVar2 = FUN_00c00c18(param_1,PTR_s_not_enough_memory_01776bf0 + 0x205,param_3,pcVar7);
                    /* WARNING: Subroutine does not return */
  FUN_00bfb23c(param_1,param_2,uVar2);
}

