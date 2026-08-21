
ulong FUN_014c7084(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar4 = (ulong *)FUN_014c7d9c(param_3,param_1,param_2,"async function*");
  if (puVar4 == (ulong *)0x0) {
    uVar7 = *(ulong *)(param_3 + 0x180);
  }
  else {
    uVar7 = *puVar4;
    if ((uVar7 & 1) != 0) {
      uVar6 = uVar7 & 0xffffffff00000000;
      if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439) {
        uVar7 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar7 + 0xb)) + 0xf);
        if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x5b) {
          uVar7 = uVar6 | *(uint *)(uVar7 + 0xb);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar7;
        }
        else {
          puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
        }
        v8::internal::Script::GetEvalPosition(param_3,puVar5);
        uVar7 = *puVar4;
      }
    }
  }
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

