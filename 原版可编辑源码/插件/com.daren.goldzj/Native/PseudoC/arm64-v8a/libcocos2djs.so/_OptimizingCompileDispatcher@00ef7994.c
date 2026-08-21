
/* v8::internal::OptimizingCompileDispatcher::~OptimizingCompileDispatcher() */

void __thiscall
v8::internal::OptimizingCompileDispatcher::~OptimizingCompileDispatcher
          (OptimizingCompileDispatcher *this)

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
  
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0xd4));
  base::Mutex::~Mutex((Mutex *)(this + 0xac));
  base::Mutex::~Mutex((Mutex *)(this + 0x78));
  puVar8 = *(undefined8 **)(this + 0x50);
  puVar2 = *(undefined8 **)(this + 0x58);
  lVar3 = (long)puVar2 - (long)puVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x68);
    plVar5 = (long *)((long)puVar8 + (uVar6 >> 6 & 0x3fffffffffffff8));
    lVar7 = *plVar5 + (uVar6 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar8 + (*(long *)(this + 0x70) + uVar6 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0x70) + uVar6 & 0x1ff) * 8;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 8, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00ef7a44;
      }
    }
  }
LAB_00ef7a44:
  *(undefined8 *)(this + 0x70) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar8);
    puVar2 = *(undefined8 **)(this + 0x58);
    puVar8 = (undefined8 *)(*(long *)(this + 0x50) + 8);
    *(undefined8 **)(this + 0x50) = puVar8;
    lVar3 = (long)puVar2 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar6 != 2) goto LAB_00ef7a98;
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x68) = uVar4;
LAB_00ef7a98:
  if (puVar8 != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar2 != puVar9);
    lVar3 = *(long *)(this + 0x58) - *(long *)(this + 0x50);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x58) = *(long *)(this + 0x58) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x1c));
  return;
}

