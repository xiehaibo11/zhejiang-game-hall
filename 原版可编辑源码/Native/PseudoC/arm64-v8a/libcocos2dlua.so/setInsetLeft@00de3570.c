
/* cocos2d::ui::Scale9Sprite::setInsetLeft(float) */

void __thiscall cocos2d::ui::Scale9Sprite::setInsetLeft(Scale9Sprite *this,float param_1)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x530) = param_1;
  if (*(int *)(this + 0x544) == 1) {
                    /* try { // try from 00de35b0 to 00ee35b3 has its CatchHandler @ 00de48b0 */
    Rect::Rect(aRStack_38,param_1,*(float *)(this + 0x538),
               (*(float *)(this + 0x438) - *(float *)(this + 0x534)) - param_1,
               (*(float *)(this + 0x43c) - *(float *)(this + 0x53c)) - *(float *)(this + 0x538));
    setCapInsets(this,aRStack_38);
  }
                    /* try { // try from 00de35e0 to 00ee35e7 has its CatchHandler @ 00de4988 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

