
/* v8::internal::compiler::RegisterAllocationData::PhiMapValue::PhiMapValue(v8::internal::compiler::PhiInstruction*,
   v8::internal::compiler::InstructionBlock const*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::PhiMapValue::PhiMapValue
          (PhiMapValue *this,PhiInstruction *param_1,InstructionBlock *param_2,Zone *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(PhiInstruction **)this = param_1;
  *(InstructionBlock **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x28) = param_3;
  *(undefined4 *)(this + 0x30) = 0x20;
  lVar2 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_3 + 0x10);
    uVar4 = lVar2 * 2;
    if (uVar4 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar3) ||
        uVar4 - (*(long *)(param_3 + 0x18) - (long)puVar3) == 0) {
      *(ulong *)(param_3 + 0x10) = (long)puVar3 + uVar4;
    }
    else {
      puVar3 = (undefined8 *)Zone::NewExpand(param_3,uVar4);
    }
    puVar1 = *(undefined8 **)(this + 0x10);
    puVar5 = *(undefined8 **)(this + 0x18);
    puVar6 = puVar3;
    while (puVar5 != puVar1) {
      puVar5 = puVar5 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar5;
    }
    *(undefined8 **)(this + 0x10) = puVar6;
    *(undefined8 **)(this + 0x18) = puVar3;
    *(undefined8 **)(this + 0x20) = puVar3 + (lVar2 >> 2);
  }
  return;
}

