
/* cocos2d::DrawNode::drawQuadBezier(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, unsigned int, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawQuadBezier
          (DrawNode *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,uint param_4,Color4F *param_5)

{
  uint uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = param_4 + 1;
  uVar4 = (ulong)param_4;
  __s = operator_new__((ulong)uVar1 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (undefined8 *)0x0) {
    return;
  }
  if ((uVar1 == 0) || (memset(__s,0,(ulong)uVar1 << 3), param_4 != 0)) {
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)param_2;
    fVar7 = (float)*(undefined8 *)param_3;
    fVar8 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar9 = 0.0;
    uVar2 = uVar4;
    puVar3 = __s;
    do {
      fVar10 = 1.0 - fVar9;
      fVar11 = fVar9 * (fVar10 + fVar10);
      uVar2 = uVar2 - 1;
      *puVar3 = CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar10 * fVar10 +
                         (float)((ulong)uVar6 >> 0x20) * fVar11 + fVar8 * fVar9 * fVar9,
                         (float)uVar5 * fVar10 * fVar10 + (float)uVar6 * fVar11 +
                         fVar7 * fVar9 * fVar9);
      fVar9 = 1.0 / (float)uVar4 + fVar9;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  else {
    fVar7 = *(float *)param_3;
    fVar8 = *(float *)(param_3 + 4);
    uVar4 = 0;
  }
  *(float *)(__s + uVar4) = fVar7;
  *(float *)((long)(__s + uVar4) + 4) = fVar8;
  drawPoly(this,(Vec2 *)__s,uVar1,false,param_5);
  operator_delete__(__s);
  return;
}

