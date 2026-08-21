
/* cocos2d::ui::Scale9Sprite::setInsetBottom(float) */

void __thiscall cocos2d::ui::Scale9Sprite::setInsetBottom(Scale9Sprite *this,float param_1)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x53c) = param_1;
  if (*(int *)(this + 0x544) == 1) {
                    /* try { // try from 00de37ec to 00ee37ef has its CatchHandler @ 00de48b4 */
    Rect::Rect(aRStack_38,*(float *)(this + 0x530),*(float *)(this + 0x538),
               (*(float *)(this + 0x438) - *(float *)(this + 0x534)) - *(float *)(this + 0x530),
               (*(float *)(this + 0x43c) - param_1) - *(float *)(this + 0x538));
    setCapInsets(this,aRStack_38);
  }
                    /* try { // try from 00de3818 to 00ee381f has its CatchHandler @ 00de4984 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

