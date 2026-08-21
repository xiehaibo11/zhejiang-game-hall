
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ButtonReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::ButtonReader::setPropsWithFlatBuffers(ButtonReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  SpriteFrameCache *pSVar5;
  long lVar6;
  long *plVar7;
  unordered_map *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  Table *pTVar12;
  Table *pTVar13;
  Table *pTVar14;
  Table TVar15;
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  Table TVar19;
  float fVar20;
  float fVar21;
  Color3B aCStack_1c8 [8];
  void *local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *****local_1a0 [2];
  void *local_190;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ****local_188;
  ulong local_180;
  char *local_178;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ***local_170;
  ulong local_168;
  char *local_160;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_158;
  ulong local_150;
  char *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_140;
  ulong local_138;
  char *local_130;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_128 [8];
  ulong local_120;
  char *local_118;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [8];
  ulong local_108;
  char *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [8];
  ulong local_f0;
  char *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> ******local_c8;
  void *local_c0 [2];
  void *local_b0;
  void *local_98;
  ulong uStack_90;
  void *local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1b) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1a), uVar11 == 0)) {
    TVar19 = (Table)0x0;
  }
  else {
    TVar19 = param_2[uVar11];
  }
  (**(code **)(*(long *)param_1 + 0x680))(param_1,TVar19 != (Table)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar14 + -(long)*(int *)pTVar14;
  if (*(ushort *)pTVar12 < 9) {
    iVar16 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c73c20;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c73c20:
      iVar16 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c73c34;
    }
    else {
      iVar16 = *(int *)(pTVar14 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c73c34;
      }
    }
    pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
  }
