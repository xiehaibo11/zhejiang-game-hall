
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeSlice(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeSlice(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Zone *pZVar5;
  undefined **local_c8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  Node *local_90;
  byte local_88;
  Node *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  Zone *pZStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(int *)(*(Operator **)param_1 + 0x14) < 3) ||
     (lVar1 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar1 + 3) >> 4 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    pZVar5 = *(Zone **)(this + 0x20);
    GraphAssembler::GraphAssembler
              ((GraphAssembler *)local_c8,*(JSGraph **)(this + 0x10),pZVar5,(Schedule *)0x0);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_c8[0] = &PTR__JSCallReducerAssembler_01ccd380;
    local_90 = param_1;
    pZStack_60 = pZVar5;
    pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    pNVar3 = (Node *)NodeProperties::GetControlInput(param_1,0);
    GraphAssembler::InitializeEffectControl((GraphAssembler *)local_c8,pNVar2,pNVar3);
    local_88 = NodeProperties::IsExceptionalCall(param_1,&local_80);
    local_88 = local_88 & 1;
    uVar4 = JSCallReducerAssembler::ReduceStringPrototypeSlice((JSCallReducerAssembler *)local_c8);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),local_90,uVar4,local_a8,uStack_a0);
    if ((local_88 != 0) && (local_78 != local_70)) {
      JSCallReducerAssembler::MergeExceptionalPaths();
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_80,local_58,uStack_50,local_48);
    }
    if (local_78 != 0) {
      local_70 = local_78;
    }
    local_c8[0] = &PTR__JSCallReducerAssembler_01ccd380;
    GraphAssembler::~GraphAssembler((GraphAssembler *)local_c8);
  }
  return uVar4;
}

