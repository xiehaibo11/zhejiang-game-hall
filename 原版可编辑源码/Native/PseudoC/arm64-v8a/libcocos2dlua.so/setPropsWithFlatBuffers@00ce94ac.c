
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::GameNode3DReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::GameNode3DReader::setPropsWithFlatBuffers
          (GameNode3DReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  Table *pTVar5;
  Table *pTVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [16];
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) {
    pTVar6 = (Table *)0x0;
  }
  else {
    uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4);
    pTVar6 = (Table *)0x0;
    if (uVar3 != 0) {
      pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,(char *)(pTVar6 + 4));
  (**(code **)(*(long *)param_1 + 0x2d0))(param_1,local_60);
  DAT_017871c8 = 0;
  pTVar6 = param_2 + -(long)*(int *)param_2;
  lVar4 = -(long)*(int *)param_2;
  if (((8 < *(ushort *)pTVar6) && ((ulong)*(ushort *)(pTVar6 + 8) != 0)) &&
     (param_2[*(ushort *)(pTVar6 + 8)] != (Table)0x0)) {
    if (*(ushort *)pTVar6 < 0xb) {
      pTVar5 = (Table *)0x0;
    }
    else {
      pTVar5 = (Table *)0x0;
      if ((ulong)*(ushort *)(pTVar6 + 10) != 0) {
        pTVar5 = param_2 + *(ushort *)(pTVar6 + 10) + *(uint *)(param_2 + *(ushort *)(pTVar6 + 10));
      }
    }
    if ((*(ushort *)(pTVar5 + -(long)*(int *)pTVar5) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar5 + -(long)*(int *)pTVar5 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar5 + uVar3 + *(uint *)(pTVar5 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,(char *)(pTVar6 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) {
      pTVar6 = (Table *)0x0;
    }
    else {
      uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc);
      pTVar6 = (Table *)0x0;
      if (uVar3 != 0) {
        pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
      }
    }
    if ((*(ushort *)(pTVar6 + -(long)*(int *)pTVar6) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar6 + -(long)*(int *)pTVar6 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar6 + uVar3 + *(uint *)(pTVar6 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_90,(char *)(pTVar6 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) {
      pTVar6 = (Table *)0x0;
    }
    else {
      uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe);
      pTVar6 = (Table *)0x0;
      if (uVar3 != 0) {
        pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
      }
    }
    if ((*(ushort *)(pTVar6 + -(long)*(int *)pTVar6) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar6 + -(long)*(int *)pTVar6 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar6 + uVar3 + *(uint *)(pTVar6 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a8,(char *)(pTVar6 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x11) {
      pTVar6 = (Table *)0x0;
    }
    else {
      uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10);
      pTVar6 = (Table *)0x0;
      if (uVar3 != 0) {
        pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
      }
    }
    if ((*(ushort *)(pTVar6 + -(long)*(int *)pTVar6) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar6 + -(long)*(int *)pTVar6 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar6 + uVar3 + *(uint *)(pTVar6 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_c0,(char *)(pTVar6 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) {
      pTVar6 = (Table *)0x0;
    }
    else {
      uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12);
      pTVar6 = (Table *)0x0;
      if (uVar3 != 0) {
        pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
      }
    }
    if ((*(ushort *)(pTVar6 + -(long)*(int *)pTVar6) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar6 + -(long)*(int *)pTVar6 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar6 + uVar3 + *(uint *)(pTVar6 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_d8,(char *)(pTVar6 + 4));
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) {
      pTVar6 = (Table *)0x0;
    }
    else {
      uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14);
      pTVar6 = (Table *)0x0;
      if (uVar3 != 0) {
        pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
      }
    }
    if ((*(ushort *)(pTVar6 + -(long)*(int *)pTVar6) < 5) ||
       (uVar3 = (ulong)*(ushort *)(pTVar6 + -(long)*(int *)pTVar6 + 4), uVar3 == 0)) {
      pTVar6 = (Table *)0x0;
    }
    else {
      pTVar6 = pTVar6 + uVar3 + *(uint *)(pTVar6 + uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f0,(char *)(pTVar6 + 4));
    plVar2 = (long *)cocos2d::FileUtils::getInstance();
    uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_78);
    if ((((((uVar3 & 1) != 0) &&
          (uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_90), (uVar3 & 1) != 0)) &&
         (uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_a8), (uVar3 & 1) != 0)) &&
        ((uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_c0), (uVar3 & 1) != 0 &&
         (uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_d8), (uVar3 & 1) != 0)))) &&
       (uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_f0), (uVar3 & 1) != 0)) {
      DAT_017871c8 = cocos2d::CameraBackgroundSkyBoxBrush::create
                               ((basic_string *)local_78,(basic_string *)local_90,
                                (basic_string *)local_a8,(basic_string *)local_c0,
                                (basic_string *)local_d8,(basic_string *)local_f0);
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
    if (((byte)local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    if (((byte)local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    lVar4 = -(long)*(int *)param_2;
  }
  if (*(ushort *)(param_2 + lVar4) < 0x19) {
    pTVar6 = (Table *)0x0;
  }
  else {
    uVar3 = (ulong)*(ushort *)(param_2 + lVar4 + 0x18);
    pTVar6 = (Table *)0x0;
    if (uVar3 != 0) {
      pTVar6 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,(char *)(pTVar6 + 4));
  plVar2 = (long *)ComExtensionData::create();
  (**(code **)(*plVar2 + 0x60))(plVar2,local_78);
  lVar4 = cocos2d::Node::getComponent(param_1,(basic_string *)&ComExtensionData::COMPONENT_NAME);
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1 + 0x468))(param_1,&ComExtensionData::COMPONENT_NAME);
  }
  (**(code **)(*(long *)param_1 + 0x460))(param_1,plVar2);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

