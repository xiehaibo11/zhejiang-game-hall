
/* v8::internal::Runtime_CloneObjectIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CloneObjectIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 local_5c;
  ulong local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar12 = FUN_015075fc(param_1,param_2,param_3);
    return uVar12;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  uVar12 = param_2[-1];
  if ((((uVar11 & 1) == 0) ||
      (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xaa)) ||
     ((*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 0xb) >> 0x18 & 1) ==
      0)) {
    puVar6 = param_2 + -3;
    if (*(short *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) == 0x9f) {
      local_60 = (int)param_2[-2] >> 1;
      uStack_68 = 0;
      local_70 = puVar6;
      if (puVar6 == (ulong *)0x0) {
        local_5c = 0;
      }
      else {
        local_58 = param_2[-3];
        local_5c = FeedbackVector::GetKind((FeedbackVector *)&local_58);
        uVar11 = *param_2;
      }
      if (((uVar11 & 1) != 0) &&
         (iVar5 = FeedbackNexus::ic_state((FeedbackNexus *)&local_70), iVar5 != 5)) {
        uVar11 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar11;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          uVar11 = *puVar6;
        }
        if (((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0x368)) &&
           ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0x358))) {
          if ((*(ushort *)(uVar11 + 7) < 0xaa) ||
             ((0x1f < *(byte *)(uVar11 + 10) ||
              (local_58 = uVar11, uVar11 = Map::OnlyHasSimpleProperties((Map *)&local_58),
              (uVar11 & 1) == 0)))) {
LAB_01507350:
            FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)&local_70);
            goto joined_r0x01507358;
          }
          uVar14 = *puVar6;
          uVar11 = (ulong)(*(uint *)(uVar14 + 0xb) >> 10) & 0x3ff;
          if ((int)uVar11 != 0) {
            uVar15 = uVar14 & 0xffffffff00000000;
            uVar16 = uVar15 | *(uint *)(uVar14 + 0x17);
            uVar14 = 0x1000000000;
            do {
              if (((*(uint *)((uVar14 >> 0x20 | 3) + uVar16) & 0x22) != 0) ||
                 ((uVar17 = uVar15 | *(uint *)((uVar16 - 1) + (uVar14 >> 0x20)),
                  *(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x40 &&
                  ((*(byte *)(uVar17 + 7) >> 4 & 1) != 0)))) goto LAB_01507350;
              uVar11 = uVar11 - 1;
              uVar14 = uVar14 + 0xc00000000;
            } while (uVar11 != 0);
          }
        }
        uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
        uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar11;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          uVar11 = *puVar7;
        }
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 499);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar11;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          uVar11 = *puVar7;
        }
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x1b);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar11;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
        }
        uVar11 = *puVar6;
        puVar8 = puVar7;
        if ((0xa9 < *(ushort *)(uVar11 + 7)) &&
           ((uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4) !=
            (uint)*(byte *)(*puVar7 + 3) - (uint)*(byte *)(*puVar7 + 4))) {
          iVar5 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4);
          if (*(byte *)(uVar11 + 5) < 3) {
            iVar10 = 0;
          }
          else {
            iVar10 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 5);
          }
          puVar8 = (ulong *)Map::CopyInitialMap(param_3,puVar7,iVar5 * 4 + 0xc,iVar5,iVar10);
        }
        if (((uint)uVar12 >> 5 & 1) != 0) {
          if ((puVar7 == puVar8) ||
             (((puVar7 != (ulong *)0x0 && (puVar8 != (ulong *)0x0)) && (*puVar8 == *puVar7)))) {
            puVar8 = (ulong *)Map::Copy(param_3,puVar8,"ObjectWithNullProto");
          }
          Map::SetPrototype(param_3,puVar8,param_3 + 0xb0,1);
        }
        uVar12 = *puVar6;
        if ((*(uint *)(uVar12 + 0xb) & 0xffc00) != 0) {
          if ((puVar7 == puVar8) ||
             (((puVar7 != (ulong *)0x0 && (puVar8 != (ulong *)0x0)) && (*puVar8 == *puVar7)))) {
            puVar8 = (ulong *)Map::Copy(param_3,puVar8,"InitializeClonedDescriptors");
            uVar12 = *puVar6;
          }
          uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x17);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar12;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
          }
          uVar13 = *(uint *)(*puVar6 + 0xb) >> 10 & 0x3ff;
          plVar9 = (long *)DescriptorArray::CopyForFastObjectClone(param_3,puVar7,uVar13,0);
          LayoutDescriptor::New(param_3,puVar8,plVar9,uVar13);
          local_58 = *puVar8;
          Map::SetInstanceDescriptors((Map *)&local_58,param_3,*plVar9,(int)*(short *)(*plVar9 + 5))
          ;
          bVar4 = *(byte *)(*puVar6 + 5);
          uVar13 = (uint)bVar4;
          if ((2 < bVar4) &&
             (uVar13 = ((uint)*(byte *)(*puVar8 + 3) - (uint)*(byte *)(*puVar6 + 3)) + (uint)bVar4,
             0xff < uVar13)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
          }
          *(char *)(*puVar8 + 5) = (char)uVar13;
          uVar13 = *(uint *)(*puVar8 + 0xb);
          *(uint *)(*puVar8 + 0xb) =
               uVar13 & 0xe0000000 |
               uVar13 & 0xfffffff | (*(uint *)(*puVar6 + 0xb) >> 0x1c & 1) << 0x1c;
        }
        FeedbackNexus::ConfigureCloneObject((FeedbackNexus *)&local_70,puVar6,puVar8);
        uVar12 = *puVar8;
        goto LAB_0150757c;
      }
    }
  }
  else {
    JSObject::MigrateInstance(param_3,param_2);
  }
joined_r0x01507358:
  if (((uint)uVar12 >> 5 & 1) == 0) {
    uVar12 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar12;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      uVar12 = *puVar6;
    }
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 499);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar12;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    puVar6 = (ulong *)Factory::NewJSObject((Factory *)param_3,puVar6,0);
  }
  else {
    puVar6 = (ulong *)Factory::NewJSObjectWithNullProto((Factory *)param_3);
  }
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     ((puVar7 = puVar6, (int)uVar12 != *(int *)((uVar12 & 0xffffffff00000000) + 0xb0) &&
      ((int)uVar12 != *(int *)((uVar12 & 0xffffffff00000000) + 0xa0))))) {
    uVar12 = JSReceiver::SetOrCopyDataProperties(param_3,puVar6,param_2,0,0);
    if (puVar6 != (ulong *)0x0) {
      puVar7 = (ulong *)(uVar12 & 0xff);
      goto joined_r0x015073bc;
    }
  }
  else {
joined_r0x015073bc:
    if (puVar7 != (ulong *)0x0) {
      uVar12 = *puVar6;
      if (param_3 == (Isolate *)0x0) {
        return uVar12;
      }
      goto LAB_0150757c;
    }
  }
  uVar12 = *(ulong *)(param_3 + 0x180);
LAB_0150757c:
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

