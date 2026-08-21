
/* cocos2d::BillBoard::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::BillBoard::visit(BillBoard *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  BillBoard *pBVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Director *pDVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  
  if ((this[0x1f9] == (BillBoard)0x0) ||
     ((uVar5 = Node::isVisitableByVisitingCamera((Node *)this), (uVar5 & 1) == 0 &&
      (*(long *)(this + 0x178) == *(long *)(this + 0x180))))) {
    return;
  }
  uVar3 = Node::processParentFlags((Node *)this,param_2,param_3);
  calculateBillboardTransform(this);
  uVar3 = uVar3 | 9;
  pDVar6 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar6,0);
  pBVar1 = this + 0x8c;
  Director::loadMatrix(pDVar6,0,pBVar1);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar1,uVar3);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
    lVar7 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
    if (lVar7 < 1) {
      uVar10 = 0;
    }
    else {
      plVar9 = (long *)**(undefined8 **)(this + 0x178);
      uVar10 = 0;
      if (plVar9 != (long *)0x0) {
        uVar10 = 1;
        do {
          iVar4 = (**(code **)(*plVar9 + 0x30))(plVar9);
          if (-1 < iVar4) break;
          (**(code **)(*plVar9 + 0x358))(plVar9,param_1,pBVar1,uVar3);
          if (lVar7 >> 3 <= (long)uVar10) {
            uVar10 = uVar10 & 0xffffffff;
            goto joined_r0x00d19134;
          }
          plVar9 = *(long **)(*(long *)(this + 0x178) + uVar10 * 8);
          uVar10 = uVar10 + 1;
        } while (plVar9 != (long *)0x0);
        uVar10 = uVar10 - 1;
      }
    }
joined_r0x00d19134:
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar1,uVar3);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar8 = (undefined8 *)(*(long *)(this + 0x178) + uVar10 * 8); puVar8 != puVar2;
        puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x358))((long *)*puVar8,param_1,pBVar1,uVar3);
    }
  }
  Director::popMatrix(pDVar6,0);
  return;
}

