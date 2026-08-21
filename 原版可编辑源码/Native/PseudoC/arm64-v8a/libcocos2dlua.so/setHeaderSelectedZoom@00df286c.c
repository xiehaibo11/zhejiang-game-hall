
/* cocos2d::ui::TabControl::setHeaderSelectedZoom(float) */

void __thiscall cocos2d::ui::TabControl::setHeaderSelectedZoom(TabControl *this,float param_1)

{
  if (*(float *)(this + 0x544) != param_1) {
    *(float *)(this + 0x544) = param_1;
    if (*(undefined8 **)(this + 0x520) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00df2898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)**(undefined8 **)(this + 0x520) + 0x80))(param_1 + 1.0);
      return;
    }
  }
  return;
}

