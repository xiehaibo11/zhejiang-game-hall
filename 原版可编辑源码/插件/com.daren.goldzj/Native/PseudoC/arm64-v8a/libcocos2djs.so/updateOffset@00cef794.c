
/* spine::RegionAttachment::updateOffset() */

void __thiscall spine::RegionAttachment::updateOffset(RegionAttachment *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = (*(float *)(this + 0x54) / *(float *)(this + 0x6c)) * *(float *)(this + 0x4c);
  fVar6 = (*(float *)(this + 0x58) / *(float *)(this + 0x70)) * *(float *)(this + 0x50);
  fVar7 = *(float *)(this + 0x54) * -0.5 * *(float *)(this + 0x4c) + fVar5 * *(float *)(this + 0x5c)
  ;
  fVar8 = *(float *)(this + 0x58) * -0.5 * *(float *)(this + 0x50) + fVar6 * *(float *)(this + 0x60)
  ;
  fVar9 = fVar7 + fVar5 * *(float *)(this + 100);
  fVar10 = fVar8 + fVar6 * *(float *)(this + 0x68);
  fVar5 = (float)MathUtil::cosDeg(*(float *)(this + 0x48));
  fVar6 = (float)MathUtil::sinDeg(*(float *)(this + 0x48));
  pfVar1 = *(float **)(this + 0x90);
  fVar11 = fVar9 * fVar6;
  fVar2 = fVar10 * fVar6;
  fVar3 = fVar7 * fVar5 + *(float *)(this + 0x40);
  fVar4 = fVar8 * fVar5 + *(float *)(this + 0x44);
  fVar9 = fVar9 * fVar5 + *(float *)(this + 0x40);
  fVar5 = fVar10 * fVar5 + *(float *)(this + 0x44);
  *pfVar1 = fVar3 - fVar8 * fVar6;
  pfVar1[1] = fVar7 * fVar6 + fVar4;
  pfVar1[2] = fVar3 - fVar2;
  pfVar1[3] = fVar7 * fVar6 + fVar5;
  pfVar1[4] = fVar9 - fVar2;
  pfVar1[5] = fVar11 + fVar5;
  pfVar1[6] = fVar9 - fVar8 * fVar6;
  pfVar1[7] = fVar11 + fVar4;
  return;
}

