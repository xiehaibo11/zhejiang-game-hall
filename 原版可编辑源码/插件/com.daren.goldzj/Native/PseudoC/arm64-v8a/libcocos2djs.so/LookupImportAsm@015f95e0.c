
/* v8::internal::wasm::InstanceBuilder::LookupImportAsm(unsigned int,
   v8::internal::Handle<v8::internal::String>) */

long __thiscall
v8::internal::wasm::InstanceBuilder::LookupImportAsm
          (InstanceBuilder *this,uint param_1,undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  undefined8 local_90;
  undefined8 local_38;
  void *local_18;
  
  if (*(long *)(this + 0x28) == 0) {
    local_18 = (void *)*param_3;
    pcVar3 = *(char **)(this + 0x18);
    String::ToCString(&local_90,&local_18,1,1,0);
    ErrorThrower::LinkError
              (pcVar3,"Import #%d module=\"%s\" error: %s",(ulong)param_1,local_90,
               "missing imports object");
    pvVar1 = local_90;
    local_90 = (void *)0x0;
  }
  else {
    LookupIterator::PropertyOrElement
              ((LookupIterator *)&local_90,*(undefined8 *)this,*(long *)(this + 0x28),param_3,3);
    if (7 < local_90._4_4_) {
      return 0;
    }
    if ((1 << (ulong)(local_90._4_4_ & 0x1f) & 0xafU) == 0) {
      if (local_90._4_4_ != 4) {
        lVar2 = LookupIterator::GetDataValue();
        return lVar2;
      }
      return *(long *)this + 0xa0;
    }
    local_38 = *param_3;
    pcVar3 = *(char **)(this + 0x18);
    String::ToCString(&local_18,&local_38,1,1,0);
    ErrorThrower::LinkError
              (pcVar3,"Import #%d module=\"%s\" error: %s",(ulong)param_1,local_18,
               "not a data property");
    pvVar1 = local_18;
    local_18 = (void *)0x0;
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return 0;
}

