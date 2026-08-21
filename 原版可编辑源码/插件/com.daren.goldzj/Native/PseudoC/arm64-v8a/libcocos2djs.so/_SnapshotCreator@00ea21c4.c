
/* v8::SnapshotCreator::~SnapshotCreator() */

void __thiscall v8::SnapshotCreator::~SnapshotCreator(SnapshotCreator *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong *puVar4;
  void *pvVar5;
  Isolate *this_00;
  ulong uVar6;
  
  pvVar5 = *(void **)this;
  this_00 = *(Isolate **)((long)pvVar5 + 8);
  internal::Isolate::Exit(this_00);
  if (*(long *)(this_00 + 0x9488) == 0) {
    internal::Isolate::Delete(this_00);
joined_r0x00ea22b4:
    if (pvVar5 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar5 + 0x48);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar5 + 0x50) = pvVar3;
        operator_delete(pvVar3);
      }
      pvVar3 = *(void **)((long)pvVar5 + 0x30);
      lVar2 = *(long *)((long)pvVar5 + 0x38);
      lVar1 = lVar2 - (long)pvVar3;
      if (lVar1 != 0) {
        uVar6 = 0;
        while( true ) {
          if ((uVar6 < (ulong)(lVar2 - (long)pvVar3 >> 3)) &&
             (puVar4 = *(ulong **)((long)pvVar3 + uVar6 * 8), puVar4 != (ulong *)0x0)) {
            internal::GlobalHandles::Destroy(puVar4);
          }
          uVar6 = uVar6 + 1;
          if ((ulong)(lVar1 >> 3) <= uVar6) break;
          pvVar3 = *(void **)((long)pvVar5 + 0x30);
          lVar2 = *(long *)((long)pvVar5 + 0x38);
        }
        pvVar3 = *(void **)((long)pvVar5 + 0x30);
      }
      *(void **)((long)pvVar5 + 0x38) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar5 + 0x38) = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(pvVar5);
      return;
    }
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Isolate::Dispose()","Disposing the isolate that is entered by a thread.");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      goto joined_r0x00ea22b4;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Isolate::Dispose()",
             "Disposing the isolate that is entered by a thread.");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

