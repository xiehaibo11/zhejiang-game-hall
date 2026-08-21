
/* cocos2d::ScaleTo::update(float) */

void __thiscall cocos2d::ScaleTo::update(ScaleTo *this,float param_1)

{
                    /* try { // try from 00ee1f1c to 00fe1f27 has its CatchHandler @ 00ee1fec */
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* try { // try from 00ee1f28 to 00fe1f4f has its CatchHandler @ 00ee1e88 */
    (**(code **)(**(long **)(this + 0x38) + 0x50))
              (*(float *)(this + 100) + *(float *)(this + 0x7c) * param_1);
                    /* try { // try from 00ee1f50 to 00fe1f57 has its CatchHandler @ 00ee1fe8 */
                    /* try { // try from 00ee1f58 to 00fe1f77 has its CatchHandler @ 00ee1e88 */
    (**(code **)(**(long **)(this + 0x38) + 0x60))
              (*(float *)(this + 0x68) + *(float *)(this + 0x80) * param_1);
                    /* try { // try from 00ee1f78 to 00fe1f7f has its CatchHandler @ 00ee1fe8 */
                    /* try { // try from 00ee1f80 to 00fe1f9f has its CatchHandler @ 00ee1e88 */
                    /* WARNING: Could not recover jumptable at 0x00ee1f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x70))
              (*(float *)(this + 0x6c) + *(float *)(this + 0x84) * param_1);
    return;
  }
  return;
}

