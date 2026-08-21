
/* v8::internal::JSObject::SetOwnElementIgnoreAttributes(v8::internal::Handle<v8::internal::JSObject>,
   unsigned long, v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

undefined8
v8::internal::JSObject::SetOwnElementIgnoreAttributes
          (ulong *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulong *puVar3;
  Factory *this;
  undefined4 local_88 [3];
  undefined8 local_7c;
  Factory *local_70;
  ulong *local_68;
  undefined8 local_60;
  ulong *puStack_58;
  undefined8 local_50;
  ulong *puStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  local_88[0] = 1;
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  local_60 = 0;
  local_50 = 0;
  local_7c = 0xc000000000;
  local_68 = (ulong *)0x0;
  uStack_38 = 0xffffffffffffffff;
  local_70 = this;
  puVar3 = local_68;
  puStack_58 = param_1;
  puStack_48 = param_1;
  local_40 = param_2;
  if (((0xfffffffe < param_2) &&
      (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) != 0x41b))
     && (puVar3 = (ulong *)Factory::SizeToString(this,param_2,true),
        (*(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) & 0xffe0)
        == 0x20)) {
    puVar3 = (ulong *)StringTable::LookupString(this);
  }
  local_68 = puVar3;
  LookupIterator::Start<true>((LookupIterator *)local_88);
  cVar2 = DefineOwnPropertyIgnoreAttributes(local_88,param_3,param_4,1,1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = param_3;
  }
  return uVar1;
}

