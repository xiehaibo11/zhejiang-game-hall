
/* ArmatureNodeReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
ArmatureNodeReader::setPropsWithFlatBuffers(ArmatureNodeReader *this,Node *param_1,Table *param_2)

{
  void *__src;
  long lVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  FileUtils *this_00;
  ArmatureDataManager *this_01;
  basic_string *pbVar5;
  Table TVar6;
  ulong uVar7;
  Table *pTVar8;
  code *pcVar9;
  ulong uVar10;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  basic_string local_a0 [8];
  ulong local_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"");
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  if ((*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) ||
     (uVar7 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6), uVar7 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = pTVar8 + uVar7 + *(uint *)(pTVar8 + uVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,(char *)(pTVar8 + 4));
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  uVar7 = (**(code **)(*plVar4 + 0x128))(plVar4,local_88);
  if ((uVar7 & 1) == 0) {
    uVar7 = (ulong)((byte)local_88[0] >> 1);
    pcVar2 = (char *)((ulong)local_88 | 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar7 = local_80;
      pcVar2 = local_78;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_70,pcVar2,uVar7);
    goto LAB_00cc97b4;
  }
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_a0,plVar4,local_88);
  __src = (void *)((ulong)local_a0 | 1);
  uVar7 = (ulong)((byte)local_a0[0] >> 1);
  if (((byte)local_a0[0] & 1) != 0) {
    __src = local_90;
    uVar7 = local_98;
  }
  uVar10 = uVar7;
  if (uVar7 == 0) {
LAB_00cc9630:
    uVar10 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar10 == 0) goto LAB_00cc9630;
      lVar3 = uVar10 - 1;
      uVar10 = uVar10 - 1;
    } while (*(char *)((long)__src + lVar3) != '/');
  }
  if (uVar10 <= uVar7) {
    uVar7 = uVar10;
  }
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    __dest = (void *)((ulong)&local_b8 | 1);
    local_b8 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_00cc968c;
  }
  else {
    uVar10 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar10);
    local_b8 = uVar10 | 1;
    local_b0 = uVar7;
    local_a8 = __dest;
LAB_00cc968c:
    memcpy(__dest,__src,uVar7);
  }
  *(undefined1 *)((long)__dest + uVar7) = 0;
  this_00 = (FileUtils *)cocos2d::FileUtils::getInstance();
  cocos2d::FileUtils::addSearchPath(this_00,(basic_string *)&local_b8,false);
  this_01 = (ArmatureDataManager *)cocostudio::ArmatureDataManager::getInstance();
  pbVar5 = (basic_string *)cocostudio::ArmatureDataManager::addArmatureFileInfo(this_01,local_a0);
  getArmatureName(pbVar5);
  (**(code **)(*(long *)param_1 + 0x530))(param_1,local_d0);
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,(char *)(pTVar8 + 4));
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar7 == 0)) {
    pcVar9 = *(code **)(*(long *)param_1 + 0x588);
LAB_00cc9808:
    plVar4 = (long *)(*pcVar9)(param_1);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
       (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar7 == 0)) {
      TVar6 = (Table)0x1;
    }
    else {
      TVar6 = param_2[uVar7];
    }
    (**(code **)(*plVar4 + 0xd0))(plVar4,local_d0,0xffffffff,TVar6);
  }
  else {
    pcVar9 = *(code **)(*(long *)param_1 + 0x588);
    if (param_2[uVar7] != (Table)0x0) goto LAB_00cc9808;
    plVar4 = (long *)(*pcVar9)(param_1);
    (**(code **)(*plVar4 + 0xd0))(plVar4,local_d0,0xffffffff,0xffffffff);
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x588))(param_1);
    (**(code **)(*plVar4 + 0x100))(plVar4,0);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00cc97b4:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

