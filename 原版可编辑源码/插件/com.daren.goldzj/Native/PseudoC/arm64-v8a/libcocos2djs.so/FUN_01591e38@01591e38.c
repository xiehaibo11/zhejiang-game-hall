
Isolate * FUN_01591e38(Isolate *param_1,ulong *param_2,int param_3,long *param_4)

{
  ulong *puVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_a8 [4];
  char local_a4 [4];
  undefined1 auStack_a0 [4];
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Isolate *local_80;
  ulong *local_78;
  undefined8 uStack_70;
  Isolate *local_68;
  undefined8 uStack_60;
  Isolate *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar6 = *(ulong *)(param_1 + 0x2bc8);
  pIVar3 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)pIVar3;
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  pIVar2 = (Isolate *)
           v8::internal::Context::Lookup
                     (puVar1,param_2,3,&local_9c,auStack_a0,local_a4,auStack_a8,0);
  if ((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) {
    return (Isolate *)0x0;
  }
  if ((int)*(ulong *)(param_1 + 0x2bd8) == *(int *)(param_1 + 0xa8)) {
    if (((pIVar2 != (Isolate *)0x0) && (uVar6 = *(ulong *)pIVar2, (uVar6 & 1) != 0)) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x44)) {
      if (param_4 != (long *)0x0) {
        *param_4 = (long)(param_1 + 0xa0);
      }
      pIVar3 = (Isolate *)v8::internal::SourceTextModule::LoadVariable(param_1,pIVar2,local_9c);
      return pIVar3;
    }
    if (local_9c == -1) {
      if (pIVar2 != (Isolate *)0x0) {
        if (((*(ulong *)pIVar2 & 1) == 0) ||
           (local_58 = pIVar2,
           *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*(ulong *)pIVar2 - 1)) < 0xa9)) {
          local_58 = (Isolate *)
                     v8::internal::LookupIterator::GetRootForNonJSReceiver
                               (param_1,pIVar2,0xffffffffffffffff);
        }
        local_98 = 3;
        if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x40) &&
           (local_98 = 3, (*(byte *)(*param_2 + 7) & 1) != 0)) {
          local_98 = 0;
        }
        local_8c = 0xc000000000;
        local_80 = param_1;
        if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) &
            0xffe0) == 0x20) {
          param_2 = (ulong *)v8::internal::StringTable::LookupString(param_1,param_2);
        }
        uStack_70 = 0;
        uStack_60 = 0;
        local_48 = 0xffffffffffffffff;
        uStack_50 = 0xffffffffffffffff;
        local_78 = param_2;
        local_68 = pIVar2;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_98);
        if (local_94 == 4) {
          local_80 = local_80 + 0xa0;
        }
        else {
          local_80 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_98,false)
          ;
          if (local_80 == (Isolate *)0x0) {
            return (Isolate *)0x0;
          }
        }
        if (param_4 == (long *)0x0) {
          return local_80;
        }
        uVar6 = *(ulong *)pIVar2;
        if (((uVar6 & 1) != 0) &&
           ((uVar5 = uVar6 & 0xffffffff00000000 | 7,
            *(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0xaa ||
            (*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x427)))) {
          pIVar2 = param_1 + 0xa0;
        }
        *param_4 = (long)pIVar2;
        return local_80;
      }
      if (param_3 != 0) {
        if (param_4 != (long *)0x0) {
          *param_4 = (long)(param_1 + 0xa0);
        }
        return param_1 + 0xa0;
      }
    }
    else {
      uVar6 = *(ulong *)pIVar2 & 0xffffffff00000000 |
              (ulong)*(uint *)(*(ulong *)pIVar2 + (long)(local_9c << 2) + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar2 = *(Isolate **)pIVar3;
        if (pIVar2 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar2 = (Isolate *)v8::internal::HandleScope::Extend(param_1);
        }
        *(Isolate **)pIVar3 = pIVar2 + 8;
        *(ulong *)pIVar2 = uVar6;
      }
      else {
        pIVar2 = (Isolate *)
                 v8::internal::CanonicalHandleScope::Lookup
                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      }
      if (((local_a4[0] != '\0') || ((*(ulong *)pIVar2 & 1) == 0)) ||
         ((int)*(ulong *)pIVar2 != *(int *)(param_1 + 0xa8))) {
        if (param_4 == (long *)0x0) {
          return pIVar2;
        }
        *param_4 = (long)(param_1 + 0xa0);
        return pIVar2;
      }
    }
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewReferenceError((Factory *)param_1,0xb2,param_2,0,0);
    v8::internal::Isolate::Throw(param_1,*puVar4,0);
  }
  return (Isolate *)0x0;
}

