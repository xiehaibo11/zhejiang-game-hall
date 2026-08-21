
bool FUN_015afadc(ulong param_1,Value *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01d474d0 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = v8::base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = &DAT_01d474d4;
    local_50 = (long *)&local_70;
    v8::base::CallOnceImpl(&DAT_01d474d0,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_015afb78;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
  }
LAB_015afb78:
  v8::base::Mutex::Lock((Mutex *)&DAT_01d474d4);
  if (((DAT_01d47518 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d47518), iVar3 != 0)) {
    DAT_01d47508 = (long *)0x0;
    DAT_01d47510 = 0;
    DAT_01d47500 = &DAT_01d47508;
    __cxa_guard_release(&DAT_01d47518);
  }
  if (DAT_01d47508 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    plVar2 = DAT_01d47508;
    plVar7 = (long *)&DAT_01d47508;
    do {
      while (plVar6 = plVar2, param_1 < (ulong)plVar6[4]) {
        plVar2 = (long *)*plVar6;
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_015afbe0;
      }
      if (param_1 <= (ulong)plVar6[4]) break;
      plVar7 = plVar6 + 1;
      plVar2 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_015afbe0:
    lVar9 = *plVar7;
  }
  uVar4 = v8::Value::IsArrayBuffer(param_2);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = v8::ArrayBuffer::ByteLength((ArrayBuffer *)param_2), *(uint *)(lVar9 + 0x28) < uVar4))
  {
    uVar4 = v8::Value::IsArrayBufferView(param_2);
    if ((uVar4 & 1) == 0) {
      bVar8 = false;
    }
    else {
      uVar4 = v8::ArrayBufferView::ByteLength((ArrayBufferView *)param_2);
      bVar8 = uVar4 <= *(uint *)(lVar9 + 0x28);
    }
  }
  else {
    bVar8 = true;
  }
  v8::base::Mutex::Unlock((Mutex *)&DAT_01d474d4);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}

