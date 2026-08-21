
/* gjkepa2_impl::MinkowskiDiff::Support1(btVector3 const&) const */

float __thiscall gjkepa2_impl::MinkowskiDiff::Support1(MinkowskiDiff *this,btVector3 *param_1)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  
  pcVar2 = *(code **)(this + 0x80);
  plVar1 = (long *)(*(long *)(this + 8) + ((long)*(ulong *)(this + 0x88) >> 1));
  if ((*(ulong *)(this + 0x88) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  local_30 = *(float *)(this + 0x10) * fVar4 + *(float *)(this + 0x14) * fVar5 +
             *(float *)(this + 0x18) * fVar6;
  fVar3 = fVar4 * *(float *)(this + 0x20) + fVar5 * *(float *)(this + 0x24) +
          fVar6 * *(float *)(this + 0x28);
  fVar5 = fVar4 * *(float *)(this + 0x30) + fVar5 * *(float *)(this + 0x34) +
          fVar6 * *(float *)(this + 0x38);
  local_24 = 0;
  fStack_2c = fVar3;
  local_28 = fVar5;
  fVar4 = (float)(*pcVar2)(plVar1,&local_30);
  return *(float *)(this + 0x40) * fVar4 + fVar3 * *(float *)(this + 0x44) +
         fVar5 * *(float *)(this + 0x48) + *(float *)(this + 0x70);
}

