
/* v8::internal::CompilationCacheTable::LookupScript(v8::internal::Handle<v8::internal::CompilationCacheTable>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Context>,
   v8::internal::LanguageMode) */

ulong * v8::internal::CompilationCacheTable::LookupScript
                  (ulong *param_1,undefined8 param_2,ulong *param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  CanonicalHandleScope *this;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined **local_88;
  uint local_80;
  undefined8 *local_78;
  ulong *puStack_70;
  byte local_68;
  undefined4 local_64;
  
  pIVar3 = (Isolate *)(*param_3 & 0xffffffff00000000);
  uVar9 = (ulong)pIVar3 |
          (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(*param_3 + 0xaf)) + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar9);
  }
  lVar10 = (ulong)*(uint *)((long)param_3 + 4) << 0x20;
  puVar5 = (undefined8 *)String::Flatten(lVar10,param_2,0);
  param_4 = param_4 & 1;
  local_80 = CompilationCacheShape::StringSharedHash(*puVar5,*puVar4,param_4,0xffffffff);
  local_64 = 0xffffffff;
  local_88 = &PTR_IsMatch_01cb4d88;
  uVar9 = *param_1;
  uVar1 = *(uint *)(lVar10 + 0xa0);
  uVar2 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar11 = (ulong)(uVar2 & local_80);
  uVar7 = *(uint *)(uVar9 + 7 + ((long)(uVar11 * 0xc00000000 + 0xc00000000) >> 0x20));
  if (uVar7 != uVar1) {
    iVar12 = 1;
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0xa8);
    local_78 = puVar5;
    puStack_70 = puVar4;
    local_68 = param_4;
    if (uVar7 != uVar8) goto LAB_011196c8;
    do {
      do {
        uVar11 = (ulong)((int)uVar11 + iVar12 & uVar2);
        uVar7 = *(uint *)(uVar9 + 7 + ((long)(uVar11 * 0xc00000000 + 0xc00000000) >> 0x20));
        iVar12 = iVar12 + 1;
        if (uVar7 == uVar1) {
          return (ulong *)0x0;
        }
      } while (uVar7 == uVar8);
LAB_011196c8:
      uVar6 = (*(code *)*local_88)(&local_88,uVar9 & 0xffffffff00000000 | (ulong)uVar7);
    } while ((uVar6 & 1) == 0);
    iVar12 = (int)uVar11 * 0xc;
    lVar10 = *param_1 + 7;
    uVar1 = *(uint *)(lVar10 + (iVar12 + 0xc));
    if ((uVar1 & 1) != 0) {
      uVar9 = *param_1 & 0xffffffff00000000;
      if (((*(ushort *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar1) - 1)) - 0x76 < 0xf) &&
          (uVar1 = *(uint *)(lVar10 + (iVar12 + 0x10)), (uVar1 & 1) != 0)) &&
         (uVar11 = uVar9 | uVar1, *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xa6)) {
        this = *(CanonicalHandleScope **)((ulong)*(uint *)((long)param_3 + 4) << 0x20 | 0x95b8);
        if (this == (CanonicalHandleScope *)0x0) {
          pIVar3 = (Isolate *)((ulong)*(uint *)((long)param_3 + 4) << 0x20);
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar11;
          return puVar4;
        }
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar11);
        return puVar4;
      }
    }
  }
  return (ulong *)0x0;
}

