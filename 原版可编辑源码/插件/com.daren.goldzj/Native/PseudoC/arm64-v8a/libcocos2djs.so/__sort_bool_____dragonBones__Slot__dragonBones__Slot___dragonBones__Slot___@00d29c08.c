
/* void std::__ndk1::__sort<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, bool (*&)(dragonBones::Slot*,
   dragonBones::Slot*)) */

void std::__ndk1::__sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
               (Slot **param_1,Slot **param_2,_func_bool_Slot_ptr_Slot_ptr *param_3)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 auVar16 [16];
  
LAB_00d29c50:
  pauVar12 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
LAB_00d29c70:
  pauVar13 = (undefined1 (*) [16])param_1;
  lVar8 = (long)param_2 - (long)pauVar13;
  uVar7 = lVar8 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    return;
  case 2:
    uVar7 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)*pauVar13);
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar9 = *(undefined8 *)*pauVar13;
    *(undefined8 *)*pauVar13 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar9;
    return;
  case 3:
    uVar7 = (**(code **)param_3)(*(undefined8 *)(*pauVar13 + 8),*(undefined8 *)*pauVar13);
    uVar5 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)(*pauVar13 + 8));
    if ((uVar7 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar9 = *(undefined8 *)(*pauVar13 + 8);
      *(undefined8 *)(*pauVar13 + 8) =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar9;
      uVar7 = (**(code **)param_3)(*(undefined8 *)(*pauVar13 + 8),*(undefined8 *)*pauVar13);
      if ((uVar7 & 1) == 0) {
        return;
      }
      auVar16 = NEON_ext(*pauVar13,*pauVar13,8,1);
      *(long *)(*pauVar13 + 8) = auVar16._8_8_;
      *(long *)*pauVar13 = auVar16._0_8_;
      return;
    }
    uVar9 = *(undefined8 *)*pauVar13;
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)*pauVar13 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar9;
      return;
    }
    *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
    *(undefined8 *)(*pauVar13 + 8) = uVar9;
    uVar7 = (**(code **)param_3)(*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8))
    ;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar9 = *(undefined8 *)(*pauVar13 + 8);
    *(undefined8 *)(*pauVar13 + 8) =
         *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar9;
    return;
  case 4:
    __sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              ((Slot **)pauVar13,(Slot **)(*pauVar13 + 8),(Slot **)(pauVar13 + 1),(Slot **)pauVar12,
               param_3);
    return;
  case 5:
    FUN_00d2a2dc(pauVar13,*pauVar13 + 8,pauVar13 + 1,pauVar13[1] + 8,pauVar12,param_3);
    return;
  }
  if (lVar8 < 0xf8) {
    __insertion_sort_3<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              ((Slot **)pauVar13,param_2,param_3);
    return;
  }
  uVar5 = uVar7;
  if ((long)uVar7 < 0) {
    uVar5 = uVar7 + 1;
  }
  pauVar14 = (undefined1 (*) [16])(*pauVar13 + (uVar5 & 0x3ffffffffffffffe) * 4);
  if (lVar8 < 0x1f39) {
    uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar14,*(undefined8 *)*pauVar13);
    uVar5 = (**(code **)param_3)(*(undefined8 *)*pauVar12,*(undefined8 *)*pauVar14);
    if ((uVar7 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        iVar4 = 0;
      }
      else {
        uVar9 = *(undefined8 *)*pauVar14;
        *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar12;
        *(undefined8 *)*pauVar12 = uVar9;
        uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar14,*(undefined8 *)*pauVar13);
        if ((uVar7 & 1) != 0) {
          uVar9 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar14;
          *(undefined8 *)*pauVar14 = uVar9;
          goto LAB_00d29ec8;
        }
LAB_00d29ed8:
        iVar4 = 1;
      }
    }
    else {
      uVar9 = *(undefined8 *)*pauVar13;
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar14;
        *(undefined8 *)*pauVar14 = uVar9;
        uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar12);
        if ((uVar7 & 1) == 0) goto LAB_00d29ed8;
        uVar9 = *(undefined8 *)*pauVar14;
        *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar12;
        *(undefined8 *)*pauVar12 = uVar9;
