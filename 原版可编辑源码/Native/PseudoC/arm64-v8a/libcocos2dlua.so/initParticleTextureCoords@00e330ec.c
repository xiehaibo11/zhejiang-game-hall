
/* cocos2d::PUEmitter::initParticleTextureCoords(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleTextureCoords(PUEmitter *this,PUParticle3D *param_1)

{
  float fVar1;
  long lVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
                    /* try { // try from 00e330ec to 00f33147 has its CatchHandler @ 00e32fe0 */
  if (this[0x1e4] == (PUEmitter)0x0) {
    uVar3 = *(undefined2 *)(this + 0x1de);
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0x1e0));
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0x1e2));
    lVar2 = RandomHelper::getEngine();
    lVar4 = *(long *)(lVar2 + 0x1380);
                    /* try { // try from 00e33148 to 00f3314b has its CatchHandler @ 00e33624 */
                    /* try { // try from 00e3314c to 00f33197 has its CatchHandler @ 00e32fe0 */
    uVar5 = (lVar4 + 1U) % 0x270;
    uVar6 = *(ulong *)(lVar2 + uVar5 * 8);
                    /* try { // try from 00e33198 to 00f331a3 has its CatchHandler @ 00e33658 */
                    /* try { // try from 00e331a4 to 00f331ff has its CatchHandler @ 00e32fe0 */
    *(ulong *)(lVar2 + lVar4 * 8) =
         (uVar6 & 1) * 0x9908b0df ^ *(ulong *)(lVar2 + ((lVar4 + 0x18dU) % 0x270) * 8) ^
         (uVar6 & 0x7ffffffe | *(ulong *)(lVar2 + lVar4 * 8) & 0xffffffff80000000) >> 1;
    uVar6 = *(ulong *)(lVar2 + *(long *)(lVar2 + 0x1380) * 8);
    *(ulong *)(lVar2 + 0x1380) = uVar5;
    uVar6 = uVar6 >> 0xb & 0xffffffff ^ uVar6;
    uVar6 = ((uint)uVar6 & 0x13a58ad) << 7 ^ uVar6;
    uVar6 = (ulong)(uint)((int)uVar6 << 0xf) & 0xefc60000 ^ uVar6;
                    /* try { // try from 00e33200 to 00f33203 has its CatchHandler @ 00e33620 */
    uVar3 = (undefined2)
            (int)(((fVar1 + 0.999) - fVar7) * (float)(uVar6 ^ uVar6 >> 0x12) * 2.3283064e-10 + fVar7
                 );
                    /* try { // try from 00e33204 to 00f3324f has its CatchHandler @ 00e32fe0 */
  }
  *(undefined2 *)(param_1 + 0x144) = uVar3;
  return;
}

