
/* p2t::Orient2d(p2t::Point const&, p2t::Point const&, p2t::Point const&) */

undefined1 p2t::Orient2d(Point *param_1,Point *param_2,Point *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_8_ = *(double *)param_2 - *(double *)param_3;
  auVar6._8_8_ = *(double *)(param_2 + 8) - *(double *)(param_3 + 8);
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  dVar5 = (*(double *)param_1 - *(double *)param_3) * auVar6._0_8_ -
          (*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) * auVar6._8_8_;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (dVar5 < 1e-12) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(dVar5)) {
      bVar2 = dVar5 < -1e-12;
      bVar3 = dVar5 == -1e-12;
      bVar4 = false;
    }
  }
  uVar1 = 2;
  if (bVar3 || bVar2 != bVar4) {
    uVar1 = 0.0 < dVar5;
  }
  return uVar1;
}

