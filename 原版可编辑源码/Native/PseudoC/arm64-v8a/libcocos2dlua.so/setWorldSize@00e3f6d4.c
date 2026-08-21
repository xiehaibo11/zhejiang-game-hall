
/* cocos2d::PUForceFieldCalculationFactory::setWorldSize(cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUForceFieldCalculationFactory::setWorldSize
          (PUForceFieldCalculationFactory *this,Vec3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00e3f624 with catch @ 00e3f6f0 */
                    /* catch() { ... } // from try @ 00e3f5ac with catch @ 00e3f6f4 */
                    /* catch() { ... } // from try @ 00e3f5f8 with catch @ 00e3f6f8
                       catch() { ... } // from try @ 00e3f644 with catch @ 00e3f6f8 */
                    /* catch() { ... } // from try @ 00e3f504 with catch @ 00e3f6fc */
  if (((*(float *)param_1 == 0.0) && (*(float *)(param_1 + 4) == 0.0)) &&
     (*(float *)(param_1 + 8) == 0.0)) {
    return;
  }
  uVar2 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 00e3f78c with catch @ 00e3f730
                       catch() { ... } // from try @ 00e3fb4c with catch @ 00e3f730 */
  *(undefined4 *)(this + 0x864) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x85c) = uVar2;
  uVar1 = (**(code **)(*(long *)this + 0x60))(this);
                    /* WARNING: Could not recover jumptable at 0x00e3f778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))
            (*(undefined8 *)(this + 0x838),*(undefined8 *)(this + 0x840),
             *(undefined8 *)(this + 0x848),this,uVar1,*(undefined2 *)(this + 0x830),this + 0x85c);
  return;
}

