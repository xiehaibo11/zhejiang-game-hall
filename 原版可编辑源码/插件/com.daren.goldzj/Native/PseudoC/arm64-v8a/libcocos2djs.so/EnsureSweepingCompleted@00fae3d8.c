
/* v8::internal::MarkCompactCollector::EnsureSweepingCompleted() */

void __thiscall
v8::internal::MarkCompactCollector::EnsureSweepingCompleted(MarkCompactCollector *this)

{
  undefined **local_38;
  undefined **ppuStack_30;
  Heap *local_28;
  
  if ((*(Sweeper **)(this + 0x26f8))[0xf9] != (Sweeper)0x0) {
    Sweeper::EnsureCompleted(*(Sweeper **)(this + 0x26f8));
    (**(code **)(**(long **)(*(long *)(this + 8) + 0xf0) + 0xa8))();
    (**(code **)(**(long **)(*(long *)(this + 8) + 0xf8) + 0xa8))();
    (**(code **)(**(long **)(*(long *)(this + 8) + 0x100) + 0xa8))();
    MapSpace::SortFreeList(*(MapSpace **)(*(long *)(this + 8) + 0x100));
    GCTracer::NotifySweepingCompleted(*(GCTracer **)(*(long *)(this + 8) + 0x7f8));
    if ((FLAG_verify_heap != '\0') && (this[0x4d] == (MarkCompactCollector)0x0)) {
      local_28 = *(Heap **)(this + 8);
      local_38 = &PTR_FUN_01ca81b0;
      ppuStack_30 = &PTR_FUN_01ca8270;
      Heap::IterateStrongRoots(local_28,&ppuStack_30,0);
      FUN_00fdac6c(&local_38,*(undefined8 *)(local_28 + 0xe8));
      FUN_00fdad80(&local_38,*(undefined8 *)(local_28 + 0xf0));
      FUN_00fdad80(&local_38,*(undefined8 *)(local_28 + 0xf8));
      FUN_00fdad80(&local_38,*(undefined8 *)(local_28 + 0x100));
    }
  }
  return;
}

