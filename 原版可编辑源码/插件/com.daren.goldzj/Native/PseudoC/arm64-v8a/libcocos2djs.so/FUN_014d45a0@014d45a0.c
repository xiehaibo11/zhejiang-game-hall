
ulong FUN_014d45a0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint local_80 [2];
  undefined4 local_78 [2];
  char *local_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::Isolate::CountUsage(param_3,0x3e);
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
LAB_014d45f4:
    puVar8 = (ulong *)v8::internal::Object::ConvertToString(param_3,param_2);
  }
  else {
    if (((int)uVar12 == *(int *)(param_3 + 0xb0)) || ((int)uVar12 == *(int *)(param_3 + 0xa0))) {
      uStack_68 = __strlen_chk("String.prototype.localeCompare",0x1f);
      local_70 = "String.prototype.localeCompare";
      lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_70,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      puVar10 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x1a,lVar9,0,0)
      ;
      uVar12 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
      goto LAB_014d46d4;
    }
    puVar8 = param_2;
    if (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))
    goto LAB_014d45f4;
  }
  if (puVar8 != (ulong *)0x0) {
    param_2 = param_2 + -1;
    uVar12 = *param_2;
    if (((uVar12 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
      param_2 = (ulong *)v8::internal::Object::ConvertToString(param_3,param_2);
    }
    if (param_2 != (ulong *)0x0) {
      if (puVar8 != param_2) {
        pcVar13 = (char *)*puVar8;
        if (pcVar13 != (char *)*param_2) {
          uVar5 = *(uint *)(pcVar13 + 7);
          uVar4 = *(uint *)((char *)*param_2 + 7);
          if (uVar5 != 0) {
            if (uVar4 == 0) {
              uVar12 = (long)(int)uVar5 << 1;
            }
            else {
              local_78[0] = 0;
              uVar1 = uVar5;
              if ((int)uVar4 <= (int)uVar5) {
                uVar1 = uVar4;
              }
              local_80[0] = (uint)*(ushort *)
                                   (((ulong)pcVar13 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(pcVar13 + -1)) + 7);
              local_70 = pcVar13;
              uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                                (local_80,&local_70,local_78);
              local_70 = (char *)*param_2;
              local_78[0] = 0;
              local_80[0] = (uint)*(ushort *)
                                   (((ulong)local_70 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(local_70 + -1)) + 7);
              uVar7 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                                (local_80,&local_70,local_78);
              uVar6 = (uVar6 & 0xffff) - (uVar7 & 0xffff);
              if (uVar6 == 0) {
                puVar10 = (undefined8 *)v8::internal::String::Flatten(param_3,puVar8,0);
                puVar8 = (ulong *)v8::internal::String::Flatten(param_3,param_2,0);
                local_70 = (char *)*puVar10;
                auVar18 = v8::internal::String::GetFlatContent
                                    ((PerThreadAssertScopeDebugOnly *)&local_70);
                lVar9 = auVar18._0_8_;
                local_70 = (char *)*puVar8;
                auVar19 = v8::internal::String::GetFlatContent
                                    ((PerThreadAssertScopeDebugOnly *)&local_70);
                lVar11 = auVar19._0_8_;
                if ((int)uVar1 < 1) {
LAB_014d48bc:
                  uVar12 = (long)(int)(uVar5 - uVar4) << 1;
                }
                else {
                  uVar12 = 0;
                  uVar15 = auVar18._8_8_ & 0xffffffff00000000;
                  uVar14 = auVar19._8_8_ & 0xffffffff00000000;
                  if (uVar15 != 0x100000000) goto LAB_014d4890;
LAB_014d4880:
                  uVar17 = (ushort)*(byte *)(lVar9 + uVar12);
                  uVar16 = (ushort)*(byte *)(lVar9 + uVar12);
                  if (uVar14 == 0x100000000) goto LAB_014d4860;
                  while (uVar17 == *(ushort *)(lVar11 + uVar12 * 2)) {
                    while( true ) {
                      uVar12 = uVar12 + 1;
                      if (uVar1 <= uVar12) goto LAB_014d48bc;
                      if (uVar15 == 0x100000000) goto LAB_014d4880;
LAB_014d4890:
                      uVar17 = *(ushort *)(lVar9 + uVar12 * 2);
                      uVar16 = uVar17;
                      if (uVar14 != 0x100000000) break;
LAB_014d4860:
                      if (uVar16 != *(byte *)(lVar11 + uVar12)) goto LAB_014d48a8;
                    }
                  }
LAB_014d48a8:
                  if (uVar15 == 0x100000000) {
                    uVar15 = (ulong)*(byte *)(lVar9 + uVar12);
                  }
                  else {
                    uVar15 = (ulong)*(ushort *)(lVar9 + uVar12 * 2);
                  }
                  if (uVar14 == 0x100000000) {
                    uVar12 = (ulong)*(byte *)(lVar11 + uVar12);
                  }
                  else {
                    uVar12 = (ulong)*(ushort *)(lVar11 + uVar12 * 2);
                  }
                  uVar12 = (uVar15 - uVar12) * 2;
                }
                if (param_3 == (Isolate *)0x0) {
                  return uVar12;
                }
              }
              else {
                uVar12 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
              }
            }
            goto LAB_014d46d4;
          }
          if (uVar4 != 0) {
            uVar12 = -(ulong)(-uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar4 << 1;
            goto LAB_014d46d4;
          }
        }
      }
      uVar12 = 0;
      goto LAB_014d46d4;
    }
  }
  uVar12 = *(ulong *)(param_3 + 0x180);
LAB_014d46d4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

