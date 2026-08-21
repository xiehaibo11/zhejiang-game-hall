
/* std::__ndk1::__deque_base<cocostudio::MovementEvent*,
   std::__ndk1::allocator<cocostudio::MovementEvent*> >::clear() */

void __thiscall
std::__ndk1::
__deque_base<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>::clear
          (__deque_base<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>
           *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = *(long *)(this + 0x10) - (long)puVar2;
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(this + 0x20);
    plVar5 = (long *)((long)puVar2 + (uVar6 >> 6 & 0x3fffffffffffff8));
    lVar7 = *plVar5 + (uVar6 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar2 + (*(long *)(this + 0x28) + uVar6 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0x28) + uVar6 & 0x1ff) * 8;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 8, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00c3c17c;
      }
    }
  }
LAB_00c3c17c:
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar6 = lVar4 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar2;
    lVar4 = *(long *)(this + 0x10) - (long)puVar2;
  }
  if (uVar6 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    uVar3 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}

