
void FUN_015afcac(long *param_1)

{
  __shared_weak_count *p_Var1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  Isolate *pIVar13;
  ulong uVar14;
  Value *this_00;
  long lVar15;
  undefined **local_80;
  __shared_weak_count *local_78;
  undefined *local_70;
  long *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar14 = *(ulong *)(*param_1 + 8);
  if ((int)param_1[2] < 1) {
    this_00 = (Value *)(uVar14 + 0xa0);
  }
  else {
    this_00 = (Value *)param_1[1];
  }
  if (DAT_01d474d0 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_78 = (__shared_weak_count *)
               v8::base::
               LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
               ::InitInstance;
    local_70 = &DAT_01d474d4;
    local_60 = (long *)&local_80;
    v8::base::CallOnceImpl(&DAT_01d474d0,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar10 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_015afd64;
      pcVar10 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar10)();
  }
LAB_015afd64:
  v8::base::Mutex::Lock((Mutex *)&DAT_01d474d4);
  if (((DAT_01d47518 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_01d47518), iVar7 != 0)) {
    DAT_01d47508 = (long *)0x0;
    DAT_01d47510 = 0;
    DAT_01d47500 = &DAT_01d47508;
    __cxa_guard_release(&DAT_01d47518);
  }
  if (DAT_01d47508 == (long *)0x0) {
    lVar15 = 0;
  }
  else {
    plVar12 = (long *)&DAT_01d47508;
    plVar11 = DAT_01d47508;
    do {
      if (uVar14 < (ulong)plVar11[4]) {
        plVar6 = (long *)*plVar11;
        plVar12 = plVar11;
      }
      else {
        if (uVar14 <= (ulong)plVar11[4]) break;
        plVar12 = plVar11 + 1;
        plVar6 = (long *)*plVar12;
      }
      plVar11 = plVar6;
    } while (plVar11 != (long *)0x0);
    lVar15 = *plVar12;
  }
  uVar8 = v8::Value::IsWebAssemblyCompiledModule(this_00);
  if ((uVar8 & 1) == 0) {
    uVar14 = FUN_015afadc(uVar14,this_00);
    v8::base::Mutex::Unlock((Mutex *)&DAT_01d474d4);
    if ((uVar14 & 1) == 0) goto LAB_015afe70;
  }
  else {
    v8::WasmModuleObject::GetCompiledModule();
    v8::CompiledWasmModule::GetWireBytesRef((CompiledWasmModule *)&local_80);
    this = local_78;
    uVar2 = *(uint *)(lVar15 + 0x28);
    if (local_78 != (__shared_weak_count *)0x0) {
      p_Var1 = local_78 + 8;
      do {
        lVar15 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    v8::base::Mutex::Unlock((Mutex *)&DAT_01d474d4);
    if (uVar2 < extraout_w1) {
LAB_015afe70:
      pIVar13 = *(Isolate **)(*param_1 + 8);
      lVar15 = v8::String::NewFromOneByte(pIVar13,"Sync instantiate not allowed",0,0xffffffff);
      if (lVar15 == 0) {
        v8::V8::ToLocalEmpty();
      }
      uVar9 = v8::Exception::RangeError(lVar15);
      v8::Isolate::ThrowException(pIVar13,uVar9);
      uVar9 = 1;
      goto LAB_015afeb0;
    }
  }
  uVar9 = 0;
LAB_015afeb0:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

