
/* p2t::Sweep::AngleExceeds90Degrees(p2t::Point const*, p2t::Point const*, p2t::Point const*) const
    */

bool __thiscall
p2t::Sweep::AngleExceeds90Degrees(Sweep *this,Point *param_1,Point *param_2,Point *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)param_2 - *(double *)param_1;
  dVar4 = *(double *)(param_2 + 8) - *(double *)(param_1 + 8);
  dVar1 = *(double *)param_3 - *(double *)param_1;
  dVar2 = *(double *)(param_3 + 8) - *(double *)(param_1 + 8);
  dVar1 = atan2(dVar3 * dVar2 - dVar4 * dVar1,dVar3 * dVar1 + dVar4 * dVar2);
  return 1.5707963267948966 < dVar1 || dVar1 < -1.5707963267948966;
}

