
/* cocos2d::ui::Layout::onBeforeVisitScissor() */

void __thiscall cocos2d::ui::Layout::onBeforeVisitScissor(Layout *this)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  Rect *pRVar4;
  ulong uVar5;
  long *plVar6;
  Rect aRStack_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = Director::getInstance();
  plVar6 = *(long **)(lVar3 + 0x108);
                    /* try { // try from 00daf29c to 00eaf2a3 has its CatchHandler @ 00daf304 */
  bVar2 = (**(code **)(*plVar6 + 0xe0))(plVar6);
                    /* try { // try from 00daf2a4 to 00eaf31f has its CatchHandler @ 00daf234 */
  this[0x5b8] = (Layout)(bVar2 & 1);
  if ((bVar2 & 1) == 0) {
    glEnable(0xc11);
  }
  pRVar4 = (Rect *)getClippingRect();
  Rect::Rect((Rect *)&local_48,pRVar4);
  (**(code **)(*plVar6 + 0xe8))(aRStack_58,plVar6);
  Rect::operator=((Rect *)(this + 0x5bc),aRStack_58);
  uVar5 = Rect::equals((Rect *)(this + 0x5bc),(Rect *)&local_48);
  if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00daf29c with catch @ 00daf304 */
    (**(code **)(*plVar6 + 0xd8))(local_48,uStack_44,local_40,uStack_3c,plVar6);
  }
                    /* try { // try from 00daf320 to 00eaf3af has its CatchHandler @ 00daf320
                       catch() { ... } // from try @ 00daf320 with catch @ 00daf320
                       catch() { ... } // from try @ 00daf3b8 with catch @ 00daf320
                       catch() { ... } // from try @ 00daf410 with catch @ 00daf320 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

