
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::CheckBoxReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::CheckBoxReader::setPropsWithFlatBuffers
          (CheckBoxReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  SpriteFrameCache *pSVar4;
  long lVar5;
  long *plVar6;
  unordered_map *puVar7;
  Table *pTVar8;
  Table TVar9;
  ulong uVar10;
  Table *pTVar11;
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  undefined8 *******local_1e0 [2];
  void *local_1d0;
  undefined8 *******local_1c8;
  ulong local_1c0;
  char *local_1b8;
  undefined1 *******local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ******local_198;
  ulong local_190;
  char *local_188;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *****local_180;
  ulong local_178;
  char *local_170;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ****local_168;
  ulong local_160;
  char *local_158;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ***local_150;
  ulong local_148;
  char *local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_138;
  ulong local_130;
  char *local_128;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_120;
  ulong local_118;
  char *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [8];
  ulong local_100;
  char *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [8];
  ulong local_e8;
  char *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  char *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  undefined1 *local_a0;
  void *local_98 [2];
  void *local_88;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar8 + -(long)*(int *)pTVar8;
  if (*(ushort *)pTVar11 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7a1b4;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7a1b4:
      iVar12 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7a1c8;
    }
    else {
      iVar12 = *(int *)(pTVar8 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7a1c8;
      }
    }
    pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
  }
LAB_00c7a1c8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,(char *)(pTVar11 + 4));
  if (iVar12 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,local_d8);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)((byte)local_d8[0] >> 1);
      pcVar2 = (char *)((ulong)local_d8 | 1);
      if (((byte)local_d8[0] & 1) != 0) {
        uVar10 = local_d0;
        pcVar2 = local_c8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_c0,pcVar2,uVar10);
    }
    else {
LAB_00c7a280:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGround
                ((AbstractCheckButton *)param_1,local_d8,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f0,(char *)(pTVar11 + 4));
    pSVar4 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar4,(basic_string *)local_d8);
    if (lVar5 != 0) {
      if (((byte)local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      goto LAB_00c7a280;
    }
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,local_f0);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)((byte)local_f0[0] >> 1);
      pcVar2 = (char *)((ulong)local_f0 | 1);
      if (((byte)local_f0[0] & 1) != 0) {
        uVar10 = local_e8;
        pcVar2 = local_e0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_c0,pcVar2,uVar10);
    }
    else {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar6 + 0xc0))(local_70,plVar6,local_f0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_108,"metadata");
      local_120 = local_108;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)local_108,
                         (tuple *)&DAT_01415198,(tuple *)&local_120);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((byte)local_108[0] & 1) != 0) {
        operator_delete(local_f8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,"textureFileName");
      local_138 = &local_120;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_120,(tuple *)&DAT_01415198
                 ,(tuple *)&local_138);
      cocos2d::Value::asString();
      if (((ulong)local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,local_108);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)((byte)local_108[0] >> 1);
        pcVar2 = (char *)((ulong)local_108 | 1);
        if (((byte)local_108[0] & 1) != 0) {
          uVar10 = local_100;
          pcVar2 = local_f8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c0,pcVar2,uVar10);
      }
      pvVar14 = local_98[0];
      puVar3 = local_88;
      if (((byte)local_108[0] & 1) != 0) {
        operator_delete(local_f8);
        pvVar14 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar13 = (void *)*puVar3;
        local_98[0] = pvVar14;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar14 = local_98[0];
        puVar3 = pvVar13;
      }
      local_98[0] = (void *)0x0;
      pvVar13 = local_70[0];
      puVar3 = local_60;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
        pvVar13 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar14 = (void *)*puVar3;
        local_70[0] = pvVar13;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar13 = local_70[0];
        puVar3 = pvVar14;
      }
      local_70[0] = (void *)0x0;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar8 + -(long)*(int *)pTVar8;
  if (*(ushort *)pTVar11 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7a314;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7a314:
      iVar12 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7a328;
    }
    else {
      iVar12 = *(int *)(pTVar8 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7a328;
      }
    }
    pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
  }
