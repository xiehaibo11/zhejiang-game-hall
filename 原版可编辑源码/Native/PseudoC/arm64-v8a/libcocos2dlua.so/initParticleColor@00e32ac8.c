
/* cocos2d::PUEmitter::initParticleColor(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleColor(PUEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (this[0x1dc] == (PUEmitter)0x0) {
    uVar6 = *(undefined8 *)(this + 0x1ac);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(this + 0x1b4);
    *(undefined8 *)(param_1 + 0x24) = uVar6;
  }
  else {
    fVar7 = *(float *)(this + 0x1bc);
    fVar8 = *(float *)(this + 0x1cc);
    lVar1 = RandomHelper::getEngine();
    if (fVar8 <= fVar7) {
      lVar2 = *(long *)(lVar1 + 0x1380);
                    /* try { // try from 00e32bc0 to 00f32c4f has its CatchHandler @ 00e32bc0
                       catch() { ... } // from try @ 00e32bc0 with catch @ 00e32bc0
                       catch() { ... } // from try @ 00e32c58 with catch @ 00e32bc0 */
      uVar3 = (lVar2 + 1U) % 0x270;
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar7 - fVar8;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x1380);
      uVar3 = (lVar2 + 1U) % 0x270;
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar8 - fVar7;
      fVar8 = fVar7;
    }
    uVar4 = *(ulong *)(lVar1 + lVar2 * 8);
    *(ulong *)(lVar1 + 0x1380) = uVar3;
    uVar4 = uVar4 >> 0xb & 0xffffffff ^ uVar4;
    uVar4 = ((uint)uVar4 & 0x13a58ad) << 7 ^ uVar4;
                    /* try { // try from 00e32c50 to 00f32c57 has its CatchHandler @ 00e32c9c */
    uVar4 = (ulong)(uint)((int)uVar4 << 0xf) & 0xefc60000 ^ uVar4;
                    /* try { // try from 00e32c58 to 00f32caf has its CatchHandler @ 00e32bc0 */
    *(float *)(param_1 + 0x24) = fVar8 + fVar5 * (float)(uVar4 ^ uVar4 >> 0x12) * 2.3283064e-10;
    fVar7 = *(float *)(this + 0x1c0);
    fVar8 = *(float *)(this + 0x1d0);
    lVar1 = RandomHelper::getEngine();
    if (fVar8 <= fVar7) {
      lVar2 = *(long *)(lVar1 + 0x1380);
                    /* try { // try from 00e32d08 to 00f32d0f has its CatchHandler @ 00e32dc8 */
                    /* try { // try from 00e32d38 to 00f32d3f has its CatchHandler @ 00e32db8 */
      uVar3 = (lVar2 + 1U) % 0x270;
                    /* try { // try from 00e32d40 to 00f32ddb has its CatchHandler @ 00e32cb0 */
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar7 - fVar8;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x1380);
                    /* catch() { ... } // from try @ 00e32c50 with catch @ 00e32c9c */
                    /* try { // try from 00e32cb0 to 00f32d07 has its CatchHandler @ 00e32cb0
                       catch() { ... } // from try @ 00e32cb0 with catch @ 00e32cb0
                       catch() { ... } // from try @ 00e32d40 with catch @ 00e32cb0 */
      uVar3 = (lVar2 + 1U) % 0x270;
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar8 - fVar7;
      fVar8 = fVar7;
    }
    uVar4 = *(ulong *)(lVar1 + lVar2 * 8);
    *(ulong *)(lVar1 + 0x1380) = uVar3;
    uVar4 = uVar4 >> 0xb & 0xffffffff ^ uVar4;
    uVar4 = ((uint)uVar4 & 0x13a58ad) << 7 ^ uVar4;
    uVar4 = (ulong)(uint)((int)uVar4 << 0xf) & 0xefc60000 ^ uVar4;
                    /* catch() { ... } // from try @ 00e32d38 with catch @ 00e32db8 */
                    /* catch() { ... } // from try @ 00e32d08 with catch @ 00e32dc8 */
    *(float *)(param_1 + 0x28) = fVar8 + fVar5 * (float)(uVar4 ^ uVar4 >> 0x12) * 2.3283064e-10;
    fVar7 = *(float *)(this + 0x1c4);
    fVar8 = *(float *)(this + 0x1d4);
    lVar1 = RandomHelper::getEngine();
    if (fVar8 <= fVar7) {
      lVar2 = *(long *)(lVar1 + 0x1380);
                    /* try { // try from 00e32e68 to 00f32e6b has its CatchHandler @ 00e32e84 */
                    /* try { // try from 00e32e6c to 00f32e97 has its CatchHandler @ 00e32e24 */
                    /* catch() { ... } // from try @ 00e32e68 with catch @ 00e32e84 */
      uVar3 = (lVar2 + 1U) % 0x270;
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar7 - fVar8;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x1380);
      uVar3 = (lVar2 + 1U) % 0x270;
                    /* try { // try from 00e32e24 to 00f32e67 has its CatchHandler @ 00e32e24
                       catch() { ... } // from try @ 00e32e24 with catch @ 00e32e24
                       catch() { ... } // from try @ 00e32e6c with catch @ 00e32e24 */
      uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      lVar2 = *(long *)(lVar1 + 0x1380);
      fVar5 = fVar8 - fVar7;
      fVar8 = fVar7;
    }
    uVar4 = *(ulong *)(lVar1 + lVar2 * 8);
    *(ulong *)(lVar1 + 0x1380) = uVar3;
    uVar4 = uVar4 >> 0xb & 0xffffffff ^ uVar4;
    uVar4 = ((uint)uVar4 & 0x13a58ad) << 7 ^ uVar4;
    uVar4 = (ulong)(uint)((int)uVar4 << 0xf) & 0xefc60000 ^ uVar4;
    *(float *)(param_1 + 0x2c) = fVar8 + fVar5 * (float)(uVar4 ^ uVar4 >> 0x12) * 2.3283064e-10;
    fVar8 = *(float *)(this + 0x1c8);
    fVar7 = *(float *)(this + 0x1d8);
    lVar1 = RandomHelper::getEngine();
    if (fVar7 <= fVar8) {
      lVar2 = *(long *)(lVar1 + 0x1380);
                    /* try { // try from 00e33024 to 00f3302f has its CatchHandler @ 00e33660 */
                    /* try { // try from 00e33030 to 00f33093 has its CatchHandler @ 00e32fe0 */
      uVar4 = (lVar2 + 1U) % 0x270;
      uVar3 = *(ulong *)(lVar1 + uVar4 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar3 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar3 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      uVar3 = *(ulong *)(lVar1 + *(long *)(lVar1 + 0x1380) * 8);
      *(ulong *)(lVar1 + 0x1380) = uVar4;
                    /* try { // try from 00e33094 to 00f33097 has its CatchHandler @ 00e33628 */
      uVar3 = uVar3 >> 0xb & 0xffffffff ^ uVar3;
                    /* try { // try from 00e33098 to 00f330df has its CatchHandler @ 00e32fe0 */
      uVar3 = ((uint)uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (ulong)(uint)((int)uVar3 << 0xf) & 0xefc60000 ^ uVar3;
      fVar8 = fVar7 + (fVar8 - fVar7) * (float)(uVar3 ^ uVar3 >> 0x12) * 2.3283064e-10;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x1380);
      uVar4 = (lVar2 + 1U) % 0x270;
      uVar3 = *(ulong *)(lVar1 + uVar4 * 8);
      *(ulong *)(lVar1 + lVar2 * 8) =
           (uVar3 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
           (uVar3 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
      uVar3 = *(ulong *)(lVar1 + *(long *)(lVar1 + 0x1380) * 8);
      *(ulong *)(lVar1 + 0x1380) = uVar4;
      uVar3 = uVar3 >> 0xb & 0xffffffff ^ uVar3;
      uVar3 = ((uint)uVar3 & 0x13a58ad) << 7 ^ uVar3;
                    /* try { // try from 00e32fe0 to 00f33023 has its CatchHandler @ 00e32fe0
                       catch() { ... } // from try @ 00e32fe0 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33030 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33098 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e330ec with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e3314c with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e331a4 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33204 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e3325c with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e332bc with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33310 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33370 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e333c8 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33420 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33488 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e334e0 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e33548 with catch @ 00e32fe0
                       catch() { ... } // from try @ 00e335a0 with catch @ 00e32fe0 */
      uVar3 = (ulong)(uint)((int)uVar3 << 0xf) & 0xefc60000 ^ uVar3;
      fVar8 = fVar8 + (fVar7 - fVar8) * (float)(uVar3 ^ uVar3 >> 0x12) * 2.3283064e-10;
    }
    *(float *)(param_1 + 0x30) = fVar8;
  }
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x24);
                    /* try { // try from 00e330e0 to 00f330eb has its CatchHandler @ 00e3365c */
  return;
}

