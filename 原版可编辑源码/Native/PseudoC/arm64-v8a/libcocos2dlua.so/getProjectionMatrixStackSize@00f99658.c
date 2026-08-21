
/* cocos2d::Director::getProjectionMatrixStackSize() */

long __thiscall cocos2d::Director::getProjectionMatrixStackSize(Director *this)

{
                    /* try { // try from 00f9966c to 01099673 has its CatchHandler @ 00f996f4 */
  return (*(long *)(this + 0x60) - *(long *)(this + 0x58) >> 4) * -0x5555555555555555;
}

