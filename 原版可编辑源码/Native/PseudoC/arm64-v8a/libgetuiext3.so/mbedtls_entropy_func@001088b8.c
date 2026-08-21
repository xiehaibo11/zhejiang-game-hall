
void mbedtls_entropy_func(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (0x40 < param_3) {
    uVar7 = 0xffffffc4;
    goto LAB_00108a70;
  }
  uVar7 = (*pcRam0000000000000000)(param_1 + 0x400);
  if ((int)uVar7 != 0) goto LAB_00108a70;
  iVar6 = 0;
  do {
    if (0x100 < iVar6) {
      uVar5 = 0xffffffc4;
      goto LAB_00108a50;
    }
    uVar5 = FUN_0010877c(param_1);
    if (uVar5 != 0) goto LAB_00108a50;
    if (*(int *)(param_1 + 0xd8) < 1) break;
    lVar8 = 0;
    iVar6 = iVar6 + 1;
    puVar11 = (ulong *)(param_1 + 0xf8);
    bVar4 = true;
    do {
      puVar1 = puVar11 + -1;
      uVar7 = *puVar11;
      lVar8 = lVar8 + 1;
      puVar11 = puVar11 + 5;
      bVar3 = false;
      if (uVar7 <= *puVar1) {
        bVar3 = bVar4;
      }
      bVar4 = bVar3;
    } while (lVar8 < *(int *)(param_1 + 0xd8));
  } while (!bVar3);
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  thunk_EXT_FUN_00002bb0(param_1,&local_98);
  thunk_EXT_FUN_00002bb0(param_1,0,0xd8);
  thunk_EXT_FUN_00002bb0(param_1,0);
  thunk_EXT_FUN_00002bb0(param_1,&local_98,0x40);
  thunk_EXT_FUN_00002bb0(&local_98,0x40,&local_98,0);
  iVar6 = *(int *)(param_1 + 0xd8);
  uVar7 = (ulong)iVar6;
  if (0 < iVar6) {
    if (iVar6 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffffffffffffe;
      if (uVar9 != 0) {
        puVar10 = (undefined8 *)(param_1 + 0x118);
        uVar12 = uVar9;
        do {
          puVar10[-5] = 0;
          *puVar10 = 0;
          uVar12 = uVar12 - 2;
          puVar10 = puVar10 + 10;
        } while (uVar12 != 0);
        if (uVar9 == uVar7) goto LAB_00108a3c;
      }
    }
    puVar10 = (undefined8 *)(param_1 + uVar9 * 0x28 + 0xf0);
    do {
      uVar9 = uVar9 + 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 5;
    } while ((long)uVar9 < (long)uVar7);
  }
LAB_00108a3c:
  thunk_EXT_FUN_00002bb0(param_2,&local_98,param_3);
  uVar5 = 0;
LAB_00108a50:
  iVar6 = (*pcRam0000000000000000)(param_1 + 0x400);
  if (iVar6 != 0) {
    uVar5 = 0xffffffe2;
  }
  uVar7 = (ulong)uVar5;
LAB_00108a70:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar7);
  return;
}

