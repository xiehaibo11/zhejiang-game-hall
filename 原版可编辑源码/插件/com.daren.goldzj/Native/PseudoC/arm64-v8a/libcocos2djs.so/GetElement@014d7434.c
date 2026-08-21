
/* v8::internal::Object::GetElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, unsigned int) */

Factory * v8::internal::Object::GetElement(Factory *param_1,ulong *param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  Factory *local_70;
  ulong *local_68;
  undefined8 local_60;
  ulong *puStack_58;
  undefined8 local_50;
  ulong *puStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  uVar2 = (ulong)param_3;
  if (((*param_2 & 1) == 0) ||
     (puStack_48 = param_2,
     *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
    puStack_48 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_1,param_2,uVar2);
  }
  local_68 = (ulong *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_88 = 3;
  local_7c = 0xc000000000;
  uStack_38 = 0xffffffffffffffff;
  local_70 = param_1;
  puVar1 = local_68;
  puStack_58 = param_2;
  local_40 = uVar2;
  if (((param_3 == 0xffffffff) &&
      (*(short *)((*puStack_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_48 - 1)) !=
       0x41b)) &&
     (puVar1 = (ulong *)Factory::SizeToString(param_1,0xffffffff,true),
     (*(ushort *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) & 0xffe0) ==
     0x20)) {
    puVar1 = (ulong *)StringTable::LookupString(param_1);
  }
  local_68 = puVar1;
  LookupIterator::Start<true>((LookupIterator *)&local_88);
  if (local_84 == 4) {
    local_70 = local_70 + 0xa0;
  }
  else {
    local_70 = (Factory *)GetProperty((LookupIterator *)&local_88,false);
  }
  return local_70;
}

