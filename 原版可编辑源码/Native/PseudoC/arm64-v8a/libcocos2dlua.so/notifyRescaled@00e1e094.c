
/* cocos2d::PUParticleSystem3D::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUParticleSystem3D::notifyRescaled(PUParticleSystem3D *this,Vec3 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(long **)(this + 0x328);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
                    /* catch() { ... } // from try @ 00e1d7b8 with catch @ 00e1e0c8 */
  puVar5 = *(undefined8 **)(this + 0x388);
                    /* catch() { ... } // from try @ 00e1d7ec with catch @ 00e1e0cc */
  for (puVar4 = *(undefined8 **)(this + 0x380); puVar4 != puVar5; puVar4 = puVar4 + 1) {
                    /* catch() { ... } // from try @ 00e1d830 with catch @ 00e1e0dc */
                    /* catch() { ... } // from try @ 00e1d9b4 with catch @ 00e1e0e0 */
                    /* catch() { ... } // from try @ 00e1d998 with catch @ 00e1e0e4 */
    (**(code **)(*(long *)*puVar4 + 0x40))((long *)*puVar4,param_1);
                    /* catch() { ... } // from try @ 00e1de9c with catch @ 00e1e0e8 */
                    /* catch() { ... } // from try @ 00e1dda4 with catch @ 00e1e0ec */
  }
                    /* catch() { ... } // from try @ 00e1dc70 with catch @ 00e1e0f0 */
  puVar5 = *(undefined8 **)(this + 0x318);
                    /* catch() { ... } // from try @ 00e1dc88 with catch @ 00e1e0fc */
  for (puVar4 = *(undefined8 **)(this + 0x310); puVar4 != puVar5; puVar4 = puVar4 + 1) {
                    /* catch() { ... } // from try @ 00e1d9e0 with catch @ 00e1e10c */
    (**(code **)(*(long *)*puVar4 + 0x38))((long *)*puVar4,param_1);
  }
                    /* catch() { ... } // from try @ 00e1db5c with catch @ 00e1e11c */
                    /* catch() { ... } // from try @ 00e1dc4c with catch @ 00e1e120 */
  puVar5 = *(undefined8 **)(this + 0x3a0);
                    /* catch() { ... } // from try @ 00e1dbf8 with catch @ 00e1e124 */
                    /* catch() { ... } // from try @ 00e1dac8 with catch @ 00e1e128 */
  for (puVar4 = *(undefined8 **)(this + 0x398); puVar4 != puVar5; puVar4 = puVar4 + 1) {
                    /* catch() { ... } // from try @ 00e1dc00 with catch @ 00e1e12c */
    (**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,param_1);
                    /* catch() { ... } // from try @ 00e1d9ec with catch @ 00e1e144 */
  }
                    /* catch() { ... } // from try @ 00e1de2c with catch @ 00e1e148 */
                    /* catch() { ... } // from try @ 00e1dd20 with catch @ 00e1e14c */
  for (plVar1 = *(long **)(this + 0x3c0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    lVar3 = plVar1[7];
                    /* try { // try from 00e1e178 to 00f1e21f has its CatchHandler @ 00e1e178
                       catch(type#1 @ 00000000) { ... } // from try @ 00e1e178 with catch @ 00e1e178
                       catch(type#1 @ 00000000) { ... } // from try @ 00e1f620 with catch @ 00e1e178
                        */
    while ((plVar1[5] = lVar3, plVar1 + 6 != (long *)lVar3 && (*(long *)(lVar3 + 0x10) != 0))) {
      plVar2 = *(long **)(*(long *)(lVar3 + 0x10) + 0x78);
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      if ((long *)plVar1[5] == plVar1 + 6) break;
      lVar3 = *(long *)(plVar1[5] + 8);
    }
  }
  plVar1 = *(long **)(this + 1000);
  do {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = plVar1[7];
    while ((plVar1[5] = lVar3, plVar1 + 6 != (long *)lVar3 && (*(long *)(lVar3 + 0x10) != 0))) {
      notifyRescaled(*(PUParticleSystem3D **)(*(long *)(lVar3 + 0x10) + 0x78),param_1);
      if ((long *)plVar1[5] == plVar1 + 6) break;
      lVar3 = *(long *)(plVar1[5] + 8);
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}