LAB_00c73c34:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f8,(char *)(pTVar12 + 4));
  if (iVar16 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_f8);
    if ((uVar11 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_f8);
      if (lVar6 != 0) goto LAB_00c73ce4;
      uVar11 = (ulong)((byte)local_f8[0] >> 1);
      pcVar3 = (char *)((ulong)local_f8 | 1);
      if (((byte)local_f8[0] & 1) != 0) {
        uVar11 = local_f0;
        pcVar3 = local_e8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_e0,pcVar3,uVar11);
    }
    else {
      uVar10 = 0;
LAB_00c73ce8:
      cocos2d::ui::Button::loadTextureNormal((Button *)param_1,local_f8,uVar10);
    }
  }
  else if (iVar16 == 1) {
    if (*(ushort *)(pTVar14 + -(long)*(int *)pTVar14) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar14 + -(long)*(int *)pTVar14 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_110,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_f8);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_110);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)((byte)local_110[0] >> 1);
        pcVar3 = (char *)((ulong)local_110 | 1);
        if (((byte)local_110[0] & 1) != 0) {
          uVar11 = local_108;
          pcVar3 = local_100;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_e0,pcVar3,uVar11);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(&local_98,plVar7,local_110);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_128,"metadata");
        local_140 = local_128;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)&local_98,(piecewise_construct_t *)local_128,
                           (tuple *)&DAT_01415084,(tuple *)&local_140);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_c0,puVar8);
        if (((byte)local_128[0] & 1) != 0) {
          operator_delete(local_118);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_140,"textureFileName");
        local_158 = &local_140;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_c0,(piecewise_construct_t *)&local_140,
                   (tuple *)&DAT_01415084,(tuple *)&local_158);
        cocos2d::Value::asString();
        if (((ulong)local_140 & 1) != 0) {
          operator_delete(local_130);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_128);
        if ((uVar11 & 1) == 0) {
          uVar11 = (ulong)((byte)local_128[0] >> 1);
          pcVar3 = (char *)((ulong)local_128 | 1);
          if (((byte)local_128[0] & 1) != 0) {
            uVar11 = local_120;
            pcVar3 = local_118;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_e0,pcVar3,uVar11);
        }
        pvVar17 = local_c0[0];
        puVar4 = local_b0;
        if (((byte)local_128[0] & 1) != 0) {
          operator_delete(local_118);
          pvVar17 = local_c0[0];
          puVar4 = local_b0;
        }
        while (puVar4 != (void *)0x0) {
          pvVar18 = (void *)*puVar4;
          local_c0[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar17 = local_c0[0];
          puVar4 = pvVar18;
        }
        local_c0[0] = (void *)0x0;
        pvVar18 = local_98;
        puVar4 = local_88;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar18 = local_98;
          puVar4 = local_88;
        }
        while (puVar4 != (void *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_98 = pvVar18;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar18 = local_98;
          puVar4 = pvVar17;
        }
        local_98 = (void *)0x0;
        if (pvVar18 != (void *)0x0) {
          operator_delete(pvVar18);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((byte)local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    if (bVar2) {
LAB_00c73ce4:
      uVar10 = 1;
      goto LAB_00c73ce8;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_110,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar14 + -(long)*(int *)pTVar14;
  if (*(ushort *)pTVar12 < 9) {
    iVar16 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c73d78;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c73d78:
      iVar16 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c73d8c;
    }
    else {
      iVar16 = *(int *)(pTVar14 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c73d8c;
      }
    }
    pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
  }
LAB_00c73d8c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,(char *)(pTVar12 + 4));
  if (iVar16 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_128);
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)((byte)local_128[0] >> 1);
      pcVar3 = (char *)((ulong)local_128 | 1);
      if (((byte)local_128[0] & 1) != 0) {
        uVar11 = local_120;
        pcVar3 = local_118;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_110,pcVar3,uVar11);
    }
    else {
LAB_00c73e44:
      cocos2d::ui::Button::loadTexturePressed((Button *)param_1,local_128,iVar16);
    }
  }
  else if (iVar16 == 1) {
    if (*(ushort *)(pTVar14 + -(long)*(int *)pTVar14) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar14 + -(long)*(int *)pTVar14 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_140,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_128);
    if (lVar6 != 0) {
      if (((ulong)local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      goto LAB_00c73e44;
    }
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_140);
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)local_140 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_140 | 1);
      if (((ulong)local_140 & 1) != 0) {
        uVar11 = local_138;
        pcVar3 = local_130;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_110,pcVar3,uVar11);
    }
    else {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar7 + 0xc0))(&local_98,plVar7,&local_140);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_158,"metadata");
      local_170 = &local_158;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)&local_98,(piecewise_construct_t *)&local_158,
                         (tuple *)&DAT_01415084,(tuple *)&local_170);
      puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_c0,puVar8);
      if (((ulong)local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_170,"textureFileName");
      local_188 = &local_170;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_c0,(piecewise_construct_t *)&local_170,(tuple *)&DAT_01415084
                 ,(tuple *)&local_188);
      cocos2d::Value::asString();
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_158);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_158 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_158 | 1);
        if (((ulong)local_158 & 1) != 0) {
          uVar11 = local_150;
          pcVar3 = local_148;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_110,pcVar3,uVar11);
      }
      pvVar17 = local_c0[0];
      puVar4 = local_b0;
      if (((ulong)local_158 & 1) != 0) {
        operator_delete(local_148);
        pvVar17 = local_c0[0];
        puVar4 = local_b0;
      }
      while (puVar4 != (void *)0x0) {
        pvVar18 = (void *)*puVar4;
        local_c0[0] = pvVar17;
        cocos2d::Value::~Value((Value *)(puVar4 + 5));
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar17 = local_c0[0];
        puVar4 = pvVar18;
      }
      local_c0[0] = (void *)0x0;
      pvVar18 = local_98;
      puVar4 = local_88;
      if (pvVar17 != (void *)0x0) {
        operator_delete(pvVar17);
        pvVar18 = local_98;
        puVar4 = local_88;
      }
      while (puVar4 != (void *)0x0) {
        pvVar17 = (void *)*puVar4;
        local_98 = pvVar18;
        cocos2d::Value::~Value((Value *)(puVar4 + 5));
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar18 = local_98;
        puVar4 = pvVar17;
      }
      local_98 = (void *)0x0;
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
      }
    }
    if (((ulong)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  pTVar12 = pTVar14 + -(long)*(int *)pTVar14;
  if (*(ushort *)pTVar12 < 9) {
    iVar16 = 0;
    if (4 < *(ushort *)pTVar12) goto LAB_00c73ed8;
    pTVar12 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar12 + 8) == 0) {
LAB_00c73ed8:
      iVar16 = 0;
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      pTVar12 = (Table *)0x0;
      if (uVar11 == 0) goto LAB_00c73eec;
    }
    else {
      iVar16 = *(int *)(pTVar14 + *(ushort *)(pTVar12 + 8));
      uVar11 = (ulong)*(ushort *)(pTVar12 + 4);
      if (uVar11 == 0) {
        pTVar12 = (Table *)0x0;
        goto LAB_00c73eec;
      }
    }
    pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
  }
