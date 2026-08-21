
/* cocos2d::PUParticleSystem3D::preUpdator(float) */

void __thiscall cocos2d::PUParticleSystem3D::preUpdator(PUParticleSystem3D *this,float param_1)

{
  ulong uVar1;
  long lVar2;
  PUEmitter *this_00;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 in_register_00005004;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(in_register_00005004,param_1);
  puVar6 = *(undefined8 **)(this + 0x388);
  for (puVar4 = *(undefined8 **)(this + 0x380); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    this_00 = (PUEmitter *)*puVar4;
    uVar1 = PUEmitter::isEmitterDone(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 0x58))(uVar7,this_00);
    }
                    /* try { // try from 00e1dbf8 to 00f1dbff has its CatchHandler @ 00e1e124 */
                    /* try { // try from 00e1dc00 to 00f1dc3f has its CatchHandler @ 00e1e12c */
  }
  plVar5 = *(long **)(this + 0x318);
  for (plVar3 = *(long **)(this + 0x310); plVar3 != plVar5; plVar3 = plVar3 + 1) {
                    /* try { // try from 00e1dc4c to 00f1dc57 has its CatchHandler @ 00e1e120 */
    if ((char)((long *)*plVar3)[6] != '\0') {
      (**(code **)(*(long *)*plVar3 + 0x50))(uVar7);
    }
  }
                    /* try { // try from 00e1dc70 to 00f1dc77 has its CatchHandler @ 00e1e0f0 */
  puVar6 = *(undefined8 **)(this + 0x3a0);
  for (puVar4 = *(undefined8 **)(this + 0x398); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    plVar3 = (long *)*puVar4;
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar3 + 0x38))(uVar7,plVar3);
    }
  }
  for (plVar3 = *(long **)(this + 0x3c0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    lVar2 = plVar3[7];
    while ((plVar3[5] = lVar2, plVar3 + 6 != (long *)lVar2 && (*(long *)(lVar2 + 0x10) != 0))) {
      (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + 0x78) + 0x58))(uVar7);
      if ((long *)plVar3[5] == plVar3 + 6) break;
      lVar2 = *(long *)(plVar3[5] + 8);
    }
  }
  plVar3 = *(long **)(this + 1000);
  do {
                    /* try { // try from 00e1dc88 to 00f1dc8f has its CatchHandler @ 00e1e0fc */
    if (plVar3 == (long *)0x0) {
      return;
    }
                    /* try { // try from 00e1dd20 to 00f1dd67 has its CatchHandler @ 00e1e14c */
    lVar2 = plVar3[7];
    while ((plVar3[5] = lVar2, plVar3 + 6 != (long *)lVar2 && (*(long *)(lVar2 + 0x10) != 0))) {
      preUpdator(*(PUParticleSystem3D **)(*(long *)(lVar2 + 0x10) + 0x78),param_1);
      if ((long *)plVar3[5] == plVar3 + 6) break;
      lVar2 = *(long *)(plVar3[5] + 8);
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}

