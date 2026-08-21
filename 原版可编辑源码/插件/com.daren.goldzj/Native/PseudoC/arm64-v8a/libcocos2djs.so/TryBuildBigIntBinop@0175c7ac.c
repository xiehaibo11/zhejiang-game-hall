
/* v8::internal::compiler::JSSpeculativeBinopBuilder::TryBuildBigIntBinop() */

void __thiscall
v8::internal::compiler::JSSpeculativeBinopBuilder::TryBuildBigIntBinop
          (JSSpeculativeBinopBuilder *this)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  Operator *pOVar4;
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
  bVar2 = JSHeapBroker::GetFeedbackForBinaryOperation
                    ((JSHeapBroker *)*puVar5,(FeedbackSource *)&local_58);
  uVar3 = 0;
  if (6 < bVar2) {
    if (bVar2 == 7) {
      if (*(short *)(*(long *)(this + 8) + 0x10) == 0x2be) {
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::SpeculativeBigIntSubtract
                           (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178),0)
        ;
      }
      else {
        if (*(short *)(*(long *)(this + 8) + 0x10) != 0x2bd) goto LAB_0175c830;
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::SpeculativeBigIntAdd
                           (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178),0)
        ;
      }
      uStack_50 = *(undefined8 *)(this + 0x18);
      local_58 = *(Node **)(this + 0x10);
      local_48 = *(undefined8 *)(this + 0x20);
      uStack_40 = *(undefined8 *)(this + 0x28);
      uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(*(long *)this + 8),pOVar4,4,&local_58,false)
      ;
    }
    else if (bVar2 != 8) {
LAB_0175c830:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

