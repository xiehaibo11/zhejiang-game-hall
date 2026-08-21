
/* cocos2d::ui::Scale9Sprite::setRenderingType(cocos2d::ui::Scale9Sprite::RenderingType) */

void __thiscall cocos2d::ui::Scale9Sprite::setRenderingType(Scale9Sprite *this,int param_2)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x42c) != 1) && (*(int *)(this + 0x544) != param_2)) {
    *(int *)(this + 0x544) = param_2;
    if (param_2 == 1) {
      Rect::Rect(aRStack_38,*(float *)(this + 0x530),*(float *)(this + 0x538),
                 (*(float *)(this + 0x438) - *(float *)(this + 0x534)) - *(float *)(this + 0x530),
                 (*(float *)(this + 0x43c) - *(float *)(this + 0x53c)) - *(float *)(this + 0x538));
      setCapInsets(this,aRStack_38);
    }
    else if (param_2 == 0) {
                    /* try { // try from 00de3930 to 00ee399b has its CatchHandler @ 00de49fc */
      Rect::Rect(aRStack_38,0.0,0.0,1.0,1.0);
      (**(code **)(*(long *)this + 0x570))(this,aRStack_38);
    }
  }
                    /* try { // try from 00de399c to 00ee39bf has its CatchHandler @ 00de2ff0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

