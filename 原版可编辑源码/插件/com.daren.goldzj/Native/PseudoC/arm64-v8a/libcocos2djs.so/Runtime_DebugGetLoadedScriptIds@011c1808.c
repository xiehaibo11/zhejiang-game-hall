
/* v8::internal::Runtime_DebugGetLoadedScriptIds(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DebugGetLoadedScriptIds(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  DebugScope aDStack_a8 [72];
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    lVar3 = *(long *)pIVar1;
    lVar4 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    DebugScope::DebugScope(aDStack_a8,*(Debug **)(param_3 + 0xb6c8));
    puVar5 = (ulong *)Debug::GetLoadedScripts(*(Debug **)(param_3 + 0xb6c8));
    DebugScope::~DebugScope(aDStack_a8);
    uVar8 = *puVar5;
    if (*(int *)(uVar8 + 3) < 2) {
      iVar2 = *(int *)(uVar8 + 3) >> 1;
    }
    else {
      iVar11 = 0;
      lVar12 = 0;
      do {
        lVar9 = (long)iVar11;
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(lVar9 + 7 + uVar8);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar8;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
          uVar8 = *puVar6;
        }
        lVar12 = lVar12 + 1;
        iVar11 = iVar11 + 4;
        *(uint *)(*puVar5 + lVar9 + 7) = *(uint *)(uVar8 + 0x1f) & 0xfffffffe;
        uVar8 = *puVar5;
        iVar2 = *(int *)(uVar8 + 3) >> 1;
      } while (lVar12 < iVar2);
    }
    puVar7 = (undefined8 *)Factory::NewJSArrayWithElements(param_3,puVar5,3,iVar2,0);
    uVar10 = *puVar7;
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar10;
  }
  uVar10 = FUN_011c1994(param_1,param_2,param_3);
  return uVar10;
}

