
/* v8::internal::compiler::DecompressionOptimizer::ChangeNodes() */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::ChangeNodes(DecompressionOptimizer *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  Operator *pOVar6;
  Node *pNVar7;
  CommonOperatorBuilder *this_00;
  undefined4 uVar8;
  undefined8 local_48;
  
  puVar2 = *(undefined8 **)(this + 0x70);
  puVar3 = *(undefined8 **)(this + 0x78);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    pNVar7 = (Node *)*puVar2;
    uVar1 = 0;
    if (*(uint *)(this + 0x18) <= *(uint *)(pNVar7 + 0x10)) {
      uVar1 = *(uint *)(pNVar7 + 0x10) - *(uint *)(this + 0x18);
    }
    if ((uVar1 & 0xff) != 2) {
      pOVar6 = *(Operator **)pNVar7;
      sVar4 = *(short *)(pOVar6 + 0x10);
      if (sVar4 == 0x1e) {
        this_00 = *(CommonOperatorBuilder **)(this + 8);
        local_48 = HeapConstantOf(pOVar6);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::CompressedHeapConstant(this_00,(Handle *)&local_48);
      }
      else {
        if (sVar4 != 0x23) {
          if (sVar4 == 0x1cf) {
            TryRemoveChangeTaggedToCompressed(this,pNVar7);
          }
          else {
            ChangeLoad(this,pNVar7);
          }
          goto LAB_0169f8e0;
        }
        cVar5 = PhiRepresentationOf(pOVar6);
        uVar8 = 9;
        if (cVar5 == '\b') {
          uVar8 = 10;
        }
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::Phi
                           (*(CommonOperatorBuilder **)(this + 8),uVar8,
                            *(undefined4 *)(*(long *)pNVar7 + 0x14));
      }
      NodeProperties::ChangeOp(pNVar7,pOVar6);
    }
LAB_0169f8e0:
    puVar2 = puVar2 + 1;
  } while( true );
}

