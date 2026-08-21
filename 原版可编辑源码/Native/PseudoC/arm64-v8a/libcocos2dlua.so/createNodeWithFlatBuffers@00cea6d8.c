
/* cocostudio::Light3DReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

long * __thiscall
cocostudio::Light3DReader::createNodeWithFlatBuffers(Light3DReader *this,Table *param_1)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  Table *pTVar5;
  BaseLight *this_00;
  ulong extraout_d0;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  plVar2 = (long *)cocos2d::Node::create();
  pTVar5 = param_1 + -(long)*(int *)param_1;
  uVar1 = *(ushort *)pTVar5;
  if (uVar1 < 9) {
    uVar4 = 0;
    uVar9 = 0;
    if (uVar1 < 7) {
      this_00 = (BaseLight *)
                cocos2d::DirectionLight::create
                          ((Vec3 *)&cocos2d::Vec3::UNIT_Z,(Color3B *)&cocos2d::Color3B::WHITE);
      if (this_00 != (BaseLight *)0x0) {
        cocos2d::BaseLight::setIntensity(this_00,0.0);
        this_00[0x300] = (BaseLight)0x0;
        *(undefined4 *)(this_00 + 0x2fc) = 0;
      }
      goto LAB_00cea8d8;
    }
LAB_00cea774:
    uVar1 = *(ushort *)(pTVar5 + 6);
joined_r0x00cea8c4:
    fVar7 = 0.0;
    uVar6 = extraout_d0;
    fVar8 = 0.0;
    if (uVar1 == 0) goto LAB_00cea8c8;
LAB_00cea77c:
    uVar3 = (uint)uVar4;
    fVar8 = fVar7;
  }
  else {
    uVar4 = 0;
    if ((ulong)*(ushort *)(pTVar5 + 8) != 0) {
      uVar4 = (ulong)*(uint *)(param_1 + *(ushort *)(pTVar5 + 8));
    }
    if ((uVar1 < 0xb) || (uVar1 < 0xd)) {
      uVar9 = 0;
      goto LAB_00cea774;
    }
    if (uVar1 < 0xf) {
      uVar9 = 0;
      uVar1 = *(ushort *)(pTVar5 + 6);
      goto joined_r0x00cea8c4;
    }
    uVar9 = 0;
    if ((ulong)*(ushort *)(pTVar5 + 0xe) != 0) {
      uVar9 = *(undefined4 *)(param_1 + *(ushort *)(pTVar5 + 0xe));
    }
    if ((uVar1 < 0x11) || ((ulong)*(ushort *)(pTVar5 + 0x10) == 0)) goto LAB_00cea774;
    uVar6 = (ulong)(uint)(*(float *)(param_1 + *(ushort *)(pTVar5 + 0x10)) * 0.5);
    fVar7 = *(float *)(param_1 + *(ushort *)(pTVar5 + 0x10)) * 0.5 * 0.017453292;
    fVar8 = fVar7;
    if (*(ushort *)(pTVar5 + 6) != 0) goto LAB_00cea77c;
LAB_00cea8c8:
    uVar3 = (uint)uVar4;
  }
  if (uVar3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00cea7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar2 = (long *)(*(code *)((ulong)(byte)(&DAT_014178fc)[uVar4] * 4 + 0xcea7ac))
                               (uVar6,fVar8,uVar9);
    return plVar2;
  }
  this_00 = (BaseLight *)0x0;
LAB_00cea8d8:
  (**(code **)(*plVar2 + 0x208))(plVar2,this_00);
  (**(code **)(*(long *)this + 0x18))(this,plVar2,param_1);
  return plVar2;
}

