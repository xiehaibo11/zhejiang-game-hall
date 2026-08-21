
/* v8::internal::JSReceiver::OrdinaryToPrimitive(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::OrdinaryToPrimitiveHint) */

ulong * v8::internal::JSReceiver::OrdinaryToPrimitive(long param_1,int param_2)

{
  Factory *pFVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  Factory *pFVar5;
  long lVar6;
  Factory *local_c8 [2];
  undefined4 local_b8;
  int local_b4;
  undefined8 local_ac;
  Factory *local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c8[0] = (Factory *)0x0;
  local_c8[1] = (Factory *)0x0;
  pFVar5 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  if (param_2 == 1) {
    local_c8[0] = pFVar5 + 0xa68;
    local_c8[1] = pFVar5 + 0xad0;
  }
  else {
    if (param_2 != 0) goto LAB_010d0030;
    local_c8[0] = pFVar5 + 0xad0;
    local_c8[1] = pFVar5 + 0xa68;
  }
LAB_010d0030:
  lVar6 = 0;
  do {
    puVar3 = *(ulong **)((long)local_c8 + lVar6);
    if (*(short *)(((ulong)pFVar5 | 7) + (ulong)*(uint *)(*puVar3 - 1)) == 0x40) {
      local_b8 = 3;
      if ((*(byte *)(*puVar3 + 7) & 1) != 0) {
        local_b8 = 0;
      }
    }
    else {
      local_b8 = 3;
    }
    local_ac = 0xc000000000;
    local_a0 = pFVar5;
    if ((*(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) & 0xffe0)
        == 0x20) {
      puVar3 = (ulong *)StringTable::LookupString(pFVar5);
    }
    uStack_90 = 0;
    uStack_80 = 0;
    local_70 = 0xffffffffffffffff;
    uStack_68 = 0xffffffffffffffff;
    local_98 = puVar3;
    local_88 = param_1;
    local_78 = param_1;
    LookupIterator::Start<false>((LookupIterator *)&local_b8);
    if (local_b4 == 4) {
      pFVar1 = local_a0 + 0xa0;
      uVar4 = *(ulong *)pFVar1;
    }
    else {
      pFVar1 = (Factory *)Object::GetProperty((LookupIterator *)&local_b8,false);
      if (pFVar1 == (Factory *)0x0) {
        return (ulong *)0x0;
      }
      uVar4 = *(ulong *)pFVar1;
    }
    if (((uVar4 & 1) != 0) &&
       ((*(byte *)((uVar4 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar4 - 1)) >> 1 & 1) != 0))
    {
      puVar3 = (ulong *)Execution::Call(pFVar5,pFVar1,param_1,0,0);
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      uVar4 = *puVar3;
      if ((uVar4 & 1) == 0) {
        return puVar3;
      }
      if (*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7) < 0x44) {
        return puVar3;
      }
    }
    lVar6 = lVar6 + 8;
    if (lVar6 == 0x10) {
      puVar2 = (undefined8 *)Factory::NewTypeError(pFVar5,0x1d,0,0,0);
      Isolate::Throw((Isolate *)pFVar5,*puVar2,0);
      return (ulong *)0x0;
    }
  } while( true );
}

