
/* p2t::Sweep::NextFlipPoint(p2t::Point&, p2t::Point&, p2t::Triangle&, p2t::Point&) */

void __thiscall
p2t::Sweep::NextFlipPoint
          (Sweep *this,Point *param_1,Point *param_2,Triangle *param_3,Point *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  runtime_error *this_00;
  double dVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_8_ = *(double *)param_4 - *(double *)param_1;
  auVar6._8_8_ = *(double *)(param_4 + 8) - *(double *)(param_1 + 8);
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  dVar5 = (*(double *)param_2 - *(double *)param_1) * auVar6._0_8_ -
          (*(double *)(param_2 + 8) - *(double *)(param_1 + 8)) * auVar6._8_8_;
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
  cVar1 = '\x02';
  if (bVar3 || bVar2 != bVar4) {
    cVar1 = 0.0 < dVar5;
  }
  if (cVar1 == '\x01') {
    Triangle::PointCW(param_3,param_4);
  }
  else {
    if (cVar1 != '\0') {
      this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
      std::runtime_error::runtime_error(this_00,"[Unsupported] Opposing point on constrained edge");
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&std::runtime_error::typeinfo,std::overflow_error::~overflow_error);
    }
    Triangle::PointCCW(param_3,param_4);
  }
  return;
}

