
/* cocostudio::UserCameraReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
cocostudio::UserCameraReader::createNodeWithFlatBuffers(UserCameraReader *this,Table *param_1)

{
  ushort uVar1;
  long lVar2;
  Director *this_00;
  Size *pSVar3;
  undefined8 uVar4;
  Table *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar6 = 1.0;
  pTVar5 = param_1 + -(long)*(int *)param_1;
  uVar1 = *(ushort *)pTVar5;
  if (uVar1 < 7) {
    fVar8 = 1000.0;
    fVar7 = 60.0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar5 + 6) == 0) {
      fVar7 = 60.0;
    }
    else {
      fVar7 = *(float *)(param_1 + *(ushort *)(pTVar5 + 6));
    }
    fVar6 = 1.0;
    if (8 < uVar1) {
      if ((ulong)*(ushort *)(pTVar5 + 8) == 0) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = *(float *)(param_1 + *(ushort *)(pTVar5 + 8));
      }
      if ((10 < uVar1) && ((ulong)*(ushort *)(pTVar5 + 10) != 0)) {
        fVar8 = *(float *)(param_1 + *(ushort *)(pTVar5 + 10));
        goto LAB_00ce58d4;
      }
    }
    fVar8 = 1000.0;
  }
LAB_00ce58d4:
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar3 = (Size *)cocos2d::Director::getWinSize(this_00);
  cocos2d::Size::Size((Size *)&local_60,pSVar3);
  uVar4 = cocos2d::Camera::createPerspective(fVar7,local_60 / fStack_5c,fVar6,fVar8);
  (**(code **)(*(long *)this + 0x18))(this,uVar4,param_1);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

