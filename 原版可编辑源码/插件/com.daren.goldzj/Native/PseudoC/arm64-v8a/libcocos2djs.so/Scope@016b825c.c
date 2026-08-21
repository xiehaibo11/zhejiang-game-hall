
/* v8::internal::compiler::VariableTracker::Scope::Scope(v8::internal::compiler::VariableTracker*,
   v8::internal::compiler::Node*, v8::internal::compiler::EffectGraphReducer::Reduction*) */

void __thiscall
v8::internal::compiler::VariableTracker::Scope::Scope
          (Scope *this,VariableTracker *param_1,Node *param_2,Reduction *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  VariableTracker *pVVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *(Node **)this = param_2;
  *(Reduction **)(this + 8) = param_3;
  *(VariableTracker **)(this + 0x10) = param_1;
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = uVar5;
  if (*(short *)(*(long *)param_2 + 0x10) == 0x24) {
    MergeInputs((Node *)param_1);
    *(undefined8 *)(this + 0x28) = local_38;
  }
  else {
    if (*(int *)(*(long *)param_2 + 0x18) != 1) {
      return;
    }
    lVar3 = NodeProperties::GetEffectInput(param_2,0);
    uVar1 = *(uint *)(lVar3 + 0x14) & 0xffffff;
    uVar4 = base::hash_value(uVar1);
    uVar6 = *(ulong *)(param_1 + 0x30);
    if (uVar6 != 0) {
      uVar5 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar6 
                                                  >> 8)),POPCOUNT((char)uVar6))))))));
      uVar12 = NEON_uaddlv(uVar5,1);
      uVar8 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar12) & 0xffffffff;
      if (uVar8 < 2) {
        uVar9 = uVar6 - 1 & uVar4;
      }
      else {
        uVar9 = uVar4;
        if (uVar6 <= uVar4) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar4 / uVar6;
          }
          uVar9 = uVar4 - uVar9 * uVar6;
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x28) + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          uVar11 = plVar10[1];
          if (uVar4 == uVar11) {
            if (*(uint *)(plVar10 + 2) == uVar1) {
              pVVar7 = (VariableTracker *)(plVar10 + 3);
              goto LAB_016b838c;
            }
          }
          else {
            if (uVar8 < 2) {
              uVar11 = uVar11 & uVar6 - 1;
            }
            else if (uVar6 <= uVar11) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar2 * uVar6;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    pVVar7 = param_1 + 0x10;
LAB_016b838c:
    uStack_40 = *(undefined8 *)(pVVar7 + 8);
    local_48 = *(undefined8 *)pVVar7;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(pVVar7 + 0x10);
  }
  *(undefined8 *)(this + 0x20) = uStack_40;
  *(undefined8 *)(this + 0x18) = local_48;
  return;
}

