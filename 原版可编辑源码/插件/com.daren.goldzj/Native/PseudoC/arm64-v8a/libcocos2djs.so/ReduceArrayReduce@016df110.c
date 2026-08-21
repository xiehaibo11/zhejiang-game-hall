
/* v8::internal::compiler::JSCallReducer::ReduceArrayReduce(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayReduce
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Zone *pZVar5;
  undefined **local_148 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  Node *local_110;
  byte local_108;
  Node *local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  Zone *pZStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [5];
  char local_bb;
  undefined1 local_ba;
  Node *local_b0;
  Node *pNStack_a8;
  MapInference aMStack_a0 [48];
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_016defac(auStack_c0,param_1,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x10),
               *(undefined8 *)(this + 0x30));
  if (local_bb == '\0') {
    uVar4 = MapInference::NoChange(aMStack_a0);
  }
  else {
    pZVar5 = *(Zone **)(this + 0x20);
    GraphAssembler::GraphAssembler
              ((GraphAssembler *)local_148,*(JSGraph **)(this + 0x10),pZVar5,(Schedule *)0x0);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_148[0] = &PTR__JSCallReducerAssembler_01ccd380;
    local_110 = param_1;
    pZStack_e0 = pZVar5;
    pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    pNVar3 = (Node *)NodeProperties::GetControlInput(param_1,0);
    GraphAssembler::InitializeEffectControl((GraphAssembler *)local_148,pNVar2,pNVar3);
    local_108 = NodeProperties::IsExceptionalCall(param_1,&local_100);
    local_108 = local_108 & 1;
    local_148[0] = &PTR__JSCallReducerAssembler_01ccd3a0;
    GraphAssembler::InitializeEffectControl((GraphAssembler *)local_148,local_b0,pNStack_a8);
    uVar4 = IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeReduce
                      ((IteratingArrayBuiltinReducerAssembler *)local_148,aMStack_a0,local_ba,
                       local_70,0,param_2);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),local_110,uVar4,local_128,uStack_120);
    if ((local_108 != 0) && (local_f8 != local_f0)) {
      JSCallReducerAssembler::MergeExceptionalPaths();
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_100,local_d8,uStack_d0,local_c8);
    }
    if (local_f8 != 0) {
      local_f0 = local_f8;
    }
    local_148[0] = &PTR__JSCallReducerAssembler_01ccd380;
    GraphAssembler::~GraphAssembler((GraphAssembler *)local_148);
  }
  MapInference::~MapInference(aMStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

