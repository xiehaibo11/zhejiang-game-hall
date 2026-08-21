
long FUN_00a16524(undefined8 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar10 = *(undefined8 **)param_1[3], puVar10 == (undefined8 *)0x0)) {
    lVar7 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 2);
    lVar8 = 8;
    lVar6 = 0;
    lVar9 = 0;
    while( true ) {
      uVar5 = 0x1c;
      if (iVar4 != 10) {
        uVar5 = 0x10;
      }
      lVar1 = (*(code *)PTR_calloc_01d1b760)(1,0x30);
      lVar7 = lVar6;
      if (lVar1 == 0) goto joined_r0x00a16670;
      lVar2 = (*(code *)PTR_strdup_01d1b758)(*param_1);
      *(long *)(lVar1 + 0x18) = lVar2;
      if (lVar2 == 0) break;
      puVar3 = (undefined2 *)(*(code *)PTR_calloc_01d1b760)(1,uVar5);
      *(undefined2 **)(lVar1 + 0x20) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 0x18));
        break;
      }
      lVar7 = lVar1;
      if (lVar6 != 0) {
        lVar7 = lVar6;
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x28) = lVar1;
      }
      iVar4 = *(int *)(param_1 + 2);
      *(undefined4 *)(lVar1 + 0x10) = uVar5;
      *(int *)(lVar1 + 4) = iVar4;
      *(undefined4 *)(lVar1 + 8) = 1;
      if (iVar4 == 10) {
        uVar11 = *puVar10;
        *(undefined8 *)(puVar3 + 8) = puVar10[1];
        *(undefined8 *)(puVar3 + 4) = uVar11;
LAB_00a16614:
        iVar4 = *(int *)(param_1 + 2);
        puVar3[1] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
        *puVar3 = (short)iVar4;
      }
      else if (iVar4 == 2) {
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)puVar10;
        goto LAB_00a16614;
      }
      puVar10 = *(undefined8 **)(param_1[3] + lVar8);
      lVar8 = lVar8 + 8;
      lVar6 = lVar7;
      lVar9 = lVar1;
      if (puVar10 == (undefined8 *)0x0) {
        return lVar7;
      }
    }
    (*(code *)PTR_free_01d1b748)(lVar1);
joined_r0x00a16670:
    while (lVar6 != 0) {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar6 + 0x20));
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar6 + 0x18));
      lVar7 = *(long *)(lVar6 + 0x28);
      (*(code *)PTR_free_01d1b748)(lVar6);
      lVar6 = lVar7;
      lVar7 = 0;
    }
  }
  return lVar7;
}

