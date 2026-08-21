
/* ClipperLib::ClipperOffset::AddPath(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&, ClipperLib::JoinType, ClipperLib::EndType)
    */

void __thiscall
ClipperLib::ClipperOffset::AddPath
          (ClipperOffset *this,long *param_1,undefined4 param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this_00;
  void *pvVar6;
  IntPoint *pIVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar2 = (long *)*param_1;
  uVar18 = param_1[1] - (long)plVar2;
  uVar16 = uVar18 >> 4;
  iVar17 = (int)uVar16 + -1;
  if ((int)uVar16 < 1) goto LAB_01039670;
  this_00 = operator_new(0x48);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x35) = 0;
  *(undefined8 *)(this_00 + 0x2d) = 0;
  *(undefined4 *)(this_00 + 0x40) = param_3;
  *(uint *)(this_00 + 0x44) = param_4;
  if ((param_4 < 2) && (0 < iVar17)) {
    lVar9 = (long)(uVar18 * 0x10000000) >> 0x20;
    plVar11 = (long *)((long)plVar2 + ((long)(uVar18 * 0x10000000) >> 0x1c) + -8);
    do {
      if ((*plVar2 != plVar11[-1]) || (plVar2[1] != *plVar11)) {
        iVar17 = (int)lVar9 + -1;
        goto LAB_0103950c;
      }
      lVar13 = lVar9 + -2;
      lVar9 = lVar9 + -1;
      uVar16 = uVar16 - 1;
      plVar11 = plVar11 + -2;
    } while (0 < lVar13);
    iVar17 = (int)uVar16 + -1;
  }
LAB_0103950c:
  std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::reserve
            (this_00,(long)(int)(iVar17 + 1U));
  puVar3 = *(undefined8 **)(this_00 + 8);
  pIVar7 = (IntPoint *)*param_1;
  if (puVar3 == *(undefined8 **)(this_00 + 0x10)) {
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
    __push_back_slow_path<ClipperLib::IntPoint_const&>(this_00,pIVar7);
    if (0 < iVar17) goto LAB_01039544;
LAB_0103962c:
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    uVar19 = *(undefined8 *)pIVar7;
    puVar3[1] = *(undefined8 *)(pIVar7 + 8);
    *puVar3 = uVar19;
    *(undefined8 **)(this_00 + 8) = puVar3 + 2;
    if (iVar17 < 1) goto LAB_0103962c;
LAB_01039544:
    lVar10 = *(long *)this_00;
    lVar8 = *param_1;
    lVar9 = 0;
    uVar15 = 0;
    uVar16 = 0;
    lVar13 = (ulong)(iVar17 + 1U) - 1;
    do {
      pIVar7 = (IntPoint *)(lVar8 + lVar9 + 0x10);
      if ((*(long *)(lVar10 + (-(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4)) !=
           *(long *)pIVar7) ||
         (uVar5 = uVar15,
         *(long *)(lVar10 + (long)(int)uVar16 * 0x10 + 8) != *(long *)(lVar8 + lVar9 + 0x18))) {
        puVar3 = *(undefined8 **)(this_00 + 8);
        uVar1 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar1;
        if (puVar3 == *(undefined8 **)(this_00 + 0x10)) {
          std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
          __push_back_slow_path<ClipperLib::IntPoint_const&>(this_00,pIVar7);
        }
        else {
          uVar19 = *(undefined8 *)(lVar8 + lVar9 + 0x10);
          puVar3[1] = *(undefined8 *)(lVar8 + lVar9 + 0x18);
          *puVar3 = uVar19;
          *(undefined8 **)(this_00 + 8) = puVar3 + 2;
        }
        lVar8 = *param_1;
        lVar10 = *(long *)this_00;
        lVar12 = *(long *)(lVar8 + lVar9 + 0x18);
        lVar14 = *(long *)(lVar10 + (long)(int)uVar15 * 0x10 + 8);
        uVar5 = uVar1;
        if (((lVar12 <= lVar14) && (uVar5 = uVar15, lVar12 == lVar14)) &&
           (uVar5 = uVar1,
           *(long *)(lVar10 + (long)(int)uVar15 * 0x10) <= *(long *)(lVar8 + lVar9 + 0x10))) {
          uVar5 = uVar15;
        }
      }
      uVar15 = uVar5;
      lVar13 = lVar13 + -1;
      lVar9 = lVar9 + 0x10;
    } while (lVar13 != 0);
  }
  if (((param_4 == 0) && ((int)uVar16 < 2)) || ((param_4 != 0 && ((int)uVar16 < 0)))) {
    pvVar6 = *(void **)(this_00 + 0x18);
    if (pvVar6 != (void *)0x0) {
      *(void **)(this_00 + 0x20) = pvVar6;
      operator_delete(pvVar6);
    }
    pvVar6 = *(void **)this_00;
    if (pvVar6 != (void *)0x0) {
      *(void **)(this_00 + 8) = pvVar6;
      operator_delete(pvVar6);
    }
    operator_delete(this_00);
  }
  else {
    lVar9 = *(long *)(this + 200);
    puVar3 = *(undefined8 **)(this + 0xd0);
    local_70 = this_00;
    if (puVar3 < *(undefined8 **)(this + 0xd8)) {
      *puVar3 = this_00;
      *(undefined8 **)(this + 0xd0) = puVar3 + 1;
    }
    else {
      std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
      __push_back_slow_path<ClipperLib::PolyNode*>
                ((vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *)
                 (this + 200),(PolyNode **)&local_70);
    }
    *(ClipperOffset **)(this_00 + 0x30) = this + 0xb0;
    *(int *)(this_00 + 0x38) = (int)((ulong)((long)puVar3 - lVar9) >> 3);
    if (param_4 == 0) {
      uVar16 = *(ulong *)(this + 0xa0);
      if ((long)uVar16 < 0) {
        *(undefined8 *)(this + 0xa0) = 0;
        *(long *)(this + 0xa8) = (long)(int)uVar15;
      }
      else {
        lVar13 = *(long *)(*(long *)this_00 + (long)(int)uVar15 * 0x10 + 8);
        plVar2 = (long *)(**(long **)(*(long *)(this + 200) +
                                     (-(uVar16 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar16 & 0xffffffff) << 3)) +
                         ((*(long *)(this + 0xa8) << 0x20) >> 0x1c));
        lVar9 = plVar2[1];
        if ((lVar9 < lVar13) ||
           ((lVar13 == lVar9 && (*(long *)(*(long *)this_00 + (long)(int)uVar15 * 0x10) < *plVar2)))
           ) {
          *(long *)(this + 0xa0) =
               (*(long *)(this + 0xd0) - *(long *)(this + 200)) * 0x20000000 + -0x100000000 >> 0x20;
          *(long *)(this + 0xa8) = (long)(int)uVar15;
        }
      }
    }
  }
LAB_01039670:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

