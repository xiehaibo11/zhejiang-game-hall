
/* cocos2d::ui::Scale9Sprite::setInsetRight(float) */

void __thiscall cocos2d::ui::Scale9Sprite::setInsetRight(Scale9Sprite *this,float param_1)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x534) = param_1;
  if (*(int *)(this + 0x544) == 1) {
                    /* try { // try from 00de3764 to 00ee3787 has its CatchHandler @ 00de2ff0 */
    Rect::Rect(aRStack_38,*(float *)(this + 0x530),*(float *)(this + 0x538),
               (*(float *)(this + 0x438) - param_1) - *(float *)(this + 0x530),
               (*(float *)(this + 0x43c) - *(float *)(this + 0x53c)) - *(float *)(this + 0x538));
    setCapInsets(this,aRStack_38);
  }
                    /* try { // try from 00de3788 to 00ee378f has its CatchHandler @ 00de49c0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

