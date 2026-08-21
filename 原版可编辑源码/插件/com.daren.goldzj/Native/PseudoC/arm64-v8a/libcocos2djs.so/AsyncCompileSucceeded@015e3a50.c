
/* v8::internal::wasm::AsyncCompileJob::AsyncCompileSucceeded(v8::internal::Handle<v8::internal::WasmModuleObject>)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::AsyncCompileSucceeded(AsyncCompileJob *this,undefined8 param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  byte **local_70;
  byte *local_68;
  byte *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (DAT_01d47890 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d47890 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm");
  }
  pbVar1 = DAT_01d47890;
  local_70 = (byte **)0x0;
  if ((*DAT_01d47890 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,&BYTE_01a5440e,0,0,0,0,0,0,0,&local_50,0);
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
    local_60 = &BYTE_01a5440e;
    local_68 = pbVar1;
    local_58 = uVar3;
  }
  (**(code **)**(undefined8 **)(this + 0x40))(*(undefined8 **)(this + 0x40),param_2);
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_68,local_60,local_58);
  }
  return;
}

