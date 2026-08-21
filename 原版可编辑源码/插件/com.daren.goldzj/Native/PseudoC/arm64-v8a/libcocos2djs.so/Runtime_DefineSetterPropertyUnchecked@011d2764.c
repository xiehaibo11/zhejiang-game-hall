
/* v8::internal::Runtime_DefineSetterPropertyUnchecked(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_DefineSetterPropertyUnchecked(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_011d2a64(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  puVar11 = param_2 + -1;
  uVar8 = *puVar11;
  if (((uVar8 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
  puVar12 = param_2 + -2;
  uVar8 = *puVar12;
  if ((uVar8 & 1) == 0) {
LAB_011d2a14:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSFunction()");
  }
  uVar13 = uVar8 & 0xffffffff00000000;
  uVar15 = uVar13 | 7;
  if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 0x439) goto LAB_011d2a14;
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  uVar2 = (int)param_2[-3] >> 1;
  if (7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args.smi_at(3) & ~(READ_ONLY | DONT_ENUM | DONT_DELETE) == 0");
  }
  uVar14 = uVar13 | *(uint *)(uVar8 + 0xb);
  uVar5 = *(uint *)(uVar14 + 7);
  uVar8 = uVar13 | uVar5;
  if (((uVar5 & 1) == 0) || (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 0x83)) {
    if (uVar5 != 0) {
      if ((uVar5 & 1) != 0) goto LAB_011d2888;
      goto LAB_011d28c8;
    }
LAB_011d28c4:
    uVar8 = *(ulong *)(uVar13 + 200);
LAB_011d28c8:
    if (*(int *)(uVar8 + 7) != 0) goto LAB_011d2944;
LAB_011d28d0:
    uVar8 = *puVar12 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar12 - 1);
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
    }
    uVar8 = JSFunction::SetName(puVar12,puVar11,param_3 + 0x9b0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*puVar12 - 1) != (int)*puVar6) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","*setter_map == setter->map()");
      }
      goto LAB_011d2944;
    }
  }
  else {
    local_68 = uVar8;
    uVar8 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_68);
    if ((uVar8 & 1) == 0) goto LAB_011d28c4;
    uVar5 = *(uint *)(uVar14 + 7);
    uVar8 = uVar13 | uVar5;
    if ((uVar5 & 1) == 0) goto LAB_011d28c8;
LAB_011d2888:
    if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 0x83) goto LAB_011d28c8;
    local_68 = uVar8;
    uVar15 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_68);
    if ((uVar15 & 1) == 0) goto LAB_011d28c4;
    local_68 = uVar8;
    lVar7 = ScopeInfo::FunctionName((ScopeInfo *)&local_68);
    if (*(int *)(lVar7 + 7) == 0) goto LAB_011d28d0;
LAB_011d2944:
    lVar7 = JSObject::DefineAccessor(param_2,puVar11,param_3 + 0xb0,puVar12,uVar2);
    if (lVar7 != 0) {
      pIVar9 = param_3 + 0xa0;
      goto LAB_011d296c;
    }
  }
  pIVar9 = param_3 + 0x180;
LAB_011d296c:
  uVar10 = *(undefined8 *)pIVar9;
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

