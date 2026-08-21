
/* v8::internal::CompilationCacheTable::LookupRegExp(v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

Isolate * __thiscall
v8::internal::CompilationCacheTable::LookupRegExp
          (CompilationCacheTable *this,long *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined **local_70;
  uint local_68;
  long *local_60;
  ulong uStack_58;
  
  local_70 = (undefined **)*param_2;
  uVar6 = *(ulong *)this;
  pIVar7 = (Isolate *)(uVar6 & 0xffffffff00000000);
  uVar9 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
  if ((*(uint *)((long)local_70 + 3) & 1) == 0) {
    local_68 = *(uint *)((long)local_70 + 3) >> 3;
  }
  else {
    local_68 = String::ComputeAndSetHash((String *)&local_70);
    uVar6 = *(ulong *)this;
  }
  local_68 = local_68 + ((int)((param_3 & 0xffffffff) << 1) >> 1);
  local_70 = &PTR_IsMatch_01cb4db0;
  uVar1 = *(uint *)(pIVar7 + 0xa0);
  uVar10 = *(undefined8 *)(pIVar7 + 0xa8);
  uVar3 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  uVar8 = (ulong)(uVar3 & local_68);
  uVar2 = *(uint *)(uVar6 + ((long)(uVar8 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
  if (uVar2 == uVar1) {
LAB_01119b98:
    pIVar4 = pIVar7 + 0xa0;
  }
  else {
    uVar5 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
    iVar11 = 1;
    local_60 = param_2;
    uStack_58 = uVar9;
    if (uVar2 != (uint)uVar10) goto LAB_01119b4c;
    do {
      do {
        uVar8 = (ulong)((int)uVar8 + iVar11 & uVar3);
        uVar2 = *(uint *)(uVar6 + ((long)(uVar8 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
        iVar11 = iVar11 + 1;
        uVar5 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
        if (uVar2 == uVar1) goto LAB_01119b98;
      } while (uVar2 == (uint)uVar10);
LAB_01119b4c:
      uVar9 = (*(code *)*local_70)(&local_70,uVar5);
      uVar6 = *(ulong *)this;
    } while ((uVar9 & 1) == 0);
    uVar6 = uVar6 & 0xffffffff00000000 |
            (ulong)*(uint *)(uVar6 + (long)((int)uVar8 * 0xc + 0x10) + 7);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar4 = *(Isolate **)(pIVar7 + 0x95a0);
      if (pIVar4 == *(Isolate **)(pIVar7 + 0x95a8)) {
        pIVar4 = (Isolate *)HandleScope::Extend(pIVar7);
      }
      *(Isolate **)(pIVar7 + 0x95a0) = pIVar4 + 8;
      *(ulong *)pIVar4 = uVar6;
    }
    else {
      pIVar4 = (Isolate *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
    }
  }
  return pIVar4;
}

