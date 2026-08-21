
/* cocos2d::ui::Layout::onAfterVisitScissor() */

void __thiscall cocos2d::ui::Layout::onAfterVisitScissor(Layout *this)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 00daf514 to 00eaf51b has its CatchHandler @ 00daf948 */
  if (this[0x5b8] == (Layout)0x0) {
                    /* try { // try from 00daf540 to 00eaf54b has its CatchHandler @ 00daf944 */
                    /* try { // try from 00daf54c to 00eaf55f has its CatchHandler @ 00daf934 */
    glDisable(0xc11);
    return;
  }
  uVar1 = Rect::equals((Rect *)(this + 0x5bc),(Rect *)(this + 0x5cc));
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = Director::getInstance();
                    /* try { // try from 00daf560 to 00eaf56b has its CatchHandler @ 00daf930 */
                    /* try { // try from 00daf56c to 00eaf577 has its CatchHandler @ 00daf968 */
                    /* WARNING: Could not recover jumptable at 0x00daf578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x108) + 0xd8))
            (*(undefined4 *)(this + 0x5bc),*(undefined4 *)(this + 0x5c0),
             *(undefined4 *)(this + 0x5c4),*(undefined4 *)(this + 0x5c8));
  return;
}

