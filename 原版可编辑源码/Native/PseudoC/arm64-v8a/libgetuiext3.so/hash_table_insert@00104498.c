
undefined8 hash_table_insert(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar4 = 0;
  if (uVar1 != 0) {
    iVar4 = ((int)param_1[6] * 3) / (int)uVar1;
  }
  if (0 < iVar4) {
    iVar4 = *(int *)((long)param_1 + 0x34);
    lVar9 = *param_1;
    *(int *)((long)param_1 + 0x34) = iVar4 + 1;
    if (iVar4 < 0x17) {
      iVar2 = *(int *)(&DAT_0010ab9c + (long)(iVar4 + 1) * 4);
    }
    else {
      iVar2 = (int)param_1[6] * 10;
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar5 = thunk_EXT_FUN_00002bb0((long)iVar2,8);
    *param_1 = lVar5;
    if (lVar5 == 0) {
      *param_1 = lVar9;
      *(uint *)(param_1 + 1) = uVar1;
      *(int *)((long)param_1 + 0x34) = iVar4;
      return 0;
    }
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        puVar10 = *(undefined8 **)(lVar9 + uVar11 * 8);
        while (puVar10 != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)puVar10[2];
          uVar6 = (*(code *)param_1[2])(*puVar10);
          iVar4 = (int)param_1[1];
          lVar5 = *param_1;
          iVar2 = 0;
          if ((long)iVar4 != 0) {
            iVar2 = (int)(uVar6 / (ulong)(long)iVar4);
          }
          uVar3 = (int)uVar6 - iVar2 * iVar4;
          uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
          puVar10[2] = *(undefined8 *)(lVar5 + uVar6);
          *(undefined8 **)(lVar5 + uVar6) = puVar10;
          puVar10 = puVar12;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
    }
    thunk_EXT_FUN_00002bb0(lVar9);
  }
  uVar6 = (*(code *)param_1[2])(param_2);
  uVar8 = (ulong)(int)param_1[1];
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar6 / uVar8;
  }
  uVar6 = uVar6 - uVar11 * uVar8;
  puVar10 = *(undefined8 **)
             (*param_1 + (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3));
  do {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)thunk_EXT_FUN_00002bb0(0x18);
      uVar7 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = param_2;
        puVar10[1] = param_3;
        lVar9 = *param_1;
        lVar5 = (long)(int)uVar6 * 8;
        puVar10[2] = *(undefined8 *)(lVar9 + lVar5);
        *(undefined8 **)(lVar9 + lVar5) = puVar10;
        *(int *)(param_1 + 6) = (int)param_1[6] + 1;
LAB_0010462c:
        uVar7 = 1;
      }
      return uVar7;
    }
    iVar4 = (*(code *)param_1[3])(*puVar10,param_2);
    if (iVar4 != 0) {
      if ((code *)param_1[5] != (code *)0x0) {
        (*(code *)param_1[5])(puVar10[1]);
      }
      if ((code *)param_1[4] != (code *)0x0) {
        (*(code *)param_1[4])(*puVar10);
      }
      *puVar10 = param_2;
      puVar10[1] = param_3;
      goto LAB_0010462c;
    }
    puVar10 = (undefined8 *)puVar10[2];
  } while( true );
}

