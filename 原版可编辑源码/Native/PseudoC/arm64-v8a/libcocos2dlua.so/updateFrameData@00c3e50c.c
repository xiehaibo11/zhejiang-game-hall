
/* cocostudio::Tween::updateFrameData(float) */

undefined1  [16] __thiscall cocostudio::Tween::updateFrameData(Tween *this,float param_1)

{
  basic_string bVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  Tween TVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar12;
  undefined1 auVar11 [16];
  
  if ((1.0 < param_1) && (*(float *)(*(long *)(this + 0x58) + 0x24) != 0.0)) {
    param_1 = fmodf(param_1,1.0);
  }
  fVar12 = param_1 * ((float)*(int *)(this + 0x30) + -1.0);
  if ((fVar12 < (float)*(int *)(this + 0x90)) ||
     (iVar6 = *(int *)(this + 0x8c), (float)(iVar6 + *(int *)(this + 0x90)) <= fVar12)) {
    lVar8 = *(long *)(this + 0x58);
    plVar4 = *(long **)(lVar8 + 0x48);
    lVar2 = *plVar4;
    if ((float)*(int *)(lVar2 + 0x58) <= fVar12) {
      lVar9 = *(long *)(lVar8 + 0x50) - (long)plVar4 >> 3;
      lVar10 = lVar9 + -1;
      lVar2 = plVar4[lVar10];
      if (fVar12 < (float)*(int *)(lVar2 + 0x58)) {
        TVar5 = (Tween)0x0;
LAB_00c3e5fc:
        this[0xa8] = TVar5;
        do {
          iVar6 = *(int *)(this + 0x98);
          *(int *)(this + 0x94) = iVar6;
          lVar7 = plVar4[iVar6];
          lVar2 = (long)iVar6 + 1;
          iVar6 = (int)lVar2;
          if (lVar9 <= lVar2) {
            iVar6 = 0;
          }
          iVar3 = *(int *)(lVar7 + 0x58);
          *(int *)(this + 0x98) = iVar6;
          *(int *)(this + 0x90) = iVar3;
          lVar2 = plVar4[iVar6];
          bVar1 = *(basic_string *)(lVar7 + 0x80);
          if (((byte)bVar1 & 1) == 0) {
            if ((byte)bVar1 >> 1 != 0) {
LAB_00c3e654:
              if ((*(ArmatureAnimation **)(this + 0xa0))[0xb0] == (ArmatureAnimation)0x0) {
                ArmatureAnimation::frameEvent
                          (*(ArmatureAnimation **)(this + 0xa0),*(Bone **)(this + 0x80),
                           (basic_string *)(lVar7 + 0x80),iVar3,(int)fVar12);
                iVar3 = *(int *)(lVar7 + 0x58);
              }
            }
          }
          else if (*(long *)(lVar7 + 0x88) != 0) goto LAB_00c3e654;
          if (((fVar12 == (float)iVar3) ||
              ((this[0xa8] != (Tween)0x0 && (lVar10 == *(int *)(this + 0x94))))) ||
             (((float)iVar3 <= fVar12 && (fVar12 < (float)*(int *)(lVar2 + 0x58)))))
          goto LAB_00c3e6a8;
          plVar4 = *(long **)(lVar8 + 0x48);
        } while( true );
      }
      if (this[0xa8] == (Tween)0x0) {
        TVar5 = (Tween)0x1;
        goto LAB_00c3e5fc;
      }
    }
    (**(code **)(*(long *)this + 0xd8))(this,lVar2,lVar2,1);
    fVar12 = *(float *)(this + 0x2c);
    goto LAB_00c3e72c;
  }
LAB_00c3e6dc:
  if (iVar6 == 0) {
    fVar12 = 0.0;
    iVar6 = *(int *)(this + 0x88);
  }
  else {
    fVar12 = (fVar12 - (float)*(int *)(this + 0x90)) / (float)iVar6;
    iVar6 = *(int *)(this + 0x88);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(this + 0x38);
  }
  if (((iVar6 != 0) && (iVar6 != 10000)) && (this[0xa8] == (Tween)0x0)) {
    cocos2d::tweenfunc::tweenTo(fVar12,iVar6,*(undefined8 *)(*(long *)(this + 0x68) + 0x68));
    auVar11._4_4_ = extraout_var;
    auVar11._0_4_ = extraout_s0;
    auVar11._8_8_ = extraout_var_00;
    return auVar11;
  }
LAB_00c3e72c:
  return ZEXT416((uint)fVar12);
LAB_00c3e6a8:
  *(int *)(this + 0x8c) = *(int *)(lVar2 + 0x58) - iVar3;
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(lVar7 + 0x60);
  (**(code **)(*(long *)this + 0xd8))(this,lVar7,lVar2,0);
  iVar6 = *(int *)(this + 0x8c);
  goto LAB_00c3e6dc;
}

