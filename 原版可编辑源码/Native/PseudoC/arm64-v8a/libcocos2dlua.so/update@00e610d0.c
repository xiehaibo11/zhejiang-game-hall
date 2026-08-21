
/* cocos2d::PURibbonTrail::update(float) */

void __thiscall cocos2d::PURibbonTrail::update(PURibbonTrail *this,float param_1)

{
  long *plVar1;
  
  if (this[0x1d0] != (PURibbonTrail)0x0) {
    if (0.5 < DAT_0178f238) {
      timeUpdate(this,param_1);
      DAT_0178f238 = 0.0;
    }
    DAT_0178f238 = DAT_0178f238 + param_1;
  }
  for (plVar1 = *(long **)(this + 0x140); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    updateTrail((ulong)this,(Node *)plVar1[3]);
  }
  return;
}

