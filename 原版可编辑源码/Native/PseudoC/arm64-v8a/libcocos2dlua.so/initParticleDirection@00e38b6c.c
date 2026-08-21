
/* cocos2d::PUSlaveEmitter::initParticleDirection(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUSlaveEmitter::initParticleDirection(PUSlaveEmitter *this,PUParticle3D *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  void *__s1;
  long lVar8;
  
  uVar4 = *(undefined4 *)(this + 0x254);
  plVar2 = *(long **)(param_1 + 0x108);
  plVar3 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(this + 0x24c);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  uVar7 = *(undefined8 *)(this + 0x24c);
                    /* try { // try from 00e38ba8 to 00f38baf has its CatchHandler @ 00e395e8 */
                    /* try { // try from 00e38bb0 to 00f38bdb has its CatchHandler @ 00e37bc0 */
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(this + 0x254);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(float *)(param_1 + 0xc4) =
       SQRT(*(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xac) +
            *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb0) +
            *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb4));
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar8 = *plVar2;
    bVar5 = *(byte *)(lVar8 + 0x30);
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(lVar8 + 0x38);
    }
    if (uVar1 == 5) {
      __s1 = *(void **)(lVar8 + 0x40);
      if ((bVar5 & 1) == 0) {
        __s1 = (void *)(lVar8 + 0x31);
      }
      iVar6 = memcmp(__s1,"Slave",5);
      if (iVar6 == 0) {
        *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(this + 0x208);
      }
    }
  }
  return;
}

