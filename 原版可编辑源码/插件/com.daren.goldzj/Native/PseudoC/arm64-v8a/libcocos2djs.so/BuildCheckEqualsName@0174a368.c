
/* v8::internal::compiler::JSNativeContextSpecialization::BuildCheckEqualsName(v8::internal::compiler::NameRef
   const&, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::BuildCheckEqualsName
          (JSNativeContextSpecialization *this,NameRef *param_1,Node *param_2,Node *param_3,
          Node *param_4)

{
  ulong uVar1;
  Operator *pOVar2;
  Graph *this_00;
  Node *local_60;
  Node *pNStack_58;
  Node *local_50;
  Node *pNStack_48;
  
  uVar1 = ObjectRef::IsSymbol((ObjectRef *)param_1);
  if ((uVar1 & 1) == 0) {
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::CheckEqualsInternalizedString
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  }
  else {
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::CheckEqualsSymbol
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  }
  this_00 = *(Graph **)*(JSGraph **)(this + 0x10);
  local_60 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)param_1);
  pNStack_58 = param_2;
  local_50 = param_3;
  pNStack_48 = param_4;
  Graph::NewNode(this_00,pOVar2,4,&local_60,false);
  return;
}

