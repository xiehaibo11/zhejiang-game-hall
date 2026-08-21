
undefined8 FUN_00c2dd54(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar4 = FUN_00c29e20(param_1,1);
  uVar5 = FUN_00c29b44(param_1,2);
  uVar1 = FUN_00c29da0(param_1,3,1);
  if ((*(long *)(param_1 + 0x20) + 0x18U < *(ulong *)(param_1 + 0x28)) &&
     (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != -1)) {
    uVar2 = FUN_00c29cf0(param_1,4);
  }
  else {
    uVar2 = FUN_00c1c99c(lVar4);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(lVar9 + 0xa0) = param_1;
  *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar9 + 0x98);
  puVar6 = (undefined8 *)FUN_00c1b2c4(lVar9 + 0x88,lVar4,uVar5,uVar1,uVar2);
  if (puVar6 == (undefined8 *)0x0) {
    uVar7 = *(ulong *)(lVar9 + 0x88);
    if ((uint)uVar7 < *(uint *)(lVar4 + 0x30)) {
      puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x10) + (long)(int)(uint)uVar7 * 8);
    }
    else {
      puVar6 = (undefined8 *)FUN_00c1bbc0(lVar4,uVar7 & 0xffffffff);
    }
    if (puVar6 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar3 = (uint)((long)*puVar6 >> 0x2f);
      uVar8 = 0xd;
      if (0xfffffff2 < uVar3) {
        uVar8 = ~uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb308(param_1,0x57b,(&PTR_DAT_01697110)[uVar8],uVar7);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar7 = FUN_00bfba1c(param_1,puVar6[2],(int)*puVar6 - (int)puVar6[2]);
  *(ulong *)(lVar4 + -8) = uVar7 | 0xfffd800000000000;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80(param_1);
  }
  return 1;
}

