
/* v8::internal::Object v8::internal::FutexEmulation::Wait<long>(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, long, double) */

ulong v8::internal::FutexEmulation::Wait<long>
                (double param_1_00,Isolate *param_1,long *param_3,long param_4,long param_5)

{
  Isolate *pIVar1;
  ConditionVariable *this;
  ConditionVariable *pCVar2;
  long *plVar3;
  Isolate IVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  long local_d8;
  long local_c8;
  Isolate *local_c0;
  char local_b8;
  undefined **local_b0;
  code *pcStack_a8;
  undefined8 *local_a0;
  undefined ***local_90;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if ((param_1_00 == INFINITY) ||
     (dVar12 = param_1_00 * 1000.0 * 1000.0, 9.223372036854776e+18 < dVar12)) {
    lVar10 = 0;
    bVar6 = false;
  }
  else {
    lVar10 = (long)dVar12 / 1000;
    bVar6 = true;
  }
  local_b8 = '\0';
  local_c0 = param_1;
  Isolate::RunAtomicsWaitCallback(param_1_00,param_1,0,param_3,param_4,param_5,&local_c0);
  if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) {
    pIVar1 = param_1 + 0xc6d8;
    if (mutex_ != '\x02') {
      local_a0 = (undefined8 *)&DAT_01d3ec9c;
      local_b0 = &PTR_FUN_01c984d0;
      pcStack_a8 = base::
                   LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                   ::InitInstance;
      local_90 = &local_b0;
      base::CallOnceImpl(&mutex_,&local_b0);
      if (&local_b0 == local_90) {
        (*(code *)(*local_90)[4])();
      }
      else if (local_90 != (undefined ***)0x0) {
        (*(code *)(*local_90)[5])();
      }
    }
    base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
    lVar8 = *(long *)(*param_3 + 0x13);
    param_1[0xc6f8] = (Isolate)0x1;
    *(long *)(param_1 + 0xc6e8) = lVar8;
    *(long *)(param_1 + 0xc6f0) = param_4;
    if (*(long *)(lVar8 + param_4) == param_5) {
      if (bVar6) {
        lVar8 = base::TimeTicks::Now();
        local_d8 = base::bits::SignedSaturatedAdd64(lVar10,lVar8);
      }
      else {
        local_d8 = 0;
      }
      this = (ConditionVariable *)(param_1 + 0xc6a8);
      if (wait_list_ != '\x02') {
        local_a0 = &DAT_01d3ecd0;
        local_b0 = &PTR_FUN_01c984d0;
        pcStack_a8 = base::
                     LazyInstanceImpl<v8::internal::FutexWaitList,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::FutexWaitList>,v8::base::DefaultConstructTrait<v8::internal::FutexWaitList>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::FutexWaitList>>
                     ::InitInstance;
        local_90 = &local_b0;
        base::CallOnceImpl(&wait_list_,&local_b0);
        if (&local_b0 == local_90) {
          (*(code *)(*local_90)[4])();
        }
        else if (local_90 != (undefined ***)0x0) {
          (*(code *)(*local_90)[5])();
        }
      }
      pCVar2 = (ConditionVariable *)&DAT_01d3ecd0;
      if (DAT_01d3ecd8 != (ConditionVariable *)0x0) {
        pCVar2 = DAT_01d3ecd8 + 0x38;
      }
      *(ConditionVariable **)pCVar2 = this;
      *(ConditionVariable **)pIVar1 = DAT_01d3ecd8;
      *(undefined8 *)(param_1 + 0xc6e0) = 0;
      DAT_01d3ecd8 = this;
LAB_00f4aee8:
      IVar4 = param_1[0xc6f9];
      param_1[0xc6f9] = (Isolate)0x0;
      if (mutex_ != '\x02') {
        local_a0 = (undefined8 *)&DAT_01d3ec9c;
        local_b0 = &PTR_FUN_01c984d0;
        pcStack_a8 = base::
                     LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                     ::InitInstance;
        local_90 = &local_b0;
        base::CallOnceImpl(&mutex_,&local_b0);
        if (&local_b0 == local_90) {
          pcVar9 = (code *)(*local_90)[4];
        }
        else {
          if (local_90 == (undefined ***)0x0) goto LAB_00f4af50;
          pcVar9 = (code *)(*local_90)[5];
        }
        (*pcVar9)();
      }
LAB_00f4af50:
      base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
      if (IVar4 != (Isolate)0x0) {
        uVar7 = StackGuard::HandleInterrupts((StackGuard *)(param_1 + 0x48));
        if (((uVar7 & 1) != 0) && ((int)uVar7 == *(int *)(param_1 + 0x180))) goto LAB_00f4b0f0;
      }
      if (mutex_ != '\x02') {
        local_a0 = (undefined8 *)&DAT_01d3ec9c;
        local_b0 = &PTR_FUN_01c984d0;
        pcStack_a8 = base::
                     LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                     ::InitInstance;
        local_90 = &local_b0;
        base::CallOnceImpl(&mutex_,&local_b0);
        if (&local_b0 == local_90) {
          pcVar9 = (code *)(*local_90)[4];
        }
        else {
          if (local_90 == (undefined ***)0x0) goto LAB_00f4afd8;
          pcVar9 = (code *)(*local_90)[5];
        }
        (*pcVar9)();
      }
LAB_00f4afd8:
      base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
      if (param_1[0xc6f9] == (Isolate)0x0) {
        if (local_b8 != '\0') {
          uVar7 = 0;
          param_1[0xc6f8] = (Isolate)0x0;
          iVar11 = 4;
          goto LAB_00f4b18c;
        }
        if (param_1[0xc6f8] == (Isolate)0x0) {
          uVar7 = 0;
          iVar11 = 1;
          goto LAB_00f4b18c;
        }
        if (bVar6) {
          lVar8 = base::TimeTicks::Now();
          lVar10 = local_d8 - lVar8;
          if (lVar10 == 0 || local_d8 < lVar8) {
            iVar11 = 2;
            uVar7 = 4;
            goto LAB_00f4b18c;
          }
          local_c8 = lVar10;
          if (mutex_ != '\x02') {
            local_b0 = &PTR_FUN_01c984d0;
            pcStack_a8 = base::
                         LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                         ::InitInstance;
            local_a0 = (undefined8 *)&DAT_01d3ec9c;
            local_90 = &local_b0;
            base::CallOnceImpl(&mutex_,&local_b0);
            if (&local_b0 == local_90) {
              pcVar9 = (code *)(*local_90)[4];
            }
            else {
              if (local_90 == (undefined ***)0x0) goto LAB_00f4b0c0;
              pcVar9 = (code *)(*local_90)[5];
            }
            (*pcVar9)();
          }
LAB_00f4b0c0:
          base::ConditionVariable::WaitFor(this,(Mutex *)&DAT_01d3ec9c,(TimeDelta *)&local_c8);
        }
        else {
          if (mutex_ != '\x02') {
            local_a0 = (undefined8 *)&DAT_01d3ec9c;
            local_b0 = &PTR_FUN_01c984d0;
            pcStack_a8 = base::
                         LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                         ::InitInstance;
            local_90 = &local_b0;
            base::CallOnceImpl(&mutex_,&local_b0);
            if (&local_b0 == local_90) {
              pcVar9 = (code *)(*local_90)[4];
            }
            else {
              if (local_90 == (undefined ***)0x0) goto LAB_00f4aedc;
              pcVar9 = (code *)(*local_90)[5];
            }
            (*pcVar9)();
          }
LAB_00f4aedc:
          base::ConditionVariable::Wait(this,(Mutex *)&DAT_01d3ec9c);
        }
      }
      goto LAB_00f4aee8;
    }
    iVar11 = 5;
    uVar7 = 2;
    goto LAB_00f4b254;
  }
  goto LAB_00f4b298;
