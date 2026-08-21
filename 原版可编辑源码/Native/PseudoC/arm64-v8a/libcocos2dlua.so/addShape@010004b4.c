
/* cocos2d::PhysicsBody::addShape(cocos2d::PhysicsShape*, bool) */

PhysicsShape * __thiscall
cocos2d::PhysicsBody::addShape(PhysicsBody *this,PhysicsShape *param_1,bool param_2)

{
  undefined8 *puVar1;
  PhysicsBody PVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  PhysicsShape *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == (PhysicsShape *)0x0) goto LAB_01000670;
  puVar4 = *(undefined8 **)(this + 0x68);
                    /* try { // try from 010004f4 to 011004ff has its CatchHandler @ 01000580 */
  puVar5 = *(undefined8 **)(this + 0x70);
  if (puVar5 != puVar4) {
    puVar6 = puVar4;
                    /* try { // try from 0100050c to 0110053f has its CatchHandler @ 01000588 */
    if ((PhysicsShape *)*puVar4 != param_1) {
      do {
        if (puVar5 + -1 == puVar6) goto LAB_01000558;
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 1;
      } while ((PhysicsShape *)*puVar1 != param_1);
    }
    if ((puVar6 != puVar5) && ((long)puVar6 - (long)puVar4 != -8)) goto LAB_01000670;
  }
LAB_01000558:
  PhysicsShape::setBody(param_1,this);
  if (param_2) {
    fVar8 = *(float *)(param_1 + 0x4c) + *(float *)(this + 0x9c);
    *(float *)(this + 0x9c) = fVar8;
                    /* catch() { ... } // from try @ 010004f4 with catch @ 01000580 */
    fVar9 = *(float *)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 0100047c with catch @ 01000584 */
    fVar11 = 3.4028235e+38;
                    /* catch() { ... } // from try @ 0100050c with catch @ 01000588 */
                    /* catch() { ... } // from try @ 010004a4 with catch @ 0100058c */
    if (fVar9 == 3.4028235e+38) {
      *(undefined4 *)(this + 0x98) = 0x7f7fffff;
      this[0x93] = (PhysicsBody)0x0;
      fVar9 = fVar11;
      fVar10 = fVar11;
LAB_010005a4:
      *(float *)(this + 0xa0) = fVar10;
      if (this[0x90] != (PhysicsBody)0x0) {
        lVar7 = *(long *)(this + 0x88);
        cpBodyActivate(lVar7);
        *(float *)(lVar7 + 0x10) = fVar9;
        *(float *)(lVar7 + 0x14) = 1.0 / fVar9;
      }
    }
    else if (fVar9 != -3.4028235e+38) {
      if (this[0x93] == (PhysicsBody)0x0) {
        fVar10 = *(float *)(this + 0x98);
      }
      else {
        fVar10 = 0.0;
        *(undefined4 *)(this + 0x98) = 0;
        this[0x93] = (PhysicsBody)0x0;
      }
      fVar9 = fVar9 + fVar10;
      if (fVar9 <= 0.0) {
        fVar9 = 1.0;
        *(undefined4 *)(this + 0x98) = 0x3f800000;
        this[0x93] = (PhysicsBody)0x1;
      }
      else {
        *(float *)(this + 0x98) = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 < fVar8) {
        fVar10 = fVar9 / fVar8;
      }
      goto LAB_010005a4;
    }
    fVar9 = *(float *)(param_1 + 0x54);
    if (fVar9 != 3.4028235e+38) {
      if (fVar9 != -3.4028235e+38) {
        fVar11 = *(float *)(this + 0xa4);
        if (fVar11 == 3.4028235e+38) {
          PVar2 = this[0x91];
        }
        else {
          if (this[0x94] != (PhysicsBody)0x0) {
            fVar11 = 0.0;
            *(undefined4 *)(this + 0xa4) = 0;
            this[0x94] = (PhysicsBody)0x0;
          }
          fVar11 = fVar9 + fVar11;
          if (fVar11 <= 0.0) {
            fVar11 = 200.0;
            *(undefined4 *)(this + 0xa4) = 0x43480000;
            this[0x94] = (PhysicsBody)0x1;
            PVar2 = this[0x91];
            goto joined_r0x010005ec;
          }
          *(float *)(this + 0xa4) = fVar11;
          PVar2 = this[0x91];
        }
        if (PVar2 != (PhysicsBody)0x0) goto LAB_010005f0;
      }
      goto LAB_01000618;
    }
    *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
    this[0x94] = (PhysicsBody)0x0;
    PVar2 = this[0x91];
joined_r0x010005ec:
    if (PVar2 == (PhysicsBody)0x0) goto LAB_01000618;
LAB_010005f0:
    if (this[0x90] == (PhysicsBody)0x0) goto LAB_01000618;
    cpBodySetMoment(fVar11,*(undefined8 *)(this + 0x88));
    lVar7 = *(long *)(this + 0x80);
  }
  else {
LAB_01000618:
    lVar7 = *(long *)(this + 0x80);
  }
  if ((lVar7 != 0) && (lVar7 = cpBodyGetSpace(*(undefined8 *)(this + 0x88)), lVar7 != 0)) {
    (**(code **)(**(long **)(this + 0x80) + 0x38))(*(long **)(this + 0x80),param_1);
  }
  puVar4 = *(undefined8 **)(this + 0x70);
  local_60 = param_1;
  if (puVar4 == *(undefined8 **)(this + 0x78)) {
    std::__ndk1::vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>>::
    __push_back_slow_path<cocos2d::PhysicsShape*const&>
              ((vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>> *)
               (this + 0x68),&local_60);
  }
  else {
    *puVar4 = param_1;
    *(undefined8 **)(this + 0x70) = puVar4 + 1;
  }
  Ref::retain((Ref *)local_60);
LAB_01000670:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

