
/* cocos2d::DrawNode::drawCardinalSpline(cocos2d::PointArray*, float, unsigned int, cocos2d::Color4F
   const&) */

void __thiscall
cocos2d::DrawNode::drawCardinalSpline
          (DrawNode *this,PointArray *param_1,float param_2,uint param_3,Color4F *param_4)

{
  uint uVar1;
  long lVar2;
  Vec2 *__s;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar1 = param_3 + 1;
  uVar5 = (ulong)uVar1 << 3;
  __s = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if (__s != (Vec2 *)0x0) {
    if (uVar1 == 0) {
      PointArray::count(param_1);
    }
    else {
      memset(__s,0,uVar5);
      lVar3 = PointArray::count(param_1);
      uVar5 = 0;
      fVar9 = 1.0 / (float)lVar3;
      pfVar6 = (float *)(__s + 4);
      do {
        fVar8 = (float)(uVar5 & 0xffffffff) / (float)param_3;
        if (fVar8 == 1.0) {
          lVar3 = PointArray::count(param_1);
          lVar3 = lVar3 + -1;
          fVar8 = 1.0;
        }
        else {
          lVar3 = (long)(fVar8 / fVar9);
          fVar8 = (fVar8 - fVar9 * (float)lVar3) / fVar9;
        }
        puVar4 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar3 + -1);
        local_90 = *puVar4;
        puVar4 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar3);
        local_98 = *puVar4;
        puVar4 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar3 + 1);
        local_a0 = *puVar4;
        puVar4 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar3 + 2);
        local_a8 = *puVar4;
        fVar7 = (float)ccCardinalSplineAt((Vec2 *)&local_90,(Vec2 *)&local_98,(Vec2 *)&local_a0,
                                          (Vec2 *)&local_a8,param_2,fVar8);
        uVar5 = uVar5 + 1;
        pfVar6[-1] = fVar7;
        *pfVar6 = fVar8;
        pfVar6 = pfVar6 + 2;
      } while (uVar1 != uVar5);
    }
    drawPoly(this,__s,uVar1,false,param_4);
    operator_delete__(__s);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

