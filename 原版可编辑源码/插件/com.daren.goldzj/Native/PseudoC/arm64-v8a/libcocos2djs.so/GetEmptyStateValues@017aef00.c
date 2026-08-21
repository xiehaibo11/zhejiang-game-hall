
/* v8::internal::compiler::StateValuesCache::GetEmptyStateValues() */

void __thiscall
v8::internal::compiler::StateValuesCache::GetEmptyStateValues(StateValuesCache *this)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_28;
  
  if (*(long *)(this + 0x40) == 0) {
    this_00 = (Graph *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             CommonOperatorBuilder::StateValues
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,0);
    local_28 = (Node *)0x0;
    uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
    *(undefined8 *)(this + 0x40) = uVar2;
  }
  return;
}

