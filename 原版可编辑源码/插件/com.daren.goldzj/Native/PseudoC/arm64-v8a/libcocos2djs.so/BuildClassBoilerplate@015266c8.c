
/* v8::internal::ClassBoilerplate::BuildClassBoilerplate(v8::internal::Isolate*,
   v8::internal::ClassLiteral*) */

void v8::internal::ClassBoilerplate::BuildClassBoilerplate(Isolate *param_1,ClassLiteral *param_2)

{
  Isolate *pIVar1;
  int *piVar2;
  ObjectDescriptor *pOVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  Literal *pLVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int *unaff_x22;
  ulong uVar18;
  uint local_e4;
  int local_e0 [5];
  undefined1 auStack_cc [8];
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  int local_a0 [5];
  undefined1 auStack_8c [8];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  pIVar1 = param_1 + 0x95a0;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  lVar7 = *(long *)pIVar1;
  lVar8 = *(long *)(param_1 + 0x95a8);
  local_a0[0] = 6;
  local_a0[1] = 0;
  local_a0[2] = 1;
  auStack_8c = (undefined1  [8])0x0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_84 = 0;
  uStack_80 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_64 = 0;
  local_e0[0] = 1;
  local_e0[1] = 0;
  local_e0[2] = 1;
  auStack_cc = (undefined1  [8])0x0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_a4 = 0;
  plVar9 = *(long **)(param_2 + 0x28);
  if (0 < *(int *)((long)plVar9 + 0xc)) {
    lVar17 = 0;
    unaff_x22 = local_a0;
    do {
      puVar10 = *(ulong **)(*plVar9 + lVar17 * 8);
      uVar11 = *puVar10;
      piVar2 = local_e0;
      if (*(char *)((long)puVar10 + 0x11) != '\0') {
        piVar2 = unaff_x22;
      }
      if ((uVar11 & 3) == 0) {
        pLVar12 = (Literal *)(uVar11 & 0xfffffffffffffffc);
        if ((*(uint *)(pLVar12 + 4) & 0x3f) != 0x29) {
          pLVar12 = (Literal *)0x0;
        }
        uVar11 = Literal::IsPropertyName(pLVar12);
        if ((uVar11 & 1) == 0) {
          piVar2[3] = piVar2[3] + 1;
        }
        else {
          piVar2[1] = piVar2[1] + 1;
        }
      }
      else {
        piVar2[4] = piVar2[4] + 1;
      }
      plVar9 = *(long **)(param_2 + 0x28);
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)((long)plVar9 + 0xc));
  }
  ObjectDescriptor::CreateTemplates((ObjectDescriptor *)local_a0,param_1);
  ObjectDescriptor::AddConstant
            ((ObjectDescriptor *)local_a0,param_1,param_1 + 0x7b8,param_1 + 0xe58,3);
  ObjectDescriptor::AddConstant
            ((ObjectDescriptor *)local_a0,param_1,param_1 + 0x908,param_1 + 0xe60,7);
  uVar11 = FunctionLiteral::NeedsHomeObject(*(Expression **)(param_2 + 0x20));
  if ((uVar11 & 1) != 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(undefined8 **)pIVar1;
      if (puVar5 == *(undefined8 **)(param_1 + 0x95a8)) {
        puVar5 = (undefined8 *)HandleScope::Extend(param_1);
      }
      *(undefined8 **)pIVar1 = puVar5 + 1;
      *puVar5 = 4;
    }
    else {
      puVar5 = (undefined8 *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),4);
    }
    ObjectDescriptor::AddConstant((ObjectDescriptor *)local_a0,param_1,param_1 + 0xb78,puVar5,7);
  }
  uVar6 = Factory::NewClassPositions((Factory *)param_1,*(int *)param_2,*(int *)(param_2 + 8));
  ObjectDescriptor::AddConstant((ObjectDescriptor *)local_a0,param_1,param_1 + 0xb38,uVar6,2);
  ObjectDescriptor::CreateTemplates((ObjectDescriptor *)local_e0,param_1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(undefined8 **)pIVar1;
    if (puVar5 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar5 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)pIVar1 = puVar5 + 1;
    *puVar5 = 2;
  }
  else {
    puVar5 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),2);
  }
  ObjectDescriptor::AddConstant((ObjectDescriptor *)local_e0,param_1,param_1 + 0x5d0,puVar5,2);
  plVar9 = *(long **)(param_2 + 0x28);
  if (*(int *)((long)plVar9 + 0xc) < 1) {
    iVar16 = 3;
  }
  else {
    lVar17 = 0;
    iVar16 = 3;
    do {
      puVar10 = *(ulong **)(*plVar9 + lVar17 * 8);
      switch((byte)puVar10[2]) {
      case 0:
        unaff_x22 = (int *)0x0;
        break;
      case 1:
        unaff_x22 = (int *)0x1;
        break;
      case 2:
        unaff_x22 = (int *)0x2;
        break;
      case 3:
        uVar14 = (uint)((*puVar10 & 3) != 0);
        goto LAB_01526980;
      }
      pOVar3 = (ObjectDescriptor *)local_e0;
      if (*(byte *)((long)puVar10 + 0x11) != 0) {
        pOVar3 = (ObjectDescriptor *)local_a0;
      }
      if ((*puVar10 & 3) == 0) {
        pLVar12 = (Literal *)(*puVar10 & 0xfffffffffffffffc);
        if ((*(uint *)(pLVar12 + 4) & 0x3f) != 0x29) {
          pLVar12 = (Literal *)0x0;
        }
        uVar11 = Literal::AsArrayIndex(pLVar12,&local_e4);
        if ((uVar11 & 1) == 0) {
          ObjectDescriptor::AddNamedProperty
                    (pOVar3,param_1,**(undefined8 **)(pLVar12 + 8),(ulong)unaff_x22 & 0xffffffff,
                     iVar16);
        }
        else {
          FUN_015261e4(param_1,*(undefined8 *)(pOVar3 + 0x28),local_e4,iVar16,
                       (ulong)unaff_x22 & 0xffffffff,iVar16 << 1);
        }
        uVar14 = 1;
      }
      else {
        iVar4 = *(int *)(pOVar3 + 0x14);
        *(int *)(pOVar3 + 8) = iVar16 + 7;
        lVar15 = **(long **)(pOVar3 + 0x30);
        *(int *)(pOVar3 + 0x14) = iVar4 + 1;
        *(int *)(lVar15 + (iVar4 << 2) + 7) = (int)unaff_x22 << 1 | iVar16 << 3;
        uVar14 = 2;
      }
LAB_01526980:
      plVar9 = *(long **)(param_2 + 0x28);
      lVar17 = lVar17 + 1;
      iVar16 = uVar14 + iVar16;
    } while (lVar17 < *(int *)((long)plVar9 + 0xc));
  }
  if (((char)param_2[4] < '\0') || (*(long *)(*(long *)(param_2 + 0x20) + 0x20) == 0)) {
LAB_01526aa4:
    uVar14 = 0;
  }
  else {
    if (local_a0[4] < 1) {
      if (local_a0[0] + local_a0[1] < 0x3fd) {
        ObjectDescriptor::AddConstant
                  ((ObjectDescriptor *)local_a0,param_1,param_1 + 0x820,param_1 + 0xe50,3);
        goto LAB_01526aa4;
      }
    }
    uVar14 = 2;
  }
  if (local_a0[4] < 1) {
    if (0x3fc < local_a0[0] + local_a0[1]) goto LAB_01526ac4;
  }
  else {
LAB_01526ac4:
    *(int *)(*(long *)CONCAT44(uStack_7c,uStack_80) + 0x13) = local_a0[2] << 1;
    uVar6 = FixedArray::ShrinkOrEmpty
                      (param_1,CONCAT44(uStack_6c,uStack_70),(ulong)auStack_8c & 0xffffffff);
    uStack_70 = (undefined4)uVar6;
    uStack_6c = (undefined4)((ulong)uVar6 >> 0x20);
  }
  if (local_e0[4] < 1) {
    if (0x3fc < local_e0[0] + local_e0[1]) goto LAB_01526b08;
  }
  else {
LAB_01526b08:
    *(int *)(*(long *)CONCAT44(uStack_bc,uStack_c0) + 0x13) = local_e0[2] << 1;
    uVar6 = FixedArray::ShrinkOrEmpty
                      (param_1,CONCAT44(uStack_ac,uStack_b0),(ulong)auStack_cc & 0xffffffff);
    uStack_b0 = (undefined4)uVar6;
    uStack_ac = (undefined4)((ulong)uVar6 >> 0x20);
  }
  puVar10 = (ulong *)Factory::NewFixedArray((Factory *)param_1,7,0);
  *(undefined4 *)(*puVar10 + 7) = 0;
  *(uint *)(*puVar10 + 7) = *(uint *)(*puVar10 + 7) & 0xfffffffc | uVar14;
  *(uint *)(*puVar10 + 7) = *(uint *)(*puVar10 + 7) & 2 | iVar16 << 2;
  uVar11 = *puVar10;
  if (local_a0[4] < 1) {
    if (0x3fc < local_a0[0] + local_a0[1]) goto LAB_01526b94;
    puVar5 = (undefined8 *)(auStack_8c + 4);
  }
  else {
LAB_01526b94:
    puVar5 = (undefined8 *)&uStack_80;
  }
  uVar18 = *(ulong *)*puVar5;
  *(int *)(uVar11 + 0xb) = (int)uVar18;
  if ((uVar18 & 1) != 0) {
    uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xb,uVar18);
      uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xb,uVar18);
    }
  }
  uVar18 = *puVar10;
  uVar11 = *(ulong *)CONCAT44(uStack_74,uStack_78);
  *(int *)(uVar18 + 0xf) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0xf,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0xf,uVar11);
    }
  }
  uVar18 = *puVar10;
  uVar11 = *(ulong *)CONCAT44(uStack_6c,uStack_70);
  *(int *)(uVar18 + 0x13) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x13,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x13,uVar11);
    }
  }
  uVar11 = *puVar10;
  if (local_e0[4] < 1) {
    if (local_e0[0] + local_e0[1] < 0x3fd) {
      puVar5 = (undefined8 *)(auStack_cc + 4);
      goto LAB_01526cec;
    }
  }
  puVar5 = (undefined8 *)&uStack_c0;
LAB_01526cec:
  uVar18 = *(ulong *)*puVar5;
  *(int *)(uVar11 + 0x17) = (int)uVar18;
  if ((uVar18 & 1) != 0) {
    uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0x17,uVar18);
      uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0x17,uVar18);
    }
  }
  uVar18 = *puVar10;
  uVar11 = *(ulong *)CONCAT44(uStack_b4,uStack_b8);
  *(int *)(uVar18 + 0x1b) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x1b,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x1b,uVar11);
    }
  }
  uVar18 = *puVar10;
  uVar11 = *(ulong *)CONCAT44(uStack_ac,uStack_b0);
  *(int *)(uVar18 + 0x1f) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x1f,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x1f,uVar11);
    }
  }
  uVar11 = *puVar10;
  *(long *)pIVar1 = lVar7;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar8) {
    *(long *)(param_1 + 0x95a8) = lVar8;
    HandleScope::DeleteExtensions(param_1);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar11;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  *(undefined4 *)(param_1 + 0x95b0) = *(undefined4 *)(param_1 + 0x95b0);
  return;
}

