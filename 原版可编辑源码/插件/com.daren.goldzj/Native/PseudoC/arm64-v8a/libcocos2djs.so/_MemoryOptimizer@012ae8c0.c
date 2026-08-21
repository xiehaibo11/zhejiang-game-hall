
/* v8::internal::compiler::MemoryOptimizer::~MemoryOptimizer() */

void __thiscall v8::internal::compiler::MemoryOptimizer::~MemoryOptimizer(MemoryOptimizer *this)

{
  undefined8 *puVar1;
  long lVar2;
  MemoryOptimizer *pMVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  std::__ndk1::
  __deque_base<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
  ::clear((__deque_base<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
           *)(this + 0x100));
  puVar4 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  if (puVar4 != puVar1) {
    puVar7 = *(undefined8 **)(this + 0x148);
    puVar8 = (undefined8 *)*puVar4;
    if (puVar7 != (undefined8 *)0x0) goto LAB_012ae920;
    do {
      puVar7 = puVar8;
      puVar7[1] = 0x100;
      *puVar7 = *(undefined8 *)(this + 0x148);
      *(undefined8 **)(this + 0x148) = puVar7;
      do {
        puVar4 = puVar4 + 1;
        if (puVar1 == puVar4) {
          lVar2 = *(long *)(this + 0x110) - *(long *)(this + 0x108);
          if (lVar2 != 0) {
            *(ulong *)(this + 0x110) =
                 *(long *)(this + 0x110) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          goto LAB_012ae950;
        }
        puVar8 = (undefined8 *)*puVar4;
        if (puVar7 == (undefined8 *)0x0) break;
LAB_012ae920:
      } while (0x100 < (ulong)puVar7[1]);
    } while( true );
  }
LAB_012ae950:
  puVar4 = *(undefined8 **)(this + 0x100);
  if ((puVar4 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x118) - (long)puVar4))) {
    uVar6 = *(long *)(this + 0x118) - (long)puVar4 >> 3;
    if ((*(long *)(this + 0x128) == 0) || (*(ulong *)(*(long *)(this + 0x128) + 8) <= uVar6)) {
      puVar4[1] = uVar6;
      *puVar4 = *(undefined8 *)(this + 0x128);
      *(undefined8 **)(this + 0x128) = puVar4;
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
             *)(this + 0xe0),*(__tree_node **)(this + 0xe8));
  pMVar3 = *(MemoryOptimizer **)(this + 0xb0);
  *(undefined ***)(this + 0x40) = &PTR__MemoryLowering_01cd9578;
  if (this + 0x90 == pMVar3) {
    pcVar5 = *(code **)(*(long *)pMVar3 + 0x20);
  }
  else {
    if (pMVar3 == (MemoryOptimizer *)0x0) goto LAB_012ae9d8;
    pcVar5 = *(code **)(*(long *)pMVar3 + 0x28);
  }
  (*pcVar5)();
LAB_012ae9d8:
  GraphAssembler::~GraphAssembler((GraphAssembler *)this);
  return;
}

