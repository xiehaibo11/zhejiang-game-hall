
/* ClipperLib::Clipper::FixupFirstLefts1(ClipperLib::OutRec*, ClipperLib::OutRec*) */

void __thiscall ClipperLib::Clipper::FixupFirstLefts1(Clipper *this,OutRec *param_1,OutRec *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  OutPt *pOVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10) - lVar1;
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(lVar1 + uVar5 * 8);
      lVar7 = *(long *)(lVar6 + 0x18);
      if ((lVar7 != 0) && (*(OutRec **)(lVar6 + 8) == param_1)) {
        pOVar4 = *(OutPt **)(param_2 + 0x18);
        lVar8 = lVar7;
        do {
          iVar3 = PointInPolygon((IntPoint *)(lVar8 + 8),pOVar4);
          if (-1 < iVar3) {
            if (iVar3 == 0) goto LAB_01039118;
            break;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != lVar7);
        *(OutRec **)(lVar6 + 8) = param_2;
      }
LAB_01039118:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar2 >> 3));
  }
  return;
}

