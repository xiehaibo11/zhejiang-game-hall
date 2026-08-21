
/* WARNING: Removing unreachable block (ram,0x00111be0) */

void FUN_00111b00(void *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  uVar2 = (x_38 + -1) * x_38;
  bVar4 = ((uVar2 ^ 0xfffffffe) & uVar2) != 0;
  bVar1 = 9 < y_39;
  uVar2 = 0xfa247a3;
  iVar9 = 0x74ef1d97;
LAB_00111d8c:
  if (iVar9 == 0x55aa2bb2) {
    bVar6 = (~((x_44 + -1) * x_44) | 0xfffffffeU) == 0xffffffff;
    bVar5 = y_45 < 10;
    uVar8 = 0xbba426ae;
LAB_00111e14:
    do {
      if (0x1942e102 < (int)uVar8) goto LAB_00111e44;
      while( true ) {
        if (uVar8 == 0xbba426ae) {
          uVar8 = 0x7865d23b;
          if (bVar6 && bVar5 || bVar6 != bVar5) goto joined_r0x00111ee0;
          uVar8 = uVar2;
          goto joined_r0x00111ee0;
        }
        if (uVar8 != 0xfa247a3) break;
        operator_delete(param_1);
        uVar8 = 0x7865d23b;
LAB_00111e44:
        do {
          if (uVar8 == 0x1942e103) {
            bVar5 = (~((x_38 + -1) * x_38) | 0xfffffffeU) != 0xffffffff;
            iVar9 = 0x2e649252;
            if (9 < y_39 == bVar5 && (9 < y_39 || bVar5)) {
              iVar9 = -0x154c21e6;
            }
            goto joined_r0x00111dc4;
          }
          if (uVar8 != 0x7865d23b) goto LAB_00111e14;
          operator_delete(param_1);
          uVar8 = (x_44 + -1) * x_44;
          bVar7 = ((uVar8 ^ 0xfffffffe) & uVar8) == 0;
          uVar8 = 0x1942e103;
          if (y_45 < 10 == bVar7 && (9 < y_45 || !bVar7)) {
            uVar8 = uVar2;
          }
joined_r0x00111ee0:
        } while (0x1942e102 < uVar8);
      }
    } while( true );
  }
  if ((iVar9 == 0x74ef1d97) && (iVar9 = 0x55aa2bb2, bVar4 == bVar1 && (bVar4 || bVar1))) {
    iVar9 = -0x154c21e6;
  }
joined_r0x00111dc4:
  do {
    if (0x55aa2bb1 < iVar9) goto LAB_00111d8c;
    if (iVar9 == -0x154c21e6) {
      bVar6 = (~((x_44 + 0x225872b) * x_44) | 0xfffffffeU) == 0xffffffff;
      bVar5 = y_45 < 10;
      uVar8 = 0xbba426ae;
LAB_00111ca4:
      do {
        if (0x1942e102 < (int)uVar8) goto LAB_00111cd4;
        while( true ) {
          if (uVar8 == 0xbba426ae) {
            uVar8 = 0x7865d23b;
            if (bVar6 && bVar5 || bVar6 != bVar5) goto joined_r0x00111d74;
            uVar8 = uVar2;
            goto joined_r0x00111d74;
          }
          if (uVar8 != 0xfa247a3) break;
          operator_delete(param_1);
          uVar8 = 0x7865d23b;
LAB_00111cd4:
          do {
            if (uVar8 == 0x1942e103) {
              iVar9 = 0x55aa2bb2;
              goto LAB_00111d8c;
            }
            if (uVar8 != 0x7865d23b) goto LAB_00111ca4;
            operator_delete(param_1);
            bVar7 = (~((x_44 + -1) * x_44) | 0xfffffffeU) == 0xffffffff;
            uVar8 = 0x1942e103;
            if (y_45 < 10 == bVar7 && (9 < y_45 || !bVar7)) {
              uVar8 = uVar2;
            }
joined_r0x00111d74:
          } while (0x1942e102 < uVar8);
        }
      } while( true );
    }
    if (iVar9 == 0x2e649252) {
      if (*(long *)(lVar3 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