LAB_00c7a328:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,(char *)(pTVar11 + 4));
  if (iVar12 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,local_108);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)((byte)local_108[0] >> 1);
      pcVar2 = (char *)((ulong)local_108 | 1);
      if (((byte)local_108[0] & 1) != 0) {
        uVar10 = local_100;
        pcVar2 = local_f8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_f0,pcVar2,uVar10);
    }
    else {
LAB_00c7a3e0:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected
                ((AbstractCheckButton *)param_1,local_108,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_120,(char *)(pTVar11 + 4));
    pSVar4 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar4,(basic_string *)local_108);
    if (lVar5 != 0) {
      if (((ulong)local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      goto LAB_00c7a3e0;
    }
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_120);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_120 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_120 | 1);
      if (((ulong)local_120 & 1) != 0) {
        uVar10 = local_118;
        pcVar2 = local_110;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_f0,pcVar2,uVar10);
    }
    else {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar6 + 0xc0))(local_70,plVar6,&local_120);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_138,"metadata");
      local_150 = &local_138;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_138,
                         (tuple *)&DAT_01415198,(tuple *)&local_150);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,"textureFileName");
      local_168 = &local_150;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_150,(tuple *)&DAT_01415198
                 ,(tuple *)&local_168);
      cocos2d::Value::asString();
      if (((ulong)local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_138);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)local_138 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_138 | 1);
        if (((ulong)local_138 & 1) != 0) {
          uVar10 = local_130;
          pcVar2 = local_128;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_f0,pcVar2,uVar10);
      }
      pvVar14 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_138 & 1) != 0) {
        operator_delete(local_128);
        pvVar14 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar13 = (void *)*puVar3;
        local_98[0] = pvVar14;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar14 = local_98[0];
        puVar3 = pvVar13;
      }
      local_98[0] = (void *)0x0;
      pvVar13 = local_70[0];
      puVar3 = local_60;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
        pvVar13 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar14 = (void *)*puVar3;
        local_70[0] = pvVar13;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar13 = local_70[0];
        puVar3 = pvVar14;
      }
      local_70[0] = (void *)0x0;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
    }
    if (((ulong)local_120 & 1) != 0) {
      operator_delete(local_110);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar8 + -(long)*(int *)pTVar8;
  if (*(ushort *)pTVar11 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7a474;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7a474:
      iVar12 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7a488;
    }
    else {
      iVar12 = *(int *)(pTVar8 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7a488;
      }
    }
    pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
  }
LAB_00c7a488:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_138,(char *)(pTVar11 + 4));
  if (iVar12 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_138);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_138 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_138 | 1);
      if (((ulong)local_138 & 1) != 0) {
        uVar10 = local_130;
        pcVar2 = local_128;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,pcVar2,uVar10);
    }
    else {
LAB_00c7a540:
      cocos2d::ui::AbstractCheckButton::loadTextureFrontCross
                ((AbstractCheckButton *)param_1,&local_138,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_150,(char *)(pTVar11 + 4));
    pSVar4 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar4,(basic_string *)&local_138);
    if (lVar5 != 0) {
      if (((ulong)local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      goto LAB_00c7a540;
    }
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_150);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_150 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_150 | 1);
      if (((ulong)local_150 & 1) != 0) {
        uVar10 = local_148;
        pcVar2 = local_140;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,pcVar2,uVar10);
    }
    else {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar6 + 0xc0))(local_70,plVar6,&local_150);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,"metadata");
      local_180 = &local_168;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_168,
                         (tuple *)&DAT_01415198,(tuple *)&local_180);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_168 & 1) != 0) {
        operator_delete(local_158);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_180,"textureFileName");
      local_198 = &local_180;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_180,(tuple *)&DAT_01415198
                 ,(tuple *)&local_198);
      cocos2d::Value::asString();
      if (((ulong)local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_168);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)local_168 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_168 | 1);
        if (((ulong)local_168 & 1) != 0) {
          uVar10 = local_160;
          pcVar2 = local_158;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,pcVar2,uVar10);
      }
      pvVar14 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_168 & 1) != 0) {
        operator_delete(local_158);
        pvVar14 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar13 = (void *)*puVar3;
        local_98[0] = pvVar14;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar14 = local_98[0];
        puVar3 = pvVar13;
      }
      local_98[0] = (void *)0x0;
      pvVar13 = local_70[0];
      puVar3 = local_60;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
        pvVar13 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar14 = (void *)*puVar3;
        local_70[0] = pvVar13;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar13 = local_70[0];
        puVar3 = pvVar14;
      }
      local_70[0] = (void *)0x0;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
    }
    if (((ulong)local_150 & 1) != 0) {
      operator_delete(local_140);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_150,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar8 + -(long)*(int *)pTVar8;
  if (*(ushort *)pTVar11 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7a5d4;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7a5d4:
      iVar12 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7a5e8;
    }
    else {
      iVar12 = *(int *)(pTVar8 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7a5e8;
      }
    }
    pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
  }
