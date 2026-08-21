
/* v8::internal::compiler::GraphReducer::~GraphReducer() */

void __thiscall v8::internal::compiler::GraphReducer::~GraphReducer(GraphReducer *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__GraphReducer_01cccf78;
  std::__ndk1::
  __deque_base<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
  ::clear((__deque_base<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
           *)(this + 0x90));
  puVar3 = *(undefined8 **)(this + 0x98);
  puVar1 = *(undefined8 **)(this + 0xa0);
  if (puVar3 != puVar1) {
    puVar5 = *(undefined8 **)(this + 0xd8);
    puVar6 = (undefined8 *)*puVar3;
    if (puVar5 != (undefined8 *)0x0) goto LAB_016c7eb0;
    do {
      puVar5 = puVar6;
      puVar5[1] = 0x100;
      *puVar5 = *(undefined8 *)(this + 0xd8);
      *(undefined8 **)(this + 0xd8) = puVar5;
      do {
        puVar3 = puVar3 + 1;
        if (puVar1 == puVar3) {
          lVar2 = *(long *)(this + 0xa0) - *(long *)(this + 0x98);
          if (lVar2 != 0) {
            *(ulong *)(this + 0xa0) =
                 *(long *)(this + 0xa0) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          goto LAB_016c7ee0;
        }
        puVar6 = (undefined8 *)*puVar3;
        if (puVar5 == (undefined8 *)0x0) break;
LAB_016c7eb0:
      } while (0x100 < (ulong)puVar5[1]);
    } while( true );
  }
LAB_016c7ee0:
  puVar3 = *(undefined8 **)(this + 0x90);
  if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0xa8) - (long)puVar3))) {
    uVar4 = *(long *)(this + 0xa8) - (long)puVar3 >> 3;
    if ((*(long *)(this + 0xb8) == 0) || (*(ulong *)(*(long *)(this + 0xb8) + 8) <= uVar4)) {
      puVar3[1] = uVar4;
      *puVar3 = *(undefined8 *)(this + 0xb8);
      *(undefined8 **)(this + 0xb8) = puVar3;
    }
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)(this + 0x40));
  puVar3 = *(undefined8 **)(this + 0x48);
  puVar1 = *(undefined8 **)(this + 0x50);
  if (puVar3 == puVar1) {
LAB_016c7fa0:
    puVar3 = *(undefined8 **)(this + 0x40);
    if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x58) - (long)puVar3))) {
      uVar4 = *(long *)(this + 0x58) - (long)puVar3 >> 3;
      if ((*(long *)(this + 0x68) == 0) || (*(ulong *)(*(long *)(this + 0x68) + 8) <= uVar4)) {
        puVar3[1] = uVar4;
        *puVar3 = *(undefined8 *)(this + 0x68);
        *(undefined8 **)(this + 0x68) = puVar3;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(long *)(this + 0x28) = *(long *)(this + 0x20);
    }
    return;
  }
  puVar5 = *(undefined8 **)(this + 0x88);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar5 != (undefined8 *)0x0) goto LAB_016c7f70;
  do {
    puVar5 = puVar6;
    puVar5[1] = 0x200;
    *puVar5 = *(undefined8 *)(this + 0x88);
    *(undefined8 **)(this + 0x88) = puVar5;
    do {
      puVar3 = puVar3 + 1;
      if (puVar1 == puVar3) {
        lVar2 = *(long *)(this + 0x50) - *(long *)(this + 0x48);
        if (lVar2 != 0) {
          *(ulong *)(this + 0x50) =
               *(long *)(this + 0x50) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_016c7fa0;
      }
      puVar6 = (undefined8 *)*puVar3;
      if (puVar5 == (undefined8 *)0x0) break;
LAB_016c7f70:
    } while (0x200 < (ulong)puVar5[1]);
  } while( true );
}

