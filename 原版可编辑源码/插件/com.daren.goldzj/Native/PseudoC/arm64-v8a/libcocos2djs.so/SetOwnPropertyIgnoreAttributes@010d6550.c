
/* v8::internal::JSObject::SetOwnPropertyIgnoreAttributes(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

undefined8
v8::internal::JSObject::SetOwnPropertyIgnoreAttributes
          (long param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint local_88 [3];
  undefined8 local_7c;
  long local_70;
  ulong *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_70 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  if (*(short *)(((ulong)*(uint *)(param_1 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_2 - 1)) ==
      0x40) {
    local_88[0] = ~*(uint *)(*param_2 + 7) & 1;
  }
  else {
    local_88[0] = 1;
  }
  local_7c = 0xc000000000;
  if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
      == 0x20) {
    param_2 = (ulong *)StringTable::LookupString();
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_68 = param_2;
  local_58 = param_1;
  local_48 = param_1;
  LookupIterator::Start<false>((LookupIterator *)local_88);
  cVar2 = DefineOwnPropertyIgnoreAttributes(local_88,param_3,param_4,1,1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = param_3;
  }
  return uVar1;
}

