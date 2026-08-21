
/* cocos2d::ui::ScrollViewBar::setWidth(float) */

void __thiscall cocos2d::ui::ScrollViewBar::setWidth(ScrollViewBar *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x338) + 0x168))();
  fVar2 = param_1 / *pfVar1;
  (**(code **)(**(long **)(this + 0x338) + 0x50))(fVar2,*(long **)(this + 0x338));
  (**(code **)(**(long **)(this + 0x328) + 0x80))(fVar2);
                    /* try { // try from 00dbf978 to 00ebfa87 has its CatchHandler @ 00dbfa94 */
                    /* WARNING: Could not recover jumptable at 0x00dbf984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x330) + 0x80))(-fVar2);
  return;
}

