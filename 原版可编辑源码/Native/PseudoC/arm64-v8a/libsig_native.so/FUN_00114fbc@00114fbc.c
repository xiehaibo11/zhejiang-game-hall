
void FUN_00114fbc(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  char local_71;
  void *local_70;
  
  lVar4 = tpidr_el0;
  lVar10 = *(long *)(lVar4 + 0x28);
  uVar3 = (x_114 + -1) * x_114;
  bVar8 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  bVar1 = y_115 < 10;
  iVar2 = -0x49985b7c;
  iVar5 = 0x30adda22;
  iVar6 = 0x3276ce8c;
  if (9 < y_115 == !bVar8 && (9 < y_115 || !bVar8)) {
    iVar2 = -0x1452a67e;
    iVar5 = 0x29ece03b;
    iVar6 = 0x29ece03b;
  }
  iVar7 = 0x4ddb178e;
  do {
    while( true ) {
      while( true ) {
        iVar9 = iVar7;
        iVar7 = iVar9;
        if (iVar9 < 0x30adda22) break;
        if (iVar9 < 0x48f0b1cc) {
          if (iVar9 == 0x30adda22) {
            local_70 = operator_new(param_2);
            iVar7 = iVar6;
          }
          else if (iVar9 == 0x3276ce8c) {
            if (*(long *)(lVar4 + 0x28) == lVar10) {
              return;
            }
            goto LAB_0011522c;
          }
        }
        else if (iVar9 == 0x48f0b1cc) {
          local_71 = '\0';
          iVar7 = iVar2;
        }
        else if ((iVar9 == 0x4ddb178e) &&
                (iVar7 = 0x48f0b1cc, !(bool)(bVar8 != bVar1 | ((~bVar8 | !bVar1) ^ 1U) & 1))) {
          iVar7 = -0x1452a67e;
        }
      }
      if (-0x1452a67f < iVar9) break;
      if (iVar9 == -0x49985b7c) {
        iVar7 = -0x14288a52;
        if (local_71 == '\0') {
          iVar7 = -0x1975f0e9;
        }
      }
      else if (iVar9 == -0x1975f0e9) {
        iVar7 = iVar5;
      }
    }
    iVar7 = 0x48f0b1cc;
  } while (((iVar9 == -0x1452a67e) || (iVar7 = 0x30adda22, iVar9 == 0x29ece03b)) ||
          (iVar7 = iVar9, iVar9 != -0x14288a52));
  local_70 = (void *)FUN_00114cfc(&DAT_0013a050);
LAB_0011522c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

