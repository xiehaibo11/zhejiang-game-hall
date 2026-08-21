
undefined8 FUN_00c13f74(long param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  
  uVar8 = (param_3 - *param_2 >> 3) * -0x5555555555555555;
  puVar2 = (undefined8 *)FUN_00c0ed6c(param_2,uVar8 & 0xffffffff,param_4);
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
LAB_00c14050:
    lVar5 = FUN_00c0ee70(param_1,uVar8 & 0xffffffff,0);
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = (uint)((long)uVar8 >> 0x2f);
    if (uVar1 != 0xfffffffb) {
      if (uVar1 == 0xfffffff5) {
        lVar6 = FUN_00c0ee70(param_1,*(undefined2 *)((uVar8 & 0x7fffffffffff) + 10),0);
        puVar9 = (undefined *)(lVar6 + 0x18);
      }
      else {
        uVar7 = 0xd;
        if (0xfffffff2 < uVar1) {
          uVar7 = ~uVar1;
        }
        puVar9 = (&PTR_DAT_01697110)[uVar7];
      }
                    /* WARNING: Subroutine does not return */
      FUN_00bfb308(param_1,0xd88,lVar5 + 0x18,puVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb308(param_1,0xd53,lVar5 + 0x18,(uVar8 & 0x7fffffffffff) + 0x18);
  }
  if ((int)((long)*puVar2 >> 0x2f) != -9) {
    if (param_4 == 0) {
      plVar3 = (long *)FUN_00c1cdf4();
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != -1) {
          *(long *)(*(long *)(param_1 + 0x28) + -8) = *plVar3;
          return 1;
        }
        goto LAB_00c14050;
      }
    }
    else {
      puVar2 = (undefined8 *)FUN_00c1cf6c(param_1,puVar2,puVar10 + 1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = puVar10[2];
        return 0;
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x28) + -2;
    *puVar10 = **(undefined8 **)(param_1 + 0x28);
  }
  uVar4 = FUN_00c1cda4(param_1,puVar2);
  return uVar4;
}

