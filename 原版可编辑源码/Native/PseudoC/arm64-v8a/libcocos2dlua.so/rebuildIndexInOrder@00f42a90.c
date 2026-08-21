
/* cocos2d::SpriteBatchNode::rebuildIndexInOrder(cocos2d::Sprite*, long) */

long __thiscall
cocos2d::SpriteBatchNode::rebuildIndexInOrder(SpriteBatchNode *this,Sprite *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  Sprite *pSVar5;
  
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar2 = (undefined8 *)plVar4[1];
  for (puVar1 = (undefined8 *)*plVar4; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    pSVar5 = (Sprite *)*puVar1;
    if ((pSVar5 != (Sprite *)0x0) &&
       (iVar3 = (**(code **)(*(long *)pSVar5 + 0x30))(pSVar5), iVar3 < 0)) {
      param_2 = rebuildIndexInOrder(this,pSVar5,param_2);
    }
  }
  if (this != (SpriteBatchNode *)param_1) {
    *(long *)(param_1 + 0x308) = param_2;
    param_2 = param_2 + 1;
  }
  puVar2 = (undefined8 *)plVar4[1];
  for (puVar1 = (undefined8 *)*plVar4; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    pSVar5 = (Sprite *)*puVar1;
    if ((pSVar5 != (Sprite *)0x0) &&
       (iVar3 = (**(code **)(*(long *)pSVar5 + 0x30))(pSVar5), -1 < iVar3)) {
      param_2 = rebuildIndexInOrder(this,pSVar5,param_2);
    }
  }
  return param_2;
}

