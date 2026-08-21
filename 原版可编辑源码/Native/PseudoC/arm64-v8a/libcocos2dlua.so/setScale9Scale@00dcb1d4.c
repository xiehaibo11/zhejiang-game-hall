
/* cocos2d::ui::LoadingBar::setScale9Scale() */

void __thiscall cocos2d::ui::LoadingBar::setScale9Scale(LoadingBar *this)

{
  long lVar1;
  Size *pSVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar2 = *(Size **)(this + 0x500);
                    /* try { // try from 00dcb214 to 00ecb22b has its CatchHandler @ 00dccae0 */
  Size::Size(aSStack_30,(*(float *)(this + 0x4f4) / 100.0) * *(float *)(this + 0x4f8),
             *(float *)(this + 0x84));
  Scale9Sprite::setPreferredSize(pSVar2);
                    /* try { // try from 00dcb22c to 00ecb23b has its CatchHandler @ 00dccadc */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00dcb23c to 00ecb24b has its CatchHandler @ 00dccacc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

