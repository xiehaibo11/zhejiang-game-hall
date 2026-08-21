
/* cocos2d::extension::ScrollView::getViewRect() */

void cocos2d::extension::ScrollView::getViewRect(void)

{
  Node *in_x0;
  Rect *in_x8;
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_s1;
  
                    /* try { // try from 00e1642c to 00f16433 has its CatchHandler @ 00e164dc */
  fVar2 = (float)Node::convertToWorldSpace(in_x0,(Vec2 *)&Vec2::ZERO);
                    /* try { // try from 00e1645c to 00f16467 has its CatchHandler @ 00e164e4 */
  fVar3 = (float)(**(code **)(*(long *)in_x0 + 0x58))();
                    /* try { // try from 00e16468 to 00f16507 has its CatchHandler @ 00e163fc */
  fVar4 = (float)(**(code **)(*(long *)in_x0 + 0x68))();
  for (plVar1 = *(long **)(in_x0 + 400); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x260))(plVar1)) {
    fVar5 = (float)(**(code **)(*plVar1 + 0x58))(plVar1);
    fVar3 = fVar3 * fVar5;
    fVar5 = (float)(**(code **)(*plVar1 + 0x68))(plVar1);
    fVar4 = fVar4 * fVar5;
  }
  if (fVar3 < 0.0) {
    fVar2 = fVar2 + fVar3 * *(float *)(in_x0 + 0x390);
                    /* catch() { ... } // from try @ 00e1642c with catch @ 00e164dc */
    fVar3 = -fVar3;
  }
                    /* catch() { ... } // from try @ 00e1645c with catch @ 00e164e4 */
  if (fVar4 < 0.0) {
    in_s1 = in_s1 + fVar4 * *(float *)(in_x0 + 0x394);
    fVar4 = -fVar4;
  }
                    /* try { // try from 00e16508 to 00f166c7 has its CatchHandler @ 00e16508
                       catch() { ... } // from try @ 00e16508 with catch @ 00e16508
                       catch() { ... } // from try @ 00e16840 with catch @ 00e16508 */
  Rect::Rect(in_x8,fVar2,in_s1,fVar3 * *(float *)(in_x0 + 0x390),fVar4 * *(float *)(in_x0 + 0x394));
  return;
}

