
/* cocos2d::PUTextureAnimator::initParticleForEmission(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUTextureAnimator::initParticleForEmission(PUTextureAnimator *this,PUParticle3D *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
                    /* try { // try from 00e2e984 to 00f2e98b has its CatchHandler @ 00e2ea14 */
  uVar5 = *(ushort *)(this + 0xbc);
  if (this[0xb4] != (PUTextureAnimator)0x0) {
                    /* try { // try from 00e2e99c to 00f2e9a3 has its CatchHandler @ 00e2ea40 */
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0xbe));
                    /* try { // try from 00e2e9ac to 00f2e9bb has its CatchHandler @ 00e2ea3c */
    lVar4 = RandomHelper::getEngine();
    lVar6 = *(long *)(lVar4 + 0x1380);
                    /* try { // try from 00e2e9bc to 00f2e9cb has its CatchHandler @ 00e2ea24 */
                    /* try { // try from 00e2e9cc to 00f2ea5b has its CatchHandler @ 00e2e888 */
    uVar7 = (lVar6 + 1U) % 0x270;
    uVar8 = *(ulong *)(lVar4 + uVar7 * 8);
                    /* catch() { ... } // from try @ 00e2e984 with catch @ 00e2ea14 */
                    /* catch() { ... } // from try @ 00e2e918 with catch @ 00e2ea18 */
                    /* catch() { ... } // from try @ 00e2e9bc with catch @ 00e2ea24 */
    *(ulong *)(lVar4 + lVar6 * 8) =
         (uVar8 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar6 + 0x18dU) % 0x270) * 8) ^
         (uVar8 & 0x7ffffffe | *(ulong *)(lVar4 + lVar6 * 8) & 0xffffffff80000000) >> 1;
                    /* catch() { ... } // from try @ 00e2e9ac with catch @ 00e2ea3c */
                    /* catch() { ... } // from try @ 00e2e99c with catch @ 00e2ea40 */
    uVar8 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
                    /* catch() { ... } // from try @ 00e2e93c with catch @ 00e2ea44 */
                    /* catch() { ... } // from try @ 00e2e8f4 with catch @ 00e2ea48
                       catch() { ... } // from try @ 00e2e934 with catch @ 00e2ea48 */
    *(ulong *)(lVar4 + 0x1380) = uVar7;
    uVar8 = uVar8 >> 0xb & 0xffffffff ^ uVar8;
                    /* catch() { ... } // from try @ 00e2ea98 with catch @ 00e2ea5c */
    uVar8 = ((uint)uVar8 & 0x13a58ad) << 7 ^ uVar8;
    uVar8 = (ulong)(uint)((int)uVar8 << 0xf) & 0xefc60000 ^ uVar8;
    uVar5 = (ushort)(int)(((fVar3 + 0.999) - (float)uVar5) *
                          (float)(uVar8 ^ uVar8 >> 0x12) * 2.3283064e-10 + (float)uVar5);
  }
  *(ushort *)(param_1 + 0x144) = uVar5;
                    /* try { // try from 00e2ea90 to 00f2ea97 has its CatchHandler @ 00e2eb4c */
  if (this[0xb5] == (PUTextureAnimator)0x0) {
                    /* try { // try from 00e2ea98 to 00f2eb67 has its CatchHandler @ 00e2ea5c */
    iVar2 = *(int *)(this + 0xb8);
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 300);
    }
    else {
      if (iVar2 == 1) {
        uVar9 = (undefined2)*(undefined4 *)(param_1 + 300);
        uVar10 = (undefined2)((uint)*(undefined4 *)(param_1 + 300) >> 0x10);
        uVar1 = ((uint)*(ushort *)(this + 0xbe) - (uint)*(ushort *)(this + 0xbc)) * 2 | 1;
      }
      else {
        if (iVar2 != 0) {
          return;
        }
        uVar9 = (undefined2)*(undefined4 *)(param_1 + 300);
        uVar10 = (undefined2)((uint)*(undefined4 *)(param_1 + 300) >> 0x10);
        uVar1 = ((uint)*(ushort *)(this + 0xbe) - (uint)*(ushort *)(this + 0xbc)) + 1;
      }
      *(float *)(param_1 + 0x13c) = (float)CONCAT22(uVar10,uVar9) / (float)(int)uVar1;
    }
  }
  return;
}