LAB_00d29ec8:
        iVar4 = 2;
      }
      else {
        iVar4 = 1;
        *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar12;
        *(undefined8 *)*pauVar12 = uVar9;
      }
    }
  }
  else {
    uVar5 = uVar7 + 3;
    if (-1 < (long)uVar7) {
      uVar5 = uVar7;
    }
    lVar8 = (uVar5 & 0x7ffffffffffffffc) * 2;
    iVar4 = FUN_00d2a2dc(pauVar13,*pauVar13 + lVar8,pauVar14,*pauVar14 + lVar8,pauVar12,param_3);
  }
  uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar14);
  pauVar15 = pauVar12;
  pauVar11 = (undefined1 (*) [16])((long)param_2 + -0x10);
  if ((uVar7 & 1) == 0) {
LAB_00d29d44:
    pauVar15 = pauVar11;
    if (pauVar13 != pauVar15) goto code_r0x00d29d4c;
    pauVar14 = (undefined1 (*) [16])(*pauVar13 + 8);
    uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
    if ((uVar7 & 1) == 0) {
      if (pauVar14 == pauVar12) {
        return;
      }
      pauVar14 = pauVar13 + 1;
      while (uVar7 = (**(code **)param_3)
                               (*(undefined8 *)*pauVar13,*(undefined8 *)(pauVar14[-1] + 8)),
            (uVar7 & 1) == 0) {
        pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8);
        if ((undefined1 (*) [16])param_2 == pauVar14) {
          return;
        }
      }
      uVar9 = *(undefined8 *)(pauVar14[-1] + 8);
      *(undefined8 *)(pauVar14[-1] + 8) = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar9;
    }
    if (pauVar14 == pauVar12) {
      return;
    }
    while( true ) {
      param_1 = (Slot **)(pauVar14[-1] + 8);
      do {
        pauVar14 = (undefined1 (*) [16])param_1;
        param_1 = (Slot **)(*pauVar14 + 8);
        uVar7 = (**(code **)param_3)
                          (*(undefined8 *)*pauVar13,*(undefined8 *)*(undefined1 (*) [16])param_1);
      } while ((uVar7 & 1) == 0);
      pauVar14 = pauVar14 + 1;
      do {
        pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 8);
        uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
      } while ((uVar7 & 1) != 0);
      if (pauVar12 <= param_1) break;
      uVar9 = *(undefined8 *)*(undefined1 (*) [16])param_1;
      *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar9;
    }
    uVar6 = 4;
    goto LAB_00d29f98;
  }
  goto LAB_00d29d74;
code_r0x00d29d4c:
  uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar15,*(undefined8 *)*pauVar14);
  pauVar11 = (undefined1 (*) [16])(pauVar15[-1] + 8);
  if ((uVar7 & 1) != 0) goto code_r0x00d29d60;
  goto LAB_00d29d44;
code_r0x00d29d60:
  uVar9 = *(undefined8 *)*pauVar13;
  iVar4 = iVar4 + 1;
  *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar15;
  *(undefined8 *)*pauVar15 = uVar9;
LAB_00d29d74:
  pauVar11 = (undefined1 (*) [16])(*pauVar13 + 8);
  pauVar10 = pauVar11;
  pauVar1 = pauVar14;
  if (pauVar11 < pauVar15) {
    while( true ) {
      pauVar14 = pauVar1;
      pauVar11 = (undefined1 (*) [16])(pauVar10[-1] + 8);
      do {
        pauVar10 = pauVar11;
        pauVar11 = (undefined1 (*) [16])(*pauVar10 + 8);
        uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar11,*(undefined8 *)*pauVar14);
      } while ((uVar7 & 1) != 0);
      pauVar10 = pauVar10 + 1;
      do {
        pauVar15 = (undefined1 (*) [16])(pauVar15[-1] + 8);
        uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar15,*(undefined8 *)*pauVar14);
      } while ((uVar7 & 1) == 0);
      if (pauVar15 < pauVar11) break;
      uVar9 = *(undefined8 *)*pauVar11;
      iVar4 = iVar4 + 1;
      *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar15;
      *(undefined8 *)*pauVar15 = uVar9;
      pauVar1 = pauVar15;
      if (pauVar14 != pauVar11) {
        pauVar1 = pauVar14;
      }
    }
    if (pauVar11 == pauVar14) goto LAB_00d29e18;
  }
  else if (pauVar11 == pauVar14) goto LAB_00d29e18;
  uVar7 = (**(code **)param_3)(*(undefined8 *)*pauVar14,*(undefined8 *)*pauVar11);
  if ((uVar7 & 1) != 0) {
    uVar9 = *(undefined8 *)*pauVar11;
    iVar4 = iVar4 + 1;
    *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar14;
    *(undefined8 *)*pauVar14 = uVar9;
  }
LAB_00d29e18:
  if (iVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                      ((Slot **)pauVar13,(Slot **)pauVar11,param_3);
    bVar3 = __insertion_sort_incomplete<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                      ((Slot **)(*pauVar11 + 8),param_2,param_3);
    if (bVar3) goto LAB_00d29fb0;
    param_1 = (Slot **)(*pauVar11 + 8);
    if (bVar2) goto LAB_00d29c70;
  }
  if ((long)param_2 - (long)pauVar11 <= (long)pauVar11 - (long)pauVar13) {
    __sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              ((Slot **)(*pauVar11 + 8),param_2,param_3);
    param_1 = (Slot **)pauVar13;
    param_2 = (Slot **)pauVar11;
    goto LAB_00d29c50;
  }
  __sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
            ((Slot **)pauVar13,(Slot **)pauVar11,param_3);
  param_1 = (Slot **)(*pauVar11 + 8);
  goto LAB_00d29c70;
LAB_00d29fb0:
  if (!bVar2) {
    param_2 = (Slot **)pauVar11;
  }
  uVar6 = 1;
  if (!bVar2) {
    uVar6 = 2;
  }
  param_1 = (Slot **)pauVar13;
  if (4 < uVar6) {
    return;
  }
LAB_00d29f98:
  if ((1 << uVar6 & 0x15U) == 0) {
    return;
  }
  goto LAB_00d29c50;
}

