
/* cocos2d::experimental::AudioMixer::track_t::adjustVolumeRamp(bool, bool) */

void __thiscall
cocos2d::experimental::AudioMixer::track_t::adjustVolumeRamp
          (track_t *this,bool param_1,bool param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2) {
    fVar5 = *(float *)(this + 0xa4);
    if (((0.0 < fVar5) &&
        (fVar7 = *(float *)(this + 0x94), fVar7 <= fVar5 + *(float *)(this + 0x9c))) ||
       ((fVar6 = *(float *)(this + 0x9c), fVar5 < 0.0 &&
        (fVar7 = *(float *)(this + 0x94), fVar5 + fVar6 <= fVar7)))) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xa4) = 0;
      *(float *)(this + 0x9c) = fVar7;
      iVar3 = (uint)*(ushort *)(this + 4) << 0x10;
    }
    else if (fVar6 <= 0.0) {
      iVar3 = 0;
    }
    else if (16.0 <= fVar6) {
      iVar3 = -1;
    }
    else {
      iVar3 = (int)(fVar6 * 2.6843546e+08 + 0.5);
    }
    *(int *)(this + 8) = iVar3;
    fVar5 = *(float *)(this + 0xa8);
    if (((0.0 < fVar5) &&
        (fVar7 = *(float *)(this + 0x98), fVar7 <= fVar5 + *(float *)(this + 0xa0))) ||
       ((fVar6 = *(float *)(this + 0xa0), fVar5 < 0.0 &&
        (fVar7 = *(float *)(this + 0x98), fVar5 + fVar6 <= fVar7)))) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0xa8) = 0;
      *(float *)(this + 0xa0) = fVar7;
      *(uint *)(this + 0xc) = (uint)*(ushort *)(this + 6) << 0x10;
    }
    else if (0.0 < fVar6) {
      if (16.0 <= fVar6) {
        *(undefined4 *)(this + 0xc) = 0xffffffff;
      }
      else {
        *(int *)(this + 0xc) = (int)(fVar6 * 2.6843546e+08 + 0.5);
      }
    }
    else {
      *(undefined4 *)(this + 0xc) = 0;
    }
    goto joined_r0x00e75be0;
  }
  iVar3 = *(int *)(this + 0x10);
  if (iVar3 < 1) {
    uVar4 = *(uint *)(this + 8);
    if ((-1 < iVar3) ||
       (uVar1 = *(ushort *)(this + 4), (int)(short)uVar1 < (int)(uVar4 + iVar3) >> 0x10))
    goto LAB_00e75a98;
LAB_00e75ab0:
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 8) = (uint)uVar1 << 0x10;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x94);
  }
  else {
    uVar4 = *(uint *)(this + 8);
    uVar1 = *(ushort *)(this + 4);
    if ((int)(short)uVar1 <= (int)(uVar4 + iVar3) >> 0x10) goto LAB_00e75ab0;
LAB_00e75a98:
    *(float *)(this + 0x9c) = (float)uVar4 * 3.7252903e-09;
  }
  iVar3 = *(int *)(this + 0x14);
  if (iVar3 < 1) {
    uVar4 = *(uint *)(this + 0xc);
    if ((-1 < iVar3) ||
       (uVar1 = *(ushort *)(this + 6), (int)(short)uVar1 < (int)(uVar4 + iVar3) >> 0x10))
    goto LAB_00e75b08;
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    uVar1 = *(ushort *)(this + 6);
    if ((int)(uVar4 + iVar3) >> 0x10 < (int)(short)uVar1) {
LAB_00e75b08:
      *(float *)(this + 0xa0) = (float)uVar4 * 3.7252903e-09;
      goto joined_r0x00e75be0;
    }
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0xc) = (uint)uVar1 << 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(this + 0x98);
joined_r0x00e75be0:
  if (param_1) {
    iVar3 = *(int *)(this + 0x18);
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        return;
      }
      sVar2 = *(short *)(this + 0x20);
      if ((int)sVar2 < *(int *)(this + 0x1c) + iVar3 >> 0x10) {
        return;
      }
    }
    else {
      sVar2 = *(short *)(this + 0x20);
      if (*(int *)(this + 0x1c) + iVar3 >> 0x10 < (int)sVar2) {
        return;
      }
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(int *)(this + 0x1c) = (int)sVar2 << 0x10;
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0xac);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  return;
}

