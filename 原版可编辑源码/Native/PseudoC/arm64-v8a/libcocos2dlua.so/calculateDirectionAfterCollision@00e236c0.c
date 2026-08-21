
/* cocos2d::PUBoxCollider::calculateDirectionAfterCollision(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUBoxCollider::calculateDirectionAfterCollision(PUBoxCollider *this,PUParticle3D *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(this + 0xb8) == 2) {
    fVar1 = *(float *)(param_1 + 8);
    fVar6 = *(float *)(param_1 + 0xc);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar2 = fVar1 - *(float *)(this + 0xcc);
    if (NAN(fVar2)) {
      fVar1 = *(float *)(this + 0xd0) - fVar1;
LAB_00e23830:
      if (fVar1 <= fVar2) {
        fVar5 = fVar6 - *(float *)(this + 0xd4);
        if (((fVar1 <= *(float *)(this + 0xe0) - fVar3) &&
            (fVar1 <= fVar3 - *(float *)(this + 0xdc))) &&
           ((fVar1 <= *(float *)(this + 0xd8) - fVar6 && (fVar1 <= fVar5)))) goto LAB_00e23944;
      }
      else {
                    /* catch() { ... } // from try @ 00e23724 with catch @ 00e2383c */
        fVar5 = fVar6 - *(float *)(this + 0xd4);
      }
      if (fVar5 <= fVar2) {
        fVar6 = *(float *)(this + 0xd8) - fVar6;
        if ((((*(float *)(this + 0xe0) - fVar3 < fVar5) || (fVar3 - *(float *)(this + 0xdc) < fVar5)
             ) || (fVar1 < fVar5)) || (fVar6 < fVar5)) goto LAB_00e23850;
LAB_00e23a4c:
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      else {
        fVar6 = *(float *)(this + 0xd8) - fVar6;
LAB_00e23850:
        if (fVar6 <= fVar2) {
          fVar7 = fVar3 - *(float *)(this + 0xdc);
          if (((fVar6 <= *(float *)(this + 0xe0) - fVar3) && (fVar6 <= fVar5)) &&
             ((fVar6 <= fVar1 && (fVar6 <= fVar7)))) goto LAB_00e23a4c;
        }
        else {
                    /* try { // try from 00e23858 to 00f23ab3 has its CatchHandler @ 00e23858
                       catch() { ... } // from try @ 00e23858 with catch @ 00e23858
                       catch() { ... } // from try @ 00e23bcc with catch @ 00e23858 */
          fVar7 = fVar3 - *(float *)(this + 0xdc);
        }
        fVar3 = *(float *)(this + 0xe0) - fVar3;
                    /* try { // try from 00e23ab4 to 00f23abf has its CatchHandler @ 00e23c3c */
        if ((((fVar7 <= fVar2) && (fVar7 <= fVar3)) &&
            ((fVar7 <= fVar6 && ((fVar7 <= fVar5 && (fVar7 <= fVar1)))))) ||
           (((fVar3 <= fVar2 && (((fVar3 <= fVar7 && (fVar3 <= fVar6)) && (fVar3 <= fVar5)))) &&
            (fVar3 <= fVar1)))) {
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
      }
    }
    else {
      fVar1 = *(float *)(this + 0xd0) - fVar1;
      if ((((*(float *)(this + 0xe0) - fVar3 < fVar2) || (fVar3 - *(float *)(this + 0xdc) < fVar2))
          || (*(float *)(this + 0xd8) - fVar6 < fVar2)) ||
         ((fVar6 - *(float *)(this + 0xd4) < fVar2 || (fVar1 < fVar2)))) goto LAB_00e23830;
LAB_00e23944:
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    fVar1 = *(float *)(param_1 + 0xb4);
    fVar2 = -*(float *)(this + 0xac);
    uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) * fVar2,
                     (float)*(undefined8 *)(param_1 + 0xac) * fVar2);
    goto LAB_00e23adc;
  }
  if (*(int *)(this + 0xb8) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x10);
  fVar2 = fVar1 - *(float *)(this + 0xcc);
  if (NAN(fVar2)) {
    fVar1 = *(float *)(this + 0xd0) - fVar1;
LAB_00e237b4:
    if (fVar1 <= fVar2) {
      fVar5 = fVar6 - *(float *)(this + 0xd4);
      if ((((fVar1 <= *(float *)(this + 0xe0) - fVar3) && (fVar1 <= fVar3 - *(float *)(this + 0xdc))
           ) && (fVar1 <= *(float *)(this + 0xd8) - fVar6)) && (fVar1 <= fVar5)) goto LAB_00e238ec;
    }
    else {
      fVar5 = fVar6 - *(float *)(this + 0xd4);
    }
    if (fVar5 <= fVar2) {
      fVar6 = *(float *)(this + 0xd8) - fVar6;
      if (((*(float *)(this + 0xe0) - fVar3 < fVar5) || (fVar3 - *(float *)(this + 0xdc) < fVar5))
         || ((fVar1 < fVar5 || (fVar6 < fVar5)))) goto LAB_00e237d4;
LAB_00e23a08:
      *(float *)(param_1 + 0xb0) = -*(float *)(param_1 + 0xb0);
    }
    else {
      fVar6 = *(float *)(this + 0xd8) - fVar6;
LAB_00e237d4:
      if (fVar6 <= fVar2) {
        fVar7 = fVar3 - *(float *)(this + 0xdc);
        if (((fVar6 <= *(float *)(this + 0xe0) - fVar3) && (fVar6 <= fVar5)) &&
           ((fVar6 <= fVar1 && (fVar6 <= fVar7)))) goto LAB_00e23a08;
      }
      else {
        fVar7 = fVar3 - *(float *)(this + 0xdc);
      }
      fVar3 = *(float *)(this + 0xe0) - fVar3;
      if (((((fVar7 <= fVar2) && (fVar7 <= fVar3)) && (fVar7 <= fVar6)) &&
          ((fVar7 <= fVar5 && (fVar7 <= fVar1)))) ||
         ((((fVar3 <= fVar2 && ((fVar3 <= fVar7 && (fVar3 <= fVar6)))) && (fVar3 <= fVar5)) &&
          (fVar3 <= fVar1)))) {
        *(float *)(param_1 + 0xb4) = -*(float *)(param_1 + 0xb4);
      }
    }
  }
  else {
    fVar1 = *(float *)(this + 0xd0) - fVar1;
                    /* try { // try from 00e23724 to 00f23733 has its CatchHandler @ 00e2383c */
                    /* try { // try from 00e23734 to 00f23857 has its CatchHandler @ 00e236e8 */
    if (((*(float *)(this + 0xe0) - fVar3 < fVar2) || (fVar3 - *(float *)(this + 0xdc) < fVar2)) ||
       ((*(float *)(this + 0xd8) - fVar6 < fVar2 ||
        ((fVar6 - *(float *)(this + 0xd4) < fVar2 || (fVar1 < fVar2)))))) goto LAB_00e237b4;
LAB_00e238ec:
    *(float *)(param_1 + 0xac) = -*(float *)(param_1 + 0xac);
  }
  fVar1 = *(float *)(this + 0xb0);
  fVar2 = *(float *)(param_1 + 0xb4);
  uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) * fVar1,
                   (float)*(undefined8 *)(param_1 + 0xac) * fVar1);
LAB_00e23adc:
  *(undefined8 *)(param_1 + 0xac) = uVar4;
  *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
  return;
}

