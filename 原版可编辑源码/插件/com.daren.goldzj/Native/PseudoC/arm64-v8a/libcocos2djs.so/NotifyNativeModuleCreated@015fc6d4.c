
/* v8::internal::wasm::StreamingDecoder::NotifyNativeModuleCreated(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&) */

void __thiscall
v8::internal::wasm::StreamingDecoder::NotifyNativeModuleCreated
          (StreamingDecoder *this,shared_ptr *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  StreamingDecoder *pSVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  CompilationState *pCVar9;
  StreamingDecoder aSStack_100 [32];
  StreamingDecoder *local_e0;
  long local_d0;
  __shared_weak_count *local_c8;
  StreamingDecoder aSStack_c0 [32];
  StreamingDecoder *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pSVar5 = *(StreamingDecoder **)(this + 0x60);
  if (pSVar5 == (StreamingDecoder *)0x0) goto LAB_015fc90c;
  local_d0 = *(long *)param_1;
  p_Var1 = *(__shared_weak_count **)(param_1 + 8);
  pCVar9 = *(CompilationState **)(local_d0 + 0x100);
  local_c8 = p_Var1;
  if (p_Var1 == (__shared_weak_count *)0x0) {
LAB_015fc734:
    if (this + 0x40 == pSVar5) {
      local_e0 = aSStack_100;
      (**(code **)(*(long *)pSVar5 + 0x18))(pSVar5,aSStack_100);
      if (local_e0 != (StreamingDecoder *)0x0) goto LAB_015fc750;
      goto LAB_015fc788;
    }
    *(undefined8 *)(this + 0x60) = 0;
    local_e0 = pSVar5;
    if (pSVar5 == (StreamingDecoder *)0x0) goto LAB_015fc788;
LAB_015fc750:
    local_a0 = local_e0;
    if (aSStack_100 == local_e0) {
      local_a0 = aSStack_c0;
      (**(code **)(*(long *)local_e0 + 0x18))();
    }
    else {
      local_e0 = (StreamingDecoder *)0x0;
    }
  }
  else {
    p_Var1 = p_Var1 + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pSVar5 = *(StreamingDecoder **)(this + 0x60);
    if (pSVar5 != (StreamingDecoder *)0x0) goto LAB_015fc734;
    local_e0 = (StreamingDecoder *)0x0;
LAB_015fc788:
    local_a0 = (StreamingDecoder *)0x0;
  }
  p_Var1 = local_c8;
  lVar7 = local_d0;
  local_70 = (long *)0x0;
  plVar6 = operator_new(0x50);
  *plVar6 = (long)&PTR_FUN_01cca2a0;
  plVar6[2] = lVar7;
  plVar6[3] = (long)p_Var1;
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var1 + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_a0 == (StreamingDecoder *)0x0) {
    plVar6[8] = 0;
  }
  else if (aSStack_c0 == local_a0) {
    plVar6[8] = (long)(plVar6 + 4);
    (**(code **)(*(long *)local_a0 + 0x18))();
  }
  else {
    lVar7 = (**(code **)(*(long *)local_a0 + 0x10))();
    plVar6[8] = lVar7;
  }
  local_70 = plVar6;
  CompilationState::AddCallback(pCVar9,alStack_90);
  if (alStack_90 == local_70) {
    pcVar8 = *(code **)(*local_70 + 0x20);
LAB_015fc874:
    (*pcVar8)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar8 = *(code **)(*local_70 + 0x28);
    goto LAB_015fc874;
  }
  if (aSStack_c0 == local_a0) {
    pcVar8 = *(code **)(*(long *)local_a0 + 0x20);
LAB_015fc8a4:
    (*pcVar8)();
  }
  else if (local_a0 != (StreamingDecoder *)0x0) {
    pcVar8 = *(code **)(*(long *)local_a0 + 0x28);
    goto LAB_015fc8a4;
  }
  if (local_c8 != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(local_c8);
  }
  if (aSStack_100 == local_e0) {
    pcVar8 = *(code **)(*(long *)local_e0 + 0x20);
LAB_015fc8dc:
    (*pcVar8)();
  }
  else if (local_e0 != (StreamingDecoder *)0x0) {
    pcVar8 = *(code **)(*(long *)local_e0 + 0x28);
    goto LAB_015fc8dc;
  }
  pSVar5 = *(StreamingDecoder **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (this + 0x40 == pSVar5) {
    pcVar8 = *(code **)(*(long *)pSVar5 + 0x20);
  }
  else {
    if (pSVar5 == (StreamingDecoder *)0x0) goto LAB_015fc90c;
    pcVar8 = *(code **)(*(long *)pSVar5 + 0x28);
  }
  (*pcVar8)();
LAB_015fc90c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

