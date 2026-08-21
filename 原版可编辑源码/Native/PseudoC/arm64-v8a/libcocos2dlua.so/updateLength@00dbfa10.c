
/* cocos2d::ui::ScrollViewBar::updateLength(float) */

void __thiscall cocos2d::ui::ScrollViewBar::updateLength(ScrollViewBar *this,float param_1)

{
  long *plVar1;
  float fVar2;
  
  (**(code **)(**(long **)(this + 0x338) + 0x60))
            (param_1 / *(float *)((long)*(long **)(this + 0x338) + 0x414));
  plVar1 = *(long **)(this + 0x328);
  fVar2 = (float)(**(code **)(**(long **)(this + 0x338) + 0xf0))();
                    /* WARNING: Could not recover jumptable at 0x00dbfa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(fVar2 + param_1,plVar1);
  return;
}

