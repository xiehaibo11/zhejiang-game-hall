
/* std::__ndk1::stack<int, std::__ndk1::deque<int, std::__ndk1::allocator<int> > >::~stack() */

void __thiscall
std::__ndk1::stack<int,std::__ndk1::deque<int,std::__ndk1::allocator<int>>>::~stack
          (stack<int,std::__ndk1::deque<int,std::__ndk1::allocator<int>>> *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  lVar3 = (long)puVar2 - (long)puVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x20);
    plVar5 = (long *)((long)puVar8 + (uVar6 >> 7 & 0x1fffffffffffff8));
    lVar7 = *plVar5 + (uVar6 & 0x3ff) * 4;
    lVar1 = *(long *)((long)puVar8 + (*(long *)(this + 0x28) + uVar6 >> 7 & 0x1fffffffffffff8)) +
            (*(long *)(this + 0x28) + uVar6 & 0x3ff) * 4;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 4, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00fe43e4;
      }
    }
  }
LAB_00fe43e4:
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar8);
    puVar2 = *(undefined8 **)(this + 0x10);
    puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar8;
    lVar3 = (long)puVar2 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar6 != 2) goto LAB_00fe4438;
    uVar4 = 0x400;
  }
  *(undefined8 *)(this + 0x20) = uVar4;
LAB_00fe4438:
  if (puVar8 != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar2 != puVar9);
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

