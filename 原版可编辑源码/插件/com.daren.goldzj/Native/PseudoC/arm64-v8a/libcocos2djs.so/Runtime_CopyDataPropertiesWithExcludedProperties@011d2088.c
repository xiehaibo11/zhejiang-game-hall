
/* v8::internal::Runtime_CopyDataPropertiesWithExcludedProperties(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CopyDataPropertiesWithExcludedProperties
          (int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  void *__s;
  long *plVar7;
  Isolate *pIVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong local_80;
  uint local_74;
  void *local_70;
  ulong uStack_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_011d2354(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  iVar9 = (int)*param_2;
  if (((*param_2 & 1) == 0) ||
     ((iVar9 != *(int *)(param_3 + 0xb0) && (iVar9 != *(int *)(param_3 + 0xa0))))) {
    lVar13 = ((long)param_1 << 0x20) + -0x100000000;
    uVar15 = lVar13 >> 0x20;
    uVar10 = lVar13 >> 0x1d;
    if (uVar15 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) {
      plVar7 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar7 + 0x18))();
      __s = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
      if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    if (lVar13 != 0) {
      memset(__s,0,lVar13 >> 0x1d);
    }
    local_70 = __s;
    uStack_68 = uVar15;
    if (1 < param_1) {
      lVar13 = 0;
      lVar14 = (ulong)(uint)param_1 - 1;
      do {
        puVar12 = (ulong *)((long)param_2 - (ulong)((int)lVar13 + 8));
        uVar10 = *puVar12;
        if (((uVar10 & 1) != 0) &&
           (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x40)) {
          uVar5 = *(uint *)(uVar10 + 3);
          local_80 = uVar10;
          if ((uVar5 & 0xc0000003) == 0) {
            local_74 = uVar5 >> 3 & 0xffffff;
          }
          else if (((uVar5 & 3) == 2) ||
                  (uVar10 = String::SlowAsArrayIndex((String *)&local_80,&local_74),
                  (uVar10 & 1) == 0)) goto LAB_011d218c;
          puVar12 = (ulong *)Factory::NewNumberFromUint((Factory *)param_3,local_74);
        }
LAB_011d218c:
        lVar14 = lVar14 + -1;
        *(ulong **)((long)local_70 + lVar13) = puVar12;
        lVar13 = lVar13 + 8;
      } while (lVar14 != 0);
    }
    uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar10;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    pIVar8 = (Isolate *)Factory::NewJSObject((Factory *)param_3,puVar12,0);
    cVar6 = JSReceiver::SetOrCopyDataProperties(param_3,pIVar8,param_2,&local_70,0);
    pIVar2 = param_3 + 0x180;
    if (cVar6 != '\0') {
      pIVar2 = pIVar8;
    }
    uVar11 = *(undefined8 *)pIVar2;
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  else {
    uVar11 = ErrorUtils::ThrowLoadFromNullOrUndefined(param_3,param_2);
  }
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

