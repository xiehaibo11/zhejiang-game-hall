
/* p2t::Sweep::Incircle(p2t::Point const&, p2t::Point const&, p2t::Point const&, p2t::Point const&)
   const */

bool __thiscall
p2t::Sweep::Incircle(Sweep *this,Point *param_1,Point *param_2,Point *param_3,Point *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)param_4;
  dVar8 = *(double *)(param_4 + 8);
  dVar5 = *(double *)param_1 - dVar6;
  dVar4 = *(double *)(param_1 + 8) - dVar8;
  dVar3 = *(double *)param_2 - dVar6;
  dVar2 = *(double *)(param_2 + 8) - dVar8;
  dVar1 = dVar5 * dVar2 - dVar4 * dVar3;
                    /* catch() { ... } // from try @ 0102f654 with catch @ 0102f6c0 */
  if (0.0 < dVar1) {
    dVar6 = *(double *)param_3 - dVar6;
    dVar8 = *(double *)(param_3 + 8) - dVar8;
                    /* catch() { ... } // from try @ 0102f70c with catch @ 0102f6dc */
    dVar7 = dVar4 * dVar6 - dVar5 * dVar8;
    if (0.0 < dVar7) {
                    /* try { // try from 0102f704 to 0112f70b has its CatchHandler @ 0102f774 */
                    /* try { // try from 0102f70c to 0112f78f has its CatchHandler @ 0102f6dc */
      return 0.0 < dVar1 * (dVar6 * dVar6 + dVar8 * dVar8) +
                   (dVar5 * dVar5 + dVar4 * dVar4) * (dVar3 * dVar8 - dVar2 * dVar6) +
                   (dVar3 * dVar3 + dVar2 * dVar2) * dVar7;
    }
  }
  return false;
}

