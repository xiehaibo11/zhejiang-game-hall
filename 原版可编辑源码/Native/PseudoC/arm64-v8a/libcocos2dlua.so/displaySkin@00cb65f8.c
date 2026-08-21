
/* cocostudio::timeline::BoneNode::displaySkin(cocos2d::Node*, bool) */

void __thiscall
cocostudio::timeline::BoneNode::displaySkin(BoneNode *this,Node *param_1,bool param_2)

{
  Node *pNVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0x390);
  plVar5 = *(long **)(this + 0x398);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    pNVar1 = (Node *)*plVar4;
    if (pNVar1 == param_1) {
      lVar3 = *(long *)param_1;
      uVar2 = 1;
      pNVar1 = param_1;
LAB_00cb6630:
      (**(code **)(lVar3 + 0x170))(pNVar1,uVar2);
    }
    else if (param_2) {
      lVar3 = *(long *)pNVar1;
      uVar2 = 0;
      goto LAB_00cb6630;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}

