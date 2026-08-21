
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::PhysicsBody::removeShape(cocos2d::PhysicsShape*, bool) */

void __thiscall
cocos2d::PhysicsBody::removeShape(PhysicsBody *this,PhysicsShape *param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  PhysicsBody PVar3;
  size_t __n;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar5 = *(undefined8 **)(this + 0x68);
  puVar2 = *(undefined8 **)(this + 0x70);
  if (puVar2 == puVar5) {
    return;
  }
  puVar6 = puVar5;
  if ((PhysicsShape *)*puVar5 != param_1) {
    do {
      if (puVar2 + -1 == puVar6) {
        return;
      }
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
    } while ((PhysicsShape *)*puVar1 != param_1);
  }
  if (puVar6 == puVar2) {
    return;
  }
  if ((long)puVar6 - (long)puVar5 == -8) {
    return;
  }
  if (param_2) {
    fVar8 = *(float *)(this + 0x9c) - *(float *)(param_1 + 0x4c);
    *(float *)(this + 0x9c) = fVar8;
    fVar9 = *(float *)(param_1 + 0x50);
    fVar11 = 3.4028235e+38;
    if (-fVar9 == 3.4028235e+38) {
      *(undefined4 *)(this + 0x98) = 0x7f7fffff;
      this[0x93] = (PhysicsBody)0x0;
      fVar10 = fVar11;
      fVar9 = fVar11;
LAB_01000a74:
      *(float *)(this + 0xa0) = fVar9;
      if (this[0x90] != (PhysicsBody)0x0) {
        lVar7 = *(long *)(this + 0x88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000ae0 with catch @ 01000a88
                       catch(type#1 @ 00000000) { ... } // from try @ 01000ca4 with catch @ 01000a88
                        */
        cpBodyActivate(lVar7);
        *(float *)(lVar7 + 0x10) = fVar10;
        *(float *)(lVar7 + 0x14) = 1.0 / fVar10;
      }
    }
    else if (fVar9 != 3.4028235e+38) {
      if (this[0x93] == (PhysicsBody)0x0) {
        fVar10 = *(float *)(this + 0x98);
      }
      else {
        fVar10 = 0.0;
        *(undefined4 *)(this + 0x98) = 0;
        this[0x93] = (PhysicsBody)0x0;
      }
      fVar10 = fVar10 - fVar9;
      if (fVar10 <= 0.0) {
        fVar10 = 1.0;
        *(undefined4 *)(this + 0x98) = 0x3f800000;
        this[0x93] = (PhysicsBody)0x1;
      }
      else {
        *(float *)(this + 0x98) = fVar10;
      }
      fVar9 = 0.0;
      if (0.0 < fVar8) {
        fVar9 = fVar10 / fVar8;
                    /* try { // try from 01000c34 to 01100c3f has its CatchHandler @ 01000d9c */
      }
      goto LAB_01000a74;
    }
    fVar8 = *(float *)(param_1 + 0x54);
    if (-fVar8 == 3.4028235e+38) {
      *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
      this[0x94] = (PhysicsBody)0x0;
      PVar3 = this[0x91];
    }
    else {
      if (fVar8 == 3.4028235e+38) goto LAB_01000aec;
      fVar11 = *(float *)(this + 0xa4);
      if (fVar11 == 3.4028235e+38) {
        PVar3 = this[0x91];
      }
      else {
        if (this[0x94] != (PhysicsBody)0x0) {
          fVar11 = 0.0;
          *(undefined4 *)(this + 0xa4) = 0;
          this[0x94] = (PhysicsBody)0x0;
        }
        fVar11 = fVar11 - fVar8;
        if (fVar11 <= 0.0) {
          fVar11 = 200.0;
          *(undefined4 *)(this + 0xa4) = 0x43480000;
          this[0x94] = (PhysicsBody)0x1;
          PVar3 = this[0x91];
        }
        else {
          *(float *)(this + 0xa4) = fVar11;
          PVar3 = this[0x91];
        }
      }
    }
    if ((PVar3 != (PhysicsBody)0x0) && (this[0x90] != (PhysicsBody)0x0)) {
      cpBodySetMoment(fVar11,*(undefined8 *)(this + 0x88));
                    /* try { // try from 01000ad8 to 01100adf has its CatchHandler @ 01000db0 */
      plVar4 = *(long **)(this + 0x80);
      goto joined_r0x01000af0;
    }
  }
LAB_01000aec:
  plVar4 = *(long **)(this + 0x80);
joined_r0x01000af0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))(plVar4,param_1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  PhysicsShape::setBody(param_1,(PhysicsBody *)0x0);
  puVar5 = *(undefined8 **)(this + 0x68);
  puVar2 = *(undefined8 **)(this + 0x70);
  if (puVar5 != puVar2) {
    if ((PhysicsShape *)*puVar5 != param_1) {
      do {
        if (puVar2 + -1 == puVar5) {
          return;
        }
        puVar6 = puVar5 + 1;
        puVar5 = puVar5 + 1;
      } while ((PhysicsShape *)*puVar6 != param_1);
    }
    if (puVar5 != puVar2) {
      __n = (long)puVar2 - (long)(puVar5 + 1);
      if (__n != 0) {
        memmove(puVar5,puVar5 + 1,__n);
      }
      *(undefined8 **)(this + 0x70) = puVar5 + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

