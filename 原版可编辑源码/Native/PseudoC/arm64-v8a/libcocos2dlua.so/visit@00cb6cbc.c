
/* cocostudio::timeline::BoneNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocostudio::timeline::BoneNode::visit(BoneNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined8 *puVar1;
  BoneNode *pBVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  if (this[0x1f9] == (BoneNode)0x0) {
    return;
  }
  uVar4 = cocos2d::Node::processParentFlags((Node *)this,param_2,param_3);
  cocos2d::Director::pushMatrix(*(Director **)(this + 0x198),0);
  pBVar2 = this + 0x8c;
  cocos2d::Director::loadMatrix(*(Director **)(this + 0x198),0,pBVar2);
  uVar6 = cocos2d::Node::isVisitableByVisitingCamera((Node *)this);
  bVar3 = false;
  if ((uVar6 & 1) != 0) {
    if (this[0x358] == (BoneNode)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(long *)(this + 0x3a8) == 0;
    }
  }
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    if (bVar3) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar2,uVar4);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
    lVar8 = *(long *)(this + 0x178);
    lVar10 = *(long *)(this + 0x180);
    if (lVar10 - lVar8 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        plVar13 = *(long **)(lVar8 + uVar6 * 8);
        if (*(long *)(this + 0x3a8) == 0) {
LAB_00cb6e18:
          if ((plVar13 == (long *)0x0) ||
             (iVar5 = (**(code **)(*plVar13 + 0x30))(plVar13), -1 < iVar5)) goto joined_r0x00cb6e5c;
          (**(code **)(*plVar13 + 0x358))(plVar13,param_1,pBVar2,uVar4);
          lVar8 = *(long *)(this + 0x178);
          lVar10 = *(long *)(this + 0x180);
        }
        else {
          puVar12 = *(undefined8 **)(this + 0x390);
          puVar11 = *(undefined8 **)(this + 0x398);
          if ((puVar12 != puVar11) && ((long *)*puVar12 != plVar13)) {
            do {
              if (puVar11 + -1 == puVar12) goto LAB_00cb6e18;
              puVar1 = puVar12 + 1;
              puVar12 = puVar12 + 1;
            } while ((long *)*puVar1 != plVar13);
          }
          if (puVar12 == puVar11) goto LAB_00cb6e18;
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < lVar10 - lVar8 >> 3);
      uVar6 = uVar6 & 0xffffffff;
    }
joined_r0x00cb6e5c:
    if (bVar3) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar2,uVar4);
    }
    plVar9 = *(long **)(this + 0x180);
    plVar13 = (long *)(*(long *)(this + 0x178) + uVar6 * 8);
    if (plVar13 != plVar9) {
      do {
        plVar7 = (long *)*plVar13;
        if (*(long *)(this + 0x3a8) == 0) {
LAB_00cb6e90:
          (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pBVar2,uVar4);
          plVar9 = *(long **)(this + 0x180);
        }
        else {
          puVar12 = *(undefined8 **)(this + 0x390);
          puVar11 = *(undefined8 **)(this + 0x398);
          if ((puVar12 != puVar11) && ((long *)*puVar12 != plVar7)) {
            do {
              if (puVar11 + -1 == puVar12) goto LAB_00cb6e90;
              puVar1 = puVar12 + 1;
              puVar12 = puVar12 + 1;
            } while ((long *)*puVar1 != plVar7);
          }
          if (puVar12 == puVar11) goto LAB_00cb6e90;
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar9);
    }
  }
  cocos2d::Director::popMatrix(*(Director **)(this + 0x198),0);
  return;
}

