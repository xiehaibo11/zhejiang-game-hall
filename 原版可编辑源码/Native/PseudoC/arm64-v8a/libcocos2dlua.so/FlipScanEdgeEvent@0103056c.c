
/* p2t::Sweep::FlipScanEdgeEvent(p2t::SweepContext&, p2t::Point&, p2t::Point&, p2t::Triangle&,
   p2t::Triangle&, p2t::Point&) */

void __thiscall
p2t::Sweep::FlipScanEdgeEvent
          (Sweep *this,SweepContext *param_1,Point *param_2,Point *param_3,Triangle *param_4,
          Triangle *param_5,Point *param_6)

{
  Triangle *this_00;
  Point *pPVar1;
  double *pdVar2;
  Sweep *this_01;
  
  while( true ) {
    this_00 = (Triangle *)Triangle::NeighborAcross(param_5,param_6);
    pPVar1 = (Point *)Triangle::OppositePoint(this_00,param_5,param_6);
    pdVar2 = (double *)Triangle::PointCCW(param_4,param_3);
    this_01 = (Sweep *)Triangle::PointCW(param_4,param_3);
    if (((*(double *)param_3 - *pdVar2) * (*(double *)(pPVar1 + 8) - pdVar2[1]) -
         (*(double *)pPVar1 - *pdVar2) * (*(double *)(param_3 + 8) - pdVar2[1]) < -1e-12) &&
       (1e-12 < (*(double *)param_3 - *(double *)this_01) *
                (*(double *)(pPVar1 + 8) - *(double *)(this_01 + 8)) -
                (*(double *)pPVar1 - *(double *)this_01) *
                (*(double *)(param_3 + 8) - *(double *)(this_01 + 8)))) break;
    param_6 = (Point *)NextFlipPoint(this_01,param_2,param_3,this_00,pPVar1);
    param_5 = this_00;
  }
  FlipEdgeEvent(this,param_1,param_3,pPVar1,this_00,pPVar1);
  return;
}

