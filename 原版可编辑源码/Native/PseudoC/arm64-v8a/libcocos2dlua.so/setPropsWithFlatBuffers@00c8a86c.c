
/* cocostudio::PageViewReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::PageViewReader::setPropsWithFlatBuffers
          (PageViewReader *this,Node *param_1,Table *param_2)

{
  ushort uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  SpriteFrameCache *this_00;
  long lVar5;
  long *plVar6;
  unordered_map *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  Table *pTVar10;
  Table *pTVar11;
  Table TVar12;
  int iVar13;
  Table TVar14;
  void *pvVar15;
  void *pvVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_150 [2];
  void *local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138 [8];
  ulong local_130;
  char *local_128;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_120 [8];
  ulong local_118;
  char *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [8];
  ulong local_100;
  char *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [16];
  void *local_e0;
  undefined8 local_d8;
  Color3B aCStack_d0 [8];
  Color3B aCStack_c8 [8];
  Color3B aCStack_c0 [16];
  undefined1 *local_b0;
  void *local_a8 [2];
  undefined8 *local_98;
  void *local_80 [2];
  undefined8 *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
    TVar14 = (Table)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    TVar14 = (Table)0x0;
    if (uVar9 != 0) {
      TVar14 = param_2[uVar9];
    }
  }
  (**(code **)(*(long *)param_1 + 0x680))(param_1,TVar14 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1b) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1a), uVar9 == 0)) {
    TVar14 = (Table)0x0;
  }
  else {
    TVar14 = param_2[uVar9];
  }
  cocos2d::ui::Layout::setBackGroundImageScale9Enabled((Layout *)param_1,TVar14 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9;
  }
  cocos2d::Color3B::Color3B(aCStack_c0,(uchar)pTVar10[1],(uchar)pTVar10[2],(uchar)pTVar10[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9;
  }
  cocos2d::Color3B::Color3B(aCStack_c8,(uchar)pTVar10[1],(uchar)pTVar10[2],(uchar)pTVar10[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9;
  }
  cocos2d::Color3B::Color3B(aCStack_d0,(uchar)pTVar10[1],(uchar)pTVar10[2],(uchar)pTVar10[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9;
  }
  local_d8 = *(undefined8 *)pTVar10;
  cocos2d::ui::Layout::setBackGroundColorVector((Layout *)param_1,(Vec2 *)&local_d8);
  pTVar10 = param_2 + -(long)*(int *)param_2;
  if (*(ushort *)pTVar10 < 0x13) {
    TVar12 = (Table)0xff;
    if (0x10 < *(ushort *)pTVar10) {
      uVar1 = *(ushort *)(pTVar10 + 0x10);
      goto joined_r0x00c8aa40;
    }
LAB_00c8aa58:
    uVar8 = 0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar10 + 0x12) == 0) {
      uVar1 = *(ushort *)(pTVar10 + 0x10);
joined_r0x00c8aa40:
      TVar12 = (Table)0xff;
    }
    else {
      TVar12 = param_2[*(ushort *)(pTVar10 + 0x12)];
      uVar1 = *(ushort *)(pTVar10 + 0x10);
    }
    if ((ulong)uVar1 == 0) goto LAB_00c8aa58;
    uVar8 = *(undefined4 *)(param_2 + uVar1);
  }
  cocos2d::ui::Layout::setBackGroundColorType((Layout *)param_1,uVar8);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,aCStack_c8,aCStack_d0);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,aCStack_c0);
  cocos2d::ui::Layout::setBackGroundColorOpacity((Layout *)param_1,(uchar)TVar12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
  }
  pTVar11 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar11 < 9) {
    iVar13 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c8ab10;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c8ab10:
      iVar13 = 0;
      uVar9 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar9 == 0) goto LAB_00c8ab24;
    }
    else {
      iVar13 = *(int *)(pTVar10 + *(ushort *)(pTVar11 + 8));
      uVar9 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar9 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c8ab24;
      }
    }
    pTVar11 = pTVar10 + uVar9 + *(uint *)(pTVar10 + uVar9);
  }
LAB_00c8ab24:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,(char *)(pTVar11 + 4));
  uVar9 = (ulong)((byte)local_108[0] >> 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar9 = local_100;
  }
  if (uVar9 == 0) goto LAB_00c8ac04;
  if (iVar13 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar9 = (**(code **)(*plVar6 + 0x128))(plVar6,local_108);
    if ((uVar9 & 1) == 0) {
      uVar9 = (ulong)((byte)local_108[0] >> 1);
      pcVar3 = (char *)((ulong)local_108 | 1);
      if (((byte)local_108[0] & 1) != 0) {
        uVar9 = local_100;
        pcVar3 = local_f8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_f0,pcVar3,uVar9);
      goto LAB_00c8ac04;
    }
  }
  else {
    if (iVar13 != 1) goto LAB_00c8ac04;
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar9 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar9 != 0) {
        pTVar11 = pTVar10 + uVar9 + *(uint *)(pTVar10 + uVar9);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_120,(char *)(pTVar11 + 4));
    this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(this_00,(basic_string *)local_108);
    if (lVar5 == 0) {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar9 = (**(code **)(*plVar6 + 0x128))(plVar6,local_120);
      if ((uVar9 & 1) == 0) {
        uVar9 = (ulong)((byte)local_120[0] >> 1);
        pcVar3 = (char *)((ulong)local_120 | 1);
        if (((byte)local_120[0] & 1) != 0) {
          uVar9 = local_118;
          pcVar3 = local_110;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_f0,pcVar3,uVar9);
      }
      else {
        plVar6 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar6 + 0xc0))(local_80,plVar6,local_120);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_138,"metadata");
        local_150[0] = local_138;
        lVar5 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)local_138,
                           (tuple *)&DAT_01415405,(tuple *)local_150);
        puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar7);
        if (((byte)local_138[0] & 1) != 0) {
          operator_delete(local_128);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_150,"textureFileName");
        local_b0 = (undefined1 *)local_150;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)local_150,
                   (tuple *)&DAT_01415405,(tuple *)&local_b0);
        cocos2d::Value::asString();
        if (((ulong)local_150[0] & 1) != 0) {
          operator_delete(local_140);
        }
        plVar6 = (long *)cocos2d::FileUtils::getInstance();
        uVar9 = (**(code **)(*plVar6 + 0x128))(plVar6,local_138);
        if ((uVar9 & 1) == 0) {
          uVar9 = (ulong)((byte)local_138[0] >> 1);
          pcVar3 = (char *)((ulong)local_138 | 1);
          if (((byte)local_138[0] & 1) != 0) {
            uVar9 = local_130;
            pcVar3 = local_128;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_f0,pcVar3,uVar9);
        }
        pvVar16 = local_a8[0];
        puVar4 = local_98;
        if (((byte)local_138[0] & 1) != 0) {
          operator_delete(local_128);
          pvVar16 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar15 = (void *)*puVar4;
          local_a8[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_a8[0];
          puVar4 = pvVar15;
        }
        local_a8[0] = (void *)0x0;
        pvVar15 = local_80[0];
        puVar4 = local_70;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
          pvVar15 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_80[0] = pvVar15;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar15 = local_80[0];
          puVar4 = pvVar16;
        }
        local_80[0] = (void *)0x0;
        if (pvVar15 != (void *)0x0) {
          operator_delete(pvVar15);
        }
      }
      if (((byte)local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
      goto LAB_00c8ac04;
    }
    if (((byte)local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
  }
  cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_108,iVar13);
LAB_00c8ac04:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar9 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
  }
  if ((*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 0x19) ||
     (uVar9 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 0x18), uVar9 == 0)) {
    pTVar11 = (Table *)0x0;
  }
  else {
    pTVar11 = pTVar10 + uVar9;
  }
  cocos2d::Color3B::Color3B
            ((Color3B *)local_120,(uchar)pTVar11[1],(uchar)pTVar11[2],(uchar)pTVar11[3]);
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,local_120);
  if ((*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 0xf) ||
     (uVar9 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 0xe), uVar9 == 0)) {
    TVar12 = (Table)0xff;
  }
  else {
    TVar12 = pTVar10[uVar9];
  }
  (**(code **)(*(long *)param_1 + 0x490))(param_1,TVar12);
  plVar6 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar9 == 0)) {
    pTVar11 = (Table *)0x0;
  }
  else {
    pTVar11 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,param_1,pTVar11);
  if (TVar14 == (Table)0x0) {
    uVar9 = cocos2d::ui::Widget::isIgnoreContentAdaptWithSize((Widget *)param_1);
    if ((uVar9 & 1) == 0) {
      cocos2d::Size::Size((Size *)local_80,
                          *(float *)(pTVar10 + *(ushort *)(pTVar10 + (0x1a - (long)*(int *)pTVar10))
                                    ),
                          *(float *)(pTVar10 + *(ushort *)(pTVar10 + (0x1a - (long)*(int *)pTVar10))
                                    + 4));
      (**(code **)(*(long *)param_1 + 0x160))(param_1,local_80);
    }
  }
  else {
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) ||
       (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16), uVar9 == 0)) {
      pTVar10 = (Table *)0x0;
    }
    else {
      pTVar10 = param_2 + uVar9;
    }
    cocos2d::Rect::Rect((Rect *)local_80,*(float *)pTVar10,*(float *)(pTVar10 + 4),
                        *(float *)(pTVar10 + 8),*(float *)(pTVar10 + 0xc));
    cocos2d::ui::Layout::setBackGroundImageCapInsets((Layout *)param_1,(Rect *)local_80);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x19) ||
       (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x18), uVar9 == 0)) {
      pTVar10 = (Table *)0x0;
    }
    else {
      pTVar10 = param_2 + uVar9;
    }
    cocos2d::Size::Size((Size *)local_a8,*(float *)pTVar10,*(float *)(pTVar10 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_a8);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

