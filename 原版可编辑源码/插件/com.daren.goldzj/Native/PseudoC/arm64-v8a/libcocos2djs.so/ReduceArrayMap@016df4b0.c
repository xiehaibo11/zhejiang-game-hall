
/* v8::internal::compiler::JSCallReducer::ReduceArrayMap(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayMap
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  long lVar1;
  ulong uVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  long lVar6;
  Zone *pZVar7;
  undefined **local_140 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  Node *local_108;
  byte local_100;
  Node *local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  Zone *pZStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [5];
  char local_ab;
  char local_aa;
  Node *local_a0;
  Node *pNStack_98;
  MapInference aMStack_90 [48];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_016defac(auStack_b0,param_1,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x10),
               *(undefined8 *)(this + 0x30));
  if ((local_ab == '\0') ||
     (uVar2 = CompilationDependencies::DependOnArraySpeciesProtector
                        (*(CompilationDependencies **)(this + 0x30)), (uVar2 & 1) == 0)) {
    uVar5 = MapInference::NoChange(aMStack_90);
  }
  else {
    pZVar7 = *(Zone **)(this + 0x20);
    GraphAssembler::GraphAssembler
              ((GraphAssembler *)local_140,*(JSGraph **)(this + 0x10),pZVar7,(Schedule *)0x0);
    local_f0 = 0;
    local_e8 = 0;
    local_140[0] = &PTR__JSCallReducerAssembler_01ccd380;
    local_e0 = 0;
    local_108 = param_1;
    pZStack_d8 = pZVar7;
    pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    pNVar4 = (Node *)NodeProperties::GetControlInput(param_1,0);
    GraphAssembler::InitializeEffectControl((GraphAssembler *)local_140,pNVar3,pNVar4);
    local_100 = NodeProperties::IsExceptionalCall(param_1,&local_f8);
    local_100 = local_100 & 1;
    local_140[0] = &PTR__JSCallReducerAssembler_01ccd3a0;
    GraphAssembler::InitializeEffectControl((GraphAssembler *)local_140,local_a0,pNStack_98);
    lVar6 = *(long *)(this + 0x18);
    if (*(char *)(lVar6 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uStack_c8 = *(undefined8 *)(lVar6 + 0x28);
    local_d0 = *(undefined8 *)(lVar6 + 0x20);
    uVar5 = IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeMap
                      ((IteratingArrayBuiltinReducerAssembler *)local_140,aMStack_90,
                       local_aa != '\0',local_60,param_2,&local_d0);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),local_108,uVar5,local_120,uStack_118);
    if ((local_100 != 0) && (local_f0 != local_e8)) {
      JSCallReducerAssembler::MergeExceptionalPaths();
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_f8,local_d0,uStack_c8,local_c0);
    }
    local_140[0] = &PTR__JSCallReducerAssembler_01ccd380;
    if (local_f0 != 0) {
      local_e8 = local_f0;
    }
    GraphAssembler::~GraphAssembler((GraphAssembler *)local_140);
  }
  MapInference::~MapInference(aMStack_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

