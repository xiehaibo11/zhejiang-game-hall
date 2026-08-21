
/* v8::internal::Accessors::ReplaceAccessorWithDataProperty(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8
v8::internal::Accessors::ReplaceAccessorWithDataProperty
          (undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  long local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_70 = (ulong)*(uint *)(param_2 + 4) << 0x20;
  local_88 = 0;
  local_7c = 0xc000000000;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)StringTable::LookupString(local_70,param_3);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_68 = param_3;
  local_58 = param_1;
  local_48 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_84 == 0) {
    uVar1 = LookupIterator::HasAccess((LookupIterator *)&local_88);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it.HasAccess()");
    }
    LookupIterator::Next((LookupIterator *)&local_88);
  }
  if (local_84 == 5) {
    LookupIterator::ReconfigureDataProperty
              ((LookupIterator *)&local_88,param_4,local_7c._4_4_ >> 3 & 7);
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","LookupIterator::ACCESSOR == it.state()");
}

