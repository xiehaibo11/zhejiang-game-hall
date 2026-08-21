
/* v8::internal::compiler::EscapeAnalysisReducer::ReduceFrameStateInputs(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EscapeAnalysisReducer::ReduceFrameStateInputs
          (EscapeAnalysisReducer *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  uint uVar3;
  Node *pNVar4;
  Node *this_00;
  Node *pNVar5;
  long lVar6;
  long lVar7;
  Node *pNVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  pNVar1 = param_1 + 0x20;
  lVar7 = -0x18;
  while( true ) {
    uVar2 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar2 == 0xf000000) {
      uVar3 = *(uint *)(*(long *)pNVar1 + 8);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar3 <= lVar6) break;
    pNVar4 = pNVar1;
    if (uVar2 == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    if (*(short *)(*(long *)*(Node **)(pNVar4 + lVar6 * 8) + 0x10) == 0x29) {
      uStack_68 = *(undefined8 *)(this + 0xc0);
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      pNVar4 = (Node *)ReduceDeoptState(this,*(Node **)(pNVar4 + lVar6 * 8),param_1,
                                        (Deduplicator *)&local_80);
      if (pNVar4 != (Node *)0x0) {
        pNVar8 = pNVar1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        this_00 = *(Node **)(pNVar8 + lVar6 * 8);
        if (this_00 != pNVar4) {
          pNVar5 = param_1;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar5 = *(Node **)pNVar1;
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,(Use *)(pNVar5 + lVar7));
          }
          *(Node **)(pNVar8 + lVar6 * 8) = pNVar4;
          Node::AppendUse(pNVar4,(Use *)(pNVar5 + lVar7));
        }
      }
    }
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + -0x18;
  }
  return;
}

