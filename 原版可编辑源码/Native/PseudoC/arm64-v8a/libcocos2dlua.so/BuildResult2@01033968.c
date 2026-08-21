
/* ClipperLib::Clipper::BuildResult2(ClipperLib::PolyTree&) */

void __thiscall ClipperLib::Clipper::BuildResult2(Clipper *this,PolyTree *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *this_00;
  vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *this_01;
  ulong uVar13;
  int iVar14;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar15;
  undefined4 uVar16;
  long lVar17;
  PolyTree *pPVar18;
  undefined8 uVar19;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_01 = (vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *)
            (param_1 + 0x48);
  puVar6 = *(undefined8 **)this_01;
  puVar8 = *(undefined8 **)(param_1 + 0x50);
  if (puVar8 != puVar6) {
    uVar13 = 0;
    puVar12 = (undefined8 *)*puVar6;
    while( true ) {
      if (puVar12 != (undefined8 *)0x0) {
        pvVar4 = (void *)puVar12[3];
        if (pvVar4 != (void *)0x0) {
          puVar12[4] = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)*puVar12;
        if (pvVar4 != (void *)0x0) {
          puVar12[1] = pvVar4;
          operator_delete(pvVar4);
        }
        operator_delete(puVar12);
        puVar6 = *(undefined8 **)(param_1 + 0x48);
        puVar8 = *(undefined8 **)(param_1 + 0x50);
      }
      uVar13 = uVar13 + 1;
      if ((ulong)((long)puVar8 - (long)puVar6 >> 3) <= uVar13) break;
      puVar12 = (undefined8 *)puVar6[uVar13];
    }
    if ((long)puVar8 - (long)puVar6 != 0) {
      *(undefined8 **)(param_1 + 0x50) = puVar6;
    }
  }
  this_00 = (vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *)
            (param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != *(long *)this_00) {
    *(long *)(param_1 + 0x20) = *(long *)this_00;
  }
  std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::reserve
            (this_01,*(long *)(this + 0x10) - *(long *)(this + 8) >> 3);
  lVar7 = *(long *)(this + 8);
  lVar9 = *(long *)(this + 0x10);
  if (lVar9 == lVar7) {
    uVar5 = 0;
  }
  else {
    uVar13 = 0;
    do {
      lVar17 = *(long *)(lVar7 + uVar13 * 8);
      lVar10 = *(long *)(lVar17 + 0x18);
      if (lVar10 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 0;
        lVar11 = lVar10;
        do {
          lVar11 = *(long *)(lVar11 + 0x18);
          iVar14 = iVar14 + 1;
        } while (lVar11 != lVar10);
      }
      if (((1 < iVar14) || (*(char *)(lVar17 + 5) == '\0')) &&
         ((2 < iVar14 || (*(char *)(lVar17 + 5) != '\0')))) {
        lVar7 = *(long *)(lVar17 + 8);
        if (lVar7 != 0) {
          cVar2 = *(char *)(lVar7 + 4);
          if ((*(char *)(lVar17 + 4) == cVar2) || (*(long *)(lVar7 + 0x18) == 0)) {
            while (((*(char *)(lVar17 + 4) == cVar2 || (*(long *)(lVar7 + 0x18) == 0)) &&
                   (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0))) {
              cVar2 = *(char *)(lVar7 + 4);
            }
            *(long *)(lVar17 + 8) = lVar7;
          }
        }
        local_70 = operator_new(0x48);
        *(undefined8 *)(local_70 + 8) = 0;
        *(undefined8 *)local_70 = 0;
        *(undefined8 *)(local_70 + 0x18) = 0;
        *(undefined8 *)(local_70 + 0x10) = 0;
        *(undefined8 *)(local_70 + 0x28) = 0;
        *(undefined8 *)(local_70 + 0x20) = 0;
        *(undefined8 *)(local_70 + 0x35) = 0;
        *(undefined8 *)(local_70 + 0x2d) = 0;
        puVar6 = *(undefined8 **)(param_1 + 0x50);
        if (puVar6 == *(undefined8 **)(param_1 + 0x58)) {
          std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
          __push_back_slow_path<ClipperLib::PolyNode*const&>(this_01,(PolyNode **)&local_70);
        }
        else {
          *puVar6 = local_70;
          *(undefined8 **)(param_1 + 0x50) = puVar6 + 1;
        }
        *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
         (lVar17 + 0x10) = local_70;
        *(undefined8 *)(local_70 + 0x30) = 0;
        *(undefined4 *)(local_70 + 0x38) = 0;
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        reserve(local_70,(long)iVar14);
        if (0 < iVar14) {
          lVar7 = *(long *)(lVar17 + 0x18);
          do {
            while( true ) {
              lVar7 = *(long *)(lVar7 + 0x20);
              puVar6 = *(undefined8 **)(local_70 + 8);
              if (puVar6 == *(undefined8 **)(local_70 + 0x10)) break;
              uVar19 = *(undefined8 *)(lVar7 + 8);
              puVar6[1] = *(undefined8 *)(lVar7 + 0x10);
              *puVar6 = uVar19;
              *(undefined8 **)(local_70 + 8) = puVar6 + 2;
              iVar14 = iVar14 + -1;
              if (iVar14 == 0) goto LAB_01033a58;
            }
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            __push_back_slow_path<ClipperLib::IntPoint_const&>(local_70,(IntPoint *)(lVar7 + 8));
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
LAB_01033a58:
        lVar7 = *(long *)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
      uVar13 = uVar13 + 1;
      uVar5 = lVar9 - lVar7 >> 3;
    } while (uVar13 < uVar5);
  }
  std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::reserve
            (this_00,uVar5);
  lVar7 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar7) {
    uVar13 = 0;
    do {
      lVar7 = *(long *)(lVar7 + uVar13 * 8);
      pvVar15 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                 (lVar7 + 0x10);
      if (pvVar15 !=
          (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0) {
        local_70 = pvVar15;
        if (*(char *)(lVar7 + 5) == '\0') {
          if ((*(long *)(lVar7 + 8) == 0) ||
             (pPVar18 = *(PolyTree **)(*(long *)(lVar7 + 8) + 0x10), pPVar18 == (PolyTree *)0x0))
          goto LAB_01033c10;
          plVar1 = *(long **)(pPVar18 + 0x20);
          uVar16 = (undefined4)((ulong)((long)plVar1 - *(long *)(pPVar18 + 0x18)) >> 3);
          if (plVar1 < *(long **)(pPVar18 + 0x28)) {
            *plVar1 = (long)pvVar15;
            *(long **)(pPVar18 + 0x20) = plVar1 + 1;
          }
          else {
            std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>
            ::__push_back_slow_path<ClipperLib::PolyNode*>
                      ((vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>
                        *)(pPVar18 + 0x18),(PolyNode **)&local_70);
          }
        }
        else {
          pvVar15[0x3c] =
               (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>)0x1;
LAB_01033c10:
          plVar1 = *(long **)(param_1 + 0x20);
          uVar16 = (undefined4)((ulong)((long)plVar1 - *(long *)(param_1 + 0x18)) >> 3);
          pPVar18 = param_1;
          if (plVar1 < *(long **)(param_1 + 0x28)) {
            *plVar1 = (long)pvVar15;
            *(long **)(param_1 + 0x20) = plVar1 + 1;
          }
          else {
            std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>
            ::__push_back_slow_path<ClipperLib::PolyNode*>(this_00,(PolyNode **)&local_70);
          }
        }
        *(PolyTree **)(pvVar15 + 0x30) = pPVar18;
        *(undefined4 *)(pvVar15 + 0x38) = uVar16;
      }
      lVar7 = *(long *)(this + 8);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)(*(long *)(this + 0x10) - lVar7 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

