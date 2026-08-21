
/* v8::internal::StackGuard::HandleInterrupts() */

undefined8 __thiscall v8::internal::StackGuard::HandleInterrupts(StackGuard *this)

{
  RecursiveMutex *this_00;
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte **local_90;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (DAT_01d3ed68 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ed68 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"v8.execute");
  }
  pbVar1 = DAT_01d3ed68;
  local_70 = (byte **)0x0;
  if ((*DAT_01d3ed68 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.HandleInterrupts",0,0,0,0,0,0,0,&local_50,0);
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_70 = &local_68;
    local_60 = "V8.HandleInterrupts";
    local_68 = pbVar1;
    local_58 = uVar3;
  }
  this_00 = (RecursiveMutex *)(*(long *)this + 0x9530);
  base::RecursiveMutex::Lock(this_00);
  uVar7 = *(ulong *)(this + 0x30);
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
    base::RecursiveMutex::Unlock(this_00);
    if ((uVar7 & 1) == 0) {
      if ((uVar6 >> 1 & 1) != 0) {
        if (DAT_01d3ed78 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3ed78 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
        }
        pbVar1 = DAT_01d3ed78;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3ed78 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"V8.GCHandleGCRequest",0,0,0,0,0,0,0,&local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "V8.GCHandleGCRequest";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        Heap::HandleGCRequest((Heap *)(*(long *)this + 0x8850));
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 5 & 1) != 0) {
        if (DAT_01d3ed80 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3ed80 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm")
          ;
        }
        pbVar1 = DAT_01d3ed80;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3ed80 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"V8.WasmGrowSharedMemory",0,0,0,0,0,0,0,&local_50,0)
          ;
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "V8.WasmGrowSharedMemory";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        BackingStore::UpdateSharedWasmMemoryObjects(*(Isolate **)this);
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 4 & 1) != 0) {
        if (DAT_01d3ed88 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3ed88 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
        }
        pbVar1 = DAT_01d3ed88;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3ed88 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"V8.GCDeoptMarkedAllocationSites",0,0,0,0,0,0,0,
                             &local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "V8.GCDeoptMarkedAllocationSites";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        Heap::DeoptMarkedAllocationSites((Heap *)(*(long *)this + 0x8850));
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 2 & 1) != 0) {
        if (DAT_01d3ed90 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3ed90 = (byte *)(**(code **)(*plVar2 + 0x10))
                                           (plVar2,"disabled-by-default-v8.compile");
        }
        pbVar1 = DAT_01d3ed90;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3ed90 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"V8.InstallOptimizedFunctions",0,0,0,0,0,0,0,
                             &local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "V8.InstallOptimizedFunctions";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        OptimizingCompileDispatcher::InstallOptimizedFunctions
                  (*(OptimizingCompileDispatcher **)(*(long *)this + 0xc610));
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 3 & 1) != 0) {
        if (DAT_01d3ed98 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3ed98 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"v8.execute");
        }
        pbVar1 = DAT_01d3ed98;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3ed98 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"V8.InvokeApiInterruptCallbacks",0,0,0,0,0,0,0,
                             &local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "V8.InvokeApiInterruptCallbacks";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        Isolate::InvokeApiInterruptCallbacks(*(Isolate **)this);
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 6 & 1) != 0) {
        if (DAT_01d3eda0 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3eda0 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm")
          ;
        }
        pbVar1 = DAT_01d3eda0;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3eda0 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"LogCode",0,0,0,0,0,0,0,&local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "LogCode";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        wasm::WasmEngine::LogOutstandingCodesForIsolate
                  (*(WasmEngine **)(*(Isolate **)this + 0xc770),*(Isolate **)this);
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      if ((uVar6 >> 7 & 1) != 0) {
        if (DAT_01d3eda8 == (byte *)0x0) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          DAT_01d3eda8 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm")
          ;
        }
        pbVar1 = DAT_01d3eda8;
        local_90 = (byte **)0x0;
        if ((*DAT_01d3eda8 & 5) != 0) {
          local_50 = (long *)0x0;
          local_48 = (long *)0x0;
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          uVar3 = (**(code **)(*plVar2 + 0x18))
                            (plVar2,0x58,pbVar1,"WasmCodeGC",0,0,0,0,0,0,0,&local_50,0);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          local_50 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_90 = &local_88;
          local_80 = "WasmCodeGC";
          local_88 = pbVar1;
          local_78 = uVar3;
        }
        wasm::WasmEngine::ReportLiveCodeFromStackForGC
                  (*(WasmEngine **)(*(Isolate **)this + 0xc770),*(Isolate **)this);
        if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
          plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
        }
      }
      lVar5 = *(long *)(*(long *)this + 0x9520);
      if (*(char *)(lVar5 + 0x1c58) == '\0') {
        *(char *)(lVar5 + 0x1c58) = '\x01';
        piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar5 + 0x1c40));
        *(int **)(lVar5 + 0x1c50) = piVar4;
      }
      else {
        piVar4 = *(int **)(lVar5 + 0x1c50);
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      uVar3 = *(undefined8 *)(*(long *)this + 0xa0);
      goto joined_r0x00f63360;
    }
  }
  else {
    *(ulong *)(this + 0x30) = uVar7 & 0xfffffffffffffffe;
    if ((uVar7 & 0xfffffffffffffffe) == 0) {
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
    }
    base::RecursiveMutex::Unlock(this_00);
  }
  if (DAT_01d3ed70 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ed70 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"v8.execute");
  }
  pbVar1 = DAT_01d3ed70;
  local_90 = (byte **)0x0;
  if ((*DAT_01d3ed70 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.TerminateExecution",0,0,0,0,0,0,0,&local_50,0);
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_90 = &local_88;
    local_80 = "V8.TerminateExecution";
    local_88 = pbVar1;
    local_78 = uVar3;
  }
  uVar3 = Isolate::TerminateExecution(*(Isolate **)this);
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
  }
joined_r0x00f63360:
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_68,local_60,local_58);
  }
  return uVar3;
}

