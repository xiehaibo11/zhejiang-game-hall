
/* v8::internal::compiler::BytecodeGraphBuilder::~BytecodeGraphBuilder() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::~BytecodeGraphBuilder(BytecodeGraphBuilder *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (*(long *)(this + 0x1b0) != 0) {
    *(long *)(this + 0x1b8) = *(long *)(this + 0x1b0);
  }
  if (*(long *)(this + 0x170) != 0) {
    *(long *)(this + 0x178) = *(long *)(this + 0x170);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler>>
  ::clear((__deque_base<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler>>
           *)(this + 0x100));
  puVar5 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  if (puVar5 == puVar1) {
LAB_0167e62c:
    puVar5 = *(undefined8 **)(this + 0x100);
    if ((puVar5 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x118) - (long)puVar5))) {
      uVar6 = *(long *)(this + 0x118) - (long)puVar5 >> 3;
      if ((*(long *)(this + 0x128) == 0) || (*(ulong *)(*(long *)(this + 0x128) + 8) <= uVar6)) {
        puVar5[1] = uVar6;
        *puVar5 = *(undefined8 *)(this + 0x128);
        *(undefined8 **)(this + 0x128) = puVar5;
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
    ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
               *)(this + 0xe0),*(__tree_node **)(this + 0xe8));
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
    ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
               *)(this + 0xc0),*(__tree_node **)(this + 200));
    plVar3 = *(long **)(this + 0x88);
    *(undefined8 *)(this + 0x88) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))();
    }
    pvVar4 = *(void **)(this + 0x80);
    *(undefined8 *)(this + 0x80) = 0;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar4);
    return;
  }
  puVar7 = *(undefined8 **)(this + 0x148);
  puVar8 = (undefined8 *)*puVar5;
  if (puVar7 != (undefined8 *)0x0) goto LAB_0167e5fc;
  do {
    puVar7 = puVar8;
    puVar7[1] = 0x100;
    *puVar7 = *(undefined8 *)(this + 0x148);
    *(undefined8 **)(this + 0x148) = puVar7;
    do {
      puVar5 = puVar5 + 1;
      if (puVar1 == puVar5) {
        lVar2 = *(long *)(this + 0x110) - *(long *)(this + 0x108);
        if (lVar2 != 0) {
          *(ulong *)(this + 0x110) =
               *(long *)(this + 0x110) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_0167e62c;
      }
      puVar8 = (undefined8 *)*puVar5;
      if (puVar7 == (undefined8 *)0x0) break;
LAB_0167e5fc:
    } while (0x100 < (ulong)puVar7[1]);
  } while( true );
}

