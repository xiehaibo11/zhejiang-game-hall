
/* v8::internal::Object::GetMethod(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Name>) */

Factory * v8::internal::Object::GetMethod(long param_1,ulong *param_2)

{
  Factory *pFVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Factory *pFVar4;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  Factory *local_70;
  ulong *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pFVar4 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  local_88 = 3;
  if ((*(short *)(((ulong)*(uint *)(param_1 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_2 - 1)) ==
       0x40) && (local_88 = 3, (*(byte *)(*param_2 + 7) & 1) != 0)) {
    local_88 = 0;
  }
  local_7c = 0xc000000000;
  local_68 = param_2;
  local_70 = pFVar4;
  if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
      == 0x20) {
    local_68 = (ulong *)StringTable::LookupString(pFVar4,param_2);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_58 = param_1;
  local_48 = param_1;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_84 == 4) {
    pFVar1 = local_70 + 0xa0;
    uVar3 = *(ulong *)pFVar1;
  }
  else {
    pFVar1 = (Factory *)GetProperty((LookupIterator *)&local_88,false);
    if (pFVar1 == (Factory *)0x0) {
      return (Factory *)0x0;
    }
    uVar3 = *(ulong *)pFVar1;
  }
  if ((uVar3 & 1) != 0) {
    if (((int)uVar3 == *(int *)(pFVar4 + 0xb0)) || ((int)uVar3 == *(int *)(pFVar4 + 0xa0))) {
      return pFVar4 + 0xa0;
    }
    if ((*(byte *)((uVar3 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar3 - 1)) >> 1 & 1) != 0) {
      return pFVar1;
    }
  }
  puVar2 = (undefined8 *)Factory::NewTypeError(pFVar4,0x72,pFVar1,param_2,param_1);
  Isolate::Throw((Isolate *)pFVar4,*puVar2,0);
  return (Factory *)0x0;
}

