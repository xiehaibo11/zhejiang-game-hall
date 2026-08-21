
/* cocos2d::TextureAtlas::removeQuadsAtIndex(long, long) */

void __thiscall
cocos2d::TextureAtlas::removeQuadsAtIndex(TextureAtlas *this,long param_1,long param_2)

{
  long lVar1;
  
                    /* try { // try from 00fee8b8 to 010ee8bb has its CatchHandler @ 00fee9b8 */
                    /* try { // try from 00fee8bc to 010ee953 has its CatchHandler @ 00fee830 */
  lVar1 = *(long *)(this + 0x40) - (param_2 + param_1);
  *(long *)(this + 0x40) = *(long *)(this + 0x40) - param_2;
  if (lVar1 != 0) {
    memmove((void *)(*(long *)(this + 0x58) + param_1 * 0x60),
            (void *)(*(long *)(this + 0x58) + (param_2 + param_1) * 0x60),lVar1 * 0x60);
  }
  this[0x3c] = (TextureAtlas)0x1;
  return;
}

