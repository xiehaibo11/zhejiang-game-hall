
/* v8::internal::RegExpUtils::SetLastIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, unsigned long) */

long * v8::internal::RegExpUtils::SetLastIndex(Factory *param_1,long *param_2,long param_3)

{
  Factory *pFVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  pFVar1 = param_1 + 0x95a0;
  if ((param_3 == (int)param_3) && (param_3 + 0x40000000U >> 0x1f == 0)) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = param_3 << 1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_3 << 1);
    }
  }
  else {
    puVar3 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>(param_1);
    *(double *)(*puVar3 + 3) = (double)param_3;
  }
  iVar2 = *(int *)(*param_2 + -1);
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x243);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar4;
  }
  if (iVar2 == *(int *)(uVar5 + 0x1b)) {
    *(int *)(*param_2 + 0x17) = (int)*puVar3;
  }
  else {
    param_2 = (long *)Object::SetProperty(param_1,param_2,param_1 + 0x7b0,puVar3,0,1);
  }
  return param_2;
}

