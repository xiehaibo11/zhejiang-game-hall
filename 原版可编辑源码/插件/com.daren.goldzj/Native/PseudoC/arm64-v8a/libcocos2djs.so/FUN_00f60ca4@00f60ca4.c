
void FUN_00f60ca4(undefined8 param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 local_50;
  undefined1 local_44 [4];
  long *local_40;
  long *local_38;
  char *local_18;
  
  v8::internal::PrintF("Invalidating protector cell %s",param_1);
  if (DAT_01d3ed58 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ed58 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
  }
  pbVar1 = DAT_01d3ed58;
  if ((*DAT_01d3ed58 & 5) != 0) {
    local_18 = "protector-name";
    local_44[0] = 6;
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    local_50 = param_1;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x49,pbVar1,"V8.InvalidateProtector",0,0,0,1,&local_18,local_44,&local_50,
               &local_40,0x10);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return;
}

