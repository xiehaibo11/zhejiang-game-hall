
/* cocos2d::GridBase::beforeDraw() */

void __thiscall cocos2d::GridBase::beforeDraw(GridBase *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float local_40;
  float fStack_3c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar2 = Director::getInstance();
                    /* try { // try from 00f07834 to 0100783b has its CatchHandler @ 00f07b14 */
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(lVar2 + 0x194);
  set2DProjection();
                    /* try { // try from 00f0783c to 01007997 has its CatchHandler @ 00f077e0 */
  Director::getWinSizeInPixels();
  glViewport(0,0,(int)local_40,(int)fStack_3c);
  Grabber::beforeRender(*(Texture2D **)(this + 0x40));
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

