
/* v8::internal::ItemParallelJob::~ItemParallelJob() */

void __thiscall v8::internal::ItemParallelJob::~ItemParallelJob(ItemParallelJob *this)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  pvVar1 = *(void **)this;
  if (*(void **)(this + 8) != pvVar1) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)((long)pvVar1 + uVar4 * 8);
      if (plVar2[1] != 2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","item->IsFinished()");
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      pvVar1 = *(void **)this;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 8) - (long)pvVar1 >> 3));
  }
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x20);
    plVar3 = plVar2;
    if (plVar5 != plVar2) {
      do {
        plVar5 = plVar5 + -1;
        plVar3 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      } while (plVar2 != plVar5);
      plVar3 = *(long **)(this + 0x18);
    }
    *(long **)(this + 0x20) = plVar2;
    operator_delete(plVar3);
    pvVar1 = *(void **)this;
  }
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar1);
  return;
}

