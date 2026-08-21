
/* v8::internal::JSBoundFunction::GetName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSBoundFunction>) */

Isolate * v8::internal::JSBoundFunction::GetName(Isolate *param_1,ulong *param_2)

{
  short sVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong uVar6;
  
  pIVar4 = param_1 + 0x95a0;
  uVar5 = *param_2 & 0xffffffff00000000;
  uVar6 = uVar5 | *(uint *)(*param_2 + 0xb);
  uVar5 = uVar5 | 7;
  sVar1 = *(short *)(uVar5 + *(uint *)(uVar6 - 1));
  pIVar2 = param_1 + 0x558;
  while (sVar1 == 0x438) {
    pIVar2 = (Isolate *)Factory::NewConsString((Factory *)param_1,param_1 + 0x558,pIVar2);
    if (pIVar2 == (Isolate *)0x0) {
      return (Isolate *)0x0;
    }
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)pIVar4;
      if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = param_2 + 1;
      *param_2 = uVar5;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *param_2;
    }
    uVar6 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
    uVar5 = uVar5 & 0xffffffff00000000 | 7;
    sVar1 = *(short *)(uVar5 + *(uint *)(uVar6 - 1));
  }
  if (*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x439) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar4;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    puVar3 = (ulong *)JSFunction::GetName(param_1,puVar3);
    uVar6 = *puVar3;
    if (((uVar6 & 1) != 0) &&
       (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
      pIVar4 = (Isolate *)Factory::NewConsString((Factory *)param_1,pIVar2,puVar3);
      return pIVar4;
    }
  }
  return pIVar2;
}

