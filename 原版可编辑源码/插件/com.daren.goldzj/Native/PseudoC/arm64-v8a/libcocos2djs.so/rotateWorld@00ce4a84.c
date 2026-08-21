
/* spine::Bone::rotateWorld(float) */

void __thiscall spine::Bone::rotateWorld(Bone *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar4 = *(undefined8 *)(this + 0x7c);
  uVar7 = *(undefined8 *)(this + 0x88);
  fVar1 = (float)MathUtil::cosDeg(param_1);
  fVar2 = (float)MathUtil::sinDeg(param_1);
  fVar6 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar3 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  this[0x78] = (Bone)0x0;
  *(ulong *)(this + 0x7c) = CONCAT44(fVar5 * fVar1 - fVar8 * fVar2,fVar3 * fVar1 - fVar6 * fVar2);
  *(ulong *)(this + 0x88) = CONCAT44(fVar8 * fVar1 + fVar5 * fVar2,fVar6 * fVar1 + fVar3 * fVar2);
  return;
}

