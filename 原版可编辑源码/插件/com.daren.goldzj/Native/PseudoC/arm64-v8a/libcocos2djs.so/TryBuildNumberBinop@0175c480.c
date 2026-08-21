
/* v8::internal::compiler::JSSpeculativeBinopBuilder::TryBuildNumberBinop() */

void __thiscall
v8::internal::compiler::JSSpeculativeBinopBuilder::TryBuildNumberBinop
          (JSSpeculativeBinopBuilder *this)

{
  long lVar1;
  char cVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar5 = *(undefined8 **)this;
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)&local_58,puVar5[3],puVar5[4],*(undefined4 *)(this + 0x30));
  cVar2 = JSHeapBroker::GetFeedbackForBinaryOperation
                    ((JSHeapBroker *)*puVar5,(FeedbackSource *)&local_58);
  if ((byte)(cVar2 - 1U) < 5) {
    pOVar3 = (Operator *)SpeculativeNumberOp(this);
    uStack_50 = *(undefined8 *)(this + 0x18);
    local_58 = *(Node **)(this + 0x10);
    local_48 = *(undefined8 *)(this + 0x20);
    uStack_40 = *(undefined8 *)(this + 0x28);
    uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(*(long *)this + 8),pOVar3,4,&local_58,false);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

