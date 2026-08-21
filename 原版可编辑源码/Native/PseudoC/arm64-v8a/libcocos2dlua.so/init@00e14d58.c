
/* cocos2d::extension::ScrollView::init() */

uint __thiscall cocos2d::extension::ScrollView::init(ScrollView *this)

{
  long lVar1;
  uint uVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e14d70 to 00f14d7b has its CatchHandler @ 00e14ddc */
                    /* try { // try from 00e14d7c to 00f14e1b has its CatchHandler @ 00e149f8 */
  Size::Size(aSStack_30,200.0,200.0);
  uVar2 = initWithViewSize(this,aSStack_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

