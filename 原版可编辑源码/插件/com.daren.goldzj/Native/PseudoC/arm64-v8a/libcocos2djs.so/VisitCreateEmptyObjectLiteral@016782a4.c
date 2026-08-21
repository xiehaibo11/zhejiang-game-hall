
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEmptyObjectLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEmptyObjectLiteral
          (BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  Node *local_28;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::CreateEmptyLiteralObject
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  local_28 = *(Node **)(this + 0x168);
  if (local_28 == (Node *)0x0) {
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),-1,"%closure");
    local_28 = *(Node **)(**(long **)(this + 0x10) + 8);
    local_28 = (Node *)MakeNode(this,pOVar2,1,&local_28,false);
    *(Node **)(this + 0x168) = local_28;
  }
  uVar3 = MakeNode(this,pOVar1,1,&local_28,false);
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

