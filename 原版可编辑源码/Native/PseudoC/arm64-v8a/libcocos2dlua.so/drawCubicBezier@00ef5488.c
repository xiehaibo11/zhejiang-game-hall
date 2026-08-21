
/* cocos2d::DrawNode::drawCubicBezier(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, cocos2d::Vec2 const&, unsigned int, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawCubicBezier
          (DrawNode *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,uint param_5,
          Color4F *param_6)

{
  uint uVar1;
  undefined8 *__s;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  uVar1 = param_5 + 1;
  uVar3 = (ulong)param_5;
  __s = operator_new__((ulong)uVar1 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (undefined8 *)0x0) {
    return;
  }
  if ((uVar1 == 0) || (memset(__s,0,(ulong)uVar1 << 3), param_5 != 0)) {
    uVar11 = *(undefined8 *)param_1;
    uVar12 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)param_3;
    fVar14 = 0.0;
    fVar2 = (float)*(undefined8 *)param_4;
    fVar8 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    uVar4 = uVar3;
    puVar5 = __s;
    do {
      fVar10 = 1.0 - fVar14;
      fVar6 = powf(fVar10,3.0);
      fVar7 = fVar14 * fVar10 * fVar10 * 3.0;
      fVar10 = fVar14 * fVar14 * fVar10 * 3.0;
      fVar9 = fVar14 * fVar14 * fVar14;
      uVar4 = uVar4 - 1;
      *puVar5 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar6 +
                         (float)((ulong)uVar12 >> 0x20) * fVar7 +
                         (float)((ulong)uVar13 >> 0x20) * fVar10 + fVar8 * fVar9,
                         (float)uVar11 * fVar6 + (float)uVar12 * fVar7 + (float)uVar13 * fVar10 +
                         fVar2 * fVar9);
      fVar14 = 1.0 / (float)uVar3 + fVar14;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  else {
    fVar2 = *(float *)param_4;
    fVar8 = *(float *)(param_4 + 4);
    uVar3 = 0;
  }
  *(float *)(__s + uVar3) = fVar2;
  *(float *)((long)(__s + uVar3) + 4) = fVar8;
  drawPoly(this,(Vec2 *)__s,uVar1,false,param_6);
  operator_delete__(__s);
  return;
}

