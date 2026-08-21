
/* v8::internal::String::Trim(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   v8::internal::String::TrimMode) */

ulong * v8::internal::String::Trim(Factory *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint local_68;
  int local_64;
  ulong local_48;
  
  puVar6 = (ulong *)Flatten(param_1,param_2,0);
  uVar7 = *puVar6;
  iVar8 = 0;
  iVar2 = *(int *)(uVar7 + 7);
  if ((param_3 < 2) && (0 < iVar2)) {
    iVar9 = 1;
    while( true ) {
      iVar8 = iVar9 + -1;
      local_68 = (uint)*(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7);
      local_64 = iVar8;
      local_48 = uVar7;
      uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_68,&local_48,&local_64);
      uVar1 = uVar5 & 0xffff;
      if (uVar1 < 0x80) {
        if (((byte)(&DAT_019da8ed)[uVar1] >> 3 & 1) == 0) goto LAB_011359e4;
      }
      else {
        uVar7 = unibrow::WhiteSpace::Is(uVar1);
        if (((uVar5 & 0xfffe) != 0x2028) && ((uVar7 & 1) == 0)) goto LAB_011359e4;
      }
      iVar8 = iVar2;
      if (iVar2 == iVar9) break;
      uVar7 = *puVar6;
      iVar9 = iVar9 + 1;
    }
  }
  else {
LAB_011359e4:
    iVar9 = iVar2;
    iVar4 = iVar2;
    if ((param_3 & 0xfffffffd) == 0) {
      do {
        while( true ) {
          iVar3 = iVar9;
          iVar2 = iVar4;
          if (iVar3 <= iVar8) goto joined_r0x01135a98;
          local_48 = *puVar6;
          iVar9 = iVar3 + -1;
          local_68 = (uint)*(ushort *)
                            ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
          local_64 = iVar9;
          uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (&local_68,&local_48,&local_64);
          uVar1 = uVar5 & 0xffff;
          iVar2 = iVar3;
          iVar4 = iVar8;
          if (uVar1 < 0x80) break;
          uVar7 = unibrow::WhiteSpace::Is(uVar1);
          if (((uVar5 & 0xfffe) != 0x2028) && ((uVar7 & 1) == 0)) goto joined_r0x01135a98;
        }
      } while (((byte)(&DAT_019da8ed)[uVar1] >> 3 & 1) != 0);
    }
  }
joined_r0x01135a98:
  if ((iVar8 != 0) || (*(int *)(*puVar6 + 7) != iVar2)) {
    puVar6 = (ulong *)Factory::NewProperSubString(param_1,puVar6,iVar8,iVar2);
  }
  return puVar6;
}

