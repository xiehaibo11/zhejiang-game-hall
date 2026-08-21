
/* v8::internal::compiler::JSCallReducer::CreateArtificialFrameState(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int, v8::internal::BailoutId,
   v8::internal::compiler::FrameStateType, v8::internal::compiler::SharedFunctionInfoRef const&,
   v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::CreateArtificialFrameState
          (JSCallReducer *this,long param_1,undefined8 param_2,int param_3,undefined4 param_5,
          undefined4 param_6,SharedFunctionInfoRef *param_7,long param_8)

{
  uint uVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long *plVar6;
  CommonOperatorBuilder *pCVar7;
  long lVar8;
  Node **local_b0;
  Node **ppNStack_a8;
  Node **local_a0;
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  
  uVar1 = param_3 + 1;
  pCVar7 = *(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8);
  uVar2 = SharedFunctionInfoRef::object(param_7);
  uVar2 = CommonOperatorBuilder::CreateFrameStateFunctionInfo(pCVar7,param_6,uVar1,0,uVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::FrameState
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),param_5,
                      0xffffffffffffffff,uVar2);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::StateValues
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,0);
  local_90 = (Node *)0x0;
  uVar2 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar4,0,&local_90,false);
  ppNStack_a8 = (Node **)0x0;
  local_a0 = (Node **)0x0;
  local_b0 = (Node **)0x0;
  if (param_3 != -1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_b0 = operator_new((long)(int)uVar1 * 8);
    lVar8 = 0;
    local_a0 = local_b0 + (int)uVar1;
    ppNStack_a8 = local_b0;
    do {
      plVar6 = (long *)(param_1 + 0x20);
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      local_90 = *(Node **)((long)plVar6 + lVar8 + 8);
      if (ppNStack_a8 < local_a0) {
        *ppNStack_a8 = local_90;
        ppNStack_a8 = ppNStack_a8 + 1;
      }
      else {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_b0,&local_90);
      }
      lVar8 = lVar8 + 8;
    } while ((ulong)uVar1 * 8 - lVar8 != 0);
  }
  pOVar4 = (Operator *)
           CommonOperatorBuilder::StateValues
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),
                      (ulong)((long)ppNStack_a8 - (long)local_b0) >> 3,0);
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar4,
                                  (int)((ulong)((long)ppNStack_a8 - (long)local_b0) >> 3),local_b0,
                                  false);
  if (param_8 == 0) {
    param_8 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  plVar6 = (long *)(param_1 + 0x20);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar6 = (long *)(*plVar6 + 0x10);
  }
  local_70 = *plVar6;
  local_90 = pNVar5;
  uStack_88 = uVar2;
  local_80 = uVar2;
  lStack_78 = param_8;
  uStack_68 = param_2;
  uVar2 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar3,6,&local_90,false);
  if (local_b0 != (Node **)0x0) {
    ppNStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  return uVar2;
}

