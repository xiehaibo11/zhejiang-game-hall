
/* cocos2d::utils::findChild(cocos2d::Node*, int) */

long cocos2d::utils::findChild(Node *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 0;
  if (((param_1 != (Node *)0x0) && (param_2 != -1)) &&
     (lVar3 = (**(code **)(*(long *)param_1 + 0x228))(param_1,param_2), lVar3 == 0)) {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    puVar1 = (undefined8 *)plVar4[1];
    puVar2 = (undefined8 *)*plVar4;
    do {
      if (puVar2 == puVar1) {
        return 0;
      }
      lVar3 = findChild((Node *)*puVar2,param_2);
      puVar2 = puVar2 + 1;
    } while (lVar3 == 0);
  }
  return lVar3;
}

