
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::SliderReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::SliderReader::setPropsWithFlatBuffers(SliderReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  SpriteFrameCache *pSVar5;
  long lVar6;
  long *plVar7;
  unordered_map *puVar8;
  undefined8 uVar9;
  Table *pTVar10;
  ulong uVar11;
  Table *pTVar12;
  int iVar13;
  Table TVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 *******local_1f0 [2];
  void *local_1e0;
  undefined8 *******local_1d8;
  ulong local_1d0;
  char *local_1c8;
  undefined1 *******local_1c0;
  ulong local_1b8;
  char *local_1b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ******local_1a8;
  ulong local_1a0;
  char *local_198;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *****local_190;
  ulong local_188;
  char *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ****local_178;
  ulong local_170;
  char *local_168;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ***local_160;
  ulong local_158;
  char *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_148;
  ulong local_140;
  char *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_130;
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
  ulong local_110;
  char *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [8];
  ulong local_e0;
  char *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  undefined1 *local_b0;
  void *local_a8 [2];
  void *local_98;
  void *local_80 [2];
  void *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x11) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10), uVar11 == 0)) {
    iVar13 = 0x32;
  }
  else {
    iVar13 = *(int *)(param_2 + uVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar12 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c91ddc;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c91ddc:
      iVar15 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c91df0;
    }
    else {
      iVar15 = *(int *)(pTVar10 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c91df0;
      }
    }
    pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
  }
