
void FUN_0011409c(ulong param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  ulong unaff_x19;
  ulong unaff_x25;
  ulong uVar10;
  int iVar11;
  ulong local_80;
  ulong local_78;
  char local_69;
  
  lVar3 = tpidr_el0;
  uVar9 = (param_1 + 0x10 ^ 0xf) & param_1 + 0x10;
  bVar8 = (~((x_76 + -1) * x_76) | 0xfffffffeU) == 0xffffffff;
  iVar1 = 0x40f1856e;
  iVar4 = -0x6054ce85;
  iVar5 = -0x1adc550c;
  iVar6 = -0x3dcfd756;
  if (y_77 < 10 == bVar8 && (9 < y_77 || !bVar8)) {
    iVar1 = 0x3c776665;
    iVar4 = 0x3c776665;
    iVar5 = 0x38ba605;
    iVar6 = 0x38ba605;
  }
  iVar2 = -0x4c2ad9e2;
  if (0x16 < param_1) {
    iVar2 = -0xf61d52f;
  }
  iVar7 = 0x27603f62;
  do {
    while( true ) {
      while (iVar11 = iVar7, uVar10 = unaff_x25, unaff_x25 = uVar10, iVar11 < 0x38ba605) {
        if (iVar11 < -0x3dcfd756) {
          unaff_x25 = unaff_x19;
          iVar7 = 0x3ac6f35a;
          if (iVar11 != -0x74d49b7a) {
            if (iVar11 == -0x6054ce85) {
              unaff_x25 = 0x16;
              iVar7 = 0x3ac6f35a;
            }
            else {
              unaff_x25 = uVar10;
              iVar7 = iVar11;
              if (iVar11 == -0x4c2ad9e2) {
                iVar7 = iVar1;
              }
            }
          }
        }
        else if (iVar11 == -0x3dcfd756) {
          unaff_x19 = local_78;
          iVar7 = 0x6cf573f6;
          if (local_69 == '\0') {
            iVar7 = -0x74d49b7a;
          }
        }
        else if (iVar11 == -0x1adc550c) {
          local_78 = uVar9 - 1;
          local_69 = local_78 == 0x17;
          iVar7 = iVar6;
          local_80 = uVar9;
        }
        else {
          iVar7 = iVar11;
          if (iVar11 == -0xf61d52f) {
            iVar7 = iVar5;
          }
        }
      }
      if (iVar11 < 0x3c776665) break;
      iVar7 = 0x40f1856e;
      if (((iVar11 != 0x3c776665) && (iVar7 = iVar4, iVar11 != 0x40f1856e)) &&
         (iVar7 = iVar11, iVar11 == 0x6cf573f6)) {
        unaff_x19 = local_80;
        iVar7 = -0x74d49b7a;
      }
    }
    iVar7 = -0x1adc550c;
  } while (((iVar11 == 0x38ba605) || (iVar7 = iVar2, iVar11 == 0x27603f62)) ||
          (iVar7 = iVar11, iVar11 != 0x3ac6f35a));
  if (*(long *)(lVar3 + 0x28) == *(long *)(lVar3 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

