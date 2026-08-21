
/* WARNING: Type propagation algorithm not settling */
/* TabHeaderReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
TabHeaderReader::setPropsWithFlatBuffers(TabHeaderReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  SpriteFrameCache *pSVar5;
  long lVar6;
  unordered_map *puVar7;
  ulong uVar8;
  Table *pTVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  Table *pTVar13;
  undefined8 *******local_218 [2];
  void *local_208;
  undefined8 *******local_200;
  ulong local_1f8;
  char *local_1f0;
  undefined1 *******local_1e8;
  ulong local_1e0;
  char *local_1d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ******local_1d0;
  ulong local_1c8;
  char *local_1c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *****local_1b8;
  ulong local_1b0;
  char *local_1a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ****local_1a0;
  ulong local_198;
  char *local_190;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ***local_188;
  ulong local_180;
  char *local_178;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_170;
  ulong local_168;
  char *local_160;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_158;
  ulong local_150;
  char *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_140 [8];
  ulong local_138;
  char *local_130;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_128 [8];
  ulong local_120;
  char *local_118;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [8];
  ulong local_108;
  char *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  void *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  Color4B aCStack_b0 [16];
  undefined8 *******local_a0;
  void *local_98 [2];
  void *local_88;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
    iVar12 = 0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    iVar12 = 0;
    if (uVar8 != 0) {
      iVar12 = *(int *)(param_2 + uVar8);
    }
  }
  cocos2d::ui::TabHeader::setTitleFontSize((TabHeader *)param_1,(float)iVar12);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) {
    pTVar13 = (Table *)0x0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10);
    pTVar13 = (Table *)0x0;
    if (uVar8 != 0) {
      pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_70,(char *)(pTVar13 + 4));
  cocos2d::ui::TabHeader::setTitleText((TabHeader *)param_1,(basic_string *)local_70);
  if (((ulong)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8;
  }
  cocos2d::Color4B::Color4B
            (aCStack_b0,(uchar)pTVar13[1],(uchar)pTVar13[2],(uchar)pTVar13[3],(uchar)*pTVar13);
  cocos2d::ui::TabHeader::setTitleColor((Color4B *)param_1);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"");
  if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 5) {
    pTVar9 = (Table *)0x0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 4);
    pTVar9 = (Table *)0x0;
    if (uVar8 != 0) {
      pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,(char *)(pTVar9 + 4));
  uVar8 = (ulong)((byte)local_e0[0] >> 1);
  if (((byte)local_e0[0] & 1) != 0) {
    uVar8 = local_d8;
  }
  if (uVar8 != 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,local_e0);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)((byte)local_e0[0] >> 1);
      pcVar2 = (char *)((ulong)local_e0 | 1);
      if (((byte)local_e0[0] & 1) != 0) {
        uVar8 = local_d8;
        pcVar2 = local_d0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_c8,pcVar2,uVar8);
    }
    else {
      cocos2d::ui::TabHeader::setTitleFontName((TabHeader *)param_1,(basic_string *)local_e0);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f8,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  pTVar9 = pTVar13 + -(long)*(int *)pTVar13;
  if (*(ushort *)pTVar9 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar9) goto LAB_00ccd6c0;
    pTVar9 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 8) == 0) {
LAB_00ccd6c0:
      iVar12 = 0;
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      pTVar9 = (Table *)0x0;
      if (uVar8 == 0) goto LAB_00ccd6d4;
    }
    else {
      iVar12 = *(int *)(pTVar13 + *(ushort *)(pTVar9 + 8));
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      if (uVar8 == 0) {
        pTVar9 = (Table *)0x0;
        goto LAB_00ccd6d4;
      }
    }
    pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
  }
LAB_00ccd6d4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_110,(char *)(pTVar9 + 4));
  if (iVar12 == 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,local_110);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)((byte)local_110[0] >> 1);
      pcVar2 = (char *)((ulong)local_110 | 1);
      if (((byte)local_110[0] & 1) != 0) {
        uVar8 = local_108;
        pcVar2 = local_100;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_f8,pcVar2,uVar8);
    }
    else {
LAB_00ccd78c:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGround
                ((AbstractCheckButton *)param_1,local_110,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 7) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 6);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_128,(char *)(pTVar9 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_110);
    if (lVar6 != 0) {
      if (((byte)local_128[0] & 1) != 0) {
        operator_delete(local_118);
      }
      goto LAB_00ccd78c;
    }
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,local_128);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)((byte)local_128[0] >> 1);
      pcVar2 = (char *)((ulong)local_128 | 1);
      if (((byte)local_128[0] & 1) != 0) {
        uVar8 = local_120;
        pcVar2 = local_118;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_f8,pcVar2,uVar8);
    }
    else {
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar4 + 0xc0))(local_70,plVar4,local_128);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_140,"metadata");
      local_158 = local_140;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)local_140,
                         (tuple *)&DAT_01416f53,(tuple *)&local_158);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((byte)local_140[0] & 1) != 0) {
        operator_delete(local_130);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_158,"textureFileName");
      local_170 = &local_158;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_158,(tuple *)&DAT_01416f53
                 ,(tuple *)&local_170);
      cocos2d::Value::asString();
      if (((ulong)local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,local_140);
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)((byte)local_140[0] >> 1);
        pcVar2 = (char *)((ulong)local_140 | 1);
        if (((byte)local_140[0] & 1) != 0) {
          uVar8 = local_138;
          pcVar2 = local_130;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_f8,pcVar2,uVar8);
      }
      pvVar11 = local_98[0];
      puVar3 = local_88;
      if (((byte)local_140[0] & 1) != 0) {
        operator_delete(local_130);
        pvVar11 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar10 = (void *)*puVar3;
        local_98[0] = pvVar11;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar11 = local_98[0];
        puVar3 = pvVar10;
      }
      local_98[0] = (void *)0x0;
      pvVar10 = local_70[0];
      puVar3 = local_60;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar10 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_70[0] = pvVar10;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar10 = local_70[0];
        puVar3 = pvVar11;
      }
      local_70[0] = (void *)0x0;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    if (((byte)local_128[0] & 1) != 0) {
      operator_delete(local_118);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x11) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  pTVar9 = pTVar13 + -(long)*(int *)pTVar13;
  if (*(ushort *)pTVar9 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar9) goto LAB_00ccd820;
    pTVar9 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 8) == 0) {
LAB_00ccd820:
      iVar12 = 0;
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      pTVar9 = (Table *)0x0;
      if (uVar8 == 0) goto LAB_00ccd834;
    }
    else {
      iVar12 = *(int *)(pTVar13 + *(ushort *)(pTVar9 + 8));
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      if (uVar8 == 0) {
        pTVar9 = (Table *)0x0;
        goto LAB_00ccd834;
      }
    }
    pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
  }
LAB_00ccd834:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,(char *)(pTVar9 + 4));
  if (iVar12 == 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,local_140);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)((byte)local_140[0] >> 1);
      pcVar2 = (char *)((ulong)local_140 | 1);
      if (((byte)local_140[0] & 1) != 0) {
        uVar8 = local_138;
        pcVar2 = local_130;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_128,pcVar2,uVar8);
    }
    else {
LAB_00ccd8ec:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected
                ((AbstractCheckButton *)param_1,local_140,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 7) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 6);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_158,(char *)(pTVar9 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_140);
    if (lVar6 != 0) {
      if (((ulong)local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      goto LAB_00ccd8ec;
    }
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_158);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_158 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_158 | 1);
      if (((ulong)local_158 & 1) != 0) {
        uVar8 = local_150;
        pcVar2 = local_148;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_128,pcVar2,uVar8);
    }
    else {
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar4 + 0xc0))(local_70,plVar4,&local_158);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_170,"metadata");
      local_188 = &local_170;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_170,
                         (tuple *)&DAT_01416f53,(tuple *)&local_188);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_188,"textureFileName");
      local_1a0 = &local_188;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_188,(tuple *)&DAT_01416f53
                 ,(tuple *)&local_1a0);
      cocos2d::Value::asString();
      if (((ulong)local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_170);
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)local_170 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_170 | 1);
        if (((ulong)local_170 & 1) != 0) {
          uVar8 = local_168;
          pcVar2 = local_160;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_128,pcVar2,uVar8);
      }
      pvVar11 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
        pvVar11 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar10 = (void *)*puVar3;
        local_98[0] = pvVar11;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar11 = local_98[0];
        puVar3 = pvVar10;
      }
      local_98[0] = (void *)0x0;
      pvVar10 = local_70[0];
      puVar3 = local_60;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar10 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_70[0] = pvVar10;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar10 = local_70[0];
        puVar3 = pvVar11;
      }
      local_70[0] = (void *)0x0;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    if (((ulong)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_158,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  pTVar9 = pTVar13 + -(long)*(int *)pTVar13;
  if (*(ushort *)pTVar9 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar9) goto LAB_00ccd980;
    pTVar9 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 8) == 0) {
LAB_00ccd980:
      iVar12 = 0;
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      pTVar9 = (Table *)0x0;
      if (uVar8 == 0) goto LAB_00ccd994;
    }
    else {
      iVar12 = *(int *)(pTVar13 + *(ushort *)(pTVar9 + 8));
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      if (uVar8 == 0) {
        pTVar9 = (Table *)0x0;
        goto LAB_00ccd994;
      }
    }
    pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
  }
LAB_00ccd994:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,(char *)(pTVar9 + 4));
  if (iVar12 == 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_170);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_170 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_170 | 1);
      if (((ulong)local_170 & 1) != 0) {
        uVar8 = local_168;
        pcVar2 = local_160;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_158,pcVar2,uVar8);
    }
    else {
LAB_00ccda4c:
      cocos2d::ui::AbstractCheckButton::loadTextureFrontCross
                ((AbstractCheckButton *)param_1,&local_170,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 7) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 6);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_188,(char *)(pTVar9 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_170);
    if (lVar6 != 0) {
      if (((ulong)local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      goto LAB_00ccda4c;
    }
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_188);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_188 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_188 | 1);
      if (((ulong)local_188 & 1) != 0) {
        uVar8 = local_180;
        pcVar2 = local_178;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_158,pcVar2,uVar8);
    }
    else {
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar4 + 0xc0))(local_70,plVar4,&local_188);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1a0,"metadata");
      local_1b8 = &local_1a0;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_1a0,
                         (tuple *)&DAT_01416f53,(tuple *)&local_1b8);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b8,"textureFileName");
      local_1d0 = &local_1b8;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_1b8,(tuple *)&DAT_01416f53
                 ,(tuple *)&local_1d0);
      cocos2d::Value::asString();
      if (((ulong)local_1b8 & 1) != 0) {
        operator_delete(local_1a8);
      }
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1a0);
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)local_1a0 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_1a0 | 1);
        if (((ulong)local_1a0 & 1) != 0) {
          uVar8 = local_198;
          pcVar2 = local_190;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_158,pcVar2,uVar8);
      }
      pvVar11 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_1a0 & 1) != 0) {
        operator_delete(local_190);
        pvVar11 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar10 = (void *)*puVar3;
        local_98[0] = pvVar11;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar11 = local_98[0];
        puVar3 = pvVar10;
      }
      local_98[0] = (void *)0x0;
      pvVar10 = local_70[0];
      puVar3 = local_60;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar10 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_70[0] = pvVar10;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar10 = local_70[0];
        puVar3 = pvVar11;
      }
      local_70[0] = (void *)0x0;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    if (((ulong)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_188,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  pTVar9 = pTVar13 + -(long)*(int *)pTVar13;
  if (*(ushort *)pTVar9 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar9) goto LAB_00ccdae0;
    pTVar9 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 8) == 0) {
LAB_00ccdae0:
      iVar12 = 0;
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      pTVar9 = (Table *)0x0;
      if (uVar8 == 0) goto LAB_00ccdaf4;
    }
    else {
      iVar12 = *(int *)(pTVar13 + *(ushort *)(pTVar9 + 8));
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      if (uVar8 == 0) {
        pTVar9 = (Table *)0x0;
        goto LAB_00ccdaf4;
      }
    }
    pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
  }
LAB_00ccdaf4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1a0,(char *)(pTVar9 + 4));
  if (iVar12 == 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1a0);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_1a0 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_1a0 | 1);
      if (((ulong)local_1a0 & 1) != 0) {
        uVar8 = local_198;
        pcVar2 = local_190;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_188,pcVar2,uVar8);
    }
    else {
LAB_00ccdbac:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled
                ((AbstractCheckButton *)param_1,&local_1a0,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 7) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 6);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b8,(char *)(pTVar9 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_1a0);
    if (lVar6 != 0) {
      if (((ulong)local_1b8 & 1) != 0) {
        operator_delete(local_1a8);
      }
      goto LAB_00ccdbac;
    }
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1b8);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_1b8 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_1b8 | 1);
      if (((ulong)local_1b8 & 1) != 0) {
        uVar8 = local_1b0;
        pcVar2 = local_1a8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_188,pcVar2,uVar8);
    }
    else {
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar4 + 0xc0))(local_70,plVar4,&local_1b8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1d0,"metadata");
      local_1e8 = &local_1d0;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_1d0,
                         (tuple *)&DAT_01416f53,(tuple *)&local_1e8);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1e8,"textureFileName");
      local_200 = &local_1e8;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_1e8,(tuple *)&DAT_01416f53
                 ,(tuple *)&local_200);
      cocos2d::Value::asString();
      if (((ulong)local_1e8 & 1) != 0) {
        operator_delete(local_1d8);
      }
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1d0);
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)local_1d0 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_1d0 | 1);
        if (((ulong)local_1d0 & 1) != 0) {
          uVar8 = local_1c8;
          pcVar2 = local_1c0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_188,pcVar2,uVar8);
      }
      pvVar11 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
        pvVar11 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar10 = (void *)*puVar3;
        local_98[0] = pvVar11;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar11 = local_98[0];
        puVar3 = pvVar10;
      }
      local_98[0] = (void *)0x0;
      pvVar10 = local_70[0];
      puVar3 = local_60;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar10 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_70[0] = pvVar10;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar10 = local_70[0];
        puVar3 = pvVar11;
      }
      local_70[0] = (void *)0x0;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    if (((ulong)local_1b8 & 1) != 0) {
      operator_delete(local_1a8);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b8,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16), uVar8 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  pTVar9 = pTVar13 + -(long)*(int *)pTVar13;
  if (*(ushort *)pTVar9 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar9) goto LAB_00ccdc40;
    pTVar9 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 8) == 0) {
LAB_00ccdc40:
      iVar12 = 0;
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      pTVar9 = (Table *)0x0;
      if (uVar8 == 0) goto LAB_00ccdc54;
    }
    else {
      iVar12 = *(int *)(pTVar13 + *(ushort *)(pTVar9 + 8));
      uVar8 = (ulong)*(ushort *)(pTVar9 + 4);
      if (uVar8 == 0) {
        pTVar9 = (Table *)0x0;
        goto LAB_00ccdc54;
      }
    }
    pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
  }
LAB_00ccdc54:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1d0,(char *)(pTVar9 + 4));
  if (iVar12 == 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1d0);
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)local_1d0 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_1d0 | 1);
      if (((ulong)local_1d0 & 1) != 0) {
        uVar8 = local_1c8;
        pcVar2 = local_1c0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b8,pcVar2,uVar8);
      goto joined_r0x00ccdd20;
    }
  }
  else {
    if (iVar12 != 1) goto joined_r0x00ccdd20;
    if (*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 7) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 6);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = pTVar13 + uVar8 + *(uint *)(pTVar13 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1e8,(char *)(pTVar9 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_1d0);
    if (lVar6 == 0) {
      plVar4 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_1e8);
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)local_1e8 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_1e8 | 1);
        if (((ulong)local_1e8 & 1) != 0) {
          uVar8 = local_1e0;
          pcVar2 = local_1d8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b8,pcVar2,uVar8);
      }
      else {
        plVar4 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar4 + 0xc0))(local_70,plVar4,&local_1e8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_200,"metadata");
        local_218[0] = &local_200;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_70,(piecewise_construct_t *)&local_200,
                           (tuple *)&DAT_01416f53,(tuple *)local_218);
        puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_98,puVar7);
        if (((ulong)local_200 & 1) != 0) {
          operator_delete(local_1f0);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_218,"textureFileName");
        local_a0 = local_218;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_98,(piecewise_construct_t *)local_218,
                   (tuple *)&DAT_01416f53,(tuple *)&local_a0);
        cocos2d::Value::asString();
        if (((ulong)local_218[0] & 1) != 0) {
          operator_delete(local_208);
        }
        plVar4 = (long *)cocos2d::FileUtils::getInstance();
        uVar8 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_200);
        if ((uVar8 & 1) == 0) {
          uVar8 = (ulong)local_200 >> 1 & 0x7f;
          pcVar2 = (char *)((ulong)&local_200 | 1);
          if (((ulong)local_200 & 1) != 0) {
            uVar8 = local_1f8;
            pcVar2 = local_1f0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1b8,pcVar2,uVar8);
        }
        pvVar11 = local_98[0];
        puVar3 = local_88;
        if (((ulong)local_200 & 1) != 0) {
          operator_delete(local_1f0);
          pvVar11 = local_98[0];
          puVar3 = local_88;
        }
        while (puVar3 != (void *)0x0) {
          pvVar10 = (void *)*puVar3;
          local_98[0] = pvVar11;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar11 = local_98[0];
          puVar3 = pvVar10;
        }
        local_98[0] = (void *)0x0;
        pvVar10 = local_70[0];
        puVar3 = local_60;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pvVar10 = local_70[0];
          puVar3 = local_60;
        }
        while (puVar3 != (void *)0x0) {
          pvVar11 = (void *)*puVar3;
          local_70[0] = pvVar10;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar10 = local_70[0];
          puVar3 = pvVar11;
        }
        local_70[0] = (void *)0x0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      if (((ulong)local_1e8 & 1) != 0) {
        operator_delete(local_1d8);
      }
      goto joined_r0x00ccdd20;
    }
    if (((ulong)local_1e8 & 1) != 0) {
      operator_delete(local_1d8);
    }
  }
  cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled
            ((AbstractCheckButton *)param_1,&local_1d0,iVar12);
joined_r0x00ccdd20:
  if (((ulong)local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  if (((ulong)local_1b8 & 1) != 0) {
    operator_delete(local_1a8);
  }
  if (((ulong)local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  if (((ulong)local_188 & 1) != 0) {
    operator_delete(local_178);
  }
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (((ulong)local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  if (((byte)local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

