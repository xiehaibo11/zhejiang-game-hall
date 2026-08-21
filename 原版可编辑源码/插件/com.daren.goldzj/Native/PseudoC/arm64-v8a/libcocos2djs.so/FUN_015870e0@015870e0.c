
undefined8 FUN_015870e0(Factory *param_1,ulong *param_2,long param_3)

{
  Factory *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int local_64;
  
  uVar3 = v8::internal::Factory::NewJSObjectWithNullProto(param_1);
  uVar7 = *param_2;
  uVar2 = *(uint *)(uVar7 + 3);
  if (3 < (int)uVar2) {
    lVar8 = 0;
    iVar9 = 4;
    uVar10 = 1;
    pFVar1 = param_1 + 0x95a0;
    while( true ) {
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (lVar8 >> 0x20 | 7U));
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pFVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)pFVar1 = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      local_64 = *(int *)(*param_2 + (long)iVar9 + 7) >> 1;
      plVar5 = *(long **)(param_3 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_64);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pFVar1;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)pFVar1 = puVar6 + 1;
        *puVar6 = uVar7;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      v8::internal::JSObject::AddProperty(param_1,uVar3,puVar4,puVar6,0);
      if (uVar2 >> 2 <= uVar10) break;
      uVar7 = *param_2;
      iVar9 = iVar9 + 8;
      lVar8 = lVar8 + 0x800000000;
      uVar10 = uVar10 + 1;
    }
  }
  return uVar3;
}

