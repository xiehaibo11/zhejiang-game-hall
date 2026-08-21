
/* v8::internal::Isolate::InitializeDefaultEmbeddedBlob() */

void __thiscall v8::internal::Isolate::InitializeDefaultEmbeddedBlob(Isolate *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined **local_80;
  code *pcStack_78;
  undefined *local_70;
  long *local_60;
  long local_48;
  
  puVar4 = v8_Default_embedded_blob_;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0x132a80;
  if (DAT_01d3ece8 == (undefined *)0x0) goto LAB_00f52d54;
  if (DAT_01d3ed00 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_70 = &DAT_01d3ed04;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&DAT_01d3ed00,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00f52d18;
      pcVar2 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f52d18:
  base::Mutex::Lock((Mutex *)&DAT_01d3ed04);
  if (DAT_01d3ece8 != (undefined *)0x0) {
    DAT_01d3ecfc = DAT_01d3ecfc + 1;
    puVar4 = DAT_01d3ece8;
    iVar3 = DAT_01d3ecf0;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ed04);
LAB_00f52d54:
  if (puVar4 == (undefined *)0x0) {
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == size");
    }
  }
  else {
    *(undefined **)(this + 0xc680) = puVar4;
    *(int *)(this + 0xc688) = iVar3;
    DAT_01d3ed30 = puVar4;
    DAT_01d3ed3c = iVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

