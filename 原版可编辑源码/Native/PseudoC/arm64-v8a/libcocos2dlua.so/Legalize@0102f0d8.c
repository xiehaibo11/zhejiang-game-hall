
/* p2t::Sweep::Legalize(p2t::SweepContext&, p2t::Triangle&) */

undefined8 __thiscall p2t::Sweep::Legalize(Sweep *this,SweepContext *param_1,Triangle *param_2)

{
  int iVar1;
  Point *pPVar2;
  double *pdVar3;
  Sweep *this_00;
  ulong uVar4;
  Triangle *this_01;
  Point *pPVar5;
  Triangle *pTVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar7 = 0;
  do {
    if ((param_2[lVar7 + 3] == (Triangle)0x0) &&
       (this_01 = *(Triangle **)(param_2 + lVar7 * 8 + 0x20), this_01 != (Triangle *)0x0)) {
      pPVar5 = *(Point **)(param_2 + lVar7 * 8 + 8);
      pPVar2 = (Point *)Triangle::OppositePoint(this_01,param_2,pPVar5);
      iVar1 = Triangle::Index(this_01,pPVar2);
      if ((this_01[iVar1] == (Triangle)0x0) &&
         (pTVar6 = this_01 + (long)iVar1 + 3, *pTVar6 == (Triangle)0x0)) {
        pdVar3 = (double *)Triangle::PointCCW(param_2,pPVar5);
        this_00 = (Sweep *)Triangle::PointCW(param_2,pPVar5);
        dVar13 = *(double *)pPVar2;
        dVar15 = *(double *)(pPVar2 + 8);
        dVar12 = *(double *)pPVar5 - dVar13;
        dVar11 = *(double *)(pPVar5 + 8) - dVar15;
        dVar10 = *pdVar3 - dVar13;
        dVar9 = pdVar3[1] - dVar15;
        dVar8 = dVar12 * dVar9 - dVar11 * dVar10;
        if (0.0 < dVar8) {
          dVar13 = *(double *)this_00 - dVar13;
          dVar15 = *(double *)(this_00 + 8) - dVar15;
          dVar14 = dVar11 * dVar13 - dVar12 * dVar15;
          if ((0.0 < dVar14) &&
             (0.0 < dVar8 * (dVar13 * dVar13 + dVar15 * dVar15) +
                    (dVar12 * dVar12 + dVar11 * dVar11) * (dVar10 * dVar15 - dVar9 * dVar13) +
                    (dVar10 * dVar10 + dVar9 * dVar9) * dVar14)) {
            param_2[lVar7 + 3] = (Triangle)0x1;
            *pTVar6 = (Triangle)0x1;
            RotateTrianglePair(this_00,param_2,pPVar5,this_01,pPVar2);
            uVar4 = Legalize(this,param_1,param_2);
            if ((uVar4 & 1) == 0) {
              SweepContext::MapTriangleToNodes(param_1,param_2);
            }
            uVar4 = Legalize(this,param_1,this_01);
            if ((uVar4 & 1) == 0) {
              SweepContext::MapTriangleToNodes(param_1,this_01);
            }
            param_2[lVar7 + 3] = (Triangle)0x0;
            *pTVar6 = (Triangle)0x0;
            return 1;
          }
        }
      }
      else {
        param_2[lVar7] = this_01[iVar1];
      }
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      return 0;
    }
  } while( true );
}

