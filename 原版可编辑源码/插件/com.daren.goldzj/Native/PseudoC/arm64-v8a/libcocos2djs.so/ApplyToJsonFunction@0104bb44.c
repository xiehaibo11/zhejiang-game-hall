
/* v8::internal::JsonStringifier::ApplyToJsonFunction(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall
v8::internal::JsonStringifier::ApplyToJsonFunction
          (JsonStringifier *this,ulong *param_2,byte *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  byte *local_c0;
  uint local_b8 [3];
  undefined8 local_ac;
  ulong local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pIVar4 = *(Isolate **)this;
  pIVar1 = pIVar4 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar4 + 0x95a8);
  *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
  uVar6 = *(ulong *)this;
  puVar5 = *(ulong **)(this + 0x30);
  if (((*param_2 & 1) == 0) ||
     (local_78 = param_2, *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
    local_78 = (ulong *)LookupIterator::GetRootForNonJSReceiver(uVar6,param_2,0xffffffffffffffff);
  }
  local_b8[0] = 2;
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(*puVar5 - 1)) == 0x40) {
    local_b8[0] = (*(int *)(*puVar5 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_ac = 0xc000000000;
  local_a0 = uVar6;
  if ((*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
      0x20) {
    puVar5 = (ulong *)StringTable::LookupString(uVar6,puVar5);
  }
  uStack_90 = 0;
  uStack_80 = 0;
  local_68 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_98 = puVar5;
  local_88 = param_2;
  LookupIterator::Start<false>((LookupIterator *)local_b8);
  puVar5 = (ulong *)Object::GetProperty((LookupIterator *)local_b8,false);
  if (puVar5 == (ulong *)0x0) {
    param_2 = (ulong *)0x0;
  }
  else {
    uVar6 = *puVar5;
    if (((uVar6 & 1) != 0) &&
       ((*(byte *)((uVar6 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 1 & 1) != 0))
    {
      if ((*param_3 & 1) == 0) {
        param_3 = (byte *)Factory::NumberToString(*(Factory **)this,param_3,1);
      }
      local_c0 = param_3;
      puVar5 = (ulong *)Execution::Call(*(undefined8 *)this,puVar5,param_2,1,&local_c0);
      if (puVar5 == (ulong *)0x0) {
        param_2 = (ulong *)0x0;
      }
      else {
        uVar6 = *puVar5;
        *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
        *(long *)pIVar1 = lVar2;
        if (*(long *)(pIVar4 + 0x95a8) != lVar3) {
          *(long *)(pIVar4 + 0x95a8) = lVar3;
          HandleScope::DeleteExtensions(pIVar4);
        }
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)pIVar1;
          if (param_2 == *(ulong **)(pIVar4 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend(pIVar4);
          }
          *(ulong **)pIVar1 = param_2 + 1;
          *param_2 = uVar6;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
        }
        lVar2 = *(long *)pIVar1;
        lVar3 = *(long *)(pIVar4 + 0x95a8);
        *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
      }
    }
  }
  if (pIVar4 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
    if (*(long *)(pIVar4 + 0x95a8) != lVar3) {
      *(long *)(pIVar4 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar4);
    }
  }
  return param_2;
}

