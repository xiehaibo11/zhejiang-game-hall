
/* cocos2d::LayerMultiplex::switchTo(int, bool) */

void __thiscall cocos2d::LayerMultiplex::switchTo(LayerMultiplex *this,int param_1,bool param_2)

{
                    /* try { // try from 00f1875c to 0101876b has its CatchHandler @ 00f187a8 */
  (**(code **)(*(long *)this + 0x280))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (ulong)*(uint *)(this + 800) * 8),
             param_2);
                    /* try { // try from 00f1876c to 010187c3 has its CatchHandler @ 00f18664 */
  *(int *)(this + 800) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00f18788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x208))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (long)param_1 * 8));
  return;
}

