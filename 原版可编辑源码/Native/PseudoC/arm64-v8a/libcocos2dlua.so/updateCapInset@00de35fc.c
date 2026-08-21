
/* cocos2d::ui::Scale9Sprite::updateCapInset() */

void __thiscall cocos2d::ui::Scale9Sprite::updateCapInset(Scale9Sprite *this)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00de3610 to 00ee362b has its CatchHandler @ 00de4aec */
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x544) == 1) {
                    /* try { // try from 00de3630 to 00ee363f has its CatchHandler @ 00de4af0 */
    Rect::Rect(aRStack_38,*(float *)(this + 0x530),*(float *)(this + 0x538),
               (*(float *)(this + 0x438) - *(float *)(this + 0x534)) - *(float *)(this + 0x530),
               (*(float *)(this + 0x43c) - *(float *)(this + 0x53c)) - *(float *)(this + 0x538));
    setCapInsets(this,aRStack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

