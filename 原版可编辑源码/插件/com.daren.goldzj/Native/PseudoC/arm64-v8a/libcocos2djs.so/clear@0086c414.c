
/* std::__ndk1::__deque_base<std::__ndk1::__state<char>,
   std::__ndk1::allocator<std::__ndk1::__state<char> > >::clear() */

void __thiscall
std::__ndk1::
__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::clear
          (__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
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
    lVar7 = puVar2[uVar5 / 0x2a] + (uVar5 % 0x2a) * 0x60;
    lVar6 = puVar2[(*(long *)(this + 0x28) + uVar5) / 0x2a] +
            ((*(long *)(this + 0x28) + uVar5) % 0x2a) * 0x60;
    if (lVar6 != lVar7) {
      plVar8 = puVar2 + uVar5 / 0x2a;
      do {
        pvVar1 = *(void **)(lVar7 + 0x38);
        if (pvVar1 != (void *)0x0) {
          *(void **)(lVar7 + 0x40) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar1 = *(void **)(lVar7 + 0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)(lVar7 + 0x28) = pvVar1;
          operator_delete(pvVar1);
        }
        lVar7 = lVar7 + 0x60;
        if (lVar7 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
      } while (lVar6 != lVar7);
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
    uVar3 = 0x15;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x2a;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}

