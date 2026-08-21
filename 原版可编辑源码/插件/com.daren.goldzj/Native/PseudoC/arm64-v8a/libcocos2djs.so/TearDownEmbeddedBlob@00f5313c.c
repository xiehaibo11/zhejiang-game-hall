
/* v8::internal::Isolate::TearDownEmbeddedBlob() */

void __thiscall v8::internal::Isolate::TearDownEmbeddedBlob(Isolate *this)

{
  Isolate *pIVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_80;
  code *pcStack_78;
  undefined *local_70;
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (DAT_01d3ece8 == 0) goto LAB_00f5328c;
  pIVar1 = this + 0xc680;
  if (*(long *)pIVar1 != DAT_01d3ece8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","embedded_blob() == StickyEmbeddedBlob()");
  }
  if (DAT_01d3ece8 != DAT_01d3ed30) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","CurrentEmbeddedBlob() == StickyEmbeddedBlob()");
  }
  if (DAT_01d3ed00 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_70 = &DAT_01d3ed04;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&DAT_01d3ed00,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00f53200;
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar3)();
  }
LAB_00f53200:
  base::Mutex::Lock((Mutex *)&DAT_01d3ed04);
  DAT_01d3ecfc = DAT_01d3ecfc + -1;
  if ((DAT_01d3ecfc == 0) && ((DAT_01d3ece0 & 1) == 0)) {
    InstructionStream::FreeOffHeapInstructionStream(*(uchar **)pIVar1,*(uint *)(this + 0xc688));
    if (DAT_01d3ece0 == 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","enable_embedded_blob_refcounting_");
    }
    if (*(long *)pIVar1 != DAT_01d3ed30) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","embedded_blob_ == CurrentEmbeddedBlob()");
    }
    if (*(long *)pIVar1 != DAT_01d3ece8) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","embedded_blob_ == StickyEmbeddedBlob()");
    }
    *(undefined8 *)pIVar1 = 0;
    *(undefined4 *)(this + 0xc688) = 0;
    DAT_01d3ed30 = 0;
    DAT_01d3ed3c = 0;
    DAT_01d3ece8 = 0;
    DAT_01d3ecf0 = 0;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ed04);
LAB_00f5328c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

