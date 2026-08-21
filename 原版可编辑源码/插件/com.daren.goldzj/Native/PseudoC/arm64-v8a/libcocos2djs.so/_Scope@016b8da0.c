
/* v8::internal::compiler::VariableTracker::Scope::~Scope() */

void __thiscall v8::internal::compiler::VariableTracker::Scope::~Scope(Scope *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
  *this_00;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(char *)(*(long *)(this + 8) + 1) == '\0') {
    lVar9 = *(long *)(this + 0x10);
    uVar1 = *(uint *)(*(long *)this + 0x14) & 0xffffff;
    uVar3 = base::hash_value(uVar1);
    uVar4 = *(ulong *)(lVar9 + 0x30);
    if (uVar4 != 0) {
      uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar4 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        ))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar5 < 2) {
        uVar6 = uVar4 - 1 & uVar3;
      }
      else {
        uVar6 = uVar3;
        if (uVar4 <= uVar3) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = uVar3 / uVar4;
          }
          uVar6 = uVar3 - uVar6 * uVar4;
        }
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 0x28) + uVar6 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        do {
          uVar8 = plVar7[1];
          if (uVar3 == uVar8) {
            if (*(uint *)(plVar7 + 2) == uVar1) {
              this_00 = (PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
                         *)(plVar7 + 3);
              goto LAB_016b8e84;
            }
          }
          else {
            if (uVar5 < 2) {
              uVar8 = uVar8 & uVar4 - 1;
            }
            else if (uVar4 <= uVar8) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar2 * uVar4;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
    this_00 = (PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
               *)(lVar9 + 0x10);
LAB_016b8e84:
    uVar3 = PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
            ::operator==(this_00,(PersistentMap *)(this + 0x18));
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(*(long *)(this + 8) + 1) = 1;
    }
  }
  local_40 = *(undefined8 *)(this + 0x28);
  uStack_48 = *(undefined8 *)(this + 0x20);
  local_50 = *(undefined8 *)(this + 0x18);
  SparseSidetable<v8::internal::compiler::VariableTracker::State>::Set
            ((SparseSidetable<v8::internal::compiler::VariableTracker::State> *)
             (*(long *)(this + 0x10) + 0x10),*(undefined8 *)this,&local_50);
  return;
}

