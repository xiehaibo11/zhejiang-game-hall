
/* cocostudio::Tween::play(cocostudio::MovementBoneData*, int, int, int, int) */

void __thiscall
cocostudio::Tween::play
          (Tween *this,MovementBoneData *param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  BaseData *pBVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  BaseData *pBVar8;
  MovementBoneData *pMVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  ProcessBase::play((ProcessBase *)this,param_2,param_3,param_4,param_5);
  uVar5 = 0xfffffffd;
  if (param_4 != 0) {
    uVar5 = 0xfffffffe;
  }
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x34) = uVar5;
  *(undefined8 *)(this + 0x8c) = 0;
  pMVar9 = *(MovementBoneData **)(this + 0x58);
  (**(code **)(*(long *)this + 0xc0))(this,param_1);
  *(int *)(this + 0x30) = (int)*(float *)(*(MovementBoneData **)(this + 0x58) + 0x2c);
  lVar1 = MovementBoneData::getFrameData(*(MovementBoneData **)(this + 0x58),0);
  *(undefined4 *)(*(long *)(this + 0x60) + 0x74) = *(undefined4 *)(lVar1 + 0x74);
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x80) + 0x570))();
  lVar3 = (**(code **)(*plVar2 + 0x5a8))();
  if (0.3 <= *(float *)(lVar3 + 0x68)) {
    pBVar8 = *(BaseData **)(this + 0x60);
    pBVar4 = (BaseData *)(**(code **)(**(long **)(this + 0x80) + 0x560))();
    TransformHelp::nodeSub(pBVar8,pBVar4);
    uVar11 = NEON_fmov(0x3f800000,4);
    uVar10 = *(undefined8 *)(*(long *)(this + 0x60) + 0x38);
    *(ulong *)(*(long *)(this + 0x60) + 0x38) =
         CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                  (float)uVar10 + (float)uVar11);
  }
  if (*(int *)(this + 0x30) == 0) {
    *(undefined4 *)(this + 0x34) = 0xfffffffc;
    if (param_2 == 0) {
      lVar7 = *(long *)this;
      lVar3 = lVar1;
    }
    else {
      lVar7 = *(long *)this;
      lVar3 = *(long *)(this + 0x60);
    }
    (**(code **)(lVar7 + 0xd8))(this,lVar3,lVar1,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  else {
    lVar3 = *(long *)(this + 0x58);
    if (8 < *(long *)(lVar3 + 0x50) - *(long *)(lVar3 + 0x48)) {
      *(int *)(this + 0x40) = (int)(*(float *)(lVar3 + 0x28) * (float)param_3);
      if ((param_4 == 0) || (*(float *)(lVar3 + 0x24) == 0.0)) {
        if ((param_2 == 0) || (pMVar9 == param_1)) {
          lVar3 = *(long *)this;
          lVar7 = lVar1;
        }
        else {
          lVar3 = *(long *)this;
          lVar7 = *(long *)(this + 0x60);
        }
        pcVar6 = *(code **)(lVar3 + 0xd8);
      }
      else {
        lVar7 = *(long *)(this + 0x60);
        (**(code **)(*(long *)this + 0xd0))(1.0 - *(float *)(lVar3 + 0x24),this);
        lVar1 = (**(code **)(*(long *)this + 0xe0))(this,*(undefined8 *)(this + 0x78));
        pcVar6 = *(code **)(*(long *)this + 0xd8);
      }
      (*pcVar6)(this,lVar7,lVar1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c3dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xe0))(0,this,0);
  return;
}

