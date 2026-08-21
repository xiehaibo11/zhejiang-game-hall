
/* WARNING: Removing unreachable block (ram,0x00112fac) */
/* WARNING: Removing unreachable block (ram,0x00112db0) */
/* WARNING: Removing unreachable block (ram,0x00112cb8) */
/* WARNING: Removing unreachable block (ram,0x00112d10) */
/* WARNING: Removing unreachable block (ram,0x00112e84) */
/* WARNING: Removing unreachable block (ram,0x00112f24) */

void FUN_00112af0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long local_80;
  long local_70;
  
  lVar8 = tpidr_el0;
  uVar4 = 0x4802cd68;
  uVar6 = (x_94 + -1) * x_94;
  uVar7 = (x_96 + -1) * x_96;
  bVar9 = (~((x_68 + -1) * x_68) | 0xfffffffeU) == 0xffffffff;
  bVar10 = ((uVar6 ^ 0xfffffffe) & uVar6) == 0;
  uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
  uVar1 = 0xbcde795;
  if (y_95 < 10 == bVar10 && (9 < y_95 || !bVar10)) {
    uVar1 = uVar4;
  }
  bVar10 = ((uVar7 ^ 0xfffffffe) & uVar7) != 0;
  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
  iVar5 = -0x6fbfae37;
  iVar2 = -0x526e4fd2;
  if (9 < y_97 == bVar10 && (9 < y_97 || bVar10)) {
    iVar2 = iVar5;
  }
  iVar3 = -0x8f55b75;
  if (9 < y_69 == !bVar9 && (9 < y_69 || !bVar9)) {
    iVar3 = 0x7ac56aa3;
  }
  iVar12 = 0x351084fd;
  do {
    do {
      if (iVar12 == 0x7ac56aa3) {
        uVar11 = 0x2c881c05;
LAB_00112ebc:
        do {
          if (uVar11 == 0x4802cd68) {
            uVar11 = 0x94c5bf50;
          }
          else if ((uVar11 == 0x2c881c05) &&
                  (uVar11 = 0x94c5bf50,
                  (uVar6 == 0) == y_95 < 10 && !(bool)(((~(uVar6 == 0) | y_95 >= 10) ^ 1U) & 1))) {
            uVar11 = uVar4;
          }
          while ((int)uVar11 < 0x2c881c05) {
            while (uVar11 == 0x94c5bf50) {
              uVar11 = uVar1;
              local_70 = param_1;
              if (0x2c881c04 < uVar1) goto LAB_00112ebc;
            }
            if (uVar11 == 0xbcde795) {
              iVar12 = -0xd9f8fbd;
              goto LAB_00112f4c;
            }
          }
        } while( true );
      }
      if (iVar12 != 0x351084fd) goto LAB_00112ccc;
      iVar12 = -0x3ec31792;
      if ((!bVar9 || y_69 >= 10) && bVar9 == y_69 < 10) {
        iVar12 = 0x7ac56aa3;
      }
    } while (0x351084fc < iVar12);
LAB_00112cd4:
    do {
      if (iVar12 == -0x3ec31792) {
        uVar11 = 0x2c881c05;
LAB_00112d48:
        do {
          if (uVar11 == 0x4802cd68) {
            uVar11 = 0x94c5bf50;
          }
          else if ((uVar11 == 0x2c881c05) &&
                  (uVar11 = 0x94c5bf50,
                  (uVar6 == 0) == y_95 < 10 && !(bool)(((~(uVar6 == 0) | y_95 >= 10) ^ 1U) & 1))) {
            uVar11 = uVar4;
          }
          while ((int)uVar11 < 0x2c881c05) {
            while (uVar11 == 0x94c5bf50) {
              uVar11 = uVar1;
              local_70 = param_1;
              if (0x2c881c04 < uVar1) goto LAB_00112d48;
            }
            if (uVar11 == 0xbcde795) {
              iVar12 = -0xd9f8fbd;
              goto LAB_00112dd8;
            }
          }
        } while( true );
      }
      if (iVar12 == -0x8f55b75) {
        if (*(long *)(lVar8 + 0x28) == *(long *)(lVar8 + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_80);
      }
LAB_00112ccc:
    } while (iVar12 < 0x351084fd);
  } while( true );
LAB_00112f4c:
  do {
    if (iVar12 != 0x7cc2a6e8) {
      if (iVar12 != -0xd9f8fbd) goto joined_r0x00112f7c;
      iVar12 = 0x7cc2a6e8;
      if (uVar7 == 0 && y_97 < 10 || (uVar7 == 0) != y_97 < 10) goto joined_r0x00112f7c;
      iVar12 = iVar5;
      goto joined_r0x00112f7c;
    }
    local_70 = -1;
    iVar12 = iVar2;
  } while (-0xd9f8fbe < iVar2);
  do {
    if (iVar12 == -0x6fbfae37) {
      iVar12 = 0x7cc2a6e8;
    }
    else if (iVar12 == -0x526e4fd2) {
      iVar12 = -0x3ec31792;
      goto LAB_00112cd4;
    }
joined_r0x00112f7c:
  } while (iVar12 < -0xd9f8fbd);
  goto LAB_00112f4c;
LAB_00112dd8:
  do {
    if (iVar12 != 0x7cc2a6e8) {
      if (iVar12 != -0xd9f8fbd) goto joined_r0x00112e08;
      iVar12 = 0x7cc2a6e8;
      if (uVar7 == 0 && y_97 < 10 || (uVar7 == 0) != y_97 < 10) goto joined_r0x00112e08;
      iVar12 = iVar5;
      goto joined_r0x00112e08;
    }
    local_70 = -1;
    iVar12 = iVar2;
  } while (-0xd9f8fbe < iVar2);
  do {
    if (iVar12 == -0x6fbfae37) {
      iVar12 = 0x7cc2a6e8;
    }
    else if (iVar12 == -0x526e4fd2) {
      local_80 = local_70 + -0x10;
      iVar12 = iVar3;
      goto LAB_00112ccc;
    }
joined_r0x00112e08:
  } while (iVar12 < -0xd9f8fbd);
  goto LAB_00112dd8;
}

