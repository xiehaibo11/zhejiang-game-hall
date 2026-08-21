
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::MoveToNewEquivalenceSet(unsigned
   int, bool) */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::MoveToNewEquivalenceSet
          (RegisterInfo *this,uint param_1,bool param_2)

{
  *(undefined8 *)(*(long *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x10) = *(undefined8 *)(this + 0x10);
  *(RegisterInfo **)(this + 0x10) = this;
  *(RegisterInfo **)(this + 0x18) = this;
  *(uint *)(this + 4) = param_1;
  this[8] = (RegisterInfo)param_2;
  return;
}

