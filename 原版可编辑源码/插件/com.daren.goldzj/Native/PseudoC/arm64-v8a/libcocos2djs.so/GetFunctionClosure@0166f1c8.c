
/* v8::internal::compiler::BytecodeGraphBuilder::GetFunctionClosure() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::GetFunctionClosure(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_8;
  
  if (*(long *)(this + 0x168) == 0) {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),-1,"%closure");
    local_8 = *(Node **)(**(long **)(this + 0x10) + 8);
    uVar2 = MakeNode(this,pOVar1,1,&local_8,false);
    *(undefined8 *)(this + 0x168) = uVar2;
  }
  return;
}

