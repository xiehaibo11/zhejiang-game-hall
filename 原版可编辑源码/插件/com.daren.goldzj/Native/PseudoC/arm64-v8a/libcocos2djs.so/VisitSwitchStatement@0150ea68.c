
/* v8::internal::interpreter::BytecodeGenerator::VisitSwitchStatement(v8::internal::SwitchStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitSwitchStatement
          (BytecodeGenerator *this,SwitchStatement *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  int iVar2;
  BytecodeGenerator BVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  CaseClause *pCVar10;
  AstNode *pAVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined **local_138;
  BytecodeGenerator *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  SwitchStatement *local_118;
  undefined ***pppuStack_110;
  undefined **local_108;
  BytecodeArrayBuilder *local_100;
  BytecodeLabels *local_f8;
  BytecodeLabels *pBStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  SwitchStatement *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  BytecodeGenerator *pBStack_98;
  int local_90;
  undefined8 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
  local_108 = &PTR__SwitchBuilder_01cc7148;
  uStack_c8 = *(undefined8 *)(this + 0x208);
  uStack_e0 = *(undefined8 *)(this + 0x18);
  local_d8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_e8 = 0;
  local_b0 = 0;
  local_100 = pBVar1;
  local_f8 = (BytecodeLabels *)&local_f8;
  pBStack_f0 = (BytecodeLabels *)&local_f8;
  local_d0 = param_1;
  uStack_a8 = uStack_e0;
  if (*(int *)(param_1 + 0x24) != 0) {
    std::__ndk1::
    vector<v8::internal::interpreter::BytecodeLabel,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeLabel>>
    ::__append((vector<v8::internal::interpreter::BytecodeLabel,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeLabel>>
                *)&local_c0,(long)*(int *)(param_1 + 0x24));
  }
  uStack_120 = *(undefined8 *)(this + 0x2f8);
  local_128 = *(undefined8 *)(this + 0x2f0);
  local_138 = &PTR__ControlScope_01cc7068;
  *(undefined ****)(this + 0x2f0) = &local_138;
  iVar9 = *(int *)param_1;
  if (iVar9 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar9;
  }
  local_130 = this;
  local_118 = param_1;
  pppuStack_110 = &local_108;
  uVar5 = VisitForRegisterValue(this,*(Expression **)(param_1 + 0x10));
  if (0 < *(int *)(param_1 + 0x24)) {
    uVar6 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x10)
    ;
    iVar9 = *(int *)(param_1 + 0x24);
    if (0 < iVar9) {
      lVar14 = 0;
      uVar15 = 0;
      uVar12 = 0xffffffff;
      do {
        pAVar11 = (AstNode *)**(undefined8 **)(*(long *)(param_1 + 0x18) + uVar15 * 8);
        if (pAVar11 == (AstNode *)0x0) {
          uVar12 = uVar15 & 0xffffffff;
        }
        else {
          local_a0 = *(undefined8 *)(this + 0x300);
          local_90 = *(int *)(this + 0x118);
          local_88 = 2;
          *(undefined8 **)(this + 0x300) = &local_a0;
          pBStack_98 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar11);
            }
          }
          *(undefined8 *)(pBStack_98 + 0x300) = local_a0;
          plVar8 = *(long **)(pBStack_98 + 0x120);
          iVar9 = *(int *)(pBStack_98 + 0x118);
          *(int *)(pBStack_98 + 0x118) = local_90;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar9 - local_90,local_90));
          }
          BytecodeArrayBuilder::CompareOperation(pBVar1,0x36,uVar5,uVar6);
          if ((ulong)(lStack_b8 - local_c0 >> 4) <= uVar15) goto LAB_0150edbc;
          BytecodeArrayBuilder::JumpIfTrue(local_100,1,local_c0 + lVar14);
          iVar9 = *(int *)(param_1 + 0x24);
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((long)uVar15 < (long)iVar9);
      if (-1 < (int)uVar12) {
        if ((ulong)(lStack_b8 - local_c0 >> 4) <= uVar12) {
LAB_0150edbc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        BytecodeArrayBuilder::Jump(local_100,(BytecodeLabel *)(local_c0 + uVar12 * 0x10));
        goto LAB_0150ec9c;
      }
    }
  }
  BreakableControlFlowBuilder::EmitJump
            ((BreakableControlFlowBuilder *)&local_108,(BytecodeLabels *)&local_f8);
LAB_0150ec9c:
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar14 = 0;
    do {
      pCVar10 = *(CaseClause **)(*(long *)(param_1 + 0x18) + lVar14 * 8);
      SwitchBuilder::SetCaseTarget((SwitchBuilder *)&local_108,(int)lVar14,pCVar10);
      if (0 < *(int *)(pCVar10 + 0x14)) {
        lVar13 = 0;
        do {
          iVar9 = *(int *)(this + 0x118);
          if (this[8] == (BytecodeGenerator)0x0) {
            pAVar11 = *(AstNode **)(*(long *)(pCVar10 + 8) + lVar13 * 8);
            uVar15 = GetCurrentStackPosition();
            if (uVar15 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar11);
            }
          }
          BVar3 = this[0x1b2];
          plVar8 = *(long **)(this + 0x120);
          iVar2 = *(int *)(this + 0x118);
          *(int *)(this + 0x118) = iVar9;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar2 - iVar9,iVar9));
          }
        } while ((BVar3 == (BytecodeGenerator)0x0) &&
                (lVar13 = lVar13 + 1, lVar13 < *(int *)(pCVar10 + 0x14)));
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x24));
  }
  local_138 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_130 + 0x2f0) = local_128;
  SwitchBuilder::~SwitchBuilder((SwitchBuilder *)&local_108);
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

