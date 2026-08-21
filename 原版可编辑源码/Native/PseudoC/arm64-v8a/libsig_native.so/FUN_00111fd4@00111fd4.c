
/* WARNING: Removing unreachable block (ram,0x001122cc) */

void FUN_00111fd4(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 local_40;
  undefined8 local_30;
  
  lVar7 = tpidr_el0;
  uVar5 = (x_52 + -1) * x_52;
  uVar6 = (x_54 + -1) * x_54;
  bVar10 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  bVar1 = y_53 < 10;
  bVar11 = ((uVar6 ^ 0xfffffffe) & uVar6) != 0;
  uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
  iVar4 = -0x4de909ac;
  iVar2 = -0x3a40bbe4;
  if (9 < y_55 == bVar11 && (9 < y_55 || bVar11)) {
    iVar2 = iVar4;
  }
  iVar3 = 0x1aa09c14;
  if ((!bVar1 || !bVar10) && bVar1 == bVar10) {
    iVar3 = -0x29ad61f4;
  }
  iVar13 = 0x20439d3a;
joined_r0x0011210c:
  do {
    while (0x1aa09c13 < iVar13) {
      if (iVar13 == 0x1aa09c14) {
        if (*(long *)(lVar7 + 0x28) != *(long *)(lVar7 + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(local_40);
        }
        return;
      }
      if ((iVar13 == 0x20439d3a) && (iVar13 = -0x5531bafd, !bVar10 == !bVar1 && (!bVar10 || !bVar1))
         ) {
        iVar13 = -0x29ad61f4;
      }
    }
LAB_00112110:
    if (iVar13 == -0x5531bafd) {
      iVar12 = -0x53ac7467;
      do {
        do {
          iVar8 = iVar2;
          uVar9 = param_1;
          if (iVar12 == -0x66f8e9e0) goto joined_r0x00112228;
          iVar8 = iVar12;
          uVar9 = local_30;
          if (iVar12 != -0x53ac7467) goto joined_r0x00112228;
          iVar12 = -0x66f8e9e0;
          if ((uVar6 != 0) == 9 < y_55 && (uVar6 != 0 || 9 < y_55)) {
            iVar12 = iVar4;
          }
        } while (iVar12 < -0x4de909ac);
        do {
          uVar9 = local_30;
          if (iVar12 == -0x4de909ac) {
            iVar8 = -0x66f8e9e0;
          }
          else {
            iVar8 = iVar12;
            local_40 = local_30;
            iVar13 = iVar3;
            if (iVar12 == -0x3a40bbe4) goto joined_r0x0011210c;
          }
joined_r0x00112228:
          local_30 = uVar9;
          iVar12 = iVar8;
        } while (-0x4de909ad < iVar12);
      } while( true );
    }
    if (iVar13 == -0x29ad61f4) {
      iVar13 = -0x53ac7467;
      do {
        do {
          iVar12 = iVar2;
          uVar9 = param_1;
          if (iVar13 == -0x66f8e9e0) goto joined_r0x00112298;
          iVar12 = iVar13;
          uVar9 = local_30;
          if (iVar13 != -0x53ac7467) goto joined_r0x00112298;
          iVar13 = -0x66f8e9e0;
          if ((uVar6 != 0 || y_55 >= 10) && (uVar6 == 0) == y_55 < 10) {
            iVar13 = iVar4;
          }
        } while (iVar13 < -0x4de909ac);
        do {
          uVar9 = local_30;
          if (iVar13 == -0x4de909ac) {
            iVar12 = -0x66f8e9e0;
          }
          else {
            iVar12 = iVar13;
            if (iVar13 == -0x3a40bbe4) {
              iVar13 = -0x5531bafd;
              goto LAB_00112110;
            }
          }
joined_r0x00112298:
          local_30 = uVar9;
          iVar13 = iVar12;
        } while (-0x4de909ad < iVar13);
      } while( true );
    }
  } while( true );
}

