
int FUN_00e5b18c(long param_1,ushort param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  int local_34;
  
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  local_34 = 0;
  uVar1 = *(ushort *)(param_1 + 0x230);
  if (uVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x248);
    bVar3 = false;
    uVar8 = 0xffffffff;
    uVar10 = 0xffffffff;
    puVar5 = (ushort *)(lVar6 + 4);
    uVar11 = 0xffffffff;
    uVar2 = 0;
    uVar4 = 0xffffffff;
LAB_00e5b1e4:
    uVar9 = uVar2;
    uVar2 = uVar11;
    if ((puVar5[1] != param_2) || (puVar5[2] == 0)) goto switchD_00e5b210_default;
    switch(puVar5[-2]) {
    case 0:
    case 2:
      uVar8 = uVar9;
      goto joined_r0x00e5b2a4;
    case 1:
      goto switchD_00e5b210_caseD_1;
    case 3:
      if ((((uVar10 == 0xffffffff) || ((*puVar5 & 0x3ff) == 9)) && (puVar5[-1] < 0xb)) &&
         ((1 << (ulong)(puVar5[-1] & 0x1f) & 0x403U) != 0)) {
        bVar3 = (*puVar5 & 0x3ff) == 9;
        uVar10 = uVar9;
      }
    default:
switchD_00e5b210_default:
joined_r0x00e5b2a4:
      uVar11 = uVar2;
      puVar5 = puVar5 + 0x10;
      uVar2 = uVar9 + 1;
      if ((uint)uVar1 <= uVar9 + 1) goto LAB_00e5b2c0;
      goto LAB_00e5b1e4;
    }
  }
  goto LAB_00e5b3d4;
switchD_00e5b210_caseD_1:
  if (*puVar5 != 0) {
    uVar2 = uVar9;
    if (puVar5[-1] != 0) {
      uVar2 = uVar11;
    }
    goto joined_r0x00e5b2a4;
  }
  puVar5 = puVar5 + 0x10;
  uVar2 = uVar9 + 1;
  uVar4 = uVar9;
  if ((uint)uVar1 <= uVar9 + 1) goto LAB_00e5b2c0;
  goto LAB_00e5b1e4;
LAB_00e5b2c0:
  if ((int)uVar4 < 0) {
    uVar4 = uVar11;
  }
  if ((int)uVar10 < 0) {
    if (-1 < (int)uVar4) {
LAB_00e5b330:
      lVar6 = lVar6 + (long)(int)uVar4 * 0x20;
      pcVar14 = FUN_00e5cc0c;
      goto joined_r0x00e5b30c;
    }
    if (-1 < (int)uVar8) {
      lVar6 = lVar6 + (long)(int)uVar8 * 0x20;
      pcVar14 = FUN_00e5cb50;
      if (lVar6 == 0) goto LAB_00e5b3d4;
      goto LAB_00e5b310;
    }
  }
  else {
    if ((-1 < (int)uVar4) && (!bVar3)) goto LAB_00e5b330;
    lVar6 = lVar6 + (long)(int)uVar10 * 0x20;
    uVar7 = 0;
    if ((10 < *(ushort *)(lVar6 + 2)) ||
       ((1 << (ulong)(*(ushort *)(lVar6 + 2) & 0x1f) & 0x403U) == 0)) goto LAB_00e5b3d8;
    pcVar14 = FUN_00e5cb50;
joined_r0x00e5b30c:
    if (lVar6 != 0) {
LAB_00e5b310:
      if (*(long *)(lVar6 + 0x18) == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x260);
        uVar7 = FUN_00e13bcc(uVar12,1,0,*(undefined2 *)(lVar6 + 8),0,&local_34);
        *(undefined8 *)(lVar6 + 0x18) = uVar7;
        if (((local_34 != 0) ||
            (local_34 = FUN_00e1bb5c(uVar13,*(undefined8 *)(lVar6 + 0x10)), local_34 != 0)) ||
           (local_34 = FUN_00e1bbd0(uVar13,*(undefined8 *)(lVar6 + 0x18),*(undefined2 *)(lVar6 + 8))
           , local_34 != 0)) {
          FUN_00e139fc(uVar12,*(undefined8 *)(lVar6 + 0x18));
          uVar7 = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined2 *)(lVar6 + 8) = 0;
          goto LAB_00e5b3d8;
        }
      }
      uVar7 = (*pcVar14)(lVar6,uVar12);
      goto LAB_00e5b3d8;
    }
  }
LAB_00e5b3d4:
  uVar7 = 0;
LAB_00e5b3d8:
  *param_3 = uVar7;
  return local_34;
}

