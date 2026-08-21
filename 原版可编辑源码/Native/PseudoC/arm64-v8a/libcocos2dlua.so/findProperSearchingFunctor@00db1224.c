
/* cocos2d::ui::Layout::findProperSearchingFunctor(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::Layout::findProperSearchingFunctor(Layout *this,undefined4 param_2,Node *param_3)

{
  long lVar1;
  long lVar2;
  Node *this_00;
  Size *pSVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_88;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  Layout *local_68;
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 00db1234 to 00eb129b has its CatchHandler @ 00db1404 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == (Node *)0x0) goto switchD_00db1358_default;
  lVar2 = __dynamic_cast(param_3,&Widget::typeinfo,&typeinfo,0);
  if (lVar2 == 0) {
    pSVar3 = (Size *)(**(code **)(*(long *)param_3 + 0x168))(param_3);
    Size::Size((Size *)&local_80,pSVar3);
  }
  else {
    getLayoutAccumulatedSize();
  }
  fVar7 = 0.5;
                    /* try { // try from 00db12a8 to 00eb12bb has its CatchHandler @ 00db13f8 */
  local_88 = CONCAT44((float)((ulong)local_80 >> 0x20) * 0.5,SUB84(local_80,0) * 0.5);
  fVar5 = (float)Node::convertToWorldSpace(param_3,(Vec2 *)&local_88);
                    /* try { // try from 00db12c4 to 00eb133b has its CatchHandler @ 00db1400 */
  this_00 = (Node *)findFirstNonLayoutWidget(this);
  if ((this_00 == (Node *)0x0) ||
     (lVar2 = __dynamic_cast(this_00,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) {
    pSVar3 = (Size *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
    Size::Size((Size *)&local_80,pSVar3);
  }
  else {
    getLayoutAccumulatedSize();
  }
  fVar8 = 0.5;
  local_88 = CONCAT44((float)((ulong)local_80 >> 0x20) * 0.5,SUB84(local_80,0) * 0.5);
  fVar6 = (float)Node::convertToWorldSpace(this_00,(Vec2 *)&local_88);
  switch(param_2) {
  case 0:
    if (fVar6 < fVar5) break;
LAB_00db13a8:
    local_78 = findFarthestChildWidgetIndex;
    goto LAB_00db13b0;
  case 1:
                    /* catch() { ... } // from try @ 00db0ed0 with catch @ 00db1424
                       catch() { ... } // from try @ 00db1370 with catch @ 00db1424 */
                    /* catch() { ... } // from try @ 00db1044 with catch @ 00db1434 */
    if (fVar6 < fVar5) goto LAB_00db13a8;
    break;
  case 2:
                    /* try { // try from 00db1378 to 00eb13f3 has its CatchHandler @ 00db0e60 */
    if (fVar8 <= fVar7) goto LAB_00db13a8;
    break;
  case 3:
    if (fVar7 <= fVar8) goto LAB_00db13a8;
    break;
  default:
    goto switchD_00db1358_default;
  }
  local_78 = findNearestChildWidgetIndex;
LAB_00db13b0:
  local_80 = &PTR_FUN_016d9800;
  uStack_70 = 0;
  local_68 = this;
  local_60 = &local_80;
  FUN_00db25b8(&local_80,this + 0x500);
  if (&local_80 == local_60) {
                    /* try { // try from 00db13f4 to 00eb13f7 has its CatchHandler @ 00db141c */
    pcVar4 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto switchD_00db1358_default;
    pcVar4 = (code *)(*local_60)[5];
  }
                    /* catch() { ... } // from try @ 00db12a8 with catch @ 00db13f8
                       try { // try from 00db13f8 to 00eb149b has its CatchHandler @ 00db0e60 */
  (*pcVar4)();
switchD_00db1358_default:
                    /* catch() { ... } // from try @ 00db11c4 with catch @ 00db13fc */
                    /* catch() { ... } // from try @ 00db12c4 with catch @ 00db1400 */
                    /* catch() { ... } // from try @ 00db1234 with catch @ 00db1404 */
                    /* catch() { ... } // from try @ 00db11d4 with catch @ 00db1408 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00db1118 with catch @ 00db140c */
                    /* catch() { ... } // from try @ 00db0ff8 with catch @ 00db1410 */
                    /* catch() { ... } // from try @ 00db0f68 with catch @ 00db1414 */
                    /* catch() { ... } // from try @ 00db0f50 with catch @ 00db1418 */
                    /* catch() { ... } // from try @ 00db0f18 with catch @ 00db141c
                       catch() { ... } // from try @ 00db13f4 with catch @ 00db141c */
                    /* catch() { ... } // from try @ 00db10e4 with catch @ 00db1420 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00db0fc0 with catch @ 00db143c */
  __stack_chk_fail();
}

