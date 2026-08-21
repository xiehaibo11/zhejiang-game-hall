
/* std::__ndk1::__deque_base<std::__ndk1::unique_ptr<v8::IdleTask,
   std::__ndk1::default_delete<v8::IdleTask> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,
   std::__ndk1::default_delete<v8::IdleTask> > > >::clear() */

void __thiscall
std::__ndk1::
__deque_base<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
::clear(__deque_base<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
        *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar6;
  
  puVar3 = *(undefined8 **)(this + 8);
  puVar6 = *(undefined8 **)(this + 0x10);
  if (puVar6 != puVar3) {
    uVar7 = *(ulong *)(this + 0x20);
    plVar8 = (long *)((long)puVar3 + (uVar7 >> 6 & 0x3fffffffffffff8));
    plVar9 = (long *)(*plVar8 + (uVar7 & 0x1ff) * 8);
    plVar1 = (long *)(*(long *)((long)puVar3 +
                               (*(long *)(this + 0x28) + uVar7 >> 6 & 0x3fffffffffffff8)) +
                     (*(long *)(this + 0x28) + uVar7 & 0x1ff) * 8);
    if (plVar1 != plVar9) {
      do {
        plVar2 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar9 = (long *)*plVar8;
        }
      } while (plVar1 != plVar9);
      puVar3 = *(undefined8 **)(this + 8);
      puVar6 = *(undefined8 **)(this + 0x10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar5 = (long)puVar6 - (long)puVar3;
  while (uVar7 = lVar5 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar3;
    lVar5 = *(long *)(this + 0x10) - (long)puVar3;
  }
  if (uVar7 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar4;
  return;
}

