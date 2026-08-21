
/* cocos2d::SkewTo::update(float) */

void __thiscall cocos2d::SkewTo::update(SkewTo *this,float param_1)

{
                    /* catch() { ... } // from try @ 00edff34 with catch @ 00ee0098 */
  (**(code **)(**(long **)(this + 0x38) + 0x128))
            (*(float *)(this + 0x60) + *(float *)(this + 0x70) * param_1);
                    /* catch() { ... } // from try @ 00edff04 with catch @ 00ee00b8 */
                    /* catch() { ... } // from try @ 00edffb8 with catch @ 00ee00cc
                       catch() { ... } // from try @ 00ee0038 with catch @ 00ee00cc */
                    /* WARNING: Could not recover jumptable at 0x00ee00d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x38) + 0x138))
            (*(float *)(this + 100) + *(float *)(this + 0x74) * param_1);
  return;
}

