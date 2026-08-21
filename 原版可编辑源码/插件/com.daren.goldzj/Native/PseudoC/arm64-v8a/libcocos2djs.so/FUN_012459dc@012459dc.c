
void FUN_012459dc(long *param_1)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  undefined8 uVar3;
  __shared_weak_count *this;
  int iVar4;
  char cVar5;
  bool bVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  Isolate *pIVar11;
  undefined1 auVar12 [12];
  Isolate *local_98;
  char *pcStack_90;
  int local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  HandleScope aHStack_68 [24];
  undefined1 local_34 [4];
  
  pIVar11 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_68,pIVar11);
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  pcStack_90 = "WebAssembly.compile()";
  lVar9 = *param_1;
  pIVar7 = *(Isolate **)(lVar9 + 8);
  iVar4 = *(int *)(pIVar7 + 0x95b0);
  *(int *)(pIVar7 + 0x95b0) = iVar4 + 1;
  puVar10 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x20) + 3) + 0x18);
  plVar2 = (long *)*puVar10;
  this = (__shared_weak_count *)puVar10[1];
  uVar3 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar9 = *(long *)(pIVar7 + 0x95a8);
  local_98 = pIVar11;
  if (this == (__shared_weak_count *)0x0) {
    *(int *)(pIVar7 + 0x95b0) = iVar4;
  }
  else {
    p_Var1 = this + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined8 *)(pIVar7 + 0x95a0) = uVar3;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar9) {
      *(long *)(pIVar7 + 0x95a8) = lVar9;
      v8::internal::HandleScope::DeleteExtensions(pIVar7);
    }
  }
  local_34[0] = 0;
  auVar12 = FUN_012493d4(param_1,&local_98,local_34);
  if (local_88 == 0) {
    v8::internal::wasm::StreamingDecoder::OnBytesReceived
              (*(undefined8 *)(*plVar2 + 8),auVar12._0_8_,(long)auVar12._8_4_);
    v8::internal::wasm::StreamingDecoder::Finish(*(StreamingDecoder **)(*plVar2 + 8));
    iVar4 = 0;
    if (local_88 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!thrower.error()");
    }
  }
  else {
    lVar8 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_98);
    puVar10 = (undefined8 *)*plVar2;
    pIVar7 = (Isolate *)*puVar10;
    uVar3 = *(undefined8 *)(pIVar7 + 0x95a0);
    lVar9 = *(long *)(pIVar7 + 0x95a8);
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
    v8::internal::wasm::StreamingDecoder::Abort((StreamingDecoder *)puVar10[1]);
    if (lVar8 != 0) {
      (**(code **)(*(long *)puVar10[3] + 8))((long *)puVar10[3],lVar8);
    }
    iVar4 = local_88;
    if (pIVar7 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar7 + 0x95a0) = uVar3;
      *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
      if (*(long *)(pIVar7 + 0x95a8) != lVar9) {
        *(long *)(pIVar7 + 0x95a8) = lVar9;
        v8::internal::HandleScope::DeleteExtensions(pIVar7);
        iVar4 = local_88;
      }
    }
  }
  local_88 = iVar4;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  FUN_01249590(&local_98);
  v8::HandleScope::~HandleScope(aHStack_68);
  return;
}

