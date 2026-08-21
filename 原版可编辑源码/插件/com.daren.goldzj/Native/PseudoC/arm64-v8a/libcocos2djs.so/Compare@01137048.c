
/* v8::internal::String::Compare(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>) */

undefined1 v8::internal::String::Compare(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ushort *__s2;
  ulong uVar9;
  ushort *__s1;
  undefined1 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint local_50 [2];
  undefined4 local_48 [2];
  ulong local_28;
  
  if (param_2 == param_3) {
    return 1;
  }
  if ((param_2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) {
    uVar9 = *param_3;
    local_28 = *param_2;
  }
  else {
    local_28 = *param_2;
    uVar9 = *param_3;
    if (local_28 == uVar9) {
      return 1;
    }
  }
  if (*(int *)(uVar9 + 7) == 0) {
    if (*(int *)(local_28 + 7) != 0) {
      return 2;
    }
    return 1;
  }
  if (*(int *)(local_28 + 7) == 0) {
    return 0;
  }
  local_48[0] = 0;
  local_50[0] = (uint)*(ushort *)
                       ((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 7);
  uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (local_50,&local_28,local_48);
  local_28 = *param_3;
  local_48[0] = 0;
  local_50[0] = (uint)*(ushort *)
                       ((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 7);
  uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (local_50,&local_28,local_48);
  if ((int)((uVar5 & 0xffff) - (uVar6 & 0xffff)) < 0) {
    return 0;
  }
  if ((uVar5 & 0xffff) != (uVar6 & 0xffff)) {
    return 2;
  }
  puVar7 = (ulong *)Flatten(param_1,param_2,0);
  puVar8 = (ulong *)Flatten(param_1,param_3,0);
  local_28 = *puVar7;
  iVar3 = *(int *)(local_28 + 7);
  iVar4 = *(int *)(*puVar8 + 7);
  iVar2 = iVar4;
  if (iVar3 <= iVar4) {
    iVar2 = iVar3;
  }
  uVar10 = 2;
  if (iVar3 <= iVar4) {
    uVar10 = iVar4 <= iVar3;
  }
  auVar11 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
  __s1 = auVar11._0_8_;
  local_28 = *puVar8;
  auVar12 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
  __s2 = auVar12._0_8_;
  uVar9 = auVar12._8_8_ & 0xffffffff00000000;
  if (auVar11._8_8_ >> 0x20 == 1) {
    if (uVar9 == 0x100000000) {
      uVar5 = memcmp(__s1,__s2,(long)iVar2);
LAB_0113728c:
      uVar6 = uVar5 >> 0x1f;
      if (uVar5 != 0) {
        uVar10 = 2;
      }
      goto LAB_01137298;
    }
    if (0 < iVar2) {
      puVar1 = (ushort *)((long)__s1 + (long)iVar2);
      do {
        uVar5 = (uint)(byte)*__s1 - (uint)*__s2;
        if (uVar5 != 0) goto LAB_0113728c;
        __s1 = (ushort *)((long)__s1 + 1);
        __s2 = __s2 + 1;
      } while (__s1 < puVar1);
    }
  }
  else {
    puVar1 = __s1 + iVar2;
    if (uVar9 == 0x100000000) {
      if (0 < iVar2) {
        do {
          uVar5 = (uint)*__s1 - (uint)(byte)*__s2;
          if (uVar5 != 0) goto LAB_0113728c;
          __s1 = __s1 + 1;
          __s2 = (ushort *)((long)__s2 + 1);
        } while (__s1 < puVar1);
      }
    }
    else if (0 < iVar2) {
      do {
        uVar5 = (uint)*__s1 - (uint)*__s2;
        if (uVar5 != 0) goto LAB_0113728c;
        __s1 = __s1 + 1;
        __s2 = __s2 + 1;
      } while (__s1 < puVar1);
    }
  }
  uVar6 = 0;
LAB_01137298:
  if (uVar6 == 0) {
    return uVar10;
  }
  return 0;
}

