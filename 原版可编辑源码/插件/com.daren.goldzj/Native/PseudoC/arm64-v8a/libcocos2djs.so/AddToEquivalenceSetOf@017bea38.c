
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::AddToEquivalenceSetOf(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::AddToEquivalenceSetOf
          (RegisterInfo *this,RegisterInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(*(long *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(RegisterInfo **)(this + 0x18) = param_1;
  *(RegisterInfo **)(param_1 + 0x10) = this;
  *(RegisterInfo **)(*(long *)(this + 0x10) + 0x18) = this;
  uVar1 = *(undefined4 *)(param_1 + 4);
  this[8] = (RegisterInfo)0x0;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

