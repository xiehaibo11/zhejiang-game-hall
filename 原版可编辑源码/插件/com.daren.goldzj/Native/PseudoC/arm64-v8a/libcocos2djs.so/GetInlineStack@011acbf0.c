
/* v8::internal::CodeEntry::GetInlineStack(int) const */

long * __thiscall v8::internal::CodeEntry::GetInlineStack(CodeEntry *this,int param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  plVar6 = *(long **)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    piVar1 = (int *)*plVar6;
    if (piVar1 != (int *)plVar6[1]) {
      lVar3 = plVar6[1] - (long)piVar1;
      piVar5 = piVar1;
      if (lVar3 != 0) {
        uVar9 = (lVar3 >> 2) * -0x5555555555555555;
        piVar7 = piVar1;
        do {
          uVar11 = uVar9 >> 1;
          piVar5 = piVar7 + uVar11 * 3 + 3;
          uVar9 = uVar9 + ~uVar11;
          if (param_1 <= piVar7[uVar11 * 3]) {
            piVar5 = piVar7;
            uVar9 = uVar11;
          }
          piVar7 = piVar5;
        } while (uVar9 != 0);
        if (piVar5 != piVar1) {
          piVar5 = piVar5 + -3;
        }
      }
      iVar2 = piVar5[2];
      uVar9 = (ulong)iVar2;
      if (iVar2 != -1) {
        uVar11 = *(ulong *)(*(long *)(this + 0x38) + 0x20);
        if (uVar11 != 0) {
          uVar14 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar11 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar11 >> 8)),POPCOUNT((char)uVar11))))))));
          uVar13 = NEON_uaddlv(uVar14,1);
          uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
          if (uVar8 < 2) {
            uVar10 = uVar11 - 1 & uVar9;
          }
          else {
            uVar10 = uVar9;
            if (uVar11 <= uVar9) {
              uVar10 = 0;
              if (uVar11 != 0) {
                uVar10 = uVar9 / uVar11;
              }
              uVar10 = uVar9 - uVar10 * uVar11;
            }
          }
          plVar6 = *(long **)(*(long *)(*(long *)(this + 0x38) + 0x18) + uVar10 * 8);
          if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
            do {
              uVar12 = plVar6[1];
              if (uVar12 == uVar9) {
                if ((int)plVar6[2] == iVar2) {
                  return plVar6 + 3;
                }
              }
              else {
                if (uVar8 < 2) {
                  uVar12 = uVar12 & uVar11 - 1;
                }
                else if (uVar11 <= uVar12) {
                  uVar4 = 0;
                  if (uVar11 != 0) {
                    uVar4 = uVar12 / uVar11;
                  }
                  uVar12 = uVar12 - uVar4 * uVar11;
                }
                if (uVar12 != uVar10) {
                  return (long *)0x0;
                }
              }
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) {
                return (long *)0x0;
              }
            } while( true );
          }
        }
      }
    }
  }
  return (long *)0x0;
}