LAB_00c7a5e8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,(char *)(pTVar11 + 4));
  if (iVar12 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_168);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_168 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_168 | 1);
      if (((ulong)local_168 & 1) != 0) {
        uVar10 = local_160;
        pcVar2 = local_158;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_150,pcVar2,uVar10);
    }
    else {
LAB_00c7a6a0:
      cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled
                ((AbstractCheckButton *)param_1,&local_168,iVar12);
    }
  }
  else if (iVar12 == 1) {
    if (*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_180,(char *)(pTVar11 + 4));
    pSVar4 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar4,(basic_string *)&local_168);
    if (lVar5 != 0) {
      if (((ulong)local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      goto LAB_00c7a6a0;
    }
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_180);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_180 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_180 | 1);
      if (((ulong)local_180 & 1) != 0) {
        uVar10 = local_178;
        pcVar2 = local_170;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_150,pcVar2,uVar10);
    }
    else {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar6 + 0xc0))(local_70,plVar6,&local_180);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_198,"metadata");
      local_1b0 = &local_198;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_70,(piecewise_construct_t *)&local_198,
                         (tuple *)&DAT_01415198,(tuple *)&local_1b0);
      puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_98,puVar7);
      if (((ulong)local_198 & 1) != 0) {
        operator_delete(local_188);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b0,"textureFileName");
      local_1c8 = &local_1b0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_98,(piecewise_construct_t *)&local_1b0,(tuple *)&DAT_01415198
                 ,(tuple *)&local_1c8);
      cocos2d::Value::asString();
      if (((ulong)local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_198);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)local_198 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_198 | 1);
        if (((ulong)local_198 & 1) != 0) {
          uVar10 = local_190;
          pcVar2 = local_188;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar2,uVar10);
      }
      pvVar14 = local_98[0];
      puVar3 = local_88;
      if (((ulong)local_198 & 1) != 0) {
        operator_delete(local_188);
        pvVar14 = local_98[0];
        puVar3 = local_88;
      }
      while (puVar3 != (void *)0x0) {
        pvVar13 = (void *)*puVar3;
        local_98[0] = pvVar14;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar14 = local_98[0];
        puVar3 = pvVar13;
      }
      local_98[0] = (void *)0x0;
      pvVar13 = local_70[0];
      puVar3 = local_60;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
        pvVar13 = local_70[0];
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar14 = (void *)*puVar3;
        local_70[0] = pvVar13;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar13 = local_70[0];
        puVar3 = pvVar14;
      }
      local_70[0] = (void *)0x0;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
    }
    if (((ulong)local_180 & 1) != 0) {
      operator_delete(local_170);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_180,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar8 + -(long)*(int *)pTVar8;
  if (*(ushort *)pTVar11 < 9) {
    iVar12 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7a734;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7a734:
      iVar12 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7a748;
    }
    else {
      iVar12 = *(int *)(pTVar8 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7a748;
      }
    }
    pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
  }
