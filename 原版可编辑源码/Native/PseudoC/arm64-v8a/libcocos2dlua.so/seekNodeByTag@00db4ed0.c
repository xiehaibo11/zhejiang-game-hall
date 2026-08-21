
/* cocos2d::ui::Helper::seekNodeByTag(cocos2d::Node*, int) */

Node * cocos2d::ui::Helper::seekNodeByTag(Node *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  Node *pNVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 00db4ee8 to 00eb4eef has its CatchHandler @ 00db51ec */
                    /* try { // try from 00db4ef0 to 00eb5047 has its CatchHandler @ 00db4e98 */
  if ((param_1 != (Node *)0x0) &&
     (iVar1 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1), iVar1 != param_2)) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    lVar4 = plVar2[1] - *plVar2;
    if (0 < lVar4) {
      lVar5 = 0;
      pNVar3 = *(Node **)*plVar2;
      while( true ) {
        if ((pNVar3 != (Node *)0x0) &&
           (pNVar3 = (Node *)seekNodeByTag(pNVar3,param_2), pNVar3 != (Node *)0x0)) {
          return pNVar3;
        }
        lVar5 = lVar5 + 1;
        if (lVar4 >> 3 <= lVar5) break;
        pNVar3 = *(Node **)(*plVar2 + lVar5 * 8);
      }
    }
    param_1 = (Node *)0x0;
  }
  return param_1;
}

