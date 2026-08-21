
/* gjkepa2_impl::EPA::expand(unsigned int, gjkepa2_impl::GJK::sSV*, gjkepa2_impl::EPA::sFace*,
   unsigned int, gjkepa2_impl::EPA::sHorizon&) */

undefined8 __thiscall
gjkepa2_impl::EPA::expand
          (EPA *this,uint param_1,sSV *param_2,sFace *param_3,uint param_4,sHorizon *param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_4;
  if ((byte)param_3[0x5b] == param_1) {
LAB_0124d998:
    uVar1 = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                             ::i1m3 + uVar5 * 4);
    if (-1e-05 <= (*(float *)param_3 * *(float *)(param_2 + 0x10) +
                   (float)*(undefined8 *)(param_3 + 4) * (float)*(undefined8 *)(param_2 + 0x14) +
                  (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20)) -
                  *(float *)(param_3 + 0x10)) {
      param_3[0x5b] = SUB41(param_1,0);
      uVar3 = expand(this,param_1,param_2,*(sFace **)(param_3 + uVar3 * 8 + 0x30),
                     (uint)(byte)param_3[uVar3 + 0x58],param_5);
      if (((uVar3 & 1) == 0) ||
         (uVar5 = expand(this,param_1,param_2,
                         *(sFace **)
                          (param_3 +
                          (ulong)*(uint *)(expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                                           ::i2m3 + uVar5 * 4) * 8 + 0x30),
                         (uint)(byte)param_3[(ulong)*(uint *)(
                                                  expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                                                  ::i2m3 + uVar5 * 4) + 0x58],param_5),
         (uVar5 & 1) == 0)) goto LAB_0124d998;
      if (*(long *)(param_3 + 0x50) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x50) + 0x48) = *(undefined8 *)(param_3 + 0x48);
      }
      if (*(long *)(param_3 + 0x48) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x50) = *(undefined8 *)(param_3 + 0x50);
      }
      if (*(sFace **)(this + 0x3860) == param_3) {
        *(undefined8 *)(this + 0x3860) = *(undefined8 *)(param_3 + 0x50);
      }
      *(int *)(this + 0x3868) = *(int *)(this + 0x3868) + -1;
      *(undefined8 *)(param_3 + 0x48) = 0;
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(this + 0x3870);
      if (*(long *)(this + 0x3870) != 0) {
        *(sFace **)(*(long *)(this + 0x3870) + 0x48) = param_3;
      }
      *(sFace **)(this + 0x3870) = param_3;
      *(int *)(this + 0x3878) = *(int *)(this + 0x3878) + 1;
    }
    else {
      lVar2 = newface(this,*(sSV **)(param_3 + uVar3 * 8 + 0x18),
                      *(sSV **)(param_3 + uVar5 * 8 + 0x18),param_2,false);
      if (lVar2 == 0) {
        return 0;
      }
      *(char *)(lVar2 + 0x58) = (char)param_4;
      *(sFace **)(lVar2 + 0x30) = param_3;
      param_3[uVar5 + 0x58] = (sFace)0x0;
      *(long *)(param_3 + uVar5 * 8 + 0x30) = lVar2;
      lVar4 = *(long *)param_5;
      if (lVar4 == 0) {
        *(long *)(param_5 + 8) = lVar2;
      }
      else {
        *(long *)(lVar4 + 0x38) = lVar2;
        *(undefined1 *)(lVar4 + 0x59) = 2;
        *(undefined1 *)(lVar2 + 0x5a) = 1;
        *(long *)(lVar2 + 0x40) = lVar4;
      }
      *(long *)param_5 = lVar2;
      *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

