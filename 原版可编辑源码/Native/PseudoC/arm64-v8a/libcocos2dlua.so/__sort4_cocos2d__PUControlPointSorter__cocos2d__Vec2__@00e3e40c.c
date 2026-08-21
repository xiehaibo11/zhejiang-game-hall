
/* unsigned int std::__ndk1::__sort4<cocos2d::PUControlPointSorter&, cocos2d::Vec2*>(cocos2d::Vec2*,
   cocos2d::Vec2*, cocos2d::Vec2*, cocos2d::Vec2*, cocos2d::PUControlPointSorter&) */

uint std::__ndk1::__sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
               (Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,
               PUControlPointSorter *param_5)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)param_2;
  fVar4 = *(float *)param_3;
  if (*(float *)param_1 <= fVar5) {
    if (fVar5 <= fVar4) {
      uVar2 = 0;
      goto LAB_00e3e4c8;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    if (*(float *)param_2 < *(float *)param_1) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      fVar4 = *(float *)param_3;
      uVar2 = 2;
      goto LAB_00e3e4c8;
    }
    fVar5 = (float)uVar3;
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    bVar1 = fVar5 <= fVar4;
    fVar4 = (float)uVar3;
    if (bVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      fVar5 = *(float *)param_3;
      if (*(float *)param_3 < fVar4) {
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar3;
        uVar2 = 2;
        goto LAB_00e3e4c8;
      }
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      fVar5 = fVar4;
    }
  }
  fVar4 = fVar5;
  uVar2 = 1;
LAB_00e3e4c8:
  if (*(float *)param_4 < fVar4) {
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar3;
    if (*(float *)param_2 <= *(float *)param_3) {
      return uVar2 + 1;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    if (*(float *)param_1 <= *(float *)param_2) {
      return uVar2 + 2;
    }
    uVar3 = *(undefined8 *)param_1;
    uVar2 = uVar2 + 3;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
  }
  return uVar2;
}

