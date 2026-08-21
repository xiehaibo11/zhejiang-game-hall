
/* v8::internal::Isolate::CreateAndSetEmbeddedBlob() */

void __thiscall v8::internal::Isolate::CreateAndSetEmbeddedBlob(Isolate *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  uint local_94;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined ***local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (DAT_01d3ed00 != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_80 = &DAT_01d3ed04;
    local_70 = &local_90;
    base::CallOnceImpl(&DAT_01d3ed00,&local_90);
    if (&local_90 == local_70) {
      pcVar8 = (code *)(*local_70)[4];
    }
    else {
      if (local_70 == (undefined ***)0x0) goto LAB_00f53b48;
      pcVar8 = (code *)(*local_70)[5];
    }
    (*pcVar8)();
  }
LAB_00f53b48:
  base::Mutex::Lock((Mutex *)&DAT_01d3ed04);
  plVar4 = *(long **)(this + 0xc788);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,this + 0x9e00);
  }
  if (DAT_01d3ece8 == (undefined **)0x0) {
    InstructionStream::CreateOffHeapInstructionStream(this,(uchar **)&local_90,&local_94);
    if (DAT_01d3ecfc != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == current_embedded_blob_refs_");
    }
    if (local_90 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(blob) != nullptr");
    }
    *(undefined ***)(this + 0xc680) = local_90;
    *(uint *)(this + 0xc688) = local_94;
    DAT_01d3ed30 = local_90;
    DAT_01d3ed3c = local_94;
    DAT_01d3ecfc = 1;
    DAT_01d3ece8 = local_90;
    DAT_01d3ecf0 = local_94;
  }
  else {
    if (*(undefined ***)(this + 0xc680) != DAT_01d3ece8) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","embedded_blob() == StickyEmbeddedBlob()");
    }
    if (DAT_01d3ece8 != DAT_01d3ed30) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","CurrentEmbeddedBlob() == StickyEmbeddedBlob()");
    }
  }
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  iVar9 = 0;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  pcStack_88 = (code *)(ulong)DAT_01d3ed3c;
  local_90 = DAT_01d3ed30;
  do {
    uVar5 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_90,iVar9);
    uVar6 = Builtins::builtin_handle((Builtins *)(this + 0x9e00),iVar9);
    puVar7 = (undefined8 *)Factory::NewOffHeapTrampolineFor((Factory *)this,uVar6,uVar5);
    Builtins::set_builtin((Builtins *)(this + 0x9e00),iVar9,*puVar7);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x5bc);
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
    }
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ed04);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

