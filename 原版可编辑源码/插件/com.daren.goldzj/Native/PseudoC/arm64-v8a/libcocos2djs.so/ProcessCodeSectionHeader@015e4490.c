
/* v8::internal::wasm::AsyncStreamingProcessor::ProcessCodeSectionHeader(int, unsigned int,
   std::__ndk1::shared_ptr<v8::internal::wasm::WireBytesStorage>, int) */

undefined8 __thiscall
v8::internal::wasm::AsyncStreamingProcessor::ProcessCodeSectionHeader
          (AsyncStreamingProcessor *this,uint param_1,uint param_2,undefined8 *param_4,int param_5)

{
  ModuleDecoder *this_00;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  shared_ptr *psVar11;
  long lVar12;
  long lVar13;
  AsyncCompileJob *this_01;
  undefined8 uVar14;
  __shared_weak_count *p_Var15;
  bool local_74 [4];
  ulong local_70;
  __shared_weak_count *local_68;
  WasmError aWStack_60 [8];
  byte local_58;
  void *local_48;
  
  this_00 = (ModuleDecoder *)(this + 8);
  uVar9 = ModuleDecoder::CheckFunctionsCount(this_00,param_1,param_2);
  if ((uVar9 & 1) == 0) {
    ModuleDecoder::FinishDecoding(this_00,false);
    FinishAsyncCompileJobWithError(this,aWStack_60);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var2 = local_68 + 8;
      do {
        lVar13 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
    uVar14 = 0;
  }
  else {
    plVar10 = (long *)ModuleDecoder::shared_module(this_00);
    local_70 = WasmCodeManager::EstimateNativeModuleCodeSize
                         (param_1,*(int *)(*plVar10 + 0x3c),param_5,(bool)FLAG_liftoff);
    this_01 = *(AsyncCompileJob **)(this + 0x18);
    psVar11 = (shared_ptr *)ModuleDecoder::shared_module(this_00);
    local_74[0] = false;
    AsyncCompileJob::
    DoImmediately<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>const&,bool,unsigned_long&>
              (this_01,psVar11,local_74,&local_70);
    uVar14 = *param_4;
    p_Var2 = (__shared_weak_count *)param_4[1];
    lVar13 = *(long *)(*(long *)(*(long *)(this + 0x18) + 0x58) + 0x100);
    *param_4 = 0;
    param_4[1] = 0;
    base::Mutex::Lock((Mutex *)(lVar13 + 0x100));
    if (p_Var2 != (__shared_weak_count *)0x0) {
      p_Var15 = p_Var2 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var15,0x10);
        if (bVar5) {
          *(long *)p_Var15 = *(long *)p_Var15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    p_Var15 = *(__shared_weak_count **)(lVar13 + 0x150);
    *(undefined8 *)(lVar13 + 0x148) = uVar14;
    *(__shared_weak_count **)(lVar13 + 0x150) = p_Var2;
    if (p_Var15 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var15 + 8;
      do {
        lVar12 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
      }
    }
    base::Mutex::Unlock((Mutex *)(lVar13 + 0x100));
    if (p_Var2 != (__shared_weak_count *)0x0) {
      p_Var15 = p_Var2 + 8;
      do {
        lVar12 = *(long *)p_Var15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var15,0x10);
        if (bVar5) {
          *(long *)p_Var15 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    uVar3 = *(undefined1 *)(*(long *)(this + 0x18) + 0x14);
    *(undefined4 *)(*(long *)(this + 0x18) + 0x110) = 2;
    plVar10 = operator_new(0x58);
    lVar12 = *(long *)(*(long *)(this + 0x18) + 0x58);
    *plVar10 = lVar12;
    uVar6 = WasmCompilationUnit::GetDefaultExecutionTier(*(WasmModule **)(lVar12 + 200));
    *(undefined1 *)(plVar10 + 1) = uVar6;
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[10] = 0;
    FUN_015e43c0(this + 0x28,plVar10);
    uVar14 = *(undefined8 *)(*(long *)(this + 0x18) + 0x58);
    iVar7 = FUN_015e47fc(uVar14,*(undefined8 *)(this + 0x28));
    iVar8 = FUN_015e493c(**(undefined8 **)(this + 0x18),*(undefined8 *)(this + 0x20),uVar14,
                         *(undefined8 *)(this + 0x28),*(undefined8 **)(this + 0x18) + 2);
    FUN_015e4b34(lVar13,uVar3,iVar8 + iVar7);
    uVar14 = 1;
  }
  return uVar14;
}

