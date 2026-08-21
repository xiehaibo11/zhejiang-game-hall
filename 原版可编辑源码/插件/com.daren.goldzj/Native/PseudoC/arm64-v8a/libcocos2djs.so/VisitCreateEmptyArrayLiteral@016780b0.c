
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEmptyArrayLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEmptyArrayLiteral
          (BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  FeedbackSource local_30 [16];
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  FeedbackSource::FeedbackSource
            (local_30,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar1);
  pOVar2 = (Operator *)
           JSOperatorBuilder::CreateEmptyLiteralArray
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),local_30);
  uVar3 = MakeNode(this,pOVar2,0,(Node **)0x0,false);
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

