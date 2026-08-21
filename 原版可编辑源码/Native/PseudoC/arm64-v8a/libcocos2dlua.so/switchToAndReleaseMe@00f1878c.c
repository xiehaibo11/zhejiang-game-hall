
/* cocos2d::LayerMultiplex::switchToAndReleaseMe(int) */

void __thiscall cocos2d::LayerMultiplex::switchToAndReleaseMe(LayerMultiplex *this,int param_1)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 00f1875c with catch @ 00f187a8 */
  (**(code **)(*(long *)this + 0x280))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (ulong)*(uint *)(this + 800) * 8),1);
                    /* try { // try from 00f187c4 to 01018867 has its CatchHandler @ 00f187c4
                       catch() { ... } // from try @ 00f187c4 with catch @ 00f187c4
                       catch() { ... } // from try @ 00f18878 with catch @ 00f187c4 */
  uVar1 = *(uint *)(this + 800);
  Ref::release(*(Ref **)(*(long *)(this + 0x328) + (ulong)uVar1 * 8));
  *(undefined8 *)(*(long *)(this + 0x328) + (ulong)uVar1 * 8) = 0;
  Ref::retain((Ref *)0x0);
  *(int *)(this + 800) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00f1880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x208))
            (this,*(undefined8 *)(*(long *)(this + 0x328) + (long)param_1 * 8));
  return;
}

