
/* cocos2d::Physics3DWorld::needCollisionChecking() */

bool __thiscall cocos2d::Physics3DWorld::needCollisionChecking(Physics3DWorld *this)

{
  long *plVar1;
  Physics3DWorld PVar2;
  long lVar3;
  
  if (this[0x59] == (Physics3DWorld)0x0) {
    PVar2 = this[0x58];
  }
  else {
    this[0x58] = (Physics3DWorld)0x0;
    plVar1 = *(long **)(this + 0x28);
    do {
      if (plVar1 == *(long **)(this + 0x30)) {
                    /* try { // try from 0101014c to 0111014f has its CatchHandler @ 01010168 */
        PVar2 = (Physics3DWorld)0x0;
                    /* try { // try from 01010150 to 0111017b has its CatchHandler @ 01010108 */
        goto LAB_01010164;
      }
      lVar3 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (*(long *)(lVar3 + 0x60) == 0);
    PVar2 = (Physics3DWorld)0x1;
    this[0x58] = (Physics3DWorld)0x1;
LAB_01010164:
    this[0x59] = (Physics3DWorld)0x0;
  }
                    /* catch() { ... } // from try @ 0101014c with catch @ 01010168 */
  return PVar2 != (Physics3DWorld)0x0;
}

