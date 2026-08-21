
/* cocos2d::PUSlaveEmitter::particleEmitted(cocos2d::PUParticleSystem3D*, cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUSlaveEmitter::particleEmitted
          (PUSlaveEmitter *this,PUParticleSystem3D *param_1,PUParticle3D *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  PUSlaveEmitter PVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  PUSlaveEmitter *__s2;
  PUSlaveEmitter *pPVar8;
  
  if (this[600] != (PUSlaveEmitter)0x0) {
    lVar7 = *(long *)(param_2 + 0x80);
    bVar2 = *(byte *)(lVar7 + 0x90);
    PVar3 = this[0x228];
    uVar5 = (ulong)((byte)PVar3 >> 1);
    __n = uVar5;
    if (((byte)PVar3 & 1) != 0) {
      __n = *(size_t *)(this + 0x230);
    }
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(lVar7 + 0x98);
    }
    if (__n != sVar1) {
      return;
    }
    pPVar8 = *(PUSlaveEmitter **)(this + 0x238);
    __s2 = *(PUSlaveEmitter **)(lVar7 + 0xa0);
    if (((byte)PVar3 & 1) == 0) {
      pPVar8 = this + 0x229;
    }
    if ((bVar2 & 1) == 0) {
      __s2 = (PUSlaveEmitter *)(lVar7 + 0x91);
    }
                    /* try { // try from 00e38aac to 00f38ab7 has its CatchHandler @ 00e396e4 */
    if (((byte)PVar3 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = this + 0x229;
        do {
                    /* try { // try from 00e38ab8 to 00f38ac3 has its CatchHandler @ 00e396d0 */
          if (*pPVar8 != *__s2) {
            return;
          }
          uVar5 = uVar5 - 1;
          pPVar8 = pPVar8 + 1;
          __s2 = __s2 + 1;
        } while (uVar5 != 0);
      }
    }
    else {
                    /* try { // try from 00e38ae4 to 00f38aef has its CatchHandler @ 00e396bc */
      if ((__n != 0) && (iVar4 = memcmp(pPVar8,__s2,__n), iVar4 != 0)) {
        return;
      }
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00e38af0 to 00f38b13 has its CatchHandler @ 00e396cc */
  *(undefined4 *)(this + 0x248) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x240) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xac);
  *(undefined4 *)(this + 0x254) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(this + 0x24c) = uVar6;
  *(PUParticle3D **)(this + 0x208) = param_2;
  this[0x34] = (PUSlaveEmitter)0x1;
  PUParticleSystem3D::forceEmission(*(PUEmitter **)(this + 0x28),(uint)this);
  this[0x34] = (PUSlaveEmitter)0x0;
  return;
}

