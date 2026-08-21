
/* cocos2d::SpriteBatchNode::removeSpriteFromAtlas(cocos2d::Sprite*) */

void __thiscall
cocos2d::SpriteBatchNode::removeSpriteFromAtlas(SpriteBatchNode *this,Sprite *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  TextureAtlas::removeQuadAtIndex(*(TextureAtlas **)(this + 0x300),*(long *)(param_1 + 0x308));
  (**(code **)(*(long *)param_1 + 0x538))(param_1,0);
  plVar5 = *(long **)(this + 0x388);
  plVar4 = *(long **)(this + 0x390);
                    /* try { // try from 00f42390 to 010423f7 has its CatchHandler @ 00f42390
                       catch() { ... } // from try @ 00f42390 with catch @ 00f42390
                       catch() { ... } // from try @ 00f42510 with catch @ 00f42390 */
  if ((plVar5 != plVar4) && ((Sprite *)*plVar5 != param_1)) {
    do {
      if (plVar4 + -1 == plVar5) goto LAB_00f42414;
      plVar3 = plVar5 + 1;
      plVar5 = plVar5 + 1;
    } while ((Sprite *)*plVar3 != param_1);
  }
  plVar3 = plVar5;
  if (plVar5 != plVar4) {
    while (plVar3 = plVar3 + 1, plVar3 != plVar4) {
      *(long *)(*plVar3 + 0x308) = *(long *)(*plVar3 + 0x308) + -1;
    }
                    /* try { // try from 00f423f8 to 010423ff has its CatchHandler @ 00f425d4 */
    __n = (long)plVar4 - (long)(plVar5 + 1);
                    /* try { // try from 00f42400 to 01042407 has its CatchHandler @ 00f425cc */
    if (__n != 0) {
      memmove(plVar5,plVar5 + 1,__n);
    }
    *(long **)(this + 0x390) = plVar5 + ((long)__n >> 3);
  }
LAB_00f42414:
                    /* try { // try from 00f42418 to 0104243b has its CatchHandler @ 00f425e8 */
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar2 = (undefined8 *)plVar5[1];
  for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((Sprite *)*puVar1 != (Sprite *)0x0) {
      removeSpriteFromAtlas(this,(Sprite *)*puVar1);
    }
                    /* try { // try from 00f4243c to 0104250f has its CatchHandler @ 00f425e4 */
  }
  return;
}

