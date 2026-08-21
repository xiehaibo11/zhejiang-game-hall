
/* v8::internal::compiler::RepresentationSelector::~RepresentationSelector() */

void __thiscall
v8::internal::compiler::RepresentationSelector::~RepresentationSelector
          (RepresentationSelector *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  std::__ndk1::
  __deque_base<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
  ::clear((__deque_base<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
           *)(this + 0xd8));
  puVar3 = *(undefined8 **)(this + 0xe0);
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar3 != puVar1) {
    puVar5 = *(undefined8 **)(this + 0x120);
    puVar6 = (undefined8 *)*puVar3;
    if (puVar5 != (undefined8 *)0x0) goto LAB_012d00a4;
    do {
      puVar5 = puVar6;
      puVar5[1] = 0x100;
      *puVar5 = *(undefined8 *)(this + 0x120);
      *(undefined8 **)(this + 0x120) = puVar5;
      do {
        puVar3 = puVar3 + 1;
        if (puVar1 == puVar3) {
          lVar2 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0);
          if (lVar2 != 0) {
            *(ulong *)(this + 0xe8) =
                 *(long *)(this + 0xe8) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          goto LAB_012d00d4;
        }
        puVar6 = (undefined8 *)*puVar3;
        if (puVar5 == (undefined8 *)0x0) break;
LAB_012d00a4:
      } while (0x100 < (ulong)puVar5[1]);
    } while( true );
  }
LAB_012d00d4:
  puVar3 = *(undefined8 **)(this + 0xd8);
  if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0xf0) - (long)puVar3))) {
    uVar4 = *(long *)(this + 0xf0) - (long)puVar3 >> 3;
    if ((*(long *)(this + 0x100) == 0) || (*(ulong *)(*(long *)(this + 0x100) + 8) <= uVar4)) {
      puVar3[1] = uVar4;
      *puVar3 = *(undefined8 *)(this + 0x100);
      *(undefined8 **)(this + 0x100) = puVar3;
    }
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)(this + 0x88));
  puVar3 = *(undefined8 **)(this + 0x90);
  puVar1 = *(undefined8 **)(this + 0x98);
  if (puVar3 == puVar1) {
LAB_012d0194:
    puVar3 = *(undefined8 **)(this + 0x88);
    if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0xa0) - (long)puVar3))) {
      uVar4 = *(long *)(this + 0xa0) - (long)puVar3 >> 3;
      if ((*(long *)(this + 0xb0) == 0) || (*(ulong *)(*(long *)(this + 0xb0) + 8) <= uVar4)) {
        puVar3[1] = uVar4;
        *puVar3 = *(undefined8 *)(this + 0xb0);
        *(undefined8 **)(this + 0xb0) = puVar3;
      }
    }
    if (*(long *)(this + 0x58) != 0) {
      *(long *)(this + 0x60) = *(long *)(this + 0x58);
    }
    if (*(long *)(this + 0x38) != 0) {
      *(long *)(this + 0x40) = *(long *)(this + 0x38);
    }
    if (*(long *)(this + 0x18) != 0) {
      *(long *)(this + 0x20) = *(long *)(this + 0x18);
    }
    return;
  }
  puVar5 = *(undefined8 **)(this + 0xd0);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar5 != (undefined8 *)0x0) goto LAB_012d0164;
  do {
    puVar5 = puVar6;
    puVar5[1] = 0x200;
    *puVar5 = *(undefined8 *)(this + 0xd0);
    *(undefined8 **)(this + 0xd0) = puVar5;
    do {
      puVar3 = puVar3 + 1;
      if (puVar1 == puVar3) {
        lVar2 = *(long *)(this + 0x98) - *(long *)(this + 0x90);
        if (lVar2 != 0) {
          *(ulong *)(this + 0x98) =
               *(long *)(this + 0x98) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_012d0194;
      }
      puVar6 = (undefined8 *)*puVar3;
      if (puVar5 == (undefined8 *)0x0) break;
LAB_012d0164:
    } while (0x200 < (ulong)puVar5[1]);
  } while( true );
}

