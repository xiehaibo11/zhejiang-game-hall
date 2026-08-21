
/* p2t::Sweep::Angle(p2t::Point const*, p2t::Point const*, p2t::Point const*) const */

void __thiscall p2t::Sweep::Angle(Sweep *this,Point *param_1,Point *param_2,Point *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)param_2 - *(double *)param_1;
  dVar4 = *(double *)(param_2 + 8) - *(double *)(param_1 + 8);
  dVar1 = *(double *)param_3 - *(double *)param_1;
                    /* catch() { ... } // from try @ 0102f65c with catch @ 0102f630 */
  dVar2 = *(double *)(param_3 + 8) - *(double *)(param_1 + 8);
  atan2(dVar3 * dVar2 - dVar4 * dVar1,dVar3 * dVar1 + dVar4 * dVar2);
  return;
}

