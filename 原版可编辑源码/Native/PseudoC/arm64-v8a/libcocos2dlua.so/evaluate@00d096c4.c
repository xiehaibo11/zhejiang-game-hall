
/* cocos2d::AnimationCurve<3>::evaluate(float, float*, cocos2d::EvaluateType) const */

void __thiscall
cocos2d::AnimationCurve<3>::evaluate
          (float param_1,AnimationCurve<3> *this,float *param_2,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  size_t __n;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  Quaternion aQStack_80 [16];
  float local_70 [4];
  float *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar6 = *(int *)(this + 0x38) - 1;
  if (uVar6 == 0) {
LAB_00d0976c:
    __n = (size_t)*(int *)(this + 0x3c);
    pfVar8 = *(float **)(this + 0x28);
  }
  else {
    pfVar8 = *(float **)(this + 0x30);
    fVar10 = *pfVar8;
    if (param_1 <= fVar10) goto LAB_00d0976c;
    if (param_1 < pfVar8[(int)uVar6]) {
      uVar9 = 0;
      do {
        uVar3 = uVar6 + uVar9 >> 1;
        fVar11 = pfVar8[uVar3];
        if ((fVar11 <= param_1) && (param_1 <= pfVar8[uVar3 + 1])) {
          uVar7 = (ulong)(uVar3 * 3);
          fVar10 = pfVar8[uVar3 + 1];
          if (param_4 < 4) goto LAB_00d097cc;
          goto LAB_00d0977c;
        }
        uVar2 = uVar3 - 1;
        if (fVar11 <= param_1) {
          uVar2 = uVar6;
          uVar9 = uVar3 + 1;
        }
        uVar6 = uVar2;
      } while (uVar9 <= uVar2);
      fVar11 = pfVar8[0xffffffff];
      uVar7 = 0xfffffffd;
      if (3 < param_4) goto LAB_00d0977c;
LAB_00d097cc:
      pfVar1 = (float *)(*(long *)(this + 0x28) + uVar7 * 4);
      fVar10 = (param_1 - fVar11) / (fVar10 - fVar11);
      pfVar8 = pfVar1 + 3;
      switch((ulong)(&switchD_00d097fc::switchdataD_01418850)[param_4] * 4 + 0xd09800) {
      case 0xd09800:
        *param_2 = *pfVar1 + fVar10 * (pfVar1[3] - *pfVar1);
        param_2[1] = pfVar1[1] + fVar10 * (pfVar1[4] - pfVar1[1]);
        param_2[2] = pfVar1[2] + fVar10 * (pfVar1[5] - pfVar1[2]);
        break;
      case 0xd0984c:
        __n = (size_t)*(int *)(this + 0x3c);
        if (ABS(fVar10) <= 0.5) {
          pfVar8 = pfVar1;
        }
        goto LAB_00d09774;
      case 0xd09864:
        Quaternion::Quaternion((Quaternion *)&local_60);
        if (0.0 <= fVar10) {
          Quaternion::Quaternion((Quaternion *)local_70,pfVar1);
          Quaternion::Quaternion(aQStack_80,pfVar8);
          Quaternion::slerp((Quaternion *)local_70,aQStack_80,fVar10,(Quaternion *)&local_60);
        }
        else {
          Quaternion::Quaternion((Quaternion *)local_70,pfVar8);
          Quaternion::Quaternion(aQStack_80,pfVar1);
          Quaternion::slerp((Quaternion *)local_70,aQStack_80,fVar10,(Quaternion *)&local_60);
        }
        Quaternion::~Quaternion(aQStack_80);
        Quaternion::~Quaternion((Quaternion *)local_70);
        *(undefined8 *)(param_2 + 2) = uStack_58;
        *(float **)param_2 = local_60;
        Quaternion::~Quaternion((Quaternion *)&local_60);
        break;
      case 0xd098ac:
        plVar5 = *(long **)(this + 0x60);
        if (plVar5 != (long *)0x0) {
          local_70[0] = param_1;
          local_60 = param_2;
          (**(code **)(*plVar5 + 0x30))(plVar5,local_70,&local_60);
        }
      }
      goto LAB_00d0977c;
    }
    __n = (size_t)*(int *)(this + 0x3c);
    pfVar8 = (float *)(*(long *)(this + 0x28) + (long)(int)(uVar6 * 3) * 4);
  }
LAB_00d09774:
  memcpy(param_2,pfVar8,__n);
LAB_00d0977c:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

