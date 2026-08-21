
/* cocostudio::timeline::BoneNode::removeChild(cocos2d::Node*, bool) */

void __thiscall
cocostudio::timeline::BoneNode::removeChild(BoneNode *this,Node *param_1,bool param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  Node *pNVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  plVar6 = plVar2;
  plVar7 = plVar1;
  if (plVar1 != plVar2) {
    pNVar4 = (Node *)*plVar1;
    plVar5 = plVar1;
    while ((plVar6 = plVar5, plVar7 = plVar5, pNVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar2, plVar7 = plVar2, plVar2 != plVar5))) {
      pNVar4 = (Node *)*plVar5;
    }
  }
  lVar3 = (long)plVar7 - (long)plVar1 >> 3;
  if (plVar6 == plVar2) {
    lVar3 = -1;
  }
  if (lVar3 == -1) {
    return;
  }
  (**(code **)(*(long *)this + 0x5e0))(this,param_1);
  cocos2d::Node::removeChild((Node *)this,param_1,param_2);
  return;
}

