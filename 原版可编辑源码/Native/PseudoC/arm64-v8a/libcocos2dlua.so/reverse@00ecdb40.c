
/* cocos2d::CardinalSplineTo::reverse() const */

void __thiscall cocos2d::CardinalSplineTo::reverse(CardinalSplineTo *this)

{
  PointArray *pPVar1;
  
                    /* catch() { ... } // from try @ 00ecdba8 with catch @ 00ecdb40 */
  pPVar1 = (PointArray *)PointArray::reverse(*(PointArray **)(this + 0x58));
  create(*(float *)(this + 0x4c),pPVar1,*(float *)(this + 100));
  return;
}

