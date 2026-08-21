
/* v8::internal::wasm::InstanceBuilder::ReportLinkError(char const*, unsigned int,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::ReportLinkError
          (InstanceBuilder *this,undefined8 param_1,uint param_2,undefined8 *param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  
  local_40 = *param_4;
  pcVar2 = *(char **)(this + 0x18);
  String::ToCString(&local_38,&local_40,1,1,0);
  pvVar1 = local_38;
  local_50 = *param_5;
  String::ToCString(&local_48,&local_50,1,1,0);
  ErrorThrower::LinkError
            (pcVar2,"Import #%d module=\"%s\" function=\"%s\" error: %s",(ulong)param_2,pvVar1,
             local_48,param_1);
  pvVar1 = local_48;
  local_48 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = local_38;
  local_38 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}

