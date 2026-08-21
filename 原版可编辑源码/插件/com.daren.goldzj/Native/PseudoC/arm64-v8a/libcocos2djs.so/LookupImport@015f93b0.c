
/* v8::internal::wasm::InstanceBuilder::LookupImport(unsigned int,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>) */

long __thiscall
v8::internal::wasm::InstanceBuilder::LookupImport
          (InstanceBuilder *this,uint param_1,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong *puVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  void *local_90 [11];
  undefined8 local_38;
  
  if (*(long *)(this + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  LookupIterator::PropertyOrElement
            ((LookupIterator *)local_90,*(undefined8 *)this,*(long *)(this + 0x28),param_3,3);
  puVar2 = (ulong *)Object::GetProperty((LookupIterator *)local_90,false);
  if (puVar2 == (ulong *)0x0) {
    local_38 = *param_3;
    pcVar6 = *(char **)(this + 0x18);
    String::ToCString(local_90,&local_38,1,1,0);
    pcVar4 = "module not found";
  }
  else {
    uVar5 = *puVar2;
    if (((uVar5 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
      LookupIterator::PropertyOrElement
                ((LookupIterator *)local_90,*(undefined8 *)this,puVar2,param_4,3);
      lVar3 = Object::GetProperty((LookupIterator *)local_90,false);
      if (lVar3 == 0) {
        ReportLinkError(this,"import not found",param_1,param_3,param_4);
        return 0;
      }
      return lVar3;
    }
    local_38 = *param_3;
    pcVar6 = *(char **)(this + 0x18);
    String::ToCString(local_90,&local_38,1,1,0);
    pcVar4 = "module is not an object or function";
  }
  ErrorThrower::TypeError
            (pcVar6,"Import #%d module=\"%s\" error: %s",(ulong)param_1,local_90[0],pcVar4);
  pvVar1 = local_90[0];
  local_90[0] = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return 0;
}