LAB_00c7a748:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_198,(char *)(pTVar11 + 4));
  if (iVar12 == 0) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_198);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_198 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_198 | 1);
      if (((ulong)local_198 & 1) != 0) {
        uVar10 = local_190;
        pcVar2 = local_188;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_180,pcVar2,uVar10);
      goto LAB_00c7a810;
    }
  }
  else {
    if (iVar12 != 1) goto LAB_00c7a810;
    if (*(ushort *)(pTVar8 + -(long)*(int *)pTVar8) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar8 + -(long)*(int *)pTVar8 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar8 + uVar10 + *(uint *)(pTVar8 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,(char *)(pTVar11 + 4));
    pSVar4 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar4,(basic_string *)&local_198);
    if (lVar5 == 0) {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_1b0);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)local_1b0 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_1b0 | 1);
        if (((ulong)local_1b0 & 1) != 0) {
          uVar10 = local_1a8;
          pcVar2 = local_1a0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_180,pcVar2,uVar10);
      }
      else {
        plVar6 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar6 + 0xc0))(local_70,plVar6,&local_1b0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1c8,"metadata");
        local_1e0[0] = &local_1c8;
        lVar5 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_70,(piecewise_construct_t *)&local_1c8,
                           (tuple *)&DAT_01415198,(tuple *)local_1e0);
        puVar7 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar5 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_98,puVar7);
        if (((ulong)local_1c8 & 1) != 0) {
          operator_delete(local_1b8);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_1e0,"textureFileName");
        local_a0 = (undefined1 *)local_1e0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_98,(piecewise_construct_t *)local_1e0,
                   (tuple *)&DAT_01415198,(tuple *)&local_a0);
        cocos2d::Value::asString();
        if (((ulong)local_1e0[0] & 1) != 0) {
          operator_delete(local_1d0);
        }
        plVar6 = (long *)cocos2d::FileUtils::getInstance();
        uVar10 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_1c8);
        if ((uVar10 & 1) == 0) {
          uVar10 = (ulong)local_1c8 >> 1 & 0x7f;
          pcVar2 = (char *)((ulong)&local_1c8 | 1);
          if (((ulong)local_1c8 & 1) != 0) {
            uVar10 = local_1c0;
            pcVar2 = local_1b8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_180,pcVar2,uVar10);
        }
        pvVar14 = local_98[0];
        puVar3 = local_88;
        if (((ulong)local_1c8 & 1) != 0) {
          operator_delete(local_1b8);
          pvVar14 = local_98[0];
          puVar3 = local_88;
        }
        while (puVar3 != (void *)0x0) {
          pvVar13 = (void *)*puVar3;
          local_98[0] = pvVar14;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar14 = local_98[0];
          puVar3 = pvVar13;
        }
        local_98[0] = (void *)0x0;
        pvVar13 = local_70[0];
        puVar3 = local_60;
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14);
          pvVar13 = local_70[0];
          puVar3 = local_60;
        }
        while (puVar3 != (void *)0x0) {
          pvVar14 = (void *)*puVar3;
          local_70[0] = pvVar13;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar13 = local_70[0];
          puVar3 = pvVar14;
        }
        local_70[0] = (void *)0x0;
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      if (((ulong)local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      goto LAB_00c7a810;
    }
    if (((ulong)local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
  }
  cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled
            ((AbstractCheckButton *)param_1,&local_198,iVar12);
LAB_00c7a810:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x11) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10), uVar10 == 0)) {
    TVar9 = (Table)0x1;
  }
  else {
    TVar9 = param_2[uVar10];
  }
  (**(code **)(*(long *)param_1 + 0x680))(param_1,TVar9 != (Table)0x0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12), uVar10 == 0)) {
    TVar9 = (Table)0x1;
  }
  else {
    TVar9 = param_2[uVar10];
  }
  cocos2d::ui::Widget::setBright((Widget *)param_1,TVar9 != (Table)0x0);
  (**(code **)(*(long *)param_1 + 0x580))(param_1,TVar9 != (Table)0x0);
  plVar6 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar10 == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,param_1,pTVar8);
  if (((ulong)local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if (((ulong)local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if (((ulong)local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((ulong)local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if (((ulong)local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (((ulong)local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
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
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

