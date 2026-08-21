
/* v8::internal::compiler::EscapeAnalysisTracker::Scope::~Scope() */

void __thiscall v8::internal::compiler::EscapeAnalysisTracker::Scope::~Scope(Scope *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *pvVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined2 uVar15;
  
  lVar4 = *(long *)(this + 0x30);
  lVar11 = *(long *)(this + 0x48);
  pvVar10 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(lVar4 + 0x40);
  lVar3 = *(long *)pvVar10;
  uVar7 = *(long *)(lVar4 + 0x48) - lVar3 >> 3;
  uVar13 = (ulong)*(uint *)(*(long *)this + 0x14) & 0xffffff;
  if (uVar7 <= uVar13) {
    uVar5 = (ulong)((int)uVar13 + 1);
    if (uVar7 < uVar5) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__append(pvVar10,uVar5 - uVar7);
      lVar3 = *(long *)pvVar10;
    }
    else if (uVar7 != uVar5) {
      *(ulong *)(lVar4 + 0x48) = lVar3 + uVar5 * 8;
    }
  }
  if (lVar11 == *(long *)(lVar3 + uVar13 * 8)) {
    lVar3 = *(long *)(this + 0x40);
    plVar14 = *(long **)(this + 0x30);
    uVar1 = *(uint *)(*(long *)this + 0x14) & 0xffffff;
    uVar7 = base::hash_value(uVar1);
    uVar13 = plVar14[2];
    if (uVar13 != 0) {
      uVar12 = CONCAT17(POPCOUNT((char)(uVar13 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar13 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar13 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar13 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar13 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar13 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar13
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar13)
                                                                             )))))));
      uVar15 = NEON_uaddlv(uVar12,1);
      uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar15) & 0xffffffff;
      if (uVar5 < 2) {
        uVar6 = uVar13 - 1 & uVar7;
      }
      else {
        uVar6 = uVar7;
        if (uVar13 <= uVar7) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar7 / uVar13;
          }
          uVar6 = uVar7 - uVar6 * uVar13;
        }
      }
      plVar8 = *(long **)(plVar14[1] + uVar6 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar7 == uVar9) {
            if (*(uint *)(plVar8 + 2) == uVar1) {
              plVar14 = plVar8 + 3;
              break;
            }
          }
          else {
            if (uVar5 < 2) {
              uVar9 = uVar9 & uVar13 - 1;
            }
            else if (uVar13 <= uVar9) {
              uVar2 = 0;
              if (uVar13 != 0) {
                uVar2 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar2 * uVar13;
            }
            if (uVar9 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (lVar3 == *plVar14) goto LAB_016bad8c;
  }
  **(undefined1 **)(this + 8) = 1;
LAB_016bad8c:
  lVar4 = *(long *)(this + 0x30);
  uVar12 = *(undefined8 *)(this + 0x48);
  pvVar10 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(lVar4 + 0x40);
  lVar3 = *(long *)pvVar10;
  uVar7 = *(long *)(lVar4 + 0x48) - lVar3 >> 3;
  uVar13 = (ulong)*(uint *)(*(long *)this + 0x14) & 0xffffff;
  if (uVar7 <= uVar13) {
    uVar5 = (ulong)((int)uVar13 + 1);
    if (uVar7 < uVar5) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__append(pvVar10,uVar5 - uVar7);
      lVar3 = *(long *)pvVar10;
    }
    else if (uVar7 != uVar5) {
      *(ulong *)(lVar4 + 0x48) = lVar3 + uVar5 * 8;
    }
  }
  *(undefined8 *)(lVar3 + uVar13 * 8) = uVar12;
  SparseSidetable<v8::internal::compiler::VirtualObject*>::Set
            (*(SparseSidetable<v8::internal::compiler::VirtualObject*> **)(this + 0x30),
             *(Node **)this,*(VirtualObject **)(this + 0x40));
  VariableTracker::Scope::~Scope((Scope *)this);
  return;
}