LAB_00c73eec:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_158,(char *)(pTVar12 + 4));
  if (iVar16 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_158);
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)local_158 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_158 | 1);
      if (((ulong)local_158 & 1) != 0) {
        uVar11 = local_150;
        pcVar3 = local_148;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,pcVar3,uVar11);
    }
    else {
LAB_00c73fa4:
      cocos2d::ui::Button::loadTextureDisabled((Button *)param_1,&local_158,iVar16);
    }
  }
  else if (iVar16 == 1) {
    if (*(ushort *)(pTVar14 + -(long)*(int *)pTVar14) < 7) {
      pTVar12 = (Table *)0x0;
    }
    else {
      uVar11 = (ulong)*(ushort *)(pTVar14 + -(long)*(int *)pTVar14 + 6);
      pTVar12 = (Table *)0x0;
      if (uVar11 != 0) {
        pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,(char *)(pTVar12 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)&local_158);
    if (lVar6 != 0) {
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      goto LAB_00c73fa4;
    }
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_170);
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)local_170 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_170 | 1);
      if (((ulong)local_170 & 1) != 0) {
        uVar11 = local_168;
        pcVar3 = local_160;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,pcVar3,uVar11);
    }
    else {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar7 + 0xc0))(&local_98,plVar7,&local_170);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_188,"metadata");
      local_1a0[0] = &local_188;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)&local_98,(piecewise_construct_t *)&local_188,
                         (tuple *)&DAT_01415084,(tuple *)local_1a0);
      puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_c0,puVar8);
      if (((ulong)local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_1a0,"textureFileName");
      local_c8 = local_1a0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)local_c0,(piecewise_construct_t *)local_1a0,(tuple *)&DAT_01415084,
                 (tuple *)&local_c8);
      cocos2d::Value::asString();
      if (((ulong)local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_188);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)local_188 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_188 | 1);
        if (((ulong)local_188 & 1) != 0) {
          uVar11 = local_180;
          pcVar3 = local_178;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_140,pcVar3,uVar11);
      }
      pvVar17 = local_c0[0];
      puVar4 = local_b0;
      if (((ulong)local_188 & 1) != 0) {
        operator_delete(local_178);
        pvVar17 = local_c0[0];
        puVar4 = local_b0;
      }
      while (puVar4 != (void *)0x0) {
        pvVar18 = (void *)*puVar4;
        local_c0[0] = pvVar17;
        cocos2d::Value::~Value((Value *)(puVar4 + 5));
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar17 = local_c0[0];
        puVar4 = pvVar18;
      }
      local_c0[0] = (void *)0x0;
      pvVar18 = local_98;
      puVar4 = local_88;
      if (pvVar17 != (void *)0x0) {
        operator_delete(pvVar17);
        pvVar18 = local_98;
        puVar4 = local_88;
      }
      while (puVar4 != (void *)0x0) {
        pvVar17 = (void *)*puVar4;
        local_98 = pvVar18;
        cocos2d::Value::~Value((Value *)(puVar4 + 5));
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar18 = local_98;
        puVar4 = pvVar17;
      }
      local_98 = (void *)0x0;
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
      }
    }
    if (((ulong)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) {
    pTVar14 = (Table *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe);
    pTVar14 = (Table *)0x0;
    if (uVar11 != 0) {
      pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,(char *)(pTVar14 + 4));
  if (((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x2f) ||
      (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x2e), uVar11 == 0)) ||
     (param_2[uVar11] == (Table)0x0)) {
    cocos2d::ui::Button::setTitleText((Button *)param_1,(basic_string *)&local_98);
    goto LAB_00c7404c;
  }
  plVar7 = (long *)LocalizationHelper::getCurrentManager();
  pvVar17 = local_88;
  local_1c0 = (void *)0x0;
  uStack_1b8 = 0;
  local_1b0 = (void *)0x0;
  if (((ulong)local_98 & 1) == 0) {
    uStack_1b8 = uStack_90;
    local_1c0 = local_98;
    local_1b0 = local_88;
  }
  else {
    if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_90 < 0x17) {
      pvVar18 = (void *)((ulong)&local_1c0 | 1);
      local_1c0 = (void *)(ulong)(byte)((int)uStack_90 << 1);
      if (uStack_90 != 0) goto LAB_00c749e8;
    }
    else {
      uVar11 = uStack_90 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = operator_new(uVar11);
      local_1c0 = (void *)(uVar11 | 1);
      uStack_1b8 = uStack_90;
      local_1b0 = pvVar18;
LAB_00c749e8:
      memcpy(pvVar18,pvVar17,uStack_90);
    }
    *(undefined1 *)((long)pvVar18 + uStack_90) = 0;
  }
  (**(code **)(*plVar7 + 0x18))(local_c0,plVar7,&local_1c0);
  cocos2d::ui::Button::setTitleText((Button *)param_1,(basic_string *)local_c0);
  if (((ulong)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((ulong)local_1c0 & 1) != 0) {
    operator_delete(local_1b0);
  }
LAB_00c7404c:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11;
  }
  cocos2d::Color3B::Color3B(aCStack_1c8,(uchar)pTVar14[1],(uchar)pTVar14[2],(uchar)pTVar14[3]);
  cocos2d::ui::Button::setTitleColor((Button *)param_1,aCStack_1c8);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x11) {
    pTVar14 = (Table *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x10);
    pTVar14 = (Table *)0x0;
    if (uVar11 != 0) {
      pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_c0,(char *)(pTVar14 + 4));
  cocos2d::ui::Button::setTitleFontName((Button *)param_1,(basic_string *)local_c0);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,"");
  if (*(ushort *)(pTVar14 + -(long)*(int *)pTVar14) < 5) {
    pTVar12 = (Table *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(pTVar14 + -(long)*(int *)pTVar14 + 4);
    pTVar12 = (Table *)0x0;
    if (uVar11 != 0) {
      pTVar12 = pTVar14 + uVar11 + *(uint *)(pTVar14 + uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_188,(char *)(pTVar12 + 4));
  uVar11 = (ulong)local_188 >> 1 & 0x7f;
  if (((ulong)local_188 & 1) != 0) {
    uVar11 = local_180;
  }
  if (uVar11 != 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_188);
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)local_188 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_188 | 1);
      if (((ulong)local_188 & 1) != 0) {
        uVar11 = local_180;
        pcVar3 = local_178;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,pcVar3,uVar11);
    }
    else {
      cocos2d::ui::Button::setTitleFontName((Button *)param_1,(basic_string *)&local_188);
    }
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) {
    iVar16 = 0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12);
    iVar16 = 0;
    if (uVar11 != 0) {
      iVar16 = *(int *)(param_2 + uVar11);
    }
  }
  cocos2d::ui::Button::setTitleFontSize((Button *)param_1,(float)iVar16);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1d) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1c), uVar11 == 0)) {
    TVar15 = (Table)0x1;
  }
  else {
    TVar15 = param_2[uVar11];
  }
  cocos2d::ui::Widget::setBright((Widget *)param_1,TVar15 != (Table)0x0);
  (**(code **)(*(long *)param_1 + 0x580))(param_1,TVar15 != (Table)0x0);
  pTVar14 = param_2 + -(long)*(int *)param_2;
  lVar6 = -(long)*(int *)param_2;
  if (((((0x1e < *(ushort *)pTVar14) && ((ulong)*(ushort *)(pTVar14 + 0x1e) != 0)) &&
       (0x20 < *(ushort *)pTVar14)) &&
      ((param_2[*(ushort *)(pTVar14 + 0x1e)] != (Table)0x0 &&
       ((ulong)*(ushort *)(pTVar14 + 0x20) != 0)))) &&
     (pTVar14 = param_2 + *(ushort *)(pTVar14 + 0x20), pTVar14 != (Table *)0x0)) {
    cocos2d::Color4B::Color4B
              ((Color4B *)local_1a0,(uchar)pTVar14[1],(uchar)pTVar14[2],(uchar)pTVar14[3],
               (uchar)*pTVar14);
    plVar7 = (long *)cocos2d::ui::Button::getTitleRenderer((Button *)param_1);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x23) ||
       (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x22), uVar11 == 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + uVar11);
    }
    (**(code **)(*plVar7 + 0x5a8))(plVar7,local_1a0,uVar9);
    lVar6 = -(long)*(int *)param_2;
  }
  pTVar14 = param_2 + lVar6;
  if ((((0x24 < *(ushort *)pTVar14) && ((ulong)*(ushort *)(pTVar14 + 0x24) != 0)) &&
      (0x26 < *(ushort *)pTVar14)) &&
     (((param_2[*(ushort *)(pTVar14 + 0x24)] != (Table)0x0 &&
       ((ulong)*(ushort *)(pTVar14 + 0x26) != 0)) &&
      (pTVar14 = param_2 + *(ushort *)(pTVar14 + 0x26), pTVar14 != (Table *)0x0)))) {
    cocos2d::Color4B::Color4B
              ((Color4B *)&local_c8,(uchar)pTVar14[1],(uchar)pTVar14[2],(uchar)pTVar14[3],
               (uchar)*pTVar14);
    plVar7 = (long *)cocos2d::ui::Button::getTitleRenderer((Button *)param_1);
    fVar21 = -2.0;
    pTVar14 = param_2 + -(long)*(int *)param_2;
    if (*(ushort *)pTVar14 < 0x29) {
      fVar20 = 2.0;
    }
    else {
      if ((ulong)*(ushort *)(pTVar14 + 0x28) == 0) {
        fVar20 = 2.0;
      }
      else {
        fVar20 = *(float *)(param_2 + *(ushort *)(pTVar14 + 0x28));
      }
      if ((0x2a < *(ushort *)pTVar14) && ((ulong)*(ushort *)(pTVar14 + 0x2a) != 0)) {
        fVar21 = *(float *)(param_2 + *(ushort *)(pTVar14 + 0x2a));
      }
    }
    cocos2d::Size::Size((Size *)local_1a0,fVar20,fVar21);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x2d) ||
       (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x2c), uVar11 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + uVar11);
    }
    (**(code **)(*plVar7 + 0x5a0))(plVar7,&local_c8,local_1a0,uVar9);
  }
  plVar7 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar11 == 0)) {
    pTVar14 = (Table *)0x0;
  }
  else {
    pTVar14 = param_2 + uVar11 + *(uint *)(param_2 + uVar11);
  }
  (**(code **)(*plVar7 + 0x30))(plVar7,param_1,pTVar14);
  if (TVar19 == (Table)0x0) {
    pTVar14 = param_2 + -(long)*(int *)param_2;
    if (*(ushort *)pTVar14 < 5) {
      pTVar12 = (Table *)0x0;
    }
    else {
      pTVar12 = (Table *)0x0;
      if ((ulong)*(ushort *)(pTVar14 + 4) != 0) {
        pTVar12 = param_2 + *(ushort *)(pTVar14 + 4) + *(uint *)(param_2 + *(ushort *)(pTVar14 + 4))
        ;
      }
    }
    if (*(ushort *)pTVar14 < 5) {
      pTVar13 = (Table *)0x0;
    }
    else {
      pTVar13 = (Table *)0x0;
      if ((ulong)*(ushort *)(pTVar14 + 4) != 0) {
        pTVar13 = param_2 + *(ushort *)(pTVar14 + 4) + *(uint *)(param_2 + *(ushort *)(pTVar14 + 4))
        ;
      }
    }
    cocos2d::Size::Size((Size *)local_1a0,
                        *(float *)(pTVar12 + *(ushort *)(pTVar12 + (0x1a - (long)*(int *)pTVar12))),
                        *(float *)(pTVar13 +
                                  (ulong)*(ushort *)(pTVar13 + (0x1a - (long)*(int *)pTVar13)) + 4))
    ;
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_1a0);
  }
  else {
    cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,false);
    (**(code **)(*(long *)param_1 + 0x600))(param_1,0);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) ||
       (uVar11 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16), uVar11 == 0)) {
      pTVar14 = (Table *)0x0;
    }
    else {
      pTVar14 = param_2 + uVar11;
    }
    cocos2d::Rect::Rect((Rect *)local_1a0,*(float *)pTVar14,*(float *)(pTVar14 + 4),
                        *(float *)(pTVar14 + 8),*(float *)(pTVar14 + 0xc));
    cocos2d::ui::Button::setCapInsets(param_1);
    cocos2d::Size::Size((Size *)&local_c8,
                        *(float *)(param_2 + *(ushort *)(param_2 + (0x18 - (long)*(int *)param_2))),
                        *(float *)(param_2 + *(ushort *)(param_2 + (0x18 - (long)*(int *)param_2)) +
                                  4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_c8);
  }
  cocos2d::ui::Widget::setBright((Widget *)param_1,TVar15 != (Table)0x0);
  if (((ulong)local_188 & 1) != 0) {
    operator_delete(local_178);
  }
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (((ulong)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (((ulong)local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  if (((ulong)local_140 & 1) != 0) {
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
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

