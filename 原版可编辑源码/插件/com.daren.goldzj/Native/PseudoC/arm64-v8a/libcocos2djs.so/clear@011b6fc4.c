
/* std::__ndk1::__deque_base<v8::AllocationProfile::Node,
   std::__ndk1::allocator<v8::AllocationProfile::Node> >::clear() */

void __thiscall
std::__ndk1::
__deque_base<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>::clear
          (__deque_base<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>
           *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)(this + 0x10);
  if (puVar4 != puVar2) {
    uVar5 = *(ulong *)(this + 0x20);
    lVar7 = puVar2[uVar5 / 0x2e] + (uVar5 % 0x2e) * 0x58;
    lVar6 = puVar2[(*(long *)(this + 0x28) + uVar5) / 0x2e] +
            ((*(long *)(this + 0x28) + uVar5) % 0x2e) * 0x58;
    if (lVar6 != lVar7) {
      plVar8 = puVar2 + uVar5 / 0x2e;
      pvVar1 = *(void **)(lVar7 + 0x40);
      while( true ) {
        if (pvVar1 != (void *)0x0) {
          *(void **)(lVar7 + 0x48) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar1 = *(void **)(lVar7 + 0x28);
        if (pvVar1 != (void *)0x0) {
          *(void **)(lVar7 + 0x30) = pvVar1;
          operator_delete(pvVar1);
        }
        lVar7 = lVar7 + 0x58;
        if (lVar7 - *plVar8 == 0xfd0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
        if (lVar6 == lVar7) break;
        pvVar1 = *(void **)(lVar7 + 0x40);
      }
      puVar2 = *(undefined8 **)(this + 8);
      puVar4 = *(undefined8 **)(this + 0x10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar7 = (long)puVar4 - (long)puVar2;
  while (uVar5 = lVar7 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar2;
    lVar7 = *(long *)(this + 0x10) - (long)puVar2;
  }
  if (uVar5 == 1) {
    uVar3 = 0x17;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x2e;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}

