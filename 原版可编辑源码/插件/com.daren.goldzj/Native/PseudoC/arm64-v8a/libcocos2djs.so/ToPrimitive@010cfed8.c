
/* v8::internal::JSReceiver::ToPrimitive(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::ToPrimitiveHint) */

ulong * v8::internal::JSReceiver::ToPrimitive(long param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Factory *pFVar6;
  undefined8 local_38;
  
  uVar1 = *(uint *)(param_1 + 4);
  puVar2 = (ulong *)Object::GetMethod(param_1,(ulong)uVar1 << 0x20 | 0xc58);
  puVar3 = (ulong *)0x0;
  if (puVar2 != (ulong *)0x0) {
    pFVar6 = (Factory *)((ulong)uVar1 << 0x20);
    if (((*puVar2 & 1) != 0) && ((int)*puVar2 == *(int *)(pFVar6 + 0xa0))) {
      puVar3 = (ulong *)OrdinaryToPrimitive(param_1,param_2 == 2);
      return puVar3;
    }
    local_38 = Factory::ToPrimitiveHintString(pFVar6,param_2);
    puVar3 = (ulong *)Execution::Call(pFVar6,puVar2,param_1,1,&local_38);
    if ((puVar3 != (ulong *)0x0) &&
       ((uVar5 = *puVar3, (uVar5 & 1) != 0 &&
        (0x43 < *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7))))) {
      puVar4 = (undefined8 *)Factory::NewTypeError(pFVar6,0x1d,0,0,0);
      Isolate::Throw((Isolate *)pFVar6,*puVar4,0);
      puVar3 = (ulong *)0x0;
    }
  }
  return puVar3;
}

