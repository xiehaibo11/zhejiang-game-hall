
/* v8::internal::Runtime_GetProperty(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GetProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint local_9c;
  uint local_98;
  int local_94;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar14 = FUN_011cc4bc(param_1,param_2,param_3);
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return uVar14;
    }
    goto LAB_011cc4b8;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar11 = param_2 + -1;
  uVar14 = *puVar11;
  if (((uVar14 & 1) != 0) &&
     (*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0x40)) {
    uVar10 = *(uint *)(uVar14 + 3);
    local_90 = uVar14;
    if ((uVar10 & 0xc0000003) == 0) {
      local_9c = uVar10 >> 3 & 0xffffff;
    }
    else if (((uVar10 & 3) == 2) ||
            (uVar14 = String::SlowAsArrayIndex((String *)&local_90,&local_9c), (uVar14 & 1) == 0))
    goto LAB_011cc084;
    puVar11 = (ulong *)Factory::NewNumberFromUint((Factory *)param_3,local_9c);
  }
LAB_011cc084:
  uVar14 = *param_2;
  if ((uVar14 & 1) == 0) goto LAB_011cc08c;
  uVar18 = uVar14 & 0xffffffff00000000;
  uVar17 = uVar18 | 7;
  uVar8 = *(ushort *)(uVar17 + *(uint *)(uVar14 - 1));
  if (*(ushort *)(uVar17 + *(uint *)(uVar14 - 1)) < 0xaa) {
    if ((((0x3f < uVar8) || (iVar9 = (int)*puVar11, (*puVar11 & 1) != 0)) || (iVar9 < 0)) ||
       (iVar9 = iVar9 >> 1, *(int *)(uVar14 + 7) <= iVar9)) goto LAB_011cc08c;
    puVar11 = (ulong *)String::Flatten(param_3,param_2,0);
    local_90 = *puVar11;
    local_98 = (uint)*(ushort *)
                      ((local_90 & 0xffffffff00000000 | (ulong)*(uint *)(local_90 - 1)) + 7);
    local_94 = iVar9;
    uVar8 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_98,&local_90,&local_94);
    pIVar12 = (Isolate *)Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,uVar8);
LAB_011cc144:
    uVar17 = *(ulong *)pIVar12;
LAB_011cc148:
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  else {
    if (uVar8 == 0xab) {
LAB_011cc0d8:
      if ((*puVar11 & 1) == 0) {
        uVar14 = *param_2;
        bVar5 = *(byte *)((uVar14 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar14 - 1));
        if (((bVar5 & 0xf0) == 0x20) &&
           (*(int *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 7)) + 3) >> 1 <=
            (int)*puVar11 >> 1)) {
          uVar13 = 2;
          if (((uint)(bVar5 < 0x30) & (bVar5 & 8) >> 3) != 0) {
            uVar13 = 3;
          }
          JSObject::TransitionElementsKind(param_2,uVar13);
        }
      }
LAB_011cc08c:
      puVar11 = (ulong *)Runtime::GetObjectProperty(param_3,param_2,puVar11,0);
      if (puVar11 == (ulong *)0x0) {
        pIVar12 = param_3 + 0x180;
        goto LAB_011cc144;
      }
      uVar17 = *puVar11;
LAB_011cc0a8:
      if (param_3 == (Isolate *)0x0) goto LAB_011cc170;
      goto LAB_011cc148;
    }
    if (*(short *)(uVar17 + *(uint *)(uVar14 - 1)) != 0xab) {
      if ((*(byte *)((uVar18 | 9) + (ulong)*(uint *)(uVar14 - 1)) >> 5 & 1) == 0) goto LAB_011cc27c;
      goto LAB_011cc0d8;
    }
    local_90 = *(ulong *)(uVar18 + 0x2bc8);
    iVar9 = Context::global_object((Context *)&local_90);
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_90 = uVar18;
    local_88 = uVar14;
    PrototypeIterator::Advance((PrototypeIterator *)&local_90);
    if ((int)local_88 != iVar9) goto LAB_011cc0d8;
LAB_011cc27c:
    uVar14 = *puVar11;
    if (((uVar14 & 1) == 0) ||
       (uVar17 = uVar14 & 0xffffffff00000000 | 7, 0x40 < *(ushort *)(uVar17 + *(uint *)(uVar14 - 1))
       )) goto LAB_011cc0d8;
    if ((*(ushort *)(uVar17 + *(uint *)(uVar14 - 1)) & 0xffe0) == 0x20) {
      puVar11 = (ulong *)StringTable::LookupString(param_3,puVar11);
    }
    uVar14 = *param_2;
    uVar17 = uVar14 & 0xffffffff00000000;
    if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xaa) {
      uVar10 = *(uint *)(*puVar11 + 3);
      uVar14 = uVar17 | *(uint *)(uVar14 + 3);
      if ((uVar10 & 1) == 0) {
        uVar10 = uVar10 >> 3;
      }
      else {
        local_90 = *puVar11;
        uVar10 = String::ComputeAndSetHash((String *)&local_90);
      }
      uVar6 = (*(int *)(uVar14 + 0xf) >> 1) - 1;
      uVar10 = uVar6 & uVar10;
      lVar1 = uVar14 + 7;
      uVar16 = *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
      if (uVar16 != *(uint *)(param_3 + 0xa0)) {
        iVar9 = 1;
        do {
          if (*(int *)((uVar17 | uVar16) + 3) == (int)*puVar11) {
            uVar14 = uVar17 | *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
            if ((*(byte *)(uVar14 + 7) >> 1 & 1) == 0) {
              uVar10 = *(uint *)(uVar14 + 0xb);
              uVar17 = uVar17 | uVar10;
              if ((uVar10 & 1) == 0) goto LAB_011cc0a8;
              if (uVar10 != *(uint *)(param_3 + 0xa8)) goto LAB_011cc148;
            }
            break;
          }
          uVar10 = uVar10 + iVar9 & uVar6;
          uVar16 = *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
          iVar9 = iVar9 + 1;
        } while (uVar16 != *(uint *)(param_3 + 0xa0));
      }
      goto LAB_011cc08c;
    }
    if ((*(uint *)((uVar17 | 0xb) + (ulong)*(uint *)(uVar14 - 1)) >> 0x15 & 1) == 0)
    goto LAB_011cc08c;
    if ((*(uint *)(uVar14 + 3) & 1) == 0) {
      uVar17 = *(ulong *)(uVar17 + 0x410);
    }
    else {
      uVar17 = uVar17 | *(uint *)(uVar14 + 3);
    }
    uVar10 = *(uint *)(*puVar11 + 3);
    if ((uVar10 & 1) == 0) {
      uVar10 = uVar10 >> 3;
    }
    else {
      local_90 = *puVar11;
      uVar10 = String::ComputeAndSetHash((String *)&local_90);
    }
    uVar16 = (*(int *)(uVar17 + 0xf) >> 1) - 1;
    uVar14 = (ulong)(uVar16 & uVar10);
    lVar15 = uVar14 * 0xc00000000;
    lVar1 = uVar17 + 7;
    iVar9 = *(int *)((lVar15 + 0x1400000000 >> 0x20) + lVar1);
    if (iVar9 == *(int *)(param_3 + 0xa0)) goto LAB_011cc08c;
    if (iVar9 != (int)*puVar11) {
      iVar9 = 1;
      do {
        uVar14 = (ulong)((int)uVar14 + iVar9 & uVar16);
        lVar15 = uVar14 * 0xc00000000;
        iVar4 = *(int *)((lVar15 + 0x1400000000 >> 0x20) + lVar1);
        if (iVar4 == *(int *)(param_3 + 0xa0)) goto LAB_011cc08c;
        iVar9 = iVar9 + 1;
      } while (iVar4 != (int)*puVar11);
    }
    if ((*(uint *)((lVar15 + 0x1c00000000 >> 0x20) + lVar1) >> 1 & 1) != 0) goto LAB_011cc08c;
    uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)((lVar15 + 0x1800000000 >> 0x20) + lVar1)
    ;
    if (param_3 != (Isolate *)0x0) goto LAB_011cc148;
  }
LAB_011cc170:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return uVar17;
  }
LAB_011cc4b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

