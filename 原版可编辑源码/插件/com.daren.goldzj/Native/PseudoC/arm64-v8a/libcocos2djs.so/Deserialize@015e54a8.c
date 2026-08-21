
/* v8::internal::wasm::AsyncStreamingProcessor::Deserialize(v8::internal::Vector<unsigned char
   const>, v8::internal::Vector<unsigned char const>) */

undefined4
v8::internal::wasm::AsyncStreamingProcessor::Deserialize
          (long param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  Isolate *pIVar12;
  undefined4 uVar13;
  __shared_weak_count *this;
  void *local_88;
  ulong uStack_80;
  SaveAndSwitchContext aSStack_78 [24];
  
  pIVar12 = (Isolate *)**(undefined8 **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar4 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  SaveAndSwitchContext::SaveAndSwitchContext
            (aSStack_78,**(undefined8 **)(param_1 + 0x18),
             *(undefined8 *)(*(undefined8 **)(param_1 + 0x18))[7]);
  puVar7 = (undefined8 *)
           DeserializeNativeModule
                     (**(undefined8 **)(param_1 + 0x18),param_2,param_3,param_4,param_5);
  if (puVar7 == (undefined8 *)0x0) {
    uVar13 = 0;
    goto LAB_015e5640;
  }
  uVar8 = GlobalHandles::Create(*(GlobalHandles **)(**(long **)(param_1 + 0x18) + 0x95e0),*puVar7);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50) = uVar8;
  lVar10 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)
            (*(long *)((**(ulong **)(lVar10 + 0x50) & 0xffffffff00000000 |
                       (ulong)*(uint *)(**(ulong **)(lVar10 + 0x50) + 0xb)) + 3) + 0x18);
  uVar8 = *puVar7;
  lVar11 = puVar7[1];
  if (lVar11 != 0) {
    plVar1 = (long *)(lVar11 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  this = *(__shared_weak_count **)(lVar10 + 0x60);
  *(undefined8 *)(lVar10 + 0x58) = uVar8;
  *(long *)(lVar10 + 0x60) = lVar11;
  if (this == (__shared_weak_count *)0x0) {
LAB_015e55bc:
    if (param_5 != 0) goto LAB_015e55c0;
LAB_015e5600:
    pvVar9 = (void *)0x0;
  }
  else {
    p_Var2 = this + 8;
    do {
      lVar11 = *(long *)p_Var2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 != 0) goto LAB_015e55bc;
    (**(code **)(*(long *)this + 0x10))(this);
    std::__ndk1::__shared_weak_count::__release_weak(this);
    if (param_5 == 0) goto LAB_015e5600;
LAB_015e55c0:
    pvVar9 = operator_new__(param_5);
    memmove(pvVar9,param_4,param_5);
  }
  lVar11 = *(long *)(param_1 + 0x18);
  *(void **)(lVar11 + 0x28) = pvVar9;
  *(long *)(lVar11 + 0x30) = (long)(int)param_5;
  local_88 = pvVar9;
  uStack_80 = param_5;
  NativeModule::SetWireBytes(*(NativeModule **)(*(long *)(param_1 + 0x18) + 0x58),&local_88);
  pvVar9 = local_88;
  local_88 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  AsyncCompileJob::FinishCompile(*(AsyncCompileJob **)(param_1 + 0x18));
  uVar13 = 1;
LAB_015e5640:
  SaveContext::~SaveContext((SaveContext *)aSStack_78);
  if (pIVar12 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar3;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
    if (*(long *)(pIVar12 + 0x95a8) != lVar4) {
      *(long *)(pIVar12 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(pIVar12);
    }
  }
  return uVar13;
}

