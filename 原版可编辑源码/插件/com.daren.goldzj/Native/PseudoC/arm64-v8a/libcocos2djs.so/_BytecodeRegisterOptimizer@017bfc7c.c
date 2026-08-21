
/* v8::internal::interpreter::BytecodeRegisterOptimizer::~BytecodeRegisterOptimizer() */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::~BytecodeRegisterOptimizer
          (BytecodeRegisterOptimizer *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__BytecodeRegisterOptimizer_01cdaf90;
  std::__ndk1::
  __deque_base<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
  ::clear((__deque_base<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
           *)(this + 0x48));
  puVar3 = *(undefined8 **)(this + 0x50);
  puVar1 = *(undefined8 **)(this + 0x58);
  if (puVar3 == puVar1) {
LAB_017bfd1c:
    puVar3 = *(undefined8 **)(this + 0x48);
    if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x60) - (long)puVar3))) {
      uVar4 = *(long *)(this + 0x60) - (long)puVar3 >> 3;
      if ((*(long *)(this + 0x70) == 0) || (*(ulong *)(*(long *)(this + 0x70) + 8) <= uVar4)) {
        puVar3[1] = uVar4;
        *puVar3 = *(undefined8 *)(this + 0x70);
        *(undefined8 **)(this + 0x70) = puVar3;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(long *)(this + 0x28) = *(long *)(this + 0x20);
    }
    return;
  }
  puVar5 = *(undefined8 **)(this + 0x90);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar5 != (undefined8 *)0x0) goto LAB_017bfcec;
  do {
    puVar5 = puVar6;
    puVar5[1] = 0x200;
    *puVar5 = *(undefined8 *)(this + 0x90);
    *(undefined8 **)(this + 0x90) = puVar5;
    do {
      puVar3 = puVar3 + 1;
      if (puVar1 == puVar3) {
        lVar2 = *(long *)(this + 0x58) - *(long *)(this + 0x50);
        if (lVar2 != 0) {
          *(ulong *)(this + 0x58) =
               *(long *)(this + 0x58) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_017bfd1c;
      }
      puVar6 = (undefined8 *)*puVar3;
      if (puVar5 == (undefined8 *)0x0) break;
LAB_017bfcec:
    } while (0x200 < (ulong)puVar5[1]);
  } while( true );
}

