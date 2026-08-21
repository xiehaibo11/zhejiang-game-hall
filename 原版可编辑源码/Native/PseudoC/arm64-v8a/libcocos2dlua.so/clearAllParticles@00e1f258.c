
/* cocos2d::PUParticleSystem3D::clearAllParticles() */

void __thiscall cocos2d::PUParticleSystem3D::clearAllParticles(PUParticleSystem3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x348);
  if (lVar2 != 0) {
    lVar3 = *(long *)(this + 0x338);
    plVar4 = *(long **)(this + 0x340);
    lVar5 = *plVar4;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar5;
    lVar5 = *(long *)(this + 0x350);
    *(long **)(lVar5 + 8) = plVar4;
    *plVar4 = lVar5;
    *(long *)(this + 0x350) = lVar3;
    *(PUParticleSystem3D **)(lVar3 + 8) = this + 0x350;
    *(undefined8 *)(this + 0x348) = 0;
    *(long *)(this + 0x360) = *(long *)(this + 0x360) + lVar2;
  }
  plVar4 = *(long **)(this + 0x3c0);
  *(undefined8 *)(this + 0x330) = *(undefined8 *)(this + 0x340);
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    lVar2 = plVar4[8];
    if (lVar2 != 0) {
      lVar3 = plVar4[6];
      plVar1 = (long *)plVar4[7];
      lVar5 = *plVar1;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar5;
      lVar5 = plVar4[9];
      *(long **)(lVar5 + 8) = plVar1;
      *plVar1 = lVar5;
      plVar4[9] = lVar3;
      *(long **)(lVar3 + 8) = plVar4 + 9;
      plVar4[8] = 0;
      plVar4[0xb] = plVar4[0xb] + lVar2;
    }
    plVar4[5] = plVar4[7];
  }
  for (plVar4 = *(long **)(this + 1000); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    lVar2 = plVar4[8];
    if (lVar2 != 0) {
      lVar3 = plVar4[6];
      plVar1 = (long *)plVar4[7];
      lVar5 = *plVar1;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar5;
      lVar5 = plVar4[9];
      *(long **)(lVar5 + 8) = plVar1;
      *plVar1 = lVar5;
      plVar4[9] = lVar3;
      *(long **)(lVar3 + 8) = plVar4 + 9;
      plVar4[8] = 0;
      plVar4[0xb] = plVar4[0xb] + lVar2;
    }
    plVar4[5] = plVar4[7];
  }
  return;
}