LAB_00c91df0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,(char *)(pTVar12 + 4));
  if (iVar15 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_e8);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_e8);
      if (lVar6 != 0) goto LAB_00c91ea0;
      uVar11 = (ulong)((byte)local_e8[0] >> 1);
      pcVar3 = (char *)((ulong)local_e8 | 1);
      if (((byte)local_e8[0] & 1) != 0) {
        uVar11 = local_e0;
        pcVar3 = local_d8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_d0,pcVar3,uVar11);
    }
    else {
      uVar9 = 0;
LAB_00c91ea4:
      cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_e8,uVar9);
    }
  }
  else if (iVar15 == 1) {
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_100,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_e8);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_100);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)((byte)local_100[0] >> 1);
        pcVar3 = (char *)((ulong)local_100 | 1);
        if (((byte)local_100[0] & 1) != 0) {
          uVar11 = local_f8;
          pcVar3 = local_f0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_d0,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_80,plVar7,local_100);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_118,"metadata");
        local_130 = local_118;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)local_118,
                           (tuple *)&DAT_0141555e,(tuple *)&local_130);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar8);
        if (((byte)local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_130,"textureFileName");
        local_148 = &local_130;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)&local_130,
                   (tuple *)&DAT_0141555e,(tuple *)&local_148);
        cocos2d::Value::asString();
        if (((ulong)local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_118);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)((byte)local_118[0] >> 1);
          pcVar3 = (char *)((ulong)local_118 | 1);
          if (((byte)local_118[0] & 1) != 0) {
            uVar11 = local_110;
            pcVar3 = local_108;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_d0,pcVar3,uVar11);
        }
        pvVar17 = local_a8[0];
        puVar4 = local_98;
        if (((byte)local_118[0] & 1) != 0) {
          operator_delete(local_108);
          pvVar17 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_a8[0];
          puVar4 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar4 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_80[0];
          puVar4 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((byte)local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if (bVar2) {
LAB_00c91ea0:
      uVar9 = 1;
      goto LAB_00c91ea4;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_100,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar12 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c91f34;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c91f34:
      iVar15 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c91f48;
    }
    else {
      iVar15 = *(int *)(pTVar10 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c91f48;
      }
    }
    pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
  }
LAB_00c91f48:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_118,(char *)(pTVar12 + 4));
  if (iVar15 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_118);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_118);
      if (lVar6 != 0) goto LAB_00c91ff8;
      uVar11 = (ulong)((byte)local_118[0] >> 1);
      pcVar3 = (char *)((ulong)local_118 | 1);
      if (((byte)local_118[0] & 1) != 0) {
        uVar11 = local_110;
        pcVar3 = local_108;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_100,pcVar3,uVar11);
    }
    else {
      uVar9 = 0;
LAB_00c91ffc:
      cocos2d::ui::Slider::loadSlidBallTextureNormal((Slider *)param_1,local_118,uVar9);
    }
  }
  else if (iVar15 == 1) {
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_130,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_118);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_130);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_130 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_130 | 1);
        if (((ulong)local_130 & 1) != 0) {
          uVar11 = local_128;
          pcVar3 = local_120;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_100,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_80,plVar7,&local_130);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_148,"metadata");
        local_160 = &local_148;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)&local_148,
                           (tuple *)&DAT_0141555e,(tuple *)&local_160);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar8);
        if (((ulong)local_148 & 1) != 0) {
          operator_delete(local_138);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_160,"textureFileName");
        local_178 = &local_160;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)&local_160,
                   (tuple *)&DAT_0141555e,(tuple *)&local_178);
        cocos2d::Value::asString();
        if (((ulong)local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_148);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)local_148 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_148 | 1);
          if (((ulong)local_148 & 1) != 0) {
            uVar11 = local_140;
            pcVar3 = local_138;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_100,pcVar3,uVar11);
        }
        pvVar17 = local_a8[0];
        puVar4 = local_98;
        if (((ulong)local_148 & 1) != 0) {
          operator_delete(local_138);
          pvVar17 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_a8[0];
          puVar4 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar4 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_80[0];
          puVar4 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((ulong)local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    if (bVar2) {
LAB_00c91ff8:
      uVar9 = 1;
      goto LAB_00c91ffc;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_130,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar12 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c9208c;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c9208c:
      iVar15 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c920a0;
    }
    else {
      iVar15 = *(int *)(pTVar10 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c920a0;
      }
    }
    pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
  }
LAB_00c920a0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_148,(char *)(pTVar12 + 4));
  if (iVar15 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_148);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_148);
      if (lVar6 != 0) goto LAB_00c92150;
      uVar11 = (ulong)local_148 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_148 | 1);
      if (((ulong)local_148 & 1) != 0) {
        uVar11 = local_140;
        pcVar3 = local_138;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_130,pcVar3,uVar11);
    }
    else {
      uVar9 = 0;
LAB_00c92154:
      cocos2d::ui::Slider::loadSlidBallTexturePressed((Slider *)param_1,&local_148,uVar9);
    }
  }
  else if (iVar15 == 1) {
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_148);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_160);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_160 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_160 | 1);
        if (((ulong)local_160 & 1) != 0) {
          uVar11 = local_158;
          pcVar3 = local_150;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_130,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_80,plVar7,&local_160);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_178,"metadata");
        local_190 = &local_178;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)&local_178,
                           (tuple *)&DAT_0141555e,(tuple *)&local_190);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar8);
        if (((ulong)local_178 & 1) != 0) {
          operator_delete(local_168);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_190,"textureFileName");
        local_1a8 = &local_190;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)&local_190,
                   (tuple *)&DAT_0141555e,(tuple *)&local_1a8);
        cocos2d::Value::asString();
        if (((ulong)local_190 & 1) != 0) {
          operator_delete(local_180);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_178);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)local_178 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_178 | 1);
          if (((ulong)local_178 & 1) != 0) {
            uVar11 = local_170;
            pcVar3 = local_168;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_130,pcVar3,uVar11);
        }
        pvVar17 = local_a8[0];
        puVar4 = local_98;
        if (((ulong)local_178 & 1) != 0) {
          operator_delete(local_168);
          pvVar17 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_a8[0];
          puVar4 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar4 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_80[0];
          puVar4 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((ulong)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    if (bVar2) {
LAB_00c92150:
      uVar9 = 1;
      goto LAB_00c92154;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar12 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c921e4;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c921e4:
      iVar15 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c921f8;
    }
    else {
      iVar15 = *(int *)(pTVar10 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c921f8;
      }
    }
    pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
  }
LAB_00c921f8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_178,(char *)(pTVar12 + 4));
  if (iVar15 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_178);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_178);
      if (lVar6 != 0) goto LAB_00c922a8;
      uVar11 = (ulong)local_178 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_178 | 1);
      if (((ulong)local_178 & 1) != 0) {
        uVar11 = local_170;
        pcVar3 = local_168;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,pcVar3,uVar11);
    }
    else {
      uVar9 = 0;
LAB_00c922ac:
      cocos2d::ui::Slider::loadSlidBallTextureDisabled((Slider *)param_1,&local_178,uVar9);
    }
  }
  else if (iVar15 == 1) {
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_190,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_178);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_190);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_190 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_190 | 1);
        if (((ulong)local_190 & 1) != 0) {
          uVar11 = local_188;
          pcVar3 = local_180;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_160,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_80,plVar7,&local_190);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1a8,"metadata");
        local_1c0 = &local_1a8;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)&local_1a8,
                           (tuple *)&DAT_0141555e,(tuple *)&local_1c0);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar8);
        if (((ulong)local_1a8 & 1) != 0) {
          operator_delete(local_198);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1c0,"textureFileName");
        local_1d8 = &local_1c0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)&local_1c0,
                   (tuple *)&DAT_0141555e,(tuple *)&local_1d8);
        cocos2d::Value::asString();
        if (((ulong)local_1c0 & 1) != 0) {
          operator_delete(local_1b0);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_1a8);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)local_1a8 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_1a8 | 1);
          if (((ulong)local_1a8 & 1) != 0) {
            uVar11 = local_1a0;
            pcVar3 = local_198;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_160,pcVar3,uVar11);
        }
        pvVar17 = local_a8[0];
        puVar4 = local_98;
        if (((ulong)local_1a8 & 1) != 0) {
          operator_delete(local_198);
          pvVar17 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_a8[0];
          puVar4 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar4 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_80[0];
          puVar4 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((ulong)local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    if (bVar2) {
LAB_00c922a8:
      uVar9 = 1;
      goto LAB_00c922ac;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_190,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar10 + -(long)*(int *)pTVar10;
  if (*(ushort *)pTVar12 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c9233c;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c9233c:
      iVar15 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c92350;
    }
    else {
      iVar15 = *(int *)(pTVar10 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c92350;
      }
    }
    pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
  }
LAB_00c92350:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1a8,(char *)(pTVar12 + 4));
  if (iVar15 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_1a8);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_1a8);
      if (lVar6 == 0) {
        uVar11 = (ulong)local_1a8 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_1a8 | 1);
        if (((ulong)local_1a8 & 1) != 0) {
          uVar11 = local_1a0;
          pcVar3 = local_198;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_190,pcVar3,uVar11);
        goto LAB_00c92410;
      }
      goto LAB_00c92400;
    }
    uVar9 = 0;
  }
  else {
    if (iVar15 != 1) goto LAB_00c92410;
    if (*(ushort *)(pTVar10 + -(long)*(int *)pTVar10) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar10 + -(long)*(int *)pTVar10 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar10 + uVar11 + *(uint *)(pTVar10 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c0,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_1a8);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_1c0);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_1c0 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_1c0 | 1);
        if (((ulong)local_1c0 & 1) != 0) {
          uVar11 = local_1b8;
          pcVar3 = local_1b0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_190,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_80,plVar7,&local_1c0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1d8,"metadata");
        local_1f0[0] = &local_1d8;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_80,(piecewise_construct_t *)&local_1d8,
                           (tuple *)&DAT_0141555e,(tuple *)local_1f0);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar8);
        if (((ulong)local_1d8 & 1) != 0) {
          operator_delete(local_1c8);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_1f0,"textureFileName");
        local_b0 = (undefined1 *)local_1f0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)local_1f0,
                   (tuple *)&DAT_0141555e,(tuple *)&local_b0);
        cocos2d::Value::asString();
        if (((ulong)local_1f0[0] & 1) != 0) {
          operator_delete(local_1e0);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_1d8);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)local_1d8 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_1d8 | 1);
          if (((ulong)local_1d8 & 1) != 0) {
            uVar11 = local_1d0;
            pcVar3 = local_1c8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_190,pcVar3,uVar11);
        }
        pvVar17 = local_a8[0];
        puVar4 = local_98;
        if (((ulong)local_1d8 & 1) != 0) {
          operator_delete(local_1c8);
          pvVar17 = local_a8[0];
          puVar4 = local_98;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_a8[0];
          puVar4 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar4 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar4 = local_70;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_80[0];
          puVar4 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((ulong)local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
    if (!bVar2) goto LAB_00c92410;
LAB_00c92400:
    uVar9 = 1;
  }
  cocos2d::ui::Slider::loadProgressBarTexture((Slider *)param_1,&local_1a8,uVar9);
LAB_00c92410:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12), uVar11 == 0)) {
    TVar14 = (Table)0x1;
  }
  else {
    TVar14 = param_2[uVar11];
  }
  cocos2d::ui::Widget::setBright((Widget *)param_1,TVar14 != (Table)0x0);
  (**(code **)(*(long *)param_1 + 0x580))(param_1,TVar14 != (Table)0x0);
  plVar7 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar11 == 0)) {
    pTVar10 = (Table *)0x0;
  }
  else {
    pTVar10 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  (**(code **)(*plVar7 + 0x30))(plVar7,param_1,pTVar10);
  cocos2d::ui::Slider::setPercent((Slider *)param_1,iVar13);
  if (((ulong)local_1a8 & 1) != 0) {
    operator_delete(local_198);
  }
  if (((ulong)local_190 & 1) != 0) {
    operator_delete(local_180);
  }
  if (((ulong)local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if (((ulong)local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((ulong)local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  if (((ulong)local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

