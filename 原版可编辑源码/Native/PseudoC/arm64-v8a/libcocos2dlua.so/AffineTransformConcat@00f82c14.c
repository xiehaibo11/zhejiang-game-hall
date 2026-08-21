
/* cocos2d::AffineTransformConcat(cocos2d::AffineTransform const&, cocos2d::AffineTransform const&)
    */

void __thiscall
cocos2d::AffineTransformConcat(cocos2d *this,AffineTransform *param_1,AffineTransform *param_2)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar9 = *(float *)(this + 8);
  fVar10 = *(float *)(this + 0xc);
  fVar4 = (float)*(undefined8 *)param_1;
  fVar6 = (float)*(undefined8 *)(param_1 + 8);
  uVar11 = *(undefined8 *)(this + 0x10);
  fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = NEON_rev64(uVar11,4);
  *in_x8 = fVar1 * fVar4 + fVar2 * fVar6;
  in_x8[1] = fVar1 * fVar5 + fVar2 * fVar8;
  *(ulong *)(in_x8 + 2) = CONCAT44(fVar5 * fVar9 + fVar8 * fVar10,fVar4 * fVar9 + fVar6 * fVar10);
  *(ulong *)(in_x8 + 4) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) +
                fVar8 * (float)((ulong)uVar11 >> 0x20) + fVar5 * (float)((ulong)uVar7 >> 0x20),
                (float)uVar3 + fVar4 * (float)uVar11 + fVar6 * (float)uVar7);
  return;
}

