
/* cocos2d::SpriteFrameCache::reloadTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::SpriteFrameCache::reloadTexture(SpriteFrameCache *this,basic_string *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  basic_string *pbVar8;
  ulong *puVar9;
  Director *pDVar10;
  TextureCache *pTVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  void *pvVar15;
  ulong *local_e0 [2];
  void *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined1 *local_78;
  void *local_70 [2];
  undefined8 *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::set<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::set<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,s...tor<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::set<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::set<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,s___tor<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
                      *)(this + 0x78),param_1);
  uVar13 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x38) == 0) {
      uVar13 = 0;
    }
    else {
      PlistFramesCache::erasePlistIndex((PlistFramesCache *)(this + 0x50),param_1);
      plVar7 = (long *)FileUtils::getInstance();
      (**(code **)(*plVar7 + 0x50))(local_98,plVar7,param_1);
      plVar7 = (long *)FileUtils::getInstance();
      (**(code **)(*plVar7 + 0xc0))(local_70,plVar7,local_98);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b0,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,"metadata");
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          *)local_70,(basic_string *)&local_c8);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if (lVar6 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c8,"metadata");
        local_e0[0] = &local_c8;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_70,(piecewise_construct_t *)&local_c8,
                           (tuple *)&DAT_0143da32,(tuple *)local_e0);
        pbVar8 = (basic_string *)cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_e0,"textureFileName");
        local_78 = (undefined1 *)local_e0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  (pbVar8,(piecewise_construct_t *)local_e0,(tuple *)&DAT_0143da32,
                   (tuple *)&local_78);
        cocos2d::Value::asString();
        if (((byte)local_b0._0_1_ & 1) != 0) {
          *local_a0 = 0;
          uStack_a8 = 0;
          if (((byte)local_b0._0_1_ & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        uStack_a8 = uStack_c0;
        local_b0 = local_c8;
        local_c8 = 0;
        uStack_c0 = 0;
        local_a0 = local_b8;
        local_b8 = (undefined1 *)0x0;
        if (((ulong)local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
      }
      uVar14 = (ulong)((byte)local_b0._0_1_ >> 1);
      uVar12 = uVar14;
      if ((local_b0 & 1) != 0) {
        uVar12 = uStack_a8;
      }
      if (uVar12 == 0) {
        if ((basic_string *)&local_b0 != param_1) {
          uVar12 = *(ulong *)(param_1 + 8);
          pbVar8 = *(basic_string **)(param_1 + 0x10);
          if (((byte)*param_1 & 1) == 0) {
            pbVar8 = param_1 + 1;
            uVar12 = (ulong)((byte)*param_1 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,(char *)pbVar8,uVar12);
          uVar14 = (ulong)((byte)local_b0._0_1_ >> 1);
        }
        puVar1 = (undefined1 *)((ulong)&local_b0 | 1);
        if (((byte)local_b0._0_1_ & 1) != 0) {
          puVar1 = local_a0;
          uVar14 = uStack_a8;
        }
        uVar12 = uVar14;
        if (uVar14 == 0) {
LAB_00f49260:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        do {
          if (uVar12 == 0) {
            uVar12 = 0xffffffffffffffff;
            break;
          }
          lVar6 = uVar12 - 1;
          uVar12 = uVar12 - 1;
        } while (puVar1[lVar6] != '.');
        if (uVar14 < uVar12) goto LAB_00f49260;
        uVar14 = uVar12;
        if (((byte)local_b0._0_1_ & 1) == 0) {
          local_b0 = CONCAT71(local_b0._1_7_,(char)((int)uVar12 << 1));
          uVar14 = uStack_a8;
        }
        uStack_a8 = uVar14;
        puVar1[uVar12] = 0;
        puVar9 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_b0,".png",4);
        if (&local_b0 != puVar9) {
          uVar12 = puVar9[1];
          pbVar2 = (byte *)puVar9[2];
          if (((byte)*puVar9 & 1) == 0) {
            pbVar2 = (byte *)((long)puVar9 + 1);
            uVar12 = (ulong)(byte)((byte)*puVar9 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,(char *)pbVar2,uVar12);
        }
      }
      else {
        plVar7 = (long *)FileUtils::getInstance();
        (**(code **)(*plVar7 + 0x68))(&local_c8,plVar7,&local_b0,param_1);
        if ((local_b0 & 1) != 0) {
          *local_a0 = 0;
          uStack_a8 = 0;
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        uStack_a8 = uStack_c0;
        local_b0 = local_c8;
        local_a0 = local_b8;
      }
      pDVar10 = (Director *)Director::getInstance();
      pTVar11 = (TextureCache *)Director::getTextureCache(pDVar10);
      uVar12 = TextureCache::reloadTexture(pTVar11,(basic_string *)&local_b0);
      if ((uVar12 & 1) != 0) {
        pDVar10 = (Director *)Director::getInstance();
        pTVar11 = (TextureCache *)Director::getTextureCache(pDVar10);
        pbVar8 = (basic_string *)TextureCache::getTextureForKey(pTVar11,(basic_string *)&local_b0);
        if (pbVar8 != (basic_string *)0x0) {
          reloadSpriteFramesWithDictionary((unordered_map *)this,(Texture2D *)local_70,pbVar8);
        }
      }
      pvVar4 = local_70[0];
      puVar5 = local_60;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
        pvVar4 = local_70[0];
        puVar5 = local_60;
      }
      while (puVar5 != (void *)0x0) {
        pvVar15 = (void *)*puVar5;
        local_70[0] = pvVar4;
        cocos2d::Value::~Value((Value *)(puVar5 + 5));
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          operator_delete((void *)puVar5[4]);
        }
        operator_delete(puVar5);
        pvVar4 = local_70[0];
        puVar5 = pvVar15;
      }
      local_70[0] = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      uVar13 = 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

