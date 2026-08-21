
/* v8::internal::wasm::AsyncStreamingProcessor::OnFinishedStream(v8::internal::OwnedVector<unsigned
   char>) */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::OnFinishedStream
          (AsyncStreamingProcessor *this,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  void *pvVar9;
  __shared_weak_count *p_Var10;
  undefined8 uVar11;
  NativeModule *pNVar12;
  AsyncCompileJob *this_00;
  long lVar13;
  long lVar14;
  Isolate *pIVar15;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  __shared_weak_count *p_Stack_b8;
  undefined8 local_b0;
  __shared_weak_count *p_Stack_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined8 local_80;
  __shared_weak_count *p_Stack_78;
  undefined4 local_70 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  
  ModuleDecoder::FinishDecoding((ModuleDecoder *)(this + 8),false);
  uStack_60 = uStack_90;
  local_68 = local_98;
  local_70[0] = local_a0;
  p_Stack_78 = p_Stack_a8;
  local_80 = local_b0;
  uVar3 = local_98 >> 1 & 0x7f;
  if ((local_98 & 1) != 0) {
    uVar3 = uStack_90;
  }
  local_58 = local_88;
  if (uVar3 == 0) {
    pIVar15 = (Isolate *)**(undefined8 **)(this + 0x18);
    uVar5 = *(undefined8 *)(pIVar15 + 0x95a0);
    lVar13 = *(long *)(pIVar15 + 0x95a8);
    *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
    SaveAndSwitchContext::SaveAndSwitchContext
              ((SaveAndSwitchContext *)&local_b0,**(undefined8 **)(this + 0x18),
               *(undefined8 *)(*(undefined8 **)(this + 0x18))[7]);
    Histogram::AddSample((int)*(undefined8 *)(**(long **)(this + 0x18) + 0x9520) + 0x508);
    p_Var10 = p_Stack_78;
    uVar11 = local_80;
    piVar2 = (int *)(*(long *)(this + 0x18) + 0x110);
    do {
      iVar4 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (*(long *)(*(AsyncCompileJob **)(this + 0x18) + 0x58) == 0) {
      local_80 = 0;
      p_Stack_78 = (__shared_weak_count *)0x0;
      p_Stack_b8 = p_Var10;
      local_c0 = uVar11;
      AsyncCompileJob::CreateNativeModule(*(AsyncCompileJob **)(this + 0x18),&local_c0,0);
      p_Var10 = p_Stack_b8;
      if (p_Stack_b8 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Stack_b8 + 8;
        do {
          lVar14 = *(long *)p_Var1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar8) {
            *(long *)p_Var1 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)p_Stack_b8 + 0x10))(p_Stack_b8);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
        }
      }
    }
    lVar14 = *(long *)(this + 0x18);
    iVar6 = *(int *)(param_2 + 1);
    *(undefined8 *)(lVar14 + 0x28) = *param_2;
    *(long *)(lVar14 + 0x30) = (long)iVar6;
    uStack_c8 = param_2[1];
    local_d0 = (void *)*param_2;
    pNVar12 = *(NativeModule **)(*(long *)(this + 0x18) + 0x58);
    *param_2 = 0;
    param_2[1] = 0;
    NativeModule::SetWireBytes(pNVar12,&local_d0);
    pvVar9 = local_d0;
    local_d0 = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      operator_delete__(pvVar9);
    }
    if (iVar4 == 1) {
      this_00 = *(AsyncCompileJob **)(this + 0x18);
      if ((*(byte *)(*(long *)(*(long *)(this_00 + 0x58) + 0x100) + 0x30) & 1) == 0) {
        AsyncCompileJob::FinishCompile(this_00);
      }
      else {
        AsyncCompileJob::AsyncCompileFailed(this_00);
      }
    }
    SaveContext::~SaveContext((SaveContext *)&local_b0);
    if (pIVar15 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar15 + 0x95a0) = uVar5;
      *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
      if (*(long *)(pIVar15 + 0x95a8) != lVar13) {
        *(long *)(pIVar15 + 0x95a8) = lVar13;
        HandleScope::DeleteExtensions(pIVar15);
      }
    }
  }
  else {
    FinishAsyncCompileJobWithError(this,(WasmError *)local_70);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  p_Var10 = p_Stack_78;
  if (p_Stack_78 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_78 + 8;
    do {
      lVar13 = *(long *)p_Var1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar8) {
        *(long *)p_Var1 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*(long *)p_Stack_78 + 0x10))(p_Stack_78);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    }
  }
  return;
}

