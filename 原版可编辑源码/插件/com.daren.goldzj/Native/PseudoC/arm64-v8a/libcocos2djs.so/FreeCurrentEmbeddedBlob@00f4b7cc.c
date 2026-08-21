
/* v8::internal::FreeCurrentEmbeddedBlob() */

void v8::internal::FreeCurrentEmbeddedBlob(void)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d3ece0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!enable_embedded_blob_refcounting_");
  }
  if (DAT_01d3ed00 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = &DAT_01d3ed04;
    local_50 = (long *)&local_70;
    base::CallOnceImpl(&DAT_01d3ed00,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00f4b868;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4b868:
  base::Mutex::Lock((Mutex *)&DAT_01d3ed04);
  if (DAT_01d3ece8 != (uchar *)0x0) {
    if (DAT_01d3ece8 != DAT_01d3ed30) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","StickyEmbeddedBlob() == Isolate::CurrentEmbeddedBlob()");
    }
    InstructionStream::FreeOffHeapInstructionStream(DAT_01d3ed30,DAT_01d3ed3c);
    DAT_01d3ed30 = (uchar *)0x0;
    DAT_01d3ed3c = 0;
    DAT_01d3ece8 = (uchar *)0x0;
    DAT_01d3ecf0 = 0;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ed04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

