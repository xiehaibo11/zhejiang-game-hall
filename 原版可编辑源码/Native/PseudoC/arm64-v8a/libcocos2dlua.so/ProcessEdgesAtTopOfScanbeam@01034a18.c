
/* ClipperLib::Clipper::ProcessEdgesAtTopOfScanbeam(long long) */

void __thiscall ClipperLib::Clipper::ProcessEdgesAtTopOfScanbeam(Clipper *this,longlong param_1)

{
  Clipper *pCVar1;
  undefined8 *puVar2;
  Clipper CVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  TEdge *pTVar8;
  TEdge *pTVar9;
  TEdge *pTVar10;
  long lVar11;
  long lVar12;
  TEdge *pTVar13;
  double dVar14;
  double dVar15;
  TEdge *local_88;
  Join *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pTVar13 = (TEdge *)(this + 0x88);
  local_88 = *(TEdge **)pTVar13;
  if (local_88 != (TEdge *)0x0) {
    do {
      if (*(long *)(local_88 + 0x28) == param_1) {
        if (*(long *)(local_88 + 0x70) != 0) {
LAB_01034aa4:
          if ((*(long *)(local_88 + 0x70) == 0) ||
             (*(long *)(*(long *)(local_88 + 0x70) + 0x38) != 0)) {
            lVar11 = *(long *)(local_88 + 0x20);
            goto LAB_01034ae4;
          }
          UpdateEdgeIntoAEL(this,&local_88);
          pTVar9 = local_88;
          if (-1 < *(int *)(local_88 + 0x5c)) {
            AddOutPt(this,local_88,(IntPoint *)local_88);
          }
          lVar11 = *(long *)(this + 0x90);
          pTVar10 = local_88;
          if (lVar11 == 0) {
            *(TEdge **)(this + 0x90) = pTVar9;
            *(undefined8 *)(pTVar9 + 0x88) = 0;
            *(undefined8 *)(pTVar9 + 0x90) = 0;
            CVar3 = this[0xa6];
          }
          else {
            *(long *)(pTVar9 + 0x88) = lVar11;
            *(undefined8 *)(pTVar9 + 0x90) = 0;
            *(TEdge **)(lVar11 + 0x90) = pTVar9;
            *(TEdge **)(this + 0x90) = pTVar9;
            CVar3 = this[0xa6];
          }
          goto joined_r0x01034c54;
        }
        lVar11 = *(long *)(local_88 + 0x60);
        if (((((*(long *)(lVar11 + 0x20) == *(long *)(local_88 + 0x20)) &&
              (*(long *)(lVar11 + 0x28) == param_1)) && (*(long *)(lVar11 + 0x70) == 0)) ||
            (((lVar11 = *(long *)(local_88 + 0x68),
              *(long *)(lVar11 + 0x20) == *(long *)(local_88 + 0x20) &&
              (*(long *)(lVar11 + 0x28) == param_1)) && (*(long *)(lVar11 + 0x70) == 0)))) &&
           ((*(int *)(lVar11 + 0x5c) != -2 && (*(long *)(lVar11 + 0x38) == 0)))) goto LAB_01034aa4;
        lVar11 = *(long *)(local_88 + 0x80);
        DoMaxima(this,local_88);
        local_88 = pTVar13;
        if (lVar11 != 0) {
          local_88 = (TEdge *)(lVar11 + 0x78);
        }
      }
      else {
        dVar14 = *(double *)(local_88 + 0x40) * (double)(param_1 - *(long *)(local_88 + 8));
        dVar15 = -0.5;
        if (0.0 <= dVar14) {
          dVar15 = 0.5;
        }
        lVar11 = *(long *)local_88 + (long)(dVar14 + dVar15);
LAB_01034ae4:
        *(long *)(local_88 + 0x10) = lVar11;
        *(longlong *)(local_88 + 0x18) = param_1;
        CVar3 = this[0xa6];
        pTVar9 = local_88;
        pTVar10 = local_88;
joined_r0x01034c54:
        local_88 = pTVar9;
        if ((((((CVar3 != (Clipper)0x0) && (-1 < *(int *)(pTVar9 + 0x5c))) &&
              (pTVar8 = *(TEdge **)(pTVar9 + 0x80), pTVar8 != (TEdge *)0x0)) &&
             ((*(int *)(pTVar9 + 0x50) != 0 && (-1 < *(int *)(pTVar8 + 0x5c))))) &&
            (*(long *)(pTVar8 + 0x10) == *(long *)(pTVar9 + 0x10))) &&
           (*(int *)(pTVar8 + 0x50) != 0)) {
          local_88 = pTVar10;
          lVar5 = AddOutPt(this,pTVar8,(IntPoint *)(pTVar9 + 0x10));
          lVar6 = AddOutPt(this,pTVar9,(IntPoint *)(pTVar9 + 0x10));
          lVar11 = *(long *)(pTVar9 + 0x10);
          lVar12 = *(long *)(pTVar9 + 0x18);
          local_80 = operator_new(0x20);
          *(long *)local_80 = lVar5;
          *(long *)(local_80 + 8) = lVar6;
          *(long *)(local_80 + 0x10) = lVar11;
          *(long *)(local_80 + 0x18) = lVar12;
          puVar2 = *(undefined8 **)(this + 0x28);
          if (puVar2 == *(undefined8 **)(this + 0x30)) {
            std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
            __push_back_slow_path<ClipperLib::Join*const&>
                      ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
                       (this + 0x20),&local_80);
          }
          else {
            *puVar2 = local_80;
            *(undefined8 **)(this + 0x28) = puVar2 + 1;
          }
        }
        local_88 = local_88 + 0x78;
      }
      local_88 = *(TEdge **)local_88;
    } while (local_88 != (TEdge *)0x0);
  }
  pTVar9 = *(TEdge **)(this + 0x90);
  while (pTVar9 != (TEdge *)0x0) {
    lVar11 = *(long *)(pTVar9 + 0x88);
    lVar12 = *(long *)(pTVar9 + 0x90);
    pCVar1 = this + 0x90;
    if (lVar12 != 0) {
      pCVar1 = (Clipper *)(lVar12 + 0x88);
    }
    *(long *)pCVar1 = lVar11;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x90) = lVar12;
    }
    *(undefined8 *)(pTVar9 + 0x88) = 0;
    *(undefined8 *)(pTVar9 + 0x90) = 0;
    ProcessHorizontal(this,pTVar9,true);
    pTVar9 = *(TEdge **)(this + 0x90);
  }
  pTVar13 = *(TEdge **)pTVar13;
  local_88 = pTVar13;
  if (pTVar13 != (TEdge *)0x0) {
    do {
      if ((*(long *)(pTVar13 + 0x28) == param_1) && (*(long *)(pTVar13 + 0x70) != 0)) {
        local_88 = pTVar13;
        if (*(int *)(pTVar13 + 0x5c) < 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = AddOutPt(this,pTVar13,(IntPoint *)(pTVar13 + 0x20));
        }
        UpdateEdgeIntoAEL(this,&local_88);
        pTVar13 = local_88;
        pTVar9 = *(TEdge **)(local_88 + 0x78);
        pTVar10 = *(TEdge **)(local_88 + 0x80);
        if ((((((pTVar10 != (TEdge *)0x0) && (*(long *)(pTVar10 + 0x10) == *(long *)local_88)) &&
              (lVar11 != 0)) &&
             (((*(long *)(pTVar10 + 0x18) == *(long *)(local_88 + 8) &&
               (-1 < *(int *)(pTVar10 + 0x5c))) &&
              ((*(long *)(pTVar10 + 0x28) < *(long *)(pTVar10 + 0x18) &&
               ((uVar7 = SlopesEqual(local_88,pTVar10,
                                     (bool)this[*(long *)(*(long *)this + -0x18) + 0x18]),
                (uVar7 & 1) != 0 && (*(int *)(pTVar13 + 0x50) != 0)))))))) &&
            (*(int *)(pTVar10 + 0x50) != 0)) ||
           (((((pTVar9 != (TEdge *)0x0 && (*(long *)(pTVar9 + 0x10) == *(long *)pTVar13)) &&
              (lVar11 != 0)) &&
             ((*(long *)(pTVar9 + 0x18) == *(long *)(pTVar13 + 8) && (-1 < *(int *)(pTVar9 + 0x5c)))
             )) && (((*(long *)(pTVar9 + 0x28) < *(long *)(pTVar9 + 0x18) &&
                     ((uVar7 = SlopesEqual(pTVar13,pTVar9,
                                           (bool)this[*(long *)(*(long *)this + -0x18) + 0x18]),
                      (uVar7 & 1) != 0 && (*(int *)(pTVar13 + 0x50) != 0)))) &&
                    (pTVar10 = pTVar9, *(int *)(pTVar9 + 0x50) != 0)))))) {
          lVar6 = AddOutPt(this,pTVar10,(IntPoint *)pTVar13);
          lVar12 = *(long *)(pTVar13 + 0x20);
          lVar5 = *(long *)(pTVar13 + 0x28);
          local_80 = operator_new(0x20);
          *(long *)local_80 = lVar11;
          *(long *)(local_80 + 8) = lVar6;
          *(long *)(local_80 + 0x10) = lVar12;
          *(long *)(local_80 + 0x18) = lVar5;
          puVar2 = *(undefined8 **)(this + 0x28);
          if (puVar2 == *(undefined8 **)(this + 0x30)) {
            std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
            __push_back_slow_path<ClipperLib::Join*const&>
                      ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
                       (this + 0x20),&local_80);
          }
          else {
            *puVar2 = local_80;
            *(undefined8 **)(this + 0x28) = puVar2 + 1;
          }
        }
      }
      pTVar13 = *(TEdge **)(pTVar13 + 0x78);
      local_88 = pTVar13;
    } while (pTVar13 != (TEdge *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