LAB_00f4b0f0:
  if (mutex_ != '\x02') {
    local_a0 = (undefined8 *)&DAT_01d3ec9c;
    local_b0 = &PTR_FUN_01c984d0;
    pcStack_a8 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_90 = &local_b0;
    base::CallOnceImpl(&mutex_,&local_b0);
    if (&local_b0 == local_90) {
      (*(code *)(*local_90)[4])();
    }
    else if (local_90 != (undefined ***)0x0) {
      (*(code *)(*local_90)[5])();
    }
  }
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  iVar11 = 3;
LAB_00f4b18c:
  if (wait_list_ == '\x02') {
LAB_00f4b204:
    lVar10 = *(long *)pIVar1;
    lVar8 = *(long *)(param_1 + 0xc6e0);
    if (lVar10 != 0) goto LAB_00f4b20c;
LAB_00f4b238:
    lVar10 = 0;
    DAT_01d3ecd0 = lVar8;
  }
  else {
    local_b0 = &PTR_FUN_01c984d0;
    local_a0 = &DAT_01d3ecd0;
    pcStack_a8 = base::
                 LazyInstanceImpl<v8::internal::FutexWaitList,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::FutexWaitList>,v8::base::DefaultConstructTrait<v8::internal::FutexWaitList>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::FutexWaitList>>
                 ::InitInstance;
    local_90 = &local_b0;
    base::CallOnceImpl(&wait_list_,&local_b0);
    if (&local_b0 != local_90) {
      if (local_90 != (undefined ***)0x0) {
        (*(code *)(*local_90)[5])();
      }
      goto LAB_00f4b204;
    }
    (*(code *)(*local_90)[4])();
    lVar10 = *(long *)pIVar1;
    lVar8 = *(long *)(param_1 + 0xc6e0);
    if (lVar10 == 0) goto LAB_00f4b238;
LAB_00f4b20c:
    *(long *)(lVar10 + 0x38) = lVar8;
    lVar10 = *(long *)pIVar1;
    lVar8 = *(long *)(param_1 + 0xc6e0);
  }
  plVar3 = (long *)&DAT_01d3ecd8;
  if (lVar8 != 0) {
    plVar3 = (long *)(lVar8 + 0x30);
  }
  *plVar3 = lVar10;
  *(long *)pIVar1 = 0;
  *(undefined8 *)(param_1 + 0xc6e0) = 0;
LAB_00f4b254:
  param_1[0xc6f8] = (Isolate)0x0;
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  Isolate::RunAtomicsWaitCallback(param_1_00,param_1,iVar11,param_3,param_4,param_5,0);
  if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) goto LAB_00f4b2a4;
  if (iVar11 == 3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","callback_result != AtomicsWaitEvent::kTerminatedExecution");
  }
LAB_00f4b298:
  uVar7 = Isolate::PromoteScheduledException(param_1);
LAB_00f4b2a4:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

