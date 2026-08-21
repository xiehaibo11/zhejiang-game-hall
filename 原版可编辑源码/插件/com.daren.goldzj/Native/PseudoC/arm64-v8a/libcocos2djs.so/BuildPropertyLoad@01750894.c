
/* v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyLoad(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::NameRef const&,
   v8::internal::ZoneVector<v8::internal::compiler::Node*>*,
   v8::internal::compiler::PropertyAccessInfo const&) */

void v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyLoad
               (Node *param_1,Node *param_2,Node *param_3,Node *param_4,Node *param_5,
               NameRef *param_6,ZoneVector *param_7,PropertyAccessInfo *param_8)

{
  JSGraph *this;
  long lVar1;
  ulong uVar2;
  AccessBuilder *this_00;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 *in_x8;
  Graph *pGVar5;
  SimplifiedOperatorBuilder *this_01;
  CompilationDependencies *pCVar6;
  PropertyAccessInfo *in_stack_00000000;
  undefined1 local_e0 [8];
  Node *local_d8;
  undefined8 uStack_d0;
  NameRef *local_c8;
  Node *local_c0;
  AccessBuilder *local_b8;
  Node *pNStack_b0;
  NameRef *local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c8 = param_6;
  local_c0 = param_5;
  if (*(long *)(in_stack_00000000 + 0x58) != 0) {
    pCVar6 = *(CompilationDependencies **)(param_1 + 0x38);
    ObjectRef::ObjectRef
              ((ObjectRef *)local_a0,*(undefined8 *)(param_1 + 0x18),
               *(long *)(in_stack_00000000 + 0x58),0);
    uVar2 = ObjectRef::IsJSObject((ObjectRef *)local_a0);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    local_e0[0] = 1;
    uStack_d0 = local_a0._8_8_;
    local_d8 = (Node *)local_a0._0_8_;
    CompilationDependencies::
    DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
              (pCVar6,in_stack_00000000 + 8,1,local_e0);
  }
  switch(*(undefined4 *)in_stack_00000000) {
  case 1:
    pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x10));
    break;
  default:
    local_a0._8_8_ = *(undefined8 *)(param_1 + 0x18);
    local_a0._0_8_ = *(undefined8 *)(param_1 + 0x10);
    local_90 = *(undefined8 *)(param_1 + 0x38);
    pNVar4 = (Node *)PropertyAccessBuilder::BuildLoadDataField
                               ((PropertyAccessBuilder *)local_a0,(NameRef *)param_7,
                                in_stack_00000000,param_2,&local_c0,(Node **)&local_c8);
    break;
  case 4:
    pNVar4 = (Node *)InlinePropertyGetterCall
                               ((JSNativeContextSpecialization *)param_1,param_2,param_3,param_4,
                                &local_c0,(Node **)&local_c8,(ZoneVector *)param_8,in_stack_00000000
                               );
    break;
  case 5:
    this = *(JSGraph **)(param_1 + 0x10);
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_b8,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(in_stack_00000000 + 0x48),1);
    local_a0 = ObjectRef::AsCell((ObjectRef *)&local_b8);
    this_00 = (AccessBuilder *)JSGraph::Constant(this,(ObjectRef *)local_a0);
    pGVar5 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f];
    AccessBuilder::ForCellValue(this_00);
    pOVar3 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)local_a0);
    pNStack_b0 = local_c0;
    local_a8 = local_c8;
    local_b8 = this_00;
    pNVar4 = (Node *)Graph::NewNode(pGVar5,pOVar3,3,(Node **)&local_b8,false);
    local_c0 = pNVar4;
    break;
  case 6:
    pGVar5 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringLength
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f]);
    local_a0._0_8_ = param_2;
    pNVar4 = (Node *)Graph::NewNode(pGVar5,pOVar3,1,(Node **)local_a0,false);
  }
  *in_x8 = pNVar4;
  in_x8[1] = local_c0;
  in_x8[2] = local_c8;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

