
/* cocos2d::LayerMultiplex::switchTo(int) */

void __thiscall cocos2d::LayerMultiplex::switchTo(LayerMultiplex *this,int param_1)

{
  (**(code **)(*(long *)this + 0x280))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (ulong)*(uint *)(this + 800) * 8),1);
  *(int *)(this + 800) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00f18730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x208))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (long)param_1 * 8));
  return;
}

