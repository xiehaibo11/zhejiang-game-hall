
/* cocostudio::ImageViewReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::ImageViewReader::setPropsWithFlatBuffers
          (ImageViewReader *this,Node *param_1,Table *param_2)

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
  ulong uVar10;
  Table *pTVar11;
  Table *pTVar12;
  Table TVar13;
  int iVar14;
  void *pvVar15;
  void *pvVar16;
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
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar10 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  pTVar11 = pTVar12 + -(long)*(int *)pTVar12;
  if (*(ushort *)pTVar11 < 9) {
    iVar14 = 0;
    if (4 < *(ushort *)pTVar11) goto LAB_00c7ea24;
    pTVar11 = (Table *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar11 + 8) == 0) {
LAB_00c7ea24:
      iVar14 = 0;
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      pTVar11 = (Table *)0x0;
      if (uVar10 == 0) goto LAB_00c7ea38;
    }
    else {
      iVar14 = *(int *)(pTVar12 + *(ushort *)(pTVar11 + 8));
      uVar10 = (ulong)*(ushort *)(pTVar11 + 4);
      if (uVar10 == 0) {
        pTVar11 = (Table *)0x0;
        goto LAB_00c7ea38;
      }
    }
    pTVar11 = pTVar12 + uVar10 + *(uint *)(pTVar12 + uVar10);
  }
LAB_00c7ea38:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,(char *)(pTVar11 + 4));
  if (iVar14 == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar7 + 0x128))(plVar7,local_d8);
    if ((uVar10 & 1) == 0) {
      pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_d8);
      if (lVar6 == 0) {
        uVar10 = (ulong)((byte)local_d8[0] >> 1);
        pcVar3 = (char *)((ulong)local_d8 | 1);
        if (((byte)local_d8[0] & 1) != 0) {
          uVar10 = local_d0;
          pcVar3 = local_c8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c0,pcVar3,uVar10);
        goto LAB_00c7eaf8;
      }
      goto LAB_00c7eae8;
    }
    uVar9 = 0;
  }
  else {
    if (iVar14 != 1) goto LAB_00c7eaf8;
    if (*(ushort *)(pTVar12 + -(long)*(int *)pTVar12) < 7) {
      pTVar11 = (Table *)0x0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(pTVar12 + -(long)*(int *)pTVar12 + 6);
      pTVar11 = (Table *)0x0;
      if (uVar10 != 0) {
        pTVar11 = pTVar12 + uVar10 + *(uint *)(pTVar12 + uVar10);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f0,(char *)(pTVar11 + 4));
    pSVar5 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    lVar6 = cocos2d::SpriteFrameCache::getSpriteFrameByName(pSVar5,(basic_string *)local_d8);
    if (lVar6 == 0) {
      plVar7 = (long *)cocos2d::FileUtils::getInstance();
      uVar10 = (**(code **)(*plVar7 + 0x128))(plVar7,local_f0);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)((byte)local_f0[0] >> 1);
        pcVar3 = (char *)((ulong)local_f0 | 1);
        if (((byte)local_f0[0] & 1) != 0) {
          uVar10 = local_e8;
          pcVar3 = local_e0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c0,pcVar3,uVar10);
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
                           (tuple *)&DAT_014151d3,(tuple *)local_120);
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
                   (tuple *)&DAT_014151d3,(tuple *)&local_a0);
        cocos2d::Value::asString();
        if (((ulong)local_120[0] & 1) != 0) {
          operator_delete(local_110);
        }
        plVar7 = (long *)cocos2d::FileUtils::getInstance();
        uVar10 = (**(code **)(*plVar7 + 0x128))(plVar7,local_108);
        if ((uVar10 & 1) == 0) {
          uVar10 = (ulong)((byte)local_108[0] >> 1);
          pcVar3 = (char *)((ulong)local_108 | 1);
          if (((byte)local_108[0] & 1) != 0) {
            uVar10 = local_100;
            pcVar3 = local_f8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_c0,pcVar3,uVar10);
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
    if (!bVar2) goto LAB_00c7eaf8;
LAB_00c7eae8:
    uVar9 = 1;
  }
  cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_d8,uVar9);
LAB_00c7eaf8:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), uVar10 == 0)) {
    TVar13 = (Table)0x0;
  }
  else {
    TVar13 = param_2[uVar10];
  }
  cocos2d::ui::ImageView::setScale9Enabled(SUB81(param_1,0));
  plVar7 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar10 == 0)) {
    pTVar12 = (Table *)0x0;
  }
  else {
    pTVar12 = param_2 + uVar10 + *(uint *)(param_2 + uVar10);
  }
  (**(code **)(*plVar7 + 0x30))(plVar7,param_1,pTVar12);
  if (TVar13 == (Table)0x0) {
    pTVar12 = param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)) +
              *(uint *)(param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)));
    cocos2d::Size::Size((Size *)local_70,
                        *(float *)(pTVar12 + *(ushort *)(pTVar12 + (0x1a - (long)*(int *)pTVar12))),
                        *(float *)(pTVar12 + *(ushort *)(pTVar12 + (0x1a - (long)*(int *)pTVar12)) +
                                  4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_70);
  }
  else {
    cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,false);
    (**(code **)(*(long *)param_1 + 0x600))(param_1,0);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
       (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar10 == 0)) {
      pTVar12 = (Table *)0x0;
    }
    else {
      pTVar12 = param_2 + uVar10;
    }
    cocos2d::Size::Size((Size *)local_98,*(float *)pTVar12,*(float *)(pTVar12 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_98);
    if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) ||
       (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar10 == 0)) {
      pTVar12 = (Table *)0x0;
    }
    else {
      pTVar12 = param_2 + uVar10;
    }
    cocos2d::Rect::Rect((Rect *)local_70,*(float *)pTVar12,*(float *)(pTVar12 + 4),
                        *(float *)(pTVar12 + 8),*(float *)(pTVar12 + 0xc));
    cocos2d::ui::ImageView::setCapInsets(param_1);
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

