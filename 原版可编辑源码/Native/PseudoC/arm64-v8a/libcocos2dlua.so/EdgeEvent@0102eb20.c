
/* p2t::Sweep::EdgeEvent(p2t::SweepContext&, p2t::Point&, p2t::Point&, p2t::Triangle*, p2t::Point&)
    */

void __thiscall
p2t::Sweep::EdgeEvent
          (Sweep *this,SweepContext *param_1,Point *param_2,Point *param_3,Triangle *param_4,
          Point *param_5)

{
  long lVar1;
  int iVar2;
  Point *pPVar3;
  Triangle *pTVar4;
  double dVar5;
  double dVar6;
  runtime_error arStack_98 [16];
  runtime_error arStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  iVar2 = Triangle::EdgeIndex(param_4,param_2,param_3);
  if (iVar2 != -1) {
    Triangle::MarkConstrainedEdge(param_4,iVar2);
    if (*(Triangle **)(param_4 + (long)iVar2 * 8 + 0x20) != (Triangle *)0x0) {
      Triangle::MarkConstrainedEdge
                (*(Triangle **)(param_4 + (long)iVar2 * 8 + 0x20),param_2,param_3);
    }
    goto LAB_0102edd0;
  }
  pPVar3 = (Point *)Triangle::PointCCW(param_4,param_5);
  dVar5 = (*(double *)param_3 - *(double *)param_2) *
          (*(double *)(pPVar3 + 8) - *(double *)(param_2 + 8)) -
          (*(double *)(param_3 + 8) - *(double *)(param_2 + 8)) *
          (*(double *)pPVar3 - *(double *)param_2);
  if (dVar5 <= -1e-12 || 1e-12 <= dVar5) {
    pPVar3 = (Point *)Triangle::PointCW(param_4,param_5);
    dVar6 = (*(double *)param_3 - *(double *)param_2) *
            (*(double *)(pPVar3 + 8) - *(double *)(param_2 + 8)) -
            (*(double *)(param_3 + 8) - *(double *)(param_2 + 8)) *
            (*(double *)pPVar3 - *(double *)param_2);
    if ((-1e-12 < dVar6) && (dVar6 < 1e-12)) {
                    /* catch() { ... } // from try @ 0102ec64 with catch @ 0102ecd0 */
                    /* catch() { ... } // from try @ 0102ed1c with catch @ 0102ecec */
      if (((*(Point **)(param_4 + 8) != param_3) &&
          ((*(Point **)(param_4 + 0x10) != param_3 && (*(Point **)(param_4 + 0x18) != param_3)))) ||
         ((*(Point **)(param_4 + 8) != pPVar3 &&
          ((*(Point **)(param_4 + 0x10) != pPVar3 && (*(Point **)(param_4 + 0x18) != pPVar3)))))) {
                    /* try { // try from 0102ed14 to 0112ed1b has its CatchHandler @ 0102ed84 */
                    /* try { // try from 0102ed1c to 0112ed9f has its CatchHandler @ 0102ecec */
        std::runtime_error::runtime_error(arStack_98,"EdgeEvent - collinear points not supported");
        std::overflow_error::~overflow_error((overflow_error *)arStack_98);
        goto LAB_0102edd0;
      }
      goto LAB_0102ed2c;
    }
    if (0.0 < dVar5 != 0.0 < dVar6) {
      FlipEdgeEvent(this,param_1,param_2,param_3,param_4,param_5);
      goto LAB_0102edd0;
    }
                    /* catch() { ... } // from try @ 0102ed14 with catch @ 0102ed84 */
    if (0.0 < dVar5) {
      pTVar4 = (Triangle *)Triangle::NeighborCW(param_4,param_5);
    }
    else {
      pTVar4 = (Triangle *)Triangle::NeighborCCW(param_4,param_5);
    }
  }
  else {
                    /* catch() { ... } // from try @ 0102ec6c with catch @ 0102ec40 */
                    /* try { // try from 0102ec64 to 0112ec6b has its CatchHandler @ 0102ecd0 */
    if ((((*(Point **)(param_4 + 8) != param_3) && (*(Point **)(param_4 + 0x10) != param_3)) &&
        (*(Point **)(param_4 + 0x18) != param_3)) ||
       (((*(Point **)(param_4 + 8) != pPVar3 && (*(Point **)(param_4 + 0x10) != pPVar3)) &&
        (*(Point **)(param_4 + 0x18) != pPVar3)))) {
                    /* try { // try from 0102ec6c to 0112eceb has its CatchHandler @ 0102ec40 */
      std::runtime_error::runtime_error(arStack_88,"EdgeEvent - collinear points not supported");
      std::overflow_error::~overflow_error((overflow_error *)arStack_88);
      goto LAB_0102edd0;
    }
LAB_0102ed2c:
    Triangle::MarkConstrainedEdge(param_4,param_3,pPVar3);
    *(Point **)(*(long *)(param_1 + 0x40) + 8) = pPVar3;
    pTVar4 = (Triangle *)Triangle::NeighborAcross(param_4,param_5);
    param_3 = pPVar3;
    param_5 = pPVar3;
  }
  EdgeEvent(this,param_1,param_2,param_3,pTVar4,param_5);
LAB_0102edd0:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

