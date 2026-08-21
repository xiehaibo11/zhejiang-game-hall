
/* cocos2d::ProgressTimer::setSprite(cocos2d::Sprite*) */

void __thiscall cocos2d::ProgressTimer::setSprite(ProgressTimer *this,Sprite *param_1)

{
  Ref *this_00;
  undefined8 uVar1;
  
  this_00 = *(Ref **)(this + 0x310);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x310);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x310) = param_1;
    uVar1 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    (**(code **)(*(long *)this + 0x160))(this,uVar1);
    if (*(void **)(this + 800) != (void *)0x0) {
      free(*(void **)(this + 800));
      *(undefined8 *)(this + 800) = 0;
      *(undefined4 *)(this + 0x318) = 0;
      if (*(int *)(this + 0x2f8) == 1) {
        updateBar(this);
        return;
      }
      if (*(int *)(this + 0x2f8) == 0) {
        updateRadial(this);
        return;
      }
    }
  }
  return;
}

