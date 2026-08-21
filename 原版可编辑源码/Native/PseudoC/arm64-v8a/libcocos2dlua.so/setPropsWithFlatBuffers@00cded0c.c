
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::WidgetReader::setPropsWithFlatBuffers(WidgetReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined4 uVar5;
  Table TVar6;
  ulong uVar7;
  Table *pTVar8;
  int iVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  undefined8 local_98;
  Color3B aCStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x4d8))(param_1,1);
  (**(code **)(*(long *)param_1 + 0x4a8))(param_1,1);
  (**(code **)(*(long *)param_1 + 0x148))(param_1,&cocos2d::Vec2::ZERO);
  cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,true);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x21) {
    TVar6 = (Table)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x20);
    TVar6 = (Table)0x0;
    if (uVar7 != 0) {
      TVar6 = param_2[uVar7];
    }
  }
  (**(code **)(*(long *)param_1 + 0x600))(param_1,TVar6 != (Table)0x0);
  cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,false);
  cocos2d::ui::Widget::setLayoutComponentEnabled((Widget *)param_1,true);
  (**(code **)(*(long *)param_1 + 0x600))(param_1,0);
  cocos2d::Size::Size(aSStack_50,
                      *(float *)(param_2 + *(ushort *)(param_2 + (0x1a - (long)*(int *)param_2))),
                      *(float *)(param_2 + *(ushort *)(param_2 + (0x1a - (long)*(int *)param_2)) + 4
                                ));
  (**(code **)(*(long *)param_1 + 0x160))(param_1,aSStack_50);
  uVar5 = 0;
  if (0x10 < *(ushort *)(param_2 + -(long)*(int *)param_2)) {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10);
    if (uVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + uVar7);
    }
  }
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar5);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar7 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_2 + uVar7);
  }
  cocos2d::ui::Widget::setActionTag((Widget *)param_1,iVar9);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x27) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x26);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,(char *)(pTVar8 + 4));
  plVar3 = (long *)ComExtensionData::create();
  (**(code **)(*plVar3 + 0x60))(plVar3,local_68);
  (**(code **)(*plVar3 + 0x70))(plVar3,iVar9);
  lVar4 = cocos2d::Node::getComponent(param_1,(basic_string *)&ComExtensionData::COMPONENT_NAME);
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1 + 0x468))(param_1,&ComExtensionData::COMPONENT_NAME);
  }
  (**(code **)(*(long *)param_1 + 0x460))(param_1,plVar3);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x23) {
    TVar6 = (Table)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x22);
    TVar6 = (Table)0x0;
    if (uVar7 != 0) {
      TVar6 = param_2[uVar7];
    }
  }
  (**(code **)(*(long *)param_1 + 0x588))(param_1,TVar6 != (Table)0x0);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,(char *)(pTVar8 + 4));
  (**(code **)(*(long *)param_1 + 0x2d0))(param_1,local_80);
  local_88 = *(undefined4 *)(param_2 + *(ushort *)(param_2 + (0x12 - (long)*(int *)param_2)));
  uStack_84 = *(undefined4 *)(param_2 + *(ushort *)(param_2 + (0x12 - (long)*(int *)param_2)) + 4);
  (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_88);
  (**(code **)(*(long *)param_1 + 0x50))
            (*(undefined4 *)(param_2 + *(ushort *)(param_2 + (0x14 - (long)*(int *)param_2))),
             param_1);
  (**(code **)(*(long *)param_1 + 0x60))
            (*(undefined4 *)
              (param_2 + (ulong)*(ushort *)(param_2 + (0x14 - (long)*(int *)param_2)) + 4),param_1);
  (**(code **)(*(long *)param_1 + 0x1b0))
            (*(undefined4 *)(param_2 + *(ushort *)(param_2 + (8 - (long)*(int *)param_2))),param_1);
  (**(code **)(*(long *)param_1 + 0x1d0))
            (*(undefined4 *)
              (param_2 + (ulong)*(ushort *)(param_2 + (8 - (long)*(int *)param_2)) + 4),param_1);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar7 == 0)) {
    TVar6 = (Table)0x1;
  }
  else {
    TVar6 = param_2[uVar7];
  }
  (**(code **)(*(long *)param_1 + 0x170))(param_1,TVar6 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + uVar7);
  }
  (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar5);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x19) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x18), uVar7 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar7;
  }
  cocos2d::Color3B::Color3B(aCStack_90,(uchar)pTVar8[1],(uchar)pTVar8[2],(uchar)pTVar8[3]);
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,aCStack_90);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar7 == 0)) {
    TVar6 = (Table)0xff;
  }
  else {
    TVar6 = param_2[uVar7];
  }
  (**(code **)(*(long *)param_1 + 0x490))(param_1,TVar6);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) ||
     (uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16), uVar7 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar7;
  }
  local_98 = *(undefined8 *)pTVar8;
  (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_98);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1d) {
    TVar6 = (Table)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1c);
    TVar6 = (Table)0x0;
    if (uVar7 != 0) {
      TVar6 = param_2[uVar7];
    }
  }
  (**(code **)(*(long *)param_1 + 0x598))(param_1,TVar6 != (Table)0x0);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1f) {
    TVar6 = (Table)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1e);
    TVar6 = (Table)0x0;
    if (uVar7 != 0) {
      TVar6 = param_2[uVar7];
    }
  }
  (**(code **)(*(long *)param_1 + 0x5a8))(param_1,TVar6 != (Table)0x0);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x29) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x28);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,(char *)(pTVar8 + 4));
  if (local_b0 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_1 + 0x4c0)) {
    uVar7 = (ulong)((byte)local_b0[0] >> 1);
    pcVar2 = (char *)((ulong)local_b0 | 1);
    if (((byte)local_b0[0] & 1) != 0) {
      uVar7 = local_a8;
      pcVar2 = local_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x4c0),pcVar2,uVar7);
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x2b) {
    pTVar8 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x2a);
    pTVar8 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar8 = param_2 + uVar7 + *(uint *)(param_2 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,(char *)(pTVar8 + 4));
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 0x4d8);
  if (local_c8 != this_00) {
    uVar7 = (ulong)((byte)local_c8[0] >> 1);
    pcVar2 = (char *)((ulong)local_c8 | 1);
    if (((byte)local_c8[0] & 1) != 0) {
      uVar7 = local_c0;
      pcVar2 = local_b8;
    }
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (this_00,pcVar2,uVar7);
  }
  setLayoutComponentPropsWithFlatBuffers((WidgetReader *)this_00,param_1,param_2);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

