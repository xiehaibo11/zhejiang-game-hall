
/* cocos2d::ProgressTimer::setPercentage(float) */

void __thiscall cocos2d::ProgressTimer::setPercentage(ProgressTimer *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00f375ec to 0103776b has its CatchHandler @ 00f375ec
                       catch() { ... } // from try @ 00f375ec with catch @ 00f375ec
                       catch() { ... } // from try @ 00f37788 with catch @ 00f375ec
                       catch() { ... } // from try @ 00f37860 with catch @ 00f375ec
                       catch() { ... } // from try @ 00f37940 with catch @ 00f375ec
                       catch() { ... } // from try @ 00f37c68 with catch @ 00f375ec */
  if (*(float *)(this + 0x30c) != param_1) {
    uVar2 = NEON_fminnm(param_1,0x42c80000);
    uVar1 = 0;
    if (0.0 <= param_1) {
      uVar1 = uVar2;
    }
    *(undefined4 *)(this + 0x30c) = uVar1;
    if (*(int *)(this + 0x2f8) == 1) {
      updateBar(this);
      return;
    }
    if (*(int *)(this + 0x2f8) == 0) {
      updateRadial(this);
      return;
    }
  }
  return;
}

