
/* cocostudio::SpriteReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::SpriteReader::setPropsWithFlatBuffers(SpriteReader *this,Node *param_1,Table *param_2)

{
  Table *pTVar1;
  Table TVar2;
  Table TVar3;
  Table TVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  SpriteFrameCache *this_00;
  long lVar11;
  unordered_map *puVar12;
  ulong uVar13;
  Table *pTVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  Table *pTVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_130 [2];
  void *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
  ulong local_110;
  char *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [8];
  ulong local_c8;
  char *local_c0;
  undefined1 *local_b0;
  void *local_a8 [2];
  undefined8 *local_98;
  void *local_80 [2];
  undefined8 *local_70;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar10 = (long *)NodeReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar13 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar13 == 0)) {
    pTVar18 = (Table *)0x0;
  }
  else {
    pTVar18 = param_2 + uVar13 + *(uint *)(param_2 + uVar13);
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,param_1,pTVar18);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar13 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar13 == 0)) {
    pTVar18 = (Table *)0x0;
  }
  else {
    pTVar18 = param_2 + uVar13 + *(uint *)(param_2 + uVar13);
  }
  pTVar14 = pTVar18 + -(long)*(int *)pTVar18;
  if (*(ushort *)pTVar14 < 9) {
    iVar15 = 0;
    if (4 < *(ushort *)pTVar14) goto LAB_00cd76bc;
    pTVar14 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar14 + 8) == 0) {
LAB_00cd76bc:
      iVar15 = 0;
      uVar13 = (ulong)*(ushort *)(pTVar14 + 4);
      pTVar14 = (Table *)0x0;
      if (uVar13 == 0) goto LAB_00cd76d0;
    }
    else {
      iVar15 = *(int *)(pTVar18 + *(ushort *)(pTVar14 + 8));
      uVar13 = (ulong)*(ushort *)(pTVar14 + 4);
      if (uVar13 == 0) {
        pTVar14 = (Table *)0x0;
        goto LAB_00cd76d0;
      }
    }
    pTVar14 = pTVar18 + uVar13 + *(uint *)(pTVar18 + uVar13);
  }
LAB_00cd76d0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,(char *)(pTVar14 + 4));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"");
  if (iVar15 == 0) {
    plVar10 = (long *)cocos2d::FileUtils::getInstance();
    uVar13 = (**(code **)(*plVar10 + 0x128))(plVar10,local_d0);
    if ((uVar13 & 1) == 0) {
      uVar13 = (ulong)((byte)local_d0[0] >> 1);
      pcVar6 = (char *)((ulong)local_d0 | 1);
      if (((byte)local_d0[0] & 1) != 0) {
        uVar13 = local_c8;
        pcVar6 = local_c0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_e8,pcVar6,uVar13);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x540))(param_1,local_d0);
    }
  }
  else if (iVar15 == 1) {
    if (*(ushort *)(pTVar18 + -(long)*(int *)pTVar18) < 7) {
      pTVar14 = (Table *)0x0;
    }
    else {
      uVar13 = (ulong)*(ushort *)(pTVar18 + -(long)*(int *)pTVar18 + 6);
      pTVar14 = (Table *)0x0;
      if (uVar13 != 0) {
        pTVar14 = pTVar18 + uVar13 + *(uint *)(pTVar18 + uVar13);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_100,(char *)(pTVar14 + 4));
    this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar11 = cocos2d::SpriteFrameCache::getSpriteFrameByName(this_00,(basic_string *)local_d0);
    if (lVar11 == 0) {
      plVar10 = (long *)cocos2d::FileUtils::getInstance();
      uVar13 = (**(code **)(*plVar10 + 0x128))(plVar10,local_100);
      if ((uVar13 & 1) == 0) {
        uVar13 = (ulong)((byte)local_100[0] >> 1);
        pcVar6 = (char *)((ulong)local_100 | 1);
        if (((byte)local_100[0] & 1) != 0) {
          uVar13 = local_f8;
          pcVar6 = local_f0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_e8,pcVar6,uVar13);
      }
      else {
        plVar10 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar10 + 0xc0))(local_80,plVar10,local_100);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_118,"metadata");
        local_130[0] = local_118;
        lVar11 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)local_80,(piecewise_construct_t *)local_118,
                            (tuple *)&DAT_01417193,(tuple *)local_130);
        puVar12 = (unordered_map *)cocos2d::Value::asValueMap((Value *)(lVar11 + 0x28));
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
        ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                         *)local_a8,puVar12);
        if (((byte)local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_130,"textureFileName");
        local_b0 = (undefined1 *)local_130;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)local_a8,(piecewise_construct_t *)local_130,
                   (tuple *)&DAT_01417193,(tuple *)&local_b0);
        cocos2d::Value::asString();
        if (((ulong)local_130[0] & 1) != 0) {
          operator_delete(local_120);
        }
        plVar10 = (long *)cocos2d::FileUtils::getInstance();
        uVar13 = (**(code **)(*plVar10 + 0x128))(plVar10,local_118);
        if ((uVar13 & 1) == 0) {
          uVar13 = (ulong)((byte)local_118[0] >> 1);
          pcVar6 = (char *)((ulong)local_118 | 1);
          if (((byte)local_118[0] & 1) != 0) {
            uVar13 = local_110;
            pcVar6 = local_108;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_e8,pcVar6,uVar13);
        }
        pvVar17 = local_a8[0];
        puVar7 = local_98;
        if (((byte)local_118[0] & 1) != 0) {
          operator_delete(local_108);
          pvVar17 = local_a8[0];
          puVar7 = local_98;
        }
        while (puVar7 != (void *)0x0) {
          pvVar16 = (void *)*puVar7;
          local_a8[0] = pvVar17;
          cocos2d::Value::~Value((Value *)(puVar7 + 5));
          if ((*(byte *)(puVar7 + 2) & 1) != 0) {
            operator_delete((void *)puVar7[4]);
          }
          operator_delete(puVar7);
          pvVar17 = local_a8[0];
          puVar7 = pvVar16;
        }
        local_a8[0] = (void *)0x0;
        pvVar16 = local_80[0];
        puVar7 = local_70;
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
          pvVar16 = local_80[0];
          puVar7 = local_70;
        }
        while (puVar7 != (void *)0x0) {
          pvVar17 = (void *)*puVar7;
          local_80[0] = pvVar16;
          cocos2d::Value::~Value((Value *)(puVar7 + 5));
          if ((*(byte *)(puVar7 + 2) & 1) != 0) {
            operator_delete((void *)puVar7[4]);
          }
          operator_delete(puVar7);
          pvVar16 = local_80[0];
          puVar7 = pvVar17;
        }
        local_80[0] = (void *)0x0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0x598))(param_1);
    }
    if (((byte)local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
  }
  lVar11 = -(long)*(int *)param_2;
  if (((8 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
      (uVar13 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar13 != 0)) &&
     (param_2 + uVar13 != (Table *)0x0)) {
    local_80[0] = *(void **)(param_2 + uVar13);
    (**(code **)(*(long *)param_1 + 0x5e0))(param_1,local_80);
    lVar11 = -(long)*(int *)param_2;
  }
  if ((*(ushort *)(param_2 + lVar11) < 5) ||
     (uVar13 = (ulong)*(ushort *)(param_2 + lVar11 + 4), uVar13 == 0)) {
    pTVar18 = (Table *)0x0;
  }
  else {
    pTVar18 = param_2 + uVar13 + *(uint *)(param_2 + uVar13);
  }
  pTVar14 = pTVar18 + *(ushort *)(pTVar18 + (0x18 - (long)*(int *)pTVar18));
  pTVar1 = (Table *)0x0;
  if (*(ushort *)(pTVar18 + (0x18 - (long)*(int *)pTVar18)) != 0) {
    pTVar1 = pTVar14;
  }
  TVar2 = pTVar1[1];
  TVar3 = pTVar1[2];
  TVar4 = pTVar14[3];
  if (*pTVar14 != (Table)0xff) {
    (**(code **)(*(long *)param_1 + 0x490))(param_1);
  }
  if ((((byte)TVar3 & (byte)TVar2) != 0xff) || (TVar4 != (Table)0xff)) {
    cocos2d::Color3B::Color3B((Color3B *)local_80,(uchar)TVar2,(uchar)TVar3,(uchar)TVar4);
    (**(code **)(*(long *)param_1 + 0x4c0))(param_1,local_80);
  }
  pTVar14 = pTVar18 + -(long)*(int *)pTVar18;
  if (*(ushort *)pTVar14 < 0x1d) goto LAB_00cd7b18;
  bVar8 = false;
  if ((ulong)*(ushort *)(pTVar14 + 0x1c) != 0) {
    bVar8 = pTVar18[*(ushort *)(pTVar14 + 0x1c)] != (Table)0x0;
  }
  if ((*(ushort *)pTVar14 < 0x1f) || ((ulong)*(ushort *)(pTVar14 + 0x1e) == 0)) {
    if (!bVar8) goto LAB_00cd7b18;
    bVar9 = false;
LAB_00cd7afc:
    cocos2d::Sprite::setFlippedX((Sprite *)param_1,true);
  }
  else {
    bVar9 = pTVar18[*(ushort *)(pTVar14 + 0x1e)] != (Table)0x0;
    if (bVar8) goto LAB_00cd7afc;
  }
  if (bVar9) {
    cocos2d::Sprite::setFlippedY((Sprite *)param_1,true);
  }
LAB_00cd7b18:
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

