
/* v8::internal::compiler::BytecodeGraphBuilder::GetConstructArgumentsFromRegister(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::interpreter::Register, int) */

undefined8 * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::GetConstructArgumentsFromRegister
          (BytecodeGraphBuilder *this,undefined8 param_1,undefined8 param_2,int param_4,uint param_5
          )

{
  Zone *this_00;
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  this_00 = *(Zone **)(this + 8);
  uVar3 = -(ulong)(param_5 + 2 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_5 + 2) << 3;
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < uVar3) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,uVar3);
  }
  else {
    *(ulong *)(this_00 + 0x10) = (long)puVar2 + uVar3;
  }
  *puVar2 = param_1;
  if (0 < (int)param_5) {
    uVar3 = (ulong)param_5;
    puVar4 = puVar2;
    do {
      puVar4 = puVar4 + 1;
      uVar1 = Environment::LookupRegister(*(Environment **)(this + 0xa8),param_4);
      *puVar4 = uVar1;
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
    } while (uVar3 != 0);
  }
  puVar2[(int)(param_5 + 1)] = param_2;
  return puVar2;
}

