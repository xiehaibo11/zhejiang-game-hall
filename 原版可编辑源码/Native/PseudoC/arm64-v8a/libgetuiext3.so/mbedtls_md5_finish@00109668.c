
void mbedtls_md5_finish(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 local_70 [4];
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = 0x38;
  uVar2 = (uint)*param_1;
  uVar3 = *(uint *)((long)param_1 + 4);
  local_70[0] = (undefined1)(uVar2 << 3);
  local_70[1] = (undefined1)(uVar2 >> 5);
  local_70[2] = (undefined1)(uVar2 >> 0xd);
  uVar1 = uVar2 & 0x3f;
  uVar13 = (ulong)uVar1;
  local_70[3] = (undefined1)(uVar2 >> 0x15);
  local_6c = (undefined1)(*param_1 >> 0x1d);
  if (0x37 < uVar1) {
    iVar6 = 0x78;
  }
  local_6b = (undefined1)(uVar3 >> 5);
  uVar4 = iVar6 - uVar1;
  uVar7 = (ulong)uVar4;
  local_6a = (undefined1)(uVar3 >> 0xd);
  local_69 = (undefined1)(uVar3 >> 0x15);
  if (uVar4 != 0) {
    *(uint *)param_1 = uVar4 + uVar2;
    if (uVar4 + uVar2 < uVar4) {
      *(uint *)((long)param_1 + 4) = uVar3 + 1;
    }
    puVar9 = &DAT_0010b030;
    if ((uVar1 != 0) && (uVar10 = (ulong)(0x40 - uVar1), 0x40 - uVar1 <= uVar4)) {
      thunk_EXT_FUN_00002bb0((long)(param_1 + 3) + uVar13,&DAT_0010b030,uVar10);
      thunk_EXT_FUN_00002bb0(param_1,param_1 + 3);
      uVar13 = 0;
      puVar9 = &DAT_0010b030 + uVar10;
      uVar7 = uVar7 - uVar10;
    }
    uVar10 = uVar7 - 0x40;
    if (0x3f < uVar7) {
      uVar14 = uVar10 & 0xffffffffffffffc0;
      puVar11 = puVar9;
      do {
        thunk_EXT_FUN_00002bb0(param_1,puVar11);
        uVar7 = uVar7 - 0x40;
        puVar11 = puVar11 + 0x40;
      } while (0x3f < uVar7);
      puVar9 = puVar9 + uVar14 + 0x40;
      uVar7 = uVar10 - uVar14;
    }
    if (uVar7 != 0) {
      thunk_EXT_FUN_00002bb0((long)param_1 + uVar13 + 0x18,puVar9,uVar7);
    }
  }
  uVar2 = (uint)*param_1;
  uVar1 = uVar2 & 0x3f;
  uVar13 = (ulong)uVar1;
  *(uint *)param_1 = uVar2 + 8;
  if (0xfffffff7 < uVar2) {
    *(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) + 1;
  }
  uVar7 = 8;
  puVar8 = local_70;
  if ((uVar1 != 0) && (uVar10 = (ulong)(0x40 - uVar1), puVar8 = local_70, 0x40 - uVar1 < 9)) {
    thunk_EXT_FUN_00002bb0((long)(param_1 + 3) + uVar13,local_70,uVar10);
    thunk_EXT_FUN_00002bb0(param_1,param_1 + 3);
    uVar7 = -uVar10 + 8;
    uVar13 = -uVar10 - 0x38;
    puVar8 = local_70 + uVar10;
    if (0x3f < uVar7) {
      uVar10 = uVar13 & 0xffffffffffffffc0;
      puVar12 = puVar8;
      do {
        thunk_EXT_FUN_00002bb0(param_1,puVar12);
        uVar7 = uVar7 - 0x40;
        puVar12 = puVar12 + 0x40;
      } while (0x3f < uVar7);
      puVar8 = puVar8 + uVar10 + 0x40;
      uVar7 = uVar13 - uVar10;
    }
    if (uVar7 == 0) goto LAB_00109870;
    uVar13 = 0;
  }
  thunk_EXT_FUN_00002bb0((long)param_1 + uVar13 + 0x18,puVar8,uVar7);
LAB_00109870:
  *param_2 = (char)(uint)param_1[1];
  param_2[1] = (char)((uint)param_1[1] >> 8);
  param_2[2] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[3] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[4] = (char)*(uint *)((long)param_1 + 0xc);
  param_2[5] = (char)(*(uint *)((long)param_1 + 0xc) >> 8);
  param_2[6] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[7] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[8] = (char)(uint)param_1[2];
  param_2[9] = (char)((uint)param_1[2] >> 8);
  param_2[10] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0xb] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0xc] = (char)*(uint *)((long)param_1 + 0x14);
  param_2[0xd] = (char)(*(uint *)((long)param_1 + 0x14) >> 8);
  param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0xf] = *(undefined1 *)((long)param_1 + 0x17);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

