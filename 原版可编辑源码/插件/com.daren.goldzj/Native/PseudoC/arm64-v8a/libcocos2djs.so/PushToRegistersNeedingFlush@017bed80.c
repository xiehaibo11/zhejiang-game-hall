
/* v8::internal::interpreter::BytecodeRegisterOptimizer::PushToRegistersNeedingFlush(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::PushToRegistersNeedingFlush
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1[10] == (RegisterInfo)0x0) {
    param_1[10] = (RegisterInfo)0x1;
    lVar2 = *(long *)(this + 0x50);
    uVar1 = 0;
    if (*(long *)(this + 0x58) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x58) - lVar2) * 0x40 - 1;
    }
    uVar3 = *(long *)(this + 0x80) + *(long *)(this + 0x78);
    if (uVar1 == uVar3) {
      std::__ndk1::
      deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
      ::__add_back_capacity
                ((deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
                  *)(this + 0x48));
      lVar2 = *(long *)(this + 0x50);
      uVar3 = *(long *)(this + 0x78) + *(long *)(this + 0x80);
    }
    *(RegisterInfo **)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) =
         param_1;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  }
  return;
}

