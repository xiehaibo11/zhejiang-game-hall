
/* v8::internal::interpreter::BytecodeGenerator::VisitGetTemplateObject(v8::internal::GetTemplateObject*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitGetTemplateObject
          (BytecodeGenerator *this,GetTemplateObject *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Zone *this_00;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  iVar3 = *(int *)param_1;
  if ((iVar3 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar3;
  }
  uVar4 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
  puVar6 = *(undefined8 **)(this + 0x2d8);
  if (puVar6 < *(undefined8 **)(this + 0x2e0)) {
    *puVar6 = param_1;
    puVar6[1] = uVar4;
    *(long *)(this + 0x2d8) = *(long *)(this + 0x2d8) + 0x10;
  }
  else {
    lVar9 = (long)puVar6 - *(long *)(this + 0x2d0) >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)*(undefined8 **)(this + 0x2e0) - *(long *)(this + 0x2d0);
    uVar7 = lVar5 >> 3;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x3fffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x2e8);
      uVar7 = uVar1 * 0x10;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
      }
      else {
        lVar5 = Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar9 * 0x10);
    *puVar6 = param_1;
    puVar6[1] = uVar4;
    lVar8 = *(long *)(this + 0x2d0);
    puVar2 = puVar6;
    for (lVar9 = *(long *)(this + 0x2d8); lVar9 != lVar8; lVar9 = lVar9 + -0x10) {
      uVar10 = *(undefined8 *)(lVar9 + -0x10);
      puVar2[-1] = *(undefined8 *)(lVar9 + -8);
      puVar2[-2] = uVar10;
      puVar2 = puVar2 + -2;
    }
    *(undefined8 **)(this + 0x2d0) = puVar2;
    *(undefined8 **)(this + 0x2d8) = puVar6 + 2;
    *(ulong *)(this + 0x2e0) = lVar5 + uVar1 * 0x10;
  }
  iVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x13);
  BytecodeArrayBuilder::GetTemplateObject((BytecodeArrayBuilder *)(this + 0x18),uVar4,iVar3);
  return;
}

