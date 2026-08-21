
/* cocos2d::PhysicsBody::removeAllShapes(bool) */

void __thiscall cocos2d::PhysicsBody::removeAllShapes(PhysicsBody *this,bool param_1)

{
  undefined8 *puVar1;
  PhysicsBody PVar2;
  long *plVar3;
  PhysicsShape *this_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar6 = *(undefined8 **)(this + 0x68);
  puVar1 = *(undefined8 **)(this + 0x70);
  if (puVar6 == puVar1) {
LAB_01000e6c:
    *(undefined8 **)(this + 0x70) = puVar6;
    return;
  }
                    /* try { // try from 01000c9c to 01100ca3 has its CatchHandler @ 01000d84 */
                    /* try { // try from 01000ca4 to 01100db3 has its CatchHandler @ 01000a88 */
  fVar10 = 3.4028235e+38;
  this_00 = (PhysicsShape *)*puVar6;
  if (!param_1) goto LAB_01000d88;
  do {
    fVar7 = *(float *)(this + 0x9c) - *(float *)(this_00 + 0x4c);
    *(float *)(this + 0x9c) = fVar7;
    fVar8 = *(float *)(this_00 + 0x50);
    if (-fVar8 == 3.4028235e+38) {
      *(undefined4 *)(this + 0x98) = 0x7f7fffff;
      this[0x93] = (PhysicsBody)0x0;
      fVar9 = fVar10;
      fVar8 = fVar10;
LAB_01000d14:
      *(float *)(this + 0xa0) = fVar8;
      if (this[0x90] != (PhysicsBody)0x0) {
        lVar4 = *(long *)(this + 0x88);
        cpBodyActivate(lVar4);
        *(float *)(lVar4 + 0x10) = fVar9;
        *(float *)(lVar4 + 0x14) = 1.0 / fVar9;
      }
    }
    else if (fVar8 != 3.4028235e+38) {
      if (this[0x93] == (PhysicsBody)0x0) {
        fVar9 = *(float *)(this + 0x98);
      }
      else {
        fVar9 = 0.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000ad8 with catch @ 01000db0
                        */
        *(undefined4 *)(this + 0x98) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000e08 with catch @ 01000db4
                        */
        this[0x93] = (PhysicsBody)0x0;
      }
      fVar9 = fVar9 - fVar8;
                    /* try { // try from 01000e00 to 01100e07 has its CatchHandler @ 01000f7c */
      if (fVar9 <= 0.0) {
        *(undefined4 *)(this + 0x98) = 0x3f800000;
        this[0x93] = (PhysicsBody)0x1;
        fVar9 = 1.0;
      }
      else {
                    /* try { // try from 01000e08 to 01100f7f has its CatchHandler @ 01000db4 */
        *(float *)(this + 0x98) = fVar9;
      }
      fVar8 = 0.0;
      if (0.0 < fVar7) {
        fVar8 = fVar9 / fVar7;
      }
      goto LAB_01000d14;
    }
    fVar7 = *(float *)(this_00 + 0x54);
    if (-fVar7 == 3.4028235e+38) {
      *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
      this[0x94] = (PhysicsBody)0x0;
      fVar8 = fVar10;
LAB_01000d5c:
      PVar2 = this[0x91];
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000c9c with catch @ 01000d84
                        */
      if (fVar7 == 3.4028235e+38) goto LAB_01000d88;
      fVar8 = *(float *)(this + 0xa4);
      if (fVar8 == 3.4028235e+38) goto LAB_01000d5c;
      if (this[0x94] != (PhysicsBody)0x0) {
        fVar8 = 0.0;
        *(undefined4 *)(this + 0xa4) = 0;
        this[0x94] = (PhysicsBody)0x0;
      }
      fVar8 = fVar8 - fVar7;
      if (fVar8 <= 0.0) {
        fVar8 = 200.0;
        *(undefined4 *)(this + 0xa4) = 0x43480000;
        this[0x94] = (PhysicsBody)0x1;
        PVar2 = this[0x91];
      }
      else {
        *(float *)(this + 0xa4) = fVar8;
        PVar2 = this[0x91];
      }
    }
    if (PVar2 == (PhysicsBody)0x0) goto LAB_01000d88;
    if (this[0x90] == (PhysicsBody)0x0) goto LAB_01000d88;
    cpBodySetMoment(fVar8,*(undefined8 *)(this + 0x88));
    plVar3 = *(long **)(this + 0x80);
    while( true ) {
      if (plVar3 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000c34 with catch @ 01000d9c
                        */
        (**(code **)(*plVar3 + 0x40))(plVar3,this_00);
      }
      *(undefined8 *)(this_00 + 0x28) = 0;
      PhysicsShape::setBody(this_00,(PhysicsBody *)0x0);
      puVar6 = puVar6 + 1;
      if (puVar1 == puVar6) {
        puVar6 = *(undefined8 **)(this + 0x68);
        puVar1 = *(undefined8 **)(this + 0x70);
        if (puVar6 != puVar1) {
          do {
            puVar5 = puVar6 + 1;
            Ref::release((Ref *)*puVar6);
            puVar6 = puVar5;
          } while (puVar1 != puVar5);
          puVar6 = *(undefined8 **)(this + 0x68);
        }
        goto LAB_01000e6c;
      }
      this_00 = (PhysicsShape *)*puVar6;
      if (param_1) break;
LAB_01000d88:
      plVar3 = *(long **)(this + 0x80);
    }
  } while( true );
}

