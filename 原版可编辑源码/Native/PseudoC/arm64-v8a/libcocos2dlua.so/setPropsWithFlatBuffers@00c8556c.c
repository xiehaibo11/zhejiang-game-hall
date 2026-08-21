
/* cocostudio::ListViewReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::ListViewReader::setPropsWithFlatBuffers
          (ListViewReader *this,Node *param_1,Table *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  SpriteFrameCache *this_00;
  long lVar7;
  unordered_map *puVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  Table *pTVar12;
  Table *pTVar13;
  Table TVar14;
  Table TVar15;
  void *pvVar16;
  long *plVar17;
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
  void *local_a8;
  ulong local_a0;
  undefined8 *local_98;
  void *local_80;
  ulong local_78;
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
    TVar15 = (Table)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    TVar15 = (Table)0x0;
    if (uVar11 != 0) {
      TVar15 = param_2[uVar11];
    }
  }
  (**(code **)(*(long *)param_1 + 0x680))(param_1,TVar15 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1b) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1a), uVar11 == 0)) {
    TVar15 = (Table)0x0;
  }
  else {
    TVar15 = param_2[uVar11];
  }
  cocos2d::ui::Layout::setBackGroundImageScale9Enabled((Layout *)param_1,TVar15 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11;
  }
  cocos2d::Color3B::Color3B(aCStack_c0,(uchar)pTVar12[1],(uchar)pTVar12[2],(uchar)pTVar12[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11;
  }
  cocos2d::Color3B::Color3B(aCStack_c8,(uchar)pTVar12[1],(uchar)pTVar12[2],(uchar)pTVar12[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11;
  }
  cocos2d::Color3B::Color3B(aCStack_d0,(uchar)pTVar12[1],(uchar)pTVar12[2],(uchar)pTVar12[3]);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11;
  }
  local_d8 = *(undefined8 *)pTVar12;
  cocos2d::ui::Layout::setBackGroundColorVector((Layout *)param_1,(Vec2 *)&local_d8);
  pTVar12 = param_2 + -(long)*(int *)param_2;
  if (*(ushort *)pTVar12 < 0x13) {
    TVar14 = (Table)0xff;
    if (0x10 < *(ushort *)pTVar12) {
      uVar2 = *(ushort *)(pTVar12 + 0x10);
      goto joined_r0x00c85740;
    }
LAB_00c85758:
    uVar10 = 0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 0x12) == 0) {
      uVar2 = *(ushort *)(pTVar12 + 0x10);
joined_r0x00c85740:
      TVar14 = (Table)0xff;
    }
    else {
      TVar14 = param_2[*(ushort *)(pTVar12 + 0x12)];
      uVar2 = *(ushort *)(pTVar12 + 0x10);
    }
    if ((ulong)uVar2 == 0) goto LAB_00c85758;
    uVar10 = *(undefined4 *)(param_2 + uVar2);
  }
  cocos2d::ui::Layout::setBackGroundColorType((Layout *)param_1,uVar10);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,aCStack_c8,aCStack_d0);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,aCStack_c0);
  cocos2d::ui::Layout::setBackGroundColorOpacity((Layout *)param_1,(uchar)TVar14);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar13 = pTVar12 + -(long)*(int *)pTVar12;
  if (*(ushort *)pTVar13 < 9) {
    iVar6 = 0;
    if (4 < *(ushort *)pTVar13) goto LAB_00c85810;
    pTVar13 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar13 + 8) == 0) {
LAB_00c85810:
      iVar6 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar13 + 4);
      pTVar13 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c85824;
    }
    else {
      iVar6 = *(int *)(pTVar12 + *(ushort *)(pTVar13 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar13 + 4);
      if (uVar11 == 0) {
        pTVar13 = (Table *)0x0;
        goto LAB_00c85824;
      }
    }
    pTVar13 = pTVar12 + uVar11 + *(uint *)(pTVar12 + uVar11);
  }
LAB_00c85824:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,(char *)(pTVar13 + 4));
  uVar11 = (ulong)((byte)local_108[0] >> 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar11 = local_100;
  }
  if (uVar11 != 0) {
    if (iVar6 == 0) {
      plVar9 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar9 + 0x128))(plVar9,local_108);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)((byte)local_108[0] >> 1);
        pcVar4 = (char *)((ulong)local_108 | 1);
        if (((byte)local_108[0] & 1) != 0) {
          uVar11 = local_100;
          pcVar4 = local_f8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_f0,pcVar4,uVar11);
      }
      else {
LAB_00c858f4:
        cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_108,iVar6);
      }
    }
    else if (iVar6 == 1) {
      if (*(ushort *)(pTVar12 + -(long)*(int *)pTVar12) < 7) {
        pTVar13 = (Table *)0x0;
      }
      else {
        uVar11 = (ulong)*(ushort *)(pTVar12 + -(long)*(int *)pTVar12 + 6);
        pTVar13 = (Table *)0x0;
        if (uVar11 != 0) {
          pTVar13 = pTVar12 + uVar11 + *(uint *)(pTVar12 + uVar11);
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_120,(char *)(pTVar13 + 4));
      this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar7 = cocos2d::SpriteFrameCache::getSpriteFrameByName(this_00,(basic_string *)local_108);
      if (lVar7 != 0) {
        if (((byte)local_120[0] & 1) != 0) {
          operator_delete(local_110);
        }
        goto LAB_00c858f4;
      }
      plVar9 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar9 + 0x128))(plVar9,local_120);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)((byte)local_120[0] >> 1);
        pcVar4 = (char *)((ulong)local_120 | 1);
        if (((byte)local_120[0] & 1) != 0) {
          uVar11 = local_118;
          pcVar4 = local_110;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_f0,pcVar4,uVar11);
      }
      else {
        plVar9 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar9 + 0xc0))(&local_80,plVar9,local_120);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_138,"metadata");
        local_150[0] = local_138;
        lVar7 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)&local_80,(piecewise_construct_t *)local_138,
                           (tuple *)&DAT_01415356,(tuple *)local_150);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar7 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)&local_a8,puVar8);
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
                  ((basic_string *)&local_a8,(piecewise_construct_t *)local_150,
                   (tuple *)&DAT_01415356,(tuple *)&local_b0);
        cocos2d::Value::asString();
        if (((ulong)local_150[0] & 1) != 0) {
          operator_delete(local_140);
        }
        plVar9 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar9 + 0x128))(plVar9,local_138);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)((byte)local_138[0] >> 1);
          pcVar4 = (char *)((ulong)local_138 | 1);
          if (((byte)local_138[0] & 1) != 0) {
            uVar11 = local_130;
            pcVar4 = local_128;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_f0,pcVar4,uVar11);
        }
        pvVar5 = local_a8;
        puVar1 = local_98;
        if (((byte)local_138[0] & 1) != 0) {
          operator_delete(local_128);
          pvVar5 = local_a8;
          puVar1 = local_98;
        }
        while (puVar1 != (void *)0x0) {
          pvVar16 = (void *)*puVar1;
          local_a8 = pvVar5;
          cocos2d::Value::~Value((Value *)(puVar1 + 5));
          if ((*(byte *)(puVar1 + 2) & 1) != 0) {
            operator_delete((void *)puVar1[4]);
          }
          operator_delete(puVar1);
          pvVar5 = local_a8;
          puVar1 = pvVar16;
        }
        local_a8 = (void *)0x0;
        pvVar16 = local_80;
        plVar9 = local_70;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
          pvVar16 = local_80;
          plVar9 = local_70;
        }
        while (plVar9 != (long *)0x0) {
          plVar17 = (long *)*plVar9;
          local_80 = pvVar16;
          cocos2d::Value::~Value((Value *)(plVar9 + 5));
          if ((*(byte *)(plVar9 + 2) & 1) != 0) {
            operator_delete((void *)plVar9[4]);
          }
          operator_delete(plVar9);
          pvVar16 = local_80;
          plVar9 = plVar17;
        }
        local_80 = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      if (((byte)local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
    }
  }
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar11 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  if ((*(ushort *)(pTVar12 + -(long)*(int *)pTVar12) < 0x19) ||
     (uVar11 = (ulong)*(ushort *)(pTVar12 + -(long)*(int *)pTVar12 + 0x18), uVar11 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = pTVar12 + uVar11;
  }
  cocos2d::Color3B::Color3B
            ((Color3B *)local_150,(uchar)pTVar13[1],(uchar)pTVar13[2],(uchar)pTVar13[3]);
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,local_150);
  if ((*(ushort *)(pTVar12 + -(long)*(int *)pTVar12) < 0xf) ||
     (uVar11 = (ulong)*(ushort *)(pTVar12 + -(long)*(int *)pTVar12 + 0xe), uVar11 == 0)) {
    TVar14 = (Table)0xff;
  }
  else {
    TVar14 = pTVar12[uVar11];
  }
  (**(code **)(*(long *)param_1 + 0x490))(param_1,TVar14);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1d) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1c), uVar11 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar11;
  }
  cocos2d::Size::Size((Size *)local_120,*(float *)pTVar13,*(float *)(pTVar13 + 4));
  cocos2d::ui::ScrollView::setInnerContainerSize((ScrollView *)param_1,(Size *)local_120);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x21) {
    TVar14 = (Table)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x20);
    TVar14 = (Table)0x0;
    if (uVar11 != 0) {
      TVar14 = param_2[uVar11];
    }
  }
  cocos2d::ui::ScrollView::setBounceEnabled((ScrollView *)param_1,TVar14 != (Table)0x0);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x25) {
    pTVar13 = (Table *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x24);
    pTVar13 = (Table *)0x0;
    if (uVar11 != 0) {
      pTVar13 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,(char *)(pTVar13 + 4));
  uVar11 = (ulong)local_80 >> 1 & 0x7f;
  if (((ulong)local_80 & 1) != 0) {
    uVar11 = local_78;
  }
  if (uVar11 == 8) {
    plVar9 = (long *)((ulong)&local_80 | 1);
    if (((ulong)local_80 & 1) != 0) {
      plVar9 = local_70;
    }
    if (*plVar9 != 0x6c61636974726556) goto LAB_00c85ebc;
    (**(code **)(*(long *)param_1 + 0x6d0))(param_1,1);
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x27) {
      pTVar13 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x26);
      pTVar13 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar13 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,(char *)(pTVar13 + 4));
    uVar11 = (ulong)local_a8 >> 1 & 0x7f;
    if (((ulong)local_a8 & 1) != 0) {
      uVar11 = local_a0;
    }
    if (uVar11 == 0x16) {
      puVar1 = (undefined8 *)((ulong)&local_a8 | 1);
      if (((ulong)local_a8 & 1) != 0) {
        puVar1 = local_98;
      }
      iVar6 = memcmp(puVar1,"Align_HorizontalCenter",0x16);
      if (iVar6 == 0) {
        cocos2d::ui::ListView::setGravity((ListView *)param_1,2);
      }
    }
    else if (uVar11 == 0xb) {
      puVar1 = (undefined8 *)((ulong)&local_a8 | 1);
      if (((ulong)local_a8 & 1) != 0) {
        puVar1 = local_98;
      }
      iVar6 = memcmp(puVar1,"Align_Right",0xb);
      if (iVar6 == 0) {
        cocos2d::ui::ListView::setGravity((ListView *)param_1,1);
      }
    }
    else if (uVar11 == 0) {
      cocos2d::ui::ListView::setGravity((ListView *)param_1,0);
    }
  }
  else {
    if (uVar11 != 0) goto LAB_00c85ebc;
    (**(code **)(*(long *)param_1 + 0x6d0))(param_1,2);
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x29) {
      pTVar13 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x28);
      pTVar13 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar13 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,(char *)(pTVar13 + 4));
    uVar11 = (ulong)local_a8 >> 1 & 0x7f;
    if (((ulong)local_a8 & 1) != 0) {
      uVar11 = local_a0;
    }
    if (uVar11 == 0x14) {
      puVar1 = (undefined8 *)((ulong)&local_a8 | 1);
      if (((ulong)local_a8 & 1) != 0) {
        puVar1 = local_98;
      }
      iVar6 = memcmp(puVar1,"Align_VerticalCenter",0x14);
      if (iVar6 == 0) {
        cocos2d::ui::ListView::setGravity((ListView *)param_1,5);
      }
    }
    else if (uVar11 == 0xc) {
      puVar1 = (undefined8 *)((ulong)&local_a8 | 1);
      if (((ulong)local_a8 & 1) != 0) {
        puVar1 = local_98;
      }
      iVar6 = memcmp(puVar1,"Align_Bottom",0xc);
      if (iVar6 == 0) {
        cocos2d::ui::ListView::setGravity((ListView *)param_1,4);
      }
    }
    else if (uVar11 == 0) {
      cocos2d::ui::ListView::setGravity((ListView *)param_1,3);
    }
  }
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00c85ebc:
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x23) {
    iVar6 = 0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x22);
    iVar6 = 0;
    if (uVar11 != 0) {
      iVar6 = *(int *)(param_2 + uVar11);
    }
  }
  cocos2d::ui::ListView::setItemsMargin((ListView *)param_1,(float)iVar6);
  plVar9 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar11 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,param_1,pTVar13);
  if (TVar15 == (Table)0x0) {
    uVar11 = cocos2d::ui::Widget::isIgnoreContentAdaptWithSize((Widget *)param_1);
    if ((uVar11 & 1) == 0) {
      cocos2d::Size::Size((Size *)&local_a8,
                          *(float *)(pTVar12 + *(ushort *)(pTVar12 + (0x1a - (long)*(int *)pTVar12))
                                    ),
                          *(float *)(pTVar12 + *(ushort *)(pTVar12 + (0x1a - (long)*(int *)pTVar12))
                                    + 4));
      (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_a8);
    }
  }
  else {
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) ||
       (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16), uVar11 == 0)) {
      pTVar12 = (Table *)0x0;
    }
    else {
      pTVar12 = param_2 + uVar11;
    }
    cocos2d::Rect::Rect((Rect *)&local_a8,*(float *)pTVar12,*(float *)(pTVar12 + 4),
                        *(float *)(pTVar12 + 8),*(float *)(pTVar12 + 0xc));
    cocos2d::ui::Layout::setBackGroundImageCapInsets((Layout *)param_1,(Rect *)&local_a8);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x19) ||
       (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x18), uVar11 == 0)) {
      pTVar12 = (Table *)0x0;
    }
    else {
      pTVar12 = param_2 + uVar11;
    }
    cocos2d::Size::Size((Size *)local_138,*(float *)pTVar12,*(float *)(pTVar12 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_138);
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

