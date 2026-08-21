
/* v8::internal::compiler::EscapeAnalysisTracker::Scope::SetEscaped(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EscapeAnalysisTracker::Scope::SetEscaped(Scope *this,Node *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  plVar13 = *(long **)(this + 0x30);
  uVar6 = base::hash_value(uVar2 & 0xffffff);
  uVar7 = plVar13[2];
  if (uVar7 != 0) {
    uVar17 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = uVar7 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar7 <= uVar6) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar6 / uVar7;
        }
        uVar10 = uVar6 - uVar10 * uVar7;
      }
    }
    plVar11 = *(long **)(plVar13[1] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar6 == uVar12) {
          if (*(uint *)(plVar11 + 2) == (uVar2 & 0xffffff)) {
            plVar13 = plVar11 + 3;
            break;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar12 = uVar12 & uVar7 - 1;
          }
          else if (uVar7 <= uVar12) {
            uVar5 = 0;
            if (uVar7 != 0) {
              uVar5 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar5 * uVar7;
          }
          if (uVar12 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar13 = (long *)*plVar13;
  if ((plVar13 != (long *)0x0) && ((char)plVar13[4] == '\0')) {
    plVar11 = (long *)*plVar13;
    plVar1 = (long *)plVar13[1];
    *(undefined1 *)(plVar13 + 4) = 1;
    if (plVar11 != plVar1) {
      lVar14 = *(long *)(this + 0x38);
      do {
        lVar15 = *plVar11;
        uVar3 = *(uint *)(lVar14 + 0x10);
        uVar2 = 0;
        if (uVar3 <= *(uint *)(lVar15 + 0x10)) {
          uVar2 = *(uint *)(lVar15 + 0x10) - uVar3;
        }
        if ((uVar2 & 0xff) == 3) {
          *(uint *)(lVar15 + 0x10) = uVar3 + 1;
          lVar8 = *(long *)(lVar14 + 0x20);
          lVar4 = *(long *)(lVar14 + 0x28) - lVar8;
          uVar6 = 0;
          if (lVar4 != 0) {
            uVar6 = lVar4 * 0x40 - 1;
          }
          uVar7 = *(long *)(lVar14 + 0x50) + *(long *)(lVar14 + 0x48);
          if (uVar6 == uVar7) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                        *)(lVar14 + 0x18));
            lVar8 = *(long *)(lVar14 + 0x20);
            uVar7 = *(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x50);
          }
          *(long *)(*(long *)(lVar8 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
               lVar15;
          *(long *)(lVar14 + 0x50) = *(long *)(lVar14 + 0x50) + 1;
        }
        plVar11 = plVar11 + 1;
      } while (plVar1 != plVar11);
      plVar11 = (long *)*plVar13;
    }
    plVar13[1] = (long)plVar11;
  }
  return;
}

