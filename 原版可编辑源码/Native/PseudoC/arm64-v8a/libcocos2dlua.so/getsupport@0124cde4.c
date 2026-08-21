
/* gjkepa2_impl::GJK::getsupport(btVector3 const&, gjkepa2_impl::GJK::sSV&) const */

void __thiscall gjkepa2_impl::GJK::getsupport(GJK *this,btVector3 *param_1,sSV *param_2)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  fVar4 = *(float *)param_1 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_1 + 4)
          + *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar6 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar3 = 1.0 / fVar3;
  fVar4 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar6 = fVar6 * fVar3;
  *(float *)param_2 = fVar6;
  *(float *)(param_2 + 4) = fVar3 * fVar8;
  *(float *)(param_2 + 8) = fVar3 * fVar4;
  pcVar2 = *(code **)(this + 0x80);
  plVar1 = (long *)(*(long *)this + ((long)*(ulong *)(this + 0x88) >> 1));
  if ((*(ulong *)(this + 0x88) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  fVar3 = (float)(*pcVar2)(plVar1,param_2);
  local_50 = -*(float *)param_2;
  fVar5 = -*(float *)(param_2 + 4);
  fVar7 = -*(float *)(param_2 + 8);
  local_44 = 0;
  fStack_4c = fVar5;
  local_48 = fVar7;
  fVar8 = (float)MinkowskiDiff::Support1((MinkowskiDiff *)this,(btVector3 *)&local_50);
  *(float *)(param_2 + 0x10) = fVar3 - fVar8;
  *(float *)(param_2 + 0x14) = fVar4 - fVar5;
  *(float *)(param_2 + 0x18) = fVar6 - fVar7;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

