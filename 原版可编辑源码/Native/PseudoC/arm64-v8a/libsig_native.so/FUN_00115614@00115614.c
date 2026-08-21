
/* WARNING: Removing unreachable block (ram,0x00115870) */
/* WARNING: Removing unreachable block (ram,0x001157b8) */

void FUN_00115614(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long local_38;
  
  lVar5 = tpidr_el0;
  iVar3 = -0x701f6cb7;
  bVar6 = (~((x_128 + -1) * x_128) | 0xfffffffeU) == 0xffffffff;
  uVar4 = (x_132 + -1) * x_132;
  bVar7 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
  uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
  iVar1 = -0x565de26e;
  if (y_133 < 10 == bVar7 && (9 < y_133 || !bVar7)) {
    iVar1 = iVar3;
  }
  uVar2 = 0xcddcc7a;
  if (9 < y_129 == !bVar6 && (9 < y_129 || !bVar6)) {
    uVar2 = 0x850fa43;
  }
  uVar8 = 0x87296b17;
LAB_00115838:
  if (uVar8 == 0x87296b17) {
    uVar8 = 0x94fdac0e;
    if (bVar6 && y_129 < 10 || bVar6 != y_129 < 10) goto LAB_00115774;
    uVar8 = 0x850fa43;
    goto LAB_00115774;
  }
  if (uVar8 != 0x94fdac0e) goto LAB_00115774;
  iVar9 = -0x2756a6e7;
  do {
    do {
      iVar10 = iVar1;
      if (iVar9 == 0x66e5f009) goto LAB_00115878;
      iVar10 = iVar9;
      if (iVar9 != -0x2756a6e7) goto LAB_00115878;
      iVar9 = 0x66e5f009;
      if ((uVar4 != 0 || y_133 >= 10) && (uVar4 == 0) == y_133 < 10) {
        iVar9 = iVar3;
      }
    } while (-0x2756a6e8 < iVar9);
    do {
      if (iVar9 == -0x701f6cb7) {
        iVar9 = 0x66e5f009;
        break;
      }
      iVar10 = iVar9;
      if (iVar9 == -0x565de26e) {
        local_38 = param_1 + 1;
        uVar8 = uVar2;
        if (uVar2 < 0x850fa43) goto LAB_00115838;
        goto LAB_0011577c;
      }
LAB_00115878:
      iVar9 = iVar10;
    } while (iVar10 < -0x2756a6e7);
  } while( true );
  while( true ) {
    if (uVar8 == 0xcddcc7a) {
      if (*(long *)(lVar5 + 0x28) == *(long *)(lVar5 + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_38);
    }
LAB_00115774:
    if ((int)uVar8 < 0x850fa43) break;
LAB_0011577c:
    if (uVar8 == 0x850fa43) {
      iVar9 = -0x2756a6e7;
      do {
        do {
          iVar10 = iVar1;
          if (iVar9 == 0x66e5f009) goto LAB_001157c0;
          iVar10 = iVar9;
          if (iVar9 != -0x2756a6e7) goto LAB_001157c0;
          iVar9 = 0x66e5f009;
          if ((uVar4 == 0) == y_133 < 10 && !(bool)(((~(uVar4 == 0) | y_133 >= 10) ^ 1U) & 1)) {
            iVar9 = iVar3;
          }
        } while (-0x2756a6e8 < iVar9);
        do {
          if (iVar9 == -0x701f6cb7) {
            iVar9 = 0x66e5f009;
            break;
          }
          iVar10 = iVar9;
          if (iVar9 == -0x565de26e) {
            uVar8 = 0x94fdac0e;
            goto LAB_00115838;
          }
LAB_001157c0:
          iVar9 = iVar10;
        } while (iVar9 < -0x2756a6e7);
      } while( true );
    }
  }
  goto LAB_00115838;
}

