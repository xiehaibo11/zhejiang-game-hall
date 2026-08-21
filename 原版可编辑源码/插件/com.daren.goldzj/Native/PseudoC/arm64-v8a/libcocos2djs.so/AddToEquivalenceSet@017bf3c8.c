
/* v8::internal::interpreter::BytecodeRegisterOptimizer::AddToEquivalenceSet(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,
   v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*) */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::AddToEquivalenceSet
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1,RegisterInfo *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2[10] == (RegisterInfo)0x0) {
    param_2[10] = (RegisterInfo)0x1;
    lVar3 = *(long *)(this + 0x50);
    uVar1 = 0;
    if (*(long *)(this + 0x58) - lVar3 != 0) {
      uVar1 = (*(long *)(this + 0x58) - lVar3) * 0x40 - 1;
    }
    uVar4 = *(long *)(this + 0x80) + *(long *)(this + 0x78);
    if (uVar1 == uVar4) {
      std::__ndk1::
      deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
      ::__add_back_capacity
                ((deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
                  *)(this + 0x48));
      lVar3 = *(long *)(this + 0x50);
      uVar4 = *(long *)(this + 0x78) + *(long *)(this + 0x80);
    }
    *(RegisterInfo **)(*(long *)(lVar3 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
         param_2;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  }
  *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(RegisterInfo **)(param_2 + 0x18) = param_1;
  *(RegisterInfo **)(param_1 + 0x10) = param_2;
  *(RegisterInfo **)(*(long *)(param_2 + 0x10) + 0x18) = param_2;
  uVar2 = *(undefined4 *)(param_1 + 4);
  param_2[8] = (RegisterInfo)0x0;
  *(undefined4 *)(param_2 + 4) = uVar2;
  this[0xa8] = (BytecodeRegisterOptimizer)0x1;
  return;
}

