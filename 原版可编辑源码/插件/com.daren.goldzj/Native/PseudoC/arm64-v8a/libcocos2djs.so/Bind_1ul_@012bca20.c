
/* void 
   v8::internal::compiler::GraphAssembler::Bind<1ul>(v8::internal::compiler::GraphAssemblerLabel<1ul>*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::Bind<1ul>(GraphAssembler *this,GraphAssemblerLabel *param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *local_28;
  
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x18);
  BindBasicBlock(this,*(BasicBlock **)(param_1 + 8));
  *param_1 = (GraphAssemblerLabel)0x1;
  if ((*(ulong *)(param_1 + 0x10) < 2) && (*(int *)(param_1 + 4) != 2)) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],1);
    local_28 = *(Node **)(this + 0x28);
    pNVar2 = (Node *)Graph::NewNode(this_00,pOVar1,1,&local_28,false);
    uVar3 = AddNode(this,pNVar2);
    *(undefined8 *)(this + 0x28) = uVar3;
    return;
  }
  AddNode(this,*(Node **)(param_1 + 0x20));
  AddNode(this,*(Node **)(param_1 + 0x18));
  AddNode(this,*(Node **)(param_1 + 0x28));
  return;
}

