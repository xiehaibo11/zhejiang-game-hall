
/* WARNING: Removing unreachable block (ram,0x001154e8) */

void FUN_001153dc(byte *param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *local_70;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar5 = 0xa40a44c4;
  pbVar4 = param_1;
LAB_0011548c:
  do {
    while (uVar5 == 0xa40a44c4) {
      uVar5 = 0x3912e79e;
      if ((~(uint)*param_1 | 0xfffffffe) != 0xffffffff) {
        uVar5 = 0x2a5cfb44;
      }
      if (0x2a5cfb43 < uVar5) goto LAB_001154bc;
    }
    if (uVar5 == 0xaf0a39f8) {
      if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(pbVar4);
      }
      return;
    }
    do {
      while( true ) {
        if ((int)uVar5 < 0x2a5cfb44) goto LAB_0011548c;
LAB_001154bc:
        if (uVar5 != 0x2a5cfb44) break;
        bVar3 = (~((x_126 + 0x450f2a0d) * x_126) | 0xfffffffeU) == 0xffffffff;
        bVar1 = y_127 < 10;
        uVar5 = 0xefa7d9bd;
        if ((!bVar1 || !bVar3) && bVar1 == bVar3) {
          uVar5 = 0x53757124;
        }
        uVar7 = 0x9986f4ac;
LAB_00115578:
        while (uVar7 == 0x9986f4ac) {
          uVar7 = 0x78bfcd86;
          if (bVar3 == bVar1 && !(bool)(((~bVar3 | !bVar1) ^ 1U) & 1)) {
            uVar7 = 0x53757124;
          }
          if (0x53757123 < uVar7) goto LAB_001155b4;
        }
        if (uVar7 != 0xefa7d9bd) {
LAB_00115570:
          if (0x53757123 < (int)uVar7) {
LAB_001155b4:
            while (uVar7 != 0x53757124) {
              if (uVar7 != 0x78bfcd86) goto LAB_00115570;
              local_70 = *(byte **)(param_1 + 0x10);
              uVar7 = uVar5;
              if ((int)uVar5 < 0x53757124) goto LAB_00115578;
            }
            uVar7 = 0x78bfcd86;
            goto LAB_00115570;
          }
          goto LAB_00115578;
        }
        uVar5 = 0xaf0a39f8;
        pbVar4 = local_70;
      }
    } while (uVar5 != 0x3912e79e);
    pbVar4 = (byte *)FUN_00115614(param_1);
    uVar5 = 0xaf0a39f8;
  } while( true );
}

