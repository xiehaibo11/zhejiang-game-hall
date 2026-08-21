
/* cocostudio::SceneReader::nodeByTag(cocos2d::Node*, int) */

Node * __thiscall cocostudio::SceneReader::nodeByTag(SceneReader *this,Node *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  
  if (param_1 != (Node *)0x0) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    puVar4 = (undefined8 *)*plVar2;
    if (puVar4 != (undefined8 *)plVar2[1]) {
      do {
        pNVar3 = (Node *)*puVar4;
        if ((pNVar3 != (Node *)0x0) &&
           (iVar1 = (**(code **)(*(long *)pNVar3 + 0x2b8))(pNVar3), iVar1 == param_2)) {
          return pNVar3;
        }
        pNVar3 = (Node *)nodeByTag(this,pNVar3,param_2);
        if (pNVar3 != (Node *)0x0) {
          return pNVar3;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)plVar2[1]);
    }
  }
  return (Node *)0x0;
}

