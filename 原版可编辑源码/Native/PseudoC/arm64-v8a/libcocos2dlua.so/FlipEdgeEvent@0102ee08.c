
/* p2t::Sweep::FlipEdgeEvent(p2t::SweepContext&, p2t::Point&, p2t::Point&, p2t::Triangle*,
   p2t::Point&) */

void __thiscall
p2t::Sweep::FlipEdgeEvent
          (Sweep *this,SweepContext *param_1,Point *param_2,Point *param_3,Triangle *param_4,
          Point *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  Triangle *this_00;
  Point *pPVar4;
  double *pdVar5;
  Sweep *this_01;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  do {
    this_00 = (Triangle *)Triangle::NeighborAcross(param_4,param_5);
    pPVar4 = (Point *)Triangle::OppositePoint(this_00,param_4,param_5);
    pdVar5 = (double *)Triangle::PointCCW(param_4,param_5);
    this_01 = (Sweep *)Triangle::PointCW(param_4,param_5);
    if ((-1e-12 <= (*(double *)param_5 - *pdVar5) * (*(double *)(pPVar4 + 8) - pdVar5[1]) -
                   (*(double *)pPVar4 - *pdVar5) * (*(double *)(param_5 + 8) - pdVar5[1])) ||
       ((*(double *)param_5 - *(double *)this_01) *
        (*(double *)(pPVar4 + 8) - *(double *)(this_01 + 8)) -
        (*(double *)pPVar4 - *(double *)this_01) *
        (*(double *)(param_5 + 8) - *(double *)(this_01 + 8)) <= 1e-12)) {
                    /* try { // try from 0102f05c to 0112f063 has its CatchHandler @ 0102f0cc */
      pPVar4 = (Point *)NextFlipPoint(this_01,param_2,param_3,this_00,pPVar4);
                    /* try { // try from 0102f064 to 0112f0e7 has its CatchHandler @ 0102f034 */
      FlipScanEdgeEvent(this,param_1,param_2,param_3,param_4,this_00,pPVar4);
      EdgeEvent(this,param_1,param_2,param_3,param_4,param_5);
      return;
    }
    RotateTrianglePair(this_01,param_4,param_5,this_00,pPVar4);
    SweepContext::MapTriangleToNodes(param_1,param_4);
    SweepContext::MapTriangleToNodes(param_1,this_00);
    dVar7 = *(double *)param_3;
    if (*(double *)param_5 == dVar7) {
                    /* catch() { ... } // from try @ 0102efb4 with catch @ 0102ef88 */
      dVar8 = *(double *)(param_3 + 8);
                    /* try { // try from 0102efac to 0112efb3 has its CatchHandler @ 0102f018 */
      if (((*(double *)(param_5 + 8) == dVar8) && (*(double *)pPVar4 == *(double *)param_2)) &&
         (*(double *)(pPVar4 + 8) == *(double *)(param_2 + 8))) {
                    /* try { // try from 0102efb4 to 0112f033 has its CatchHandler @ 0102ef88 */
        pdVar5 = (double *)(*(long **)(param_1 + 0x40))[1];
        if (((dVar7 == *pdVar5) && (dVar8 == pdVar5[1])) &&
           ((pdVar5 = (double *)**(long **)(param_1 + 0x40), *(double *)param_2 == *pdVar5 &&
            (*(double *)(param_2 + 8) == pdVar5[1])))) {
          Triangle::MarkConstrainedEdge(param_4,param_2,param_3);
          Triangle::MarkConstrainedEdge(this_00,param_2,param_3);
                    /* catch() { ... } // from try @ 0102efac with catch @ 0102f018 */
          Legalize(this,param_1,param_4);
                    /* catch() { ... } // from try @ 0102f064 with catch @ 0102f034 */
          Legalize(this,param_1,this_00);
          return;
        }
                    /* catch() { ... } // from try @ 0102f05c with catch @ 0102f0cc */
        return;
      }
    }
    else {
      dVar8 = *(double *)(param_3 + 8);
    }
    dVar7 = (dVar7 - *(double *)param_2) * (*(double *)(pPVar4 + 8) - *(double *)(param_2 + 8)) -
            (dVar8 - *(double *)(param_2 + 8)) * (*(double *)pPVar4 - *(double *)param_2);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar7 < 1e-12) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar1 = dVar7 < -1e-12;
        bVar2 = dVar7 == -1e-12;
        bVar3 = false;
      }
    }
    uVar6 = 2;
    if (bVar2 || bVar1 != bVar3) {
      uVar6 = (uint)(0.0 < dVar7);
    }
    param_4 = (Triangle *)NextFlipTriangle(this,param_1,uVar6,param_4,this_00,param_5,pPVar4);
  } while( true );
}

