
/* v8::internal::compiler::BytecodeGraphBuilder::CreateGraph() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::CreateGraph(BytecodeGraphBuilder *this)

{
  long lVar1;
  Graph *pGVar2;
  Node **ppNVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  BytecodeArrayRef local_d0 [16];
  BytecodeArrayRef local_c0 [16];
  BytecodeArrayRef local_b0 [16];
  undefined1 local_a0 [6] [16];
  
  lVar1 = *(long *)(this + 0x1d8);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  if ((*(ulong *)(this + 0x1e0) & 0x7fffffffffff) != 0) {
    *(ulong *)(lVar1 + 0x10) = *(ulong *)(this + 0x1e0);
  }
  local_a0[0]._8_8_ = *(undefined8 *)(this + 0x30);
  local_a0[0]._0_8_ = *(undefined8 *)(this + 0x28);
  local_a0[0] = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_a0);
  iVar4 = BytecodeArrayRef::parameter_count((BytecodeArrayRef *)local_a0);
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Start
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar4 + 4);
  local_a0[0]._0_8_ = 0;
  uVar9 = Graph::NewNode(pGVar2,pOVar8,0,(Node **)local_a0,false);
  *(undefined8 *)(pGVar2 + 8) = uVar9;
  local_a0[0]._8_8_ = *(undefined8 *)(this + 0x30);
  local_a0[0]._0_8_ = *(undefined8 *)(this + 0x28);
  local_b0 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_a0);
  uVar5 = BytecodeArrayRef::register_count(local_b0);
  local_a0[0]._8_8_ = *(undefined8 *)(this + 0x30);
  local_a0[0]._0_8_ = *(undefined8 *)(this + 0x28);
  local_c0 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_a0);
  uVar6 = BytecodeArrayRef::parameter_count(local_c0);
  local_a0[0]._8_8_ = *(undefined8 *)(this + 0x30);
  local_a0[0]._0_8_ = *(undefined8 *)(this + 0x28);
  local_d0 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_a0);
  uVar7 = BytecodeArrayRef::incoming_new_target_or_generator_register(local_d0);
  Environment::Environment
            ((Environment *)local_a0,this,uVar5,uVar6,uVar7,
             *(undefined8 *)(**(long **)(this + 0x10) + 8));
  *(undefined1 (**) [16])(this + 0xa8) = local_a0;
  VisitBytecodes(this);
  ppNVar3 = *(Node ***)(this + 0x170);
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
  uVar10 = *(long *)(this + 0x178) - (long)ppNVar3;
  pOVar8 = (Operator *)
           CommonOperatorBuilder::End
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                      (long)(uVar10 * 0x20000000) >> 0x20);
  uVar9 = Graph::NewNode(pGVar2,pOVar8,(int)(uVar10 >> 3),ppNVar3,false);
  *(undefined8 *)(**(long **)(this + 0x10) + 0x10) = uVar9;
  *(undefined8 *)(lVar1 + 0x10) = uVar11;
  return;
}

