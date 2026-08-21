
/* cocos2d::Mat4::determinant() const */

float __thiscall cocos2d::Mat4::determinant(Mat4 *this)

{
  float fVar1;
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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)this;
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 0x18);
  fVar6 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar9 = *(float *)(this + 0x30);
  fVar10 = *(float *)(this + 0x34);
  fVar11 = *(float *)(this + 0x20);
  fVar12 = *(float *)(this + 0x24);
  fVar13 = *(float *)(this + 0x38);
  fVar14 = *(float *)(this + 0x3c);
  fVar15 = *(float *)(this + 0x28);
  fVar16 = *(float *)(this + 0x2c);
  return (fVar7 * fVar6 - fVar5 * fVar8) * (fVar11 * fVar10 - fVar12 * fVar9) +
         (((fVar4 * fVar5 - fVar2 * fVar7) * (fVar11 * fVar14 - fVar9 * fVar16) +
          (fVar3 * fVar6 - fVar1 * fVar8) * (fVar12 * fVar13 - fVar10 * fVar15) +
          ((fVar3 * fVar2 - fVar4 * fVar1) * (fVar15 * fVar14 - fVar13 * fVar16) -
          (fVar3 * fVar5 - fVar1 * fVar7) * (fVar12 * fVar14 - fVar10 * fVar16))) -
         (fVar4 * fVar6 - fVar2 * fVar8) * (fVar11 * fVar13 - fVar9 * fVar15));
}

