
/* cocos2d::PhysicsBody::setScale(float, float) */

void __thiscall cocos2d::PhysicsBody::setScale(PhysicsBody *this,float param_1,float param_2)

{
  long *plVar1;
  PhysicsBody PVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined4 in_register_00005004;
  float fVar6;
  undefined4 in_register_00005024;
  float fVar7;
  float fVar8;
  
  plVar4 = *(long **)(this + 0x68);
  plVar1 = *(long **)(this + 0x70);
  if (plVar4 != plVar1) {
                    /* try { // try from 00fffee0 to 010ffee7 has its CatchHandler @ 00ffff68 */
    fVar8 = 3.4028235e+38;
                    /* try { // try from 00fffef4 to 010fff4f has its CatchHandler @ 00ffff6c */
    do {
      lVar3 = *plVar4;
      fVar5 = *(float *)(this + 0x9c) - *(float *)(lVar3 + 0x4c);
      *(float *)(this + 0x9c) = fVar5;
      if (this[0xc0] == (PhysicsBody)0x0) {
        fVar6 = *(float *)(lVar3 + 0x50);
        if (-fVar6 == 3.4028235e+38) {
          *(undefined4 *)(this + 0x98) = 0x7f7fffff;
          this[0x93] = (PhysicsBody)0x0;
                    /* try { // try from 00ffff50 to 010fff87 has its CatchHandler @ 00fffe60 */
          fVar7 = fVar8;
          fVar6 = fVar8;
        }
        else {
          if (fVar6 == 3.4028235e+38) goto LAB_00ffff88;
          if (this[0x93] == (PhysicsBody)0x0) {
            fVar7 = *(float *)(this + 0x98);
          }
          else {
            fVar7 = 0.0;
            *(undefined4 *)(this + 0x98) = 0;
            this[0x93] = (PhysicsBody)0x0;
          }
          fVar7 = fVar7 - fVar6;
          if (fVar7 <= 0.0) {
            *(undefined4 *)(this + 0x98) = 0x3f800000;
            this[0x93] = (PhysicsBody)0x1;
            fVar7 = 1.0;
          }
          else {
            *(float *)(this + 0x98) = fVar7;
          }
          fVar6 = 0.0;
          if (0.0 < fVar5) {
            fVar6 = fVar7 / fVar5;
          }
        }
        *(float *)(this + 0xa0) = fVar6;
        if (this[0x90] == (PhysicsBody)0x0) goto LAB_00ffff88;
        lVar3 = *(long *)(this + 0x88);
                    /* catch() { ... } // from try @ 00fffee0 with catch @ 00ffff68 */
        cpBodyActivate(lVar3);
                    /* catch() { ... } // from try @ 00fffef4 with catch @ 00ffff6c */
        *(float *)(lVar3 + 0x10) = fVar7;
        *(float *)(lVar3 + 0x14) = 1.0 / fVar7;
        PVar2 = this[0xc1];
      }
      else {
LAB_00ffff88:
                    /* try { // try from 00ffff88 to 01100037 has its CatchHandler @ 00ffff88
                       catch() { ... } // from try @ 00ffff88 with catch @ 00ffff88
                       catch() { ... } // from try @ 010000b4 with catch @ 00ffff88 */
        PVar2 = this[0xc1];
      }
      if (PVar2 == (PhysicsBody)0x0) {
        fVar5 = *(float *)(*plVar4 + 0x54);
        if (-fVar5 == 3.4028235e+38) {
          *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
          this[0x94] = (PhysicsBody)0x0;
          fVar6 = fVar8;
LAB_0100002c:
          PVar2 = this[0x91];
joined_r0x010001c4:
          if (PVar2 != (PhysicsBody)0x0) {
LAB_01000034:
                    /* try { // try from 01000038 to 0110004b has its CatchHandler @ 010000cc */
            if (this[0x90] != (PhysicsBody)0x0) {
              cpBodySetMoment(fVar6,*(undefined8 *)(this + 0x88));
            }
          }
        }
        else if (fVar5 != 3.4028235e+38) {
          fVar6 = *(float *)(this + 0xa4);
          if (fVar6 == 3.4028235e+38) goto LAB_0100002c;
          if (this[0x94] != (PhysicsBody)0x0) {
            fVar6 = 0.0;
            *(undefined4 *)(this + 0xa4) = 0;
                    /* try { // try from 010000b4 to 011000eb has its CatchHandler @ 00ffff88 */
            this[0x94] = (PhysicsBody)0x0;
          }
          fVar6 = fVar6 - fVar5;
          if (fVar6 <= 0.0) {
            fVar6 = 200.0;
            *(undefined4 *)(this + 0xa4) = 0x43480000;
            this[0x94] = (PhysicsBody)0x1;
            PVar2 = this[0x91];
            goto joined_r0x010001c4;
          }
          *(float *)(this + 0xa4) = fVar6;
                    /* catch() { ... } // from try @ 01000038 with catch @ 010000cc */
          if (this[0x91] == (PhysicsBody)0x0) goto LAB_00ffff90;
          goto LAB_01000034;
        }
      }
LAB_00ffff90:
      (**(code **)(*(long *)*plVar4 + 0x30))
                (CONCAT44(in_register_00005004,param_1),CONCAT44(in_register_00005024,param_2));
      lVar3 = *plVar4;
      fVar5 = *(float *)(lVar3 + 0x4c) + *(float *)(this + 0x9c);
      *(float *)(this + 0x9c) = fVar5;
      if (this[0xc0] == (PhysicsBody)0x0) {
        fVar6 = *(float *)(lVar3 + 0x50);
        if (fVar6 == 3.4028235e+38) {
          *(undefined4 *)(this + 0x98) = 0x7f7fffff;
          this[0x93] = (PhysicsBody)0x0;
          fVar6 = fVar8;
          fVar7 = fVar8;
        }
        else {
          if (fVar6 == -3.4028235e+38) goto LAB_01000050;
          if (this[0x93] == (PhysicsBody)0x0) {
            fVar7 = *(float *)(this + 0x98);
          }
          else {
            fVar7 = 0.0;
            *(undefined4 *)(this + 0x98) = 0;
            this[0x93] = (PhysicsBody)0x0;
          }
          fVar6 = fVar6 + fVar7;
          if (fVar6 <= 0.0) {
                    /* try { // try from 01000190 to 01100203 has its CatchHandler @ 01000190
                       catch() { ... } // from try @ 01000190 with catch @ 01000190
                       catch() { ... } // from try @ 010002dc with catch @ 01000190 */
            *(undefined4 *)(this + 0x98) = 0x3f800000;
            this[0x93] = (PhysicsBody)0x1;
            fVar6 = 1.0;
          }
          else {
            *(float *)(this + 0x98) = fVar6;
          }
          fVar7 = 0.0;
          if (0.0 < fVar5) {
            fVar7 = fVar6 / fVar5;
          }
        }
        *(float *)(this + 0xa0) = fVar7;
        if (this[0x90] == (PhysicsBody)0x0) goto LAB_01000050;
        lVar3 = *(long *)(this + 0x88);
        cpBodyActivate(lVar3);
        *(float *)(lVar3 + 0x10) = fVar6;
        *(float *)(lVar3 + 0x14) = 1.0 / fVar6;
        PVar2 = this[0xc1];
      }
      else {
LAB_01000050:
        PVar2 = this[0xc1];
      }
      if (PVar2 == (PhysicsBody)0x0) {
                    /* try { // try from 01000058 to 011000b3 has its CatchHandler @ 010000d0 */
        fVar5 = *(float *)(*plVar4 + 0x54);
        if (fVar5 == 3.4028235e+38) {
          *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
          this[0x94] = (PhysicsBody)0x0;
          fVar6 = fVar8;
LAB_01000074:
          PVar2 = this[0x91];
joined_r0x010001e0:
          if (PVar2 != (PhysicsBody)0x0) {
LAB_0100007c:
            if (this[0x90] != (PhysicsBody)0x0) {
              cpBodySetMoment(fVar6,*(undefined8 *)(this + 0x88));
            }
          }
        }
        else if (fVar5 != -3.4028235e+38) {
          fVar6 = *(float *)(this + 0xa4);
          if (fVar6 == 3.4028235e+38) goto LAB_01000074;
          if (this[0x94] != (PhysicsBody)0x0) {
            fVar6 = 0.0;
            *(undefined4 *)(this + 0xa4) = 0;
            this[0x94] = (PhysicsBody)0x0;
          }
          fVar6 = fVar5 + fVar6;
          if (fVar6 <= 0.0) {
            fVar6 = 200.0;
            *(undefined4 *)(this + 0xa4) = 0x43480000;
            this[0x94] = (PhysicsBody)0x1;
            PVar2 = this[0x91];
            goto joined_r0x010001e0;
          }
          *(float *)(this + 0xa4) = fVar6;
          if (this[0x91] == (PhysicsBody)0x0) goto LAB_00ffff0c;
          goto LAB_0100007c;
        }
      }
LAB_00ffff0c:
      plVar4 = plVar4 + 1;
    } while (plVar1 != plVar4);
  }
                    /* try { // try from 01000204 to 0110020b has its CatchHandler @ 010002fc */
  return;
}

