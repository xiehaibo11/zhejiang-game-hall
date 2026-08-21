
/* cocostudio::TextAtlasReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::TextAtlasReader::setPropsWithFlatBuffers
          (TextAtlasReader *this,Node *param_1,Table *param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  size_t sVar4;
  Table *pTVar5;
  ulong uVar6;
  Table *pTVar7;
  int iVar8;
  int iVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) {
    pTVar5 = (Table *)0x0;
  }
  else {
    uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6);
    pTVar5 = (Table *)0x0;
    if (uVar6 != 0) {
      pTVar5 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
    }
  }
  pTVar7 = pTVar5 + -(long)*(int *)pTVar5;
  if (*(ushort *)pTVar7 < 9) {
    if (4 < *(ushort *)pTVar7) goto LAB_00c9720c;
LAB_00c97224:
    pTVar5 = (Table *)0x0;
  }
  else {
    if (((ulong)*(ushort *)(pTVar7 + 8) != 0) && (*(int *)(pTVar5 + *(ushort *)(pTVar7 + 8)) != 0))
    goto LAB_00c973a8;
LAB_00c9720c:
    if ((ulong)*(ushort *)(pTVar7 + 4) == 0) goto LAB_00c97224;
    pTVar5 = pTVar5 + *(ushort *)(pTVar7 + 4) + *(uint *)(pTVar5 + *(ushort *)(pTVar7 + 4));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  pTVar5 = pTVar5 + 4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,(char *)pTVar5);
  uVar6 = (**(code **)(*plVar3 + 0x128))(plVar3,local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((uVar6 & 1) == 0) {
    sVar4 = strlen((char *)pTVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_60,(char *)pTVar5,sVar4);
  }
  else {
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
      pTVar7 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
      pTVar7 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar7 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,(char *)(pTVar7 + 4));
    pTVar7 = param_2 + -(long)*(int *)param_2;
    uVar1 = *(ushort *)pTVar7;
    if (uVar1 < 0xd) {
      iVar8 = 0;
LAB_00c97310:
      iVar9 = 0;
    }
    else {
      if ((ulong)*(ushort *)(pTVar7 + 0xc) == 0) {
        iVar8 = 0;
        if (0xe < uVar1) goto LAB_00c972fc;
        goto LAB_00c97310;
      }
      iVar8 = *(int *)(param_2 + *(ushort *)(pTVar7 + 0xc));
      if (uVar1 < 0xf) goto LAB_00c97310;
LAB_00c972fc:
      if ((ulong)*(ushort *)(pTVar7 + 0xe) == 0) goto LAB_00c97310;
      iVar9 = *(int *)(param_2 + *(ushort *)(pTVar7 + 0xe));
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_90,(char *)pTVar5);
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) {
      pTVar5 = (Table *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10);
      pTVar5 = (Table *)0x0;
      if (uVar6 != 0) {
        pTVar5 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a8,(char *)(pTVar5 + 4));
    cocos2d::ui::TextAtlas::setProperty
              ((TextAtlas *)param_1,(basic_string *)local_78,(basic_string *)local_90,iVar8,iVar9,
               (basic_string *)local_a8);
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00c973a8:
  plVar3 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar6 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar6 == 0)) {
    pTVar5 = (Table *)0x0;
  }
  else {
    pTVar5 = param_2 + uVar6 + *(uint *)(param_2 + uVar6);
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,param_1,pTVar5);
  (**(code **)(*(long *)param_1 + 0x600))(param_1,1);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

