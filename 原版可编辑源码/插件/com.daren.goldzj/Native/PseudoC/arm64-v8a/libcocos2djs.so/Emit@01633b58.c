
/* v8::internal::compiler::InstructionSelector::Emit(v8::internal::compiler::Instruction*) */

Instruction * __thiscall
v8::internal::compiler::InstructionSelector::Emit(InstructionSelector *this,Instruction *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *this_00;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 == *(undefined8 **)(this + 0x48)) {
    lVar5 = (long)puVar4 - *(long *)(this + 0x38) >> 3;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = (long)*(undefined8 **)(this + 0x48) - *(long *)(this + 0x38);
    uVar7 = lVar3 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x50);
      uVar7 = uVar1 * 8;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar7;
      }
      else {
        lVar3 = Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar4 = (undefined8 *)(lVar3 + lVar5 * 8);
    puVar6 = puVar4 + 1;
    *puVar4 = param_1;
    puVar2 = *(undefined8 **)(this + 0x38);
    puVar8 = *(undefined8 **)(this + 0x40);
    while (puVar8 != puVar2) {
      puVar8 = puVar8 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar8;
    }
    *(undefined8 **)(this + 0x38) = puVar4;
    *(undefined8 **)(this + 0x40) = puVar6;
    *(ulong *)(this + 0x48) = lVar3 + uVar1 * 8;
  }
  else {
    *puVar4 = param_1;
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
  }
  return param_1;
}

