
/* v8::internal::String::SlowEquals(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>) */

bool v8::internal::String::SlowEquals(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ushort *__s2;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *__s1;
  ushort *puVar12;
  ushort uVar13;
  ushort uVar14;
  ushort *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint local_58 [2];
  undefined4 local_50 [2];
  ulong local_48 [9];
  
  while( true ) {
    local_48[0] = *param_2;
    uVar9 = *param_3;
    uVar2 = *(uint *)(local_48[0] + 7);
    uVar16 = (ulong)uVar2;
    if (uVar2 != *(uint *)(uVar9 + 7)) {
      return false;
    }
    if (uVar2 == 0) {
      return true;
    }
    uVar8 = local_48[0] & 0xffffffff00000000;
    uVar10 = uVar8 | 7;
    if (((0x3f < *(ushort *)(uVar10 + *(uint *)(local_48[0] - 1))) ||
        ((*(ushort *)(uVar10 + *(uint *)(local_48[0] - 1)) & 7) != 5)) &&
       ((uVar11 = uVar9 & 0xffffffff00000000 | 7, 0x3f < *(ushort *)(uVar11 + *(uint *)(uVar9 - 1))
        || ((*(ushort *)(uVar11 + *(uint *)(uVar9 - 1)) & 7) != 5)))) break;
    pIVar1 = param_1 + 0x95a0;
    if ((*(ushort *)(uVar10 + *(uint *)(local_48[0] - 1)) < 0x40) &&
       ((*(ushort *)(uVar10 + *(uint *)(local_48[0] - 1)) & 7) == 5)) {
      uVar8 = uVar8 | *(uint *)(local_48[0] + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_2 = *(ulong **)pIVar1;
        if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
          param_2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = param_2 + 1;
        *param_2 = uVar8;
      }
      else {
        param_2 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
    }
    uVar16 = *param_3;
    uVar9 = uVar16 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar9 + *(uint *)(uVar16 - 1)) < 0x40) &&
       ((*(ushort *)(uVar9 + *(uint *)(uVar16 - 1)) & 7) == 5)) {
      uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_3 = *(ulong **)pIVar1;
        if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
          param_3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = param_3 + 1;
        *param_3 = uVar16;
      }
      else {
        param_3 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      }
    }
    if (param_2 == param_3) {
      return true;
    }
    uVar16 = *param_2;
    if (((param_2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) && (uVar16 == *param_3)) {
      return true;
    }
    if ((*(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0x20) &&
       (*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0x20)) {
      return false;
    }
  }
  if ((((*(uint *)(local_48[0] + 3) & 1) == 0) && ((*(uint *)(uVar9 + 3) & 1) == 0)) &&
     (7 < (*(uint *)(local_48[0] + 3) ^ *(uint *)(uVar9 + 3)))) {
    return false;
  }
  local_50[0] = 0;
  local_58[0] = (uint)*(ushort *)((uVar8 | *(uint *)(local_48[0] - 1)) + 7);
  sVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (local_58,local_48,local_50);
  local_48[0] = *param_3;
  local_50[0] = 0;
  local_58[0] = (uint)*(ushort *)
                       ((local_48[0] & 0xffffffff00000000 | (ulong)*(uint *)(local_48[0] - 1)) + 7);
  sVar4 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (local_58,local_48,local_50);
  if (sVar3 != sVar4) {
    return false;
  }
  puVar6 = (ulong *)Flatten(param_1,param_2,0);
  puVar7 = (ulong *)Flatten(param_1,param_3,0);
  local_48[0] = *puVar6;
  auVar17 = GetFlatContent((PerThreadAssertScopeDebugOnly *)local_48);
  __s1 = auVar17._0_8_;
  local_48[0] = *puVar7;
  auVar18 = GetFlatContent((PerThreadAssertScopeDebugOnly *)local_48);
  __s2 = auVar18._0_8_;
  uVar9 = auVar17._8_8_ & 0xffffffff00000000;
  uVar8 = auVar18._8_8_ & 0xffffffff00000000;
  if ((uVar9 == 0x100000000) && (uVar8 == 0x100000000)) {
    iVar5 = memcmp(__s1,__s2,(long)(int)uVar2);
    return iVar5 == 0;
  }
  if ((int)uVar2 < 1) {
    return true;
  }
  puVar12 = __s2;
  puVar15 = __s1;
  if (uVar9 != 0x100000000) goto LAB_01136ef0;
LAB_01136ee0:
  uVar14 = (ushort)(byte)*__s1;
  uVar13 = (ushort)(byte)*__s1;
  if (uVar8 == 0x100000000) goto LAB_01136eb4;
  do {
    if (uVar14 != *__s2) {
      return false;
    }
    while( true ) {
      puVar12 = (ushort *)((long)puVar12 + 1);
      __s2 = __s2 + 1;
      __s1 = (ushort *)((long)__s1 + 1);
      uVar16 = uVar16 - 1;
      puVar15 = puVar15 + 1;
      if (uVar16 == 0) {
        return true;
      }
      if (uVar9 == 0x100000000) goto LAB_01136ee0;
LAB_01136ef0:
      uVar14 = *puVar15;
      uVar13 = uVar14;
      if (uVar8 != 0x100000000) break;
LAB_01136eb4:
      if (uVar13 != (byte)*puVar12) {
        return false;
      }
    }
  } while( true );
}

