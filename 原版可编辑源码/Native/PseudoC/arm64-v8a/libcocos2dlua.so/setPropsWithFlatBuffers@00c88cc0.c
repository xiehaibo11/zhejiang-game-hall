
/* cocostudio::LoadingBarReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::LoadingBarReader::setPropsWithFlatBuffers
          (LoadingBarReader *this,Node *param_1,Table *param_2)

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
  Table *pTVar11;
  ulong uVar12;
  Table *pTVar13;
  int iVar14;
  void *pvVar15;
  void *pvVar16;
  float fVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_120 [2];
  void *local_110;
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
  undefined8 *local_88;
  void *local_70 [2];
  undefined8 *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar12 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar12 == 0)) {
    pTVar11 = (Table *)0x0;
  }
  else {
    pTVar11 = param_2 + uVar12 + *(uint *)(param_2 + uVar12);
  }
  pTVar13 = pTVar11 + -(long)*(int *)pTVar11;
  if (*(ushort *)pTVar13 < 9) {
    iVar14 = 0;
    if (4 < *(ushort *)pTVar13) goto LAB_00c88d70;
    pTVar13 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar13 + 8) == 0) {
LAB_00c88d70:
      iVar14 = 0;
      uVar12 = (ulong)*(ushort *)(pTVar13 + 4);
      pTVar13 = (Table *)0x0;
      if (uVar12 == 0) goto LAB_00c88d84;
    }
    else {
      iVar14 = *(int *)(pTVar11 + *(ushort *)(pTVar13 + 8));
      uVar12 = (ulong)*(ushort *)(pTVar13 + 4);
      if (uVar12 == 0) {
        pTVar13 = (Table *)0x0;
        goto LAB_00c88d84;
      }
    }
    pTVar13 = pTVar11 + uVar12 + *(uint *)(pTVar11 + uVar12);
  }
LAB_00c88d84:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,(char *)(pTVar13 + 4));
  if (iVar14 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar12 = (**(code **)(*plVar7 + 0x128))(plVar7,local_d8);
    if ((uVar12 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_d8);
      if (lVar6 == 0) {
        uVar12 = (ulong)((byte)local_d8[0] >> 1);
        pcVar3 = (char *)((ulong)local_d8 | 1);
        if (((byte)local_d8[0] & 1) != 0) {
          uVar12 = local_d0;
          pcVar3 = local_c8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c0,pcVar3,uVar12);
        goto LAB_00c88e44;
      }
      goto LAB_00c88e34;
    }
    uVar10 = 0;
  }
  else {
    if (iVar14 != 1) goto LAB_00c88e44;
    if (*(ushort *)(pTVar11 + -(long)*(int *)pTVar11) < 7) {
      pTVar13 = (Table *)0x0;
    }
    else {
      uVar12 = (ulong)*(ushort *)(pTVar11 + -(long)*(int *)pTVar11 + 6);
      pTVar13 = (Table *)0x0;
      if (uVar12 != 0) {
        pTVar13 = pTVar11 + uVar12 + *(uint *)(pTVar11 + uVar12);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f0,(char *)(pTVar13 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_d8);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar12 = (**(code **)(*plVar7 + 0x128))(plVar7,local_f0);
      if ((uVar12 & 1) == 0) {
        uVar12 = (ulong)((byte)local_f0[0] >> 1);
        pcVar3 = (char *)((ulong)local_f0 | 1);
        if (((byte)local_f0[0] & 1) != 0) {
          uVar12 = local_e8;
          pcVar3 = local_e0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c0,pcVar3,uVar12);
      }
      else {
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar7 + 0xc0))(local_70,plVar7,local_f0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_108,"metadata");
        local_120[0] = local_108;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_70,(piecewise_construct_t *)local_108,
                           (tuple *)&DAT_014153cd,(tuple *)local_120);
        puVar8 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_98,puVar8);
        if (((byte)local_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_120,"textureFileName");
        local_a0 = (undefined1 *)local_120;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_98,(piecewise_construct_t *)local_120,
                   (tuple *)&DAT_014153cd,(tuple *)&local_a0);
        cocos2d::Value::asString();
        if (((ulong)local_120[0] & 1) != 0) {
          operator_delete(local_110);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar12 = (**(code **)(*plVar7 + 0x128))(plVar7,local_108);
        if ((uVar12 & 1) == 0) {
          uVar12 = (ulong)((byte)local_108[0] >> 1);
          pcVar3 = (char *)((ulong)local_108 | 1);
          if (((byte)local_108[0] & 1) != 0) {
            uVar12 = local_100;
            pcVar3 = local_f8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_c0,pcVar3,uVar12);
        }
        pvVar16 = local_98[0];
        puVar4 = local_88;
        if (((byte)local_108[0] & 1) != 0) {
          operator_delete(local_f8);
          pvVar16 = local_98[0];
          puVar4 = local_88;
        }
        while (puVar4 != (void *)0x0) {
          pvVar15 = (void *)*puVar4;
          local_98[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar16 = local_98[0];
          puVar4 = pvVar15;
        }
        local_98[0] = (void *)0x0;
        pvVar15 = local_70[0];
        puVar4 = local_60;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
          pvVar15 = local_70[0];
          puVar4 = local_60;
        }
        while (puVar4 != (void *)0x0) {
          pvVar16 = (void *)*puVar4;
          local_70[0] = pvVar15;
          cocos2d::Value::~Value((Value *)(puVar4 + 5));
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar15 = local_70[0];
          puVar4 = pvVar16;
        }
        local_70[0] = (void *)0x0;
        if (pvVar15 != (void *)0x0) {
          operator_delete(pvVar15);
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
    if (!bVar2) goto LAB_00c88e44;
LAB_00c88e34:
    uVar10 = 1;
  }
  cocos2d::ui::LoadingBar::loadTexture((LoadingBar *)param_1,local_d8,uVar10);
LAB_00c88e44:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar12 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar12 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(param_2 + uVar12);
  }
  cocos2d::ui::LoadingBar::setDirection((LoadingBar *)param_1,uVar9);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
     (uVar12 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar12 == 0)) {
    fVar17 = 80.0;
  }
  else {
    fVar17 = (float)*(int *)(param_2 + uVar12);
  }
  cocos2d::ui::LoadingBar::setPercent((LoadingBar *)param_1,fVar17);
  plVar7 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar12 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar12 == 0)) {
    pTVar11 = (Table *)0x0;
  }
  else {
    pTVar11 = param_2 + uVar12 + *(uint *)(param_2 + uVar12);
  }
  (**(code **)(*plVar7 + 0x30))(plVar7,param_1,pTVar11);
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

