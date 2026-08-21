
/* cocos2d::Node::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Node::visit(Node *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Node *pNVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (this[0x1f9] == (Node)0x0) {
    return;
  }
  uVar4 = processParentFlags(this,param_2,param_3);
  Director::pushMatrix(*(Director **)(this + 0x198),0);
                    /* try { // try from 00f25b4c to 01025b83 has its CatchHandler @ 00f25a7c */
  pNVar1 = this + 0x8c;
  Director::loadMatrix(*(Director **)(this + 0x198),0,pNVar1);
                    /* catch() { ... } // from try @ 00f25aa8 with catch @ 00f25b60 */
  lVar5 = Camera::getVisitingCamera();
  if (lVar5 == 0) {
    bVar3 = true;
  }
  else {
                    /* catch() { ... } // from try @ 00f25abc with catch @ 00f25b68 */
    bVar3 = (*(uint *)(lVar5 + 0x42c) & (uint)*(ushort *)(this + 0x222)) != 0;
  }
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    if (bVar3) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pNVar1,uVar4);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
    lVar5 = *(long *)(this + 0x180) - (long)*(long **)(this + 0x178);
    if ((lVar5 < 1) || (plVar6 = (long *)**(long **)(this + 0x178), plVar6 == (long *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
      do {
        if (-1 < *(int *)((long)plVar6 + 0x16c)) break;
        (**(code **)(*plVar6 + 0x358))(plVar6,param_1,pNVar1,uVar4);
        if (lVar5 >> 3 <= (long)uVar7) {
          uVar7 = uVar7 & 0xffffffff;
          goto joined_r0x00f25cb8;
        }
        plVar6 = *(long **)(*(long *)(this + 0x178) + uVar7 * 8);
        uVar7 = uVar7 + 1;
      } while (plVar6 != (long *)0x0);
      uVar7 = uVar7 - 1;
    }
joined_r0x00f25cb8:
    if (bVar3) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pNVar1,uVar4);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar8 = (undefined8 *)(*(long *)(this + 0x178) + uVar7 * 8); puVar8 != puVar2;
        puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x358))((long *)*puVar8,param_1,pNVar1,uVar4);
    }
  }
  Director::popMatrix(*(Director **)(this + 0x198),0);
  return;
}

