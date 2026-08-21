
/* v8::internal::CodeLargeObjectSpace::FindPage(unsigned long) */

long __thiscall
v8::internal::CodeLargeObjectSpace::FindPage(CodeLargeObjectSpace *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(this + 0x88);
  if (uVar3 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    uVar4 = param_1 & 0xfffffffffffc0000;
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x80) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if (plVar6[2] == uVar4) {
            lVar2 = plVar6[3];
            if ((*(ulong *)(lVar2 + 0x20) <= param_1) && (param_1 < *(ulong *)(lVar2 + 0x28))) {
              return lVar2;
            }
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","page->Contains(a)");
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}

