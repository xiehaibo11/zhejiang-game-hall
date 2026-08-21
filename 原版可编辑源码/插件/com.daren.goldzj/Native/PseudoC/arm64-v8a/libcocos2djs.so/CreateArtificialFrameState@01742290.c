
/* v8::internal::compiler::JSInliner::CreateArtificialFrameState(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int, v8::internal::BailoutId,
   v8::internal::compiler::FrameStateType, v8::internal::compiler::SharedFunctionInfoRef,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::JSInliner::CreateArtificialFrameState
               (long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  long lVar5;
  Node **ppNVar6;
  long *plVar7;
  Node **ppNVar8;
  ulong uVar9;
  Node **ppNVar10;
  Node *pNVar11;
  long lVar12;
  Node **ppNVar13;
  Node **ppNVar14;
  CommonOperatorBuilder *pCVar15;
  Zone *this;
  ulong uVar16;
  undefined8 uStack_a0;
  undefined8 local_98;
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  
  pCVar15 = *(CommonOperatorBuilder **)(*(long *)(param_1 + 0x20) + 8);
  uStack_a0 = param_7;
  local_98 = param_8;
  uVar2 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)&uStack_a0);
  uVar2 = CommonOperatorBuilder::CreateFrameStateFunctionInfo(pCVar15,param_6,param_4 + 1U,0,uVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::FrameState
                     (*(CommonOperatorBuilder **)(*(long *)(param_1 + 0x20) + 8),param_5,
                      0xffffffffffffffff,uVar2);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::StateValues
                     (*(CommonOperatorBuilder **)(*(long *)(param_1 + 0x20) + 8),0,0);
  local_90 = (Node *)0x0;
  uVar2 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x20),pOVar4,0,&local_90,false);
  if (param_4 < 0) {
    ppNVar10 = (Node **)0x0;
    ppNVar14 = (Node **)0x0;
  }
  else {
    this = *(Zone **)(param_1 + 0x10);
    uVar16 = 0;
    ppNVar10 = (Node **)0x0;
    ppNVar6 = (Node **)0x0;
    ppNVar13 = (Node **)0x0;
    do {
      uVar16 = uVar16 + 1;
      plVar7 = (long *)(param_2 + 0x20);
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        plVar7 = (long *)(*(long *)(param_2 + 0x20) + 0x10);
      }
      pNVar11 = (Node *)plVar7[uVar16];
      if (ppNVar10 < ppNVar6) {
        *ppNVar10 = pNVar11;
        ppNVar8 = ppNVar10;
        ppNVar14 = ppNVar13;
      }
      else {
        lVar12 = (long)ppNVar10 - (long)ppNVar13 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar9 = (long)ppNVar6 - (long)ppNVar13 >> 2;
        if (uVar1 <= uVar9) {
          uVar1 = uVar9;
        }
        if (0x7fffffe < (ulong)((long)ppNVar6 - (long)ppNVar13 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(this + 0x10);
          uVar9 = uVar1 * 8;
          if (uVar9 < (ulong)(*(long *)(this + 0x18) - lVar5) ||
              uVar9 - (*(long *)(this + 0x18) - lVar5) == 0) {
            *(ulong *)(this + 0x10) = lVar5 + uVar9;
          }
          else {
            lVar5 = Zone::NewExpand(this,uVar9);
          }
        }
        ppNVar8 = (Node **)(lVar5 + lVar12 * 8);
        ppNVar6 = (Node **)(lVar5 + uVar1 * 8);
        *ppNVar8 = pNVar11;
        ppNVar14 = ppNVar8;
        while (ppNVar10 != ppNVar13) {
          ppNVar10 = ppNVar10 + -1;
          ppNVar14 = ppNVar14 + -1;
          *ppNVar14 = *ppNVar10;
        }
      }
      ppNVar10 = ppNVar8 + 1;
      ppNVar13 = ppNVar14;
    } while (uVar16 != param_4 + 1U);
  }
  uVar16 = (ulong)((long)ppNVar10 - (long)ppNVar14) >> 3;
  pOVar4 = (Operator *)
           CommonOperatorBuilder::StateValues
                     (*(CommonOperatorBuilder **)(*(long *)(param_1 + 0x20) + 8),uVar16 & 0xffffffff
                      ,0);
  pNVar11 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x20),pOVar4,(int)uVar16,
                                   ppNVar14,false);
  if (param_9 == 0) {
    param_9 = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x20));
  }
  plVar7 = (long *)(param_2 + 0x20);
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar7 + 0x10);
  }
  local_70 = *plVar7;
  local_90 = pNVar11;
  uStack_88 = uVar2;
  local_80 = uVar2;
  lStack_78 = param_9;
  uStack_68 = param_3;
  Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x20),pOVar3,6,&local_90,false);
  return;
}

