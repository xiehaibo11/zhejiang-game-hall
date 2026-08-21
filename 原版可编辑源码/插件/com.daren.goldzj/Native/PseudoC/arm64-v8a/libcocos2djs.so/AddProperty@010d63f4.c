
/* v8::internal::JSObject::AddProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void v8::internal::JSObject::AddProperty
               (undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
               undefined4 param_5)

{
  char cVar1;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  undefined8 local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_88 = 0;
  local_7c = 0xc000000000;
  local_70 = param_1;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)StringTable::LookupString(param_1,param_3);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_68 = param_3;
  local_58 = param_2;
  local_48 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_84 != 0) {
    cVar1 = Object::AddDataProperty(&local_88,param_4,param_5,1,1);
    if (cVar1 != '\0') {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&DAT_019d6ea4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","LookupIterator::ACCESS_CHECK != it.state()");
}

