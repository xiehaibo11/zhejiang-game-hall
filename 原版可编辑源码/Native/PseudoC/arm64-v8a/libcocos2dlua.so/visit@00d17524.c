
/* cocos2d::BatchSprite3D::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::BatchSprite3D::visit(BatchSprite3D *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  BatchSprite3D *pBVar1;
  uint uVar2;
  int iVar3;
  Director *pDVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (this[0x1f9] == (BatchSprite3D)0x0) {
    return;
  }
  uVar2 = Node::processParentFlags((Node *)this,param_2,param_3);
  pDVar4 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar4,0);
  pBVar1 = this + 0x8c;
  Director::loadMatrix(pDVar4,0,pBVar1);
  uVar5 = Node::isVisitableByVisitingCamera((Node *)this);
  if ((uVar5 & 1) != 0) {
    uVar2 = uVar2 | 8;
    if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar1,uVar2);
    }
    else {
      (**(code **)(*(long *)this + 0x2b0))(this);
      lVar6 = *(long *)(this + 0x178);
      if (*(long *)(this + 0x180) - lVar6 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          plVar7 = *(long **)(lVar6 + uVar5 * 8);
          if ((plVar7 == (long *)0x0) || (iVar3 = (**(code **)(*plVar7 + 0x30))(plVar7), -1 < iVar3)
             ) goto LAB_00d17650;
          (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pBVar1,uVar2);
          lVar6 = *(long *)(this + 0x178);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < *(long *)(this + 0x180) - lVar6 >> 3);
        uVar5 = uVar5 & 0xffffffff;
      }
LAB_00d17650:
      (**(code **)(*(long *)this + 0x348))(this,param_1,pBVar1,uVar2);
      puVar8 = (undefined8 *)(*(long *)(this + 0x178) + uVar5 * 8);
      if (puVar8 != *(undefined8 **)(this + 0x180)) {
        do {
          puVar9 = puVar8 + 1;
          (**(code **)(*(long *)*puVar8 + 0x358))((long *)*puVar8,param_1,pBVar1,uVar2);
          puVar8 = puVar9;
        } while (puVar9 != *(undefined8 **)(this + 0x180));
      }
    }
  }
  Director::popMatrix(pDVar4,0);
  return;
}

