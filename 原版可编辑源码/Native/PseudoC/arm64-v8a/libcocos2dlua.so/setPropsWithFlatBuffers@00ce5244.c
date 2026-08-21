
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::UserCameraReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::UserCameraReader::setPropsWithFlatBuffers
          (UserCameraReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  long *plVar2;
  CameraBackgroundBrush *pCVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  Table *pTVar7;
  Table *pTVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)(param_2 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x42c) = uVar5;
  plVar2 = (long *)Node3DReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar6 == 0)) {
    pTVar7 = (Table *)0x0;
  }
  else {
    pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,pTVar7);
  pTVar7 = param_2 + -(long)*(int *)param_2;
  if (((*(ushort *)pTVar7 < 0xf) || ((ulong)*(ushort *)(pTVar7 + 0xe) == 0)) ||
     (param_2[*(ushort *)(pTVar7 + 0xe)] == (Table)0x0)) {
    lVar4 = GameNode3DReader::getSceneBrushInstance();
    if (lVar4 != 0) {
      pCVar3 = (CameraBackgroundBrush *)GameNode3DReader::getSceneBrushInstance();
      cocos2d::Camera::setBackgroundBrush((Camera *)param_1,pCVar3);
    }
  }
  else {
    if (*(ushort *)pTVar7 < 0x11) {
      pTVar8 = (Table *)0x0;
    }
    else {
      pTVar8 = (Table *)0x0;
      if ((ulong)*(ushort *)(pTVar7 + 0x10) != 0) {
        pTVar8 = param_2 + *(ushort *)(pTVar7 + 0x10) +
                 *(uint *)(param_2 + *(ushort *)(pTVar7 + 0x10));
      }
    }
    if ((*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar8 + uVar6 + *(uint *)(pTVar8 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,(char *)(pTVar7 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar7 + uVar6 + *(uint *)(pTVar7 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,(char *)(pTVar7 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar7 + uVar6 + *(uint *)(pTVar7 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,(char *)(pTVar7 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar7 + uVar6 + *(uint *)(pTVar7 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_98,(char *)(pTVar7 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x19) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x18);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar7 + uVar6 + *(uint *)(pTVar7 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,(char *)(pTVar7 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1b) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1a);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
       (uVar6 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar6 == 0)) {
      pTVar7 = (Table *)0x0;
    }
    else {
      pTVar7 = pTVar7 + uVar6 + *(uint *)(pTVar7 + uVar6);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_c8,(char *)(pTVar7 + 4));
    plVar2 = (long *)cocos2d::FileUtils::getInstance();
    uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_50);
    if ((((((uVar6 & 1) == 0) ||
          (uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_68), (uVar6 & 1) == 0)) ||
         (uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_80), (uVar6 & 1) == 0)) ||
        ((uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_98), (uVar6 & 1) == 0 ||
         (uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_b0), (uVar6 & 1) == 0)))) ||
       (uVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,local_c8), (uVar6 & 1) == 0)) {
      lVar4 = GameNode3DReader::getSceneBrushInstance();
      if (lVar4 != 0) {
        pCVar3 = (CameraBackgroundBrush *)GameNode3DReader::getSceneBrushInstance();
        cocos2d::Camera::setBackgroundBrush((Camera *)param_1,pCVar3);
      }
    }
    else {
      pCVar3 = (CameraBackgroundBrush *)
               cocos2d::CameraBackgroundSkyBoxBrush::create
                         ((basic_string *)local_50,(basic_string *)local_68,(basic_string *)local_80
                          ,(basic_string *)local_98,(basic_string *)local_b0,
                          (basic_string *)local_c8);
      cocos2d::Camera::setBackgroundBrush((Camera *)param_1,pCVar3);
    }
    if (((byte)local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

