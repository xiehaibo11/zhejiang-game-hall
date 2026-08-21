
/* ClipperLib::Clipper::DoSimplePolygons() */

void __thiscall ClipperLib::Clipper::DoSimplePolygons(Clipper *this)

{
  byte bVar1;
  OutRec OVar2;
  long lVar3;
  OutRec *pOVar4;
  int iVar5;
  ulong uVar6;
  OutPt *pOVar7;
  long lVar8;
  OutPt *pOVar9;
  vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>> *this_00;
  OutPt *pOVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  OutPt *pOVar15;
  OutRec *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>> *)(this + 8);
  puVar14 = *(undefined8 **)this_00;
  puVar11 = *(undefined8 **)(this + 0x10);
  if (puVar11 != puVar14) {
    uVar6 = 0;
    do {
      lVar13 = puVar14[uVar6];
      uVar6 = uVar6 + 1;
      pOVar15 = *(OutPt **)(lVar13 + 0x18);
      pOVar9 = pOVar15;
      if (pOVar15 != (OutPt *)0x0) {
LAB_010356b0:
        pOVar10 = *(OutPt **)(pOVar15 + 0x18);
        puVar12 = puVar11;
        if (pOVar10 != pOVar9) {
LAB_010356e8:
          puVar11 = puVar12;
          if ((((*(long *)(pOVar15 + 8) == *(long *)(pOVar10 + 8)) &&
               (*(long *)(pOVar15 + 0x10) == *(long *)(pOVar10 + 0x10))) &&
              (*(OutPt **)(pOVar10 + 0x18) != pOVar15)) &&
             (pOVar7 = *(OutPt **)(pOVar10 + 0x20), pOVar7 != pOVar15)) {
            lVar8 = *(long *)(pOVar15 + 0x20);
            *(OutPt **)(pOVar15 + 0x20) = pOVar7;
            *(OutPt **)(pOVar7 + 0x18) = pOVar15;
            *(long *)(pOVar10 + 0x20) = lVar8;
            *(OutPt **)(lVar8 + 0x18) = pOVar10;
            *(OutPt **)(lVar13 + 0x18) = pOVar15;
            local_70 = operator_new(0x28);
            *(undefined2 *)(local_70 + 4) = 0;
            *(undefined8 *)(local_70 + 0x20) = 0;
            *(undefined8 *)(local_70 + 0x18) = 0;
            *(undefined8 *)(local_70 + 0x10) = 0;
            *(undefined8 *)(local_70 + 8) = 0;
            if (puVar12 == *(undefined8 **)(this + 0x18)) {
              std::__ndk1::vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>>::
              __push_back_slow_path<ClipperLib::OutRec*const&>(this_00,&local_70);
              puVar11 = *(undefined8 **)(this + 0x10);
            }
            else {
              puVar11 = puVar12 + 1;
              *puVar12 = local_70;
              *(undefined8 **)(this + 0x10) = puVar11;
            }
            pOVar4 = local_70;
            puVar14 = *(undefined8 **)this_00;
            iVar5 = (int)((ulong)((long)puVar11 - (long)puVar14) >> 3) + -1;
            *(int *)local_70 = iVar5;
            *(OutPt **)(local_70 + 0x18) = pOVar10;
            pOVar9 = pOVar10;
            do {
              *(int *)pOVar9 = iVar5;
              pOVar9 = *(OutPt **)(pOVar9 + 0x20);
            } while (pOVar9 != pOVar10);
            pOVar9 = *(OutPt **)(lVar13 + 0x18);
            pOVar7 = pOVar10;
            do {
              iVar5 = PointInPolygon((IntPoint *)(pOVar7 + 8),pOVar9);
              if (-1 < iVar5) {
                pOVar7 = pOVar9;
                if (iVar5 == 0) goto LAB_0103576c;
                break;
              }
              pOVar7 = *(OutPt **)(pOVar7 + 0x18);
            } while (pOVar7 != pOVar10);
            bVar1 = *(byte *)(lVar13 + 4);
            *(long *)(pOVar4 + 8) = lVar13;
            pOVar4[4] = (OutRec)(bVar1 ^ 1);
            pOVar10 = pOVar15;
          }
          goto LAB_010356dc;
        }
      }
LAB_01035674:
    } while (uVar6 < (ulong)((long)puVar11 - (long)puVar14 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (pOVar7 = *(OutPt **)(pOVar7 + 0x18), pOVar7 != pOVar9) {
LAB_0103576c:
    iVar5 = PointInPolygon((IntPoint *)(pOVar7 + 8),pOVar10);
    if (-1 < iVar5) {
      OVar2 = *(OutRec *)(lVar13 + 4);
      pOVar4[4] = OVar2;
      if (iVar5 != 0) goto LAB_01035808;
      *(undefined8 *)(pOVar4 + 8) = *(undefined8 *)(lVar13 + 8);
      pOVar10 = pOVar15;
      goto LAB_010356dc;
    }
  }
  OVar2 = *(OutRec *)(lVar13 + 4);
  pOVar4[4] = OVar2;
LAB_01035808:
  *(byte *)(lVar13 + 4) = (byte)OVar2 ^ 1;
  *(undefined8 *)(pOVar4 + 8) = *(undefined8 *)(lVar13 + 8);
  *(OutRec **)(lVar13 + 8) = pOVar4;
  pOVar10 = pOVar15;
LAB_010356dc:
  pOVar10 = *(OutPt **)(pOVar10 + 0x18);
  puVar12 = puVar11;
  if (pOVar10 == pOVar9) goto LAB_010356a4;
  goto LAB_010356e8;
LAB_010356a4:
  pOVar15 = *(OutPt **)(pOVar15 + 0x18);
  if (pOVar15 == pOVar9) goto LAB_01035674;
  goto LAB_010356b0;
}

