
/* v8::internal::wasm::InstanceBuilder::ExecuteStartFunction() */

bool __thiscall v8::internal::wasm::InstanceBuilder::ExecuteStartFunction(InstanceBuilder *this)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  Isolate *pIVar7;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (DAT_01d478d8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d478d8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.wasm");
  }
  pbVar2 = DAT_01d478d8;
  local_70 = (byte **)0x0;
  if ((*DAT_01d478d8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"InstanceBuilder::ExecuteStartFunction",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_70 = &local_68;
    local_60 = "InstanceBuilder::ExecuteStartFunction";
    local_68 = pbVar2;
    local_58 = uVar5;
  }
  if (*(long *)(this + 0x68) == 0) {
    bVar3 = true;
  }
  else {
    pIVar7 = *(Isolate **)this;
    uVar5 = *(undefined8 *)(pIVar7 + 0x95a0);
    lVar1 = *(long *)(pIVar7 + 0x95a8);
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
    lVar6 = Execution::Call(*(long *)this,*(undefined8 *)(this + 0x68),*(long *)this + 0xa0,0,0);
    bVar3 = lVar6 != 0;
    if (pIVar7 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar7 + 0x95a0) = uVar5;
      *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
      if (*(long *)(pIVar7 + 0x95a8) != lVar1) {
        *(long *)(pIVar7 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(pIVar7);
      }
    }
  }
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_68,local_60,local_58);
  }
  return bVar3;
}

