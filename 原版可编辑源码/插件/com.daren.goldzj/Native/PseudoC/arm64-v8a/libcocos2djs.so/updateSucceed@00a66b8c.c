
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::AssetsManagerEx::updateSucceed() */

void __thiscall cocos2d::extension::AssetsManagerEx::updateSucceed(AssetsManagerEx *this)

{
  AssetsManagerEx *pAVar1;
  byte bVar2;
  basic_string *__n;
  long lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  void *__dest;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  Manifest *this_00;
  undefined8 uVar10;
  basic_string *pbVar11;
  uint uVar12;
  byte *pbVar13;
  AssetsManagerEx *pAVar14;
  byte *pbVar15;
  byte local_148 [16];
  void *local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  ulong local_110;
  ulong uStack_108;
  undefined1 *local_100;
  byte *local_f8;
  byte *local_f0;
  void *local_e8;
  ManifestAsset local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined5 uStack_d7;
  undefined2 uStack_d2;
  undefined1 uStack_d0;
  undefined5 uStack_cf;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  basic_string local_c8 [16];
  void *local_b8;
  int local_a0;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
  local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(Manifest **)(this + 0xe8) != (Manifest *)0x0) {
    Manifest::setUpdating(*(Manifest **)(this + 0xe8),false);
  }
  uVar6 = (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),this + 0xb0);
  if ((uVar6 & 1) != 0) {
    local_e0 = (ManifestAsset)0x2a;
    uStack_c9 = 0;
    uStack_cf = 0x706d65742e;
    uStack_d7 = 0x66696e616d;
    uStack_d2 = 0x7365;
    uStack_d0 = 0x74;
    uStack_df = 0x7463656a6f7270;
    uStack_d8 = 0x2e;
    uStack_86 = 0;
    local_98 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
                )0x20;
    uStack_ca = 0;
    uStack_8f = 0x736566696e616d;
    uStack_88 = 0x74;
                    /* try { // try from 00a66c30 to 00b66d17 has its CatchHandler @ 00a66a40 */
    uStack_97 = 0x7463656a6f7270;
    uStack_90 = 0x2e;
    uStack_87 = 0;
    (**(code **)(**(long **)(this + 0x28) + 0x140))
              (*(long **)(this + 0x28),this + 0x68,&local_e0,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,uStack_88)));
    }
    if (((byte)local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0))))
      ;
    }
  }
  pAVar14 = this + 0x68;
  Manifest::genDiff(*(Manifest **)(this + 0xe0));
  uVar6 = (**(code **)(**(long **)(this + 0x28) + 0x110))(*(long **)(this + 0x28),pAVar14);
  if ((uVar6 & 1) != 0) {
    local_f0 = (byte *)0x0;
    local_e8 = (void *)0x0;
                    /* catch() { ... } // from try @ 00a66ac4 with catch @ 00a66ca8 */
    local_f8 = (byte *)0x0;
                    /* catch() { ... } // from try @ 00a66ab8 with catch @ 00a66cac */
                    /* catch() { ... } // from try @ 00a66a98 with catch @ 00a66cb0 */
    pbVar11 = (basic_string *)&local_f8;
                    /* catch() { ... } // from try @ 00a66ad0 with catch @ 00a66cc0 */
    (**(code **)(**(long **)(this + 0x28) + 0x120))(*(long **)(this + 0x28),pAVar14);
    if (((byte)*pAVar14 & 1) == 0) {
      uVar12 = (uint)((byte)*pAVar14 >> 1);
    }
    else {
      uVar12 = (uint)*(undefined8 *)(this + 0x70);
    }
    local_110 = 0;
    uStack_108 = 0;
    local_100 = (undefined1 *)0x0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = (undefined1 *)0x0;
    if (local_f8 != local_f0) {
      uVar6 = (ulong)(int)uVar12;
      pbVar15 = local_f8;
      do {
        local_e0 = (ManifestAsset)0x0;
        uStack_df = 0;
        uStack_d8 = 0;
        uStack_d7 = 0;
        uStack_d2 = 0;
        uStack_d0 = 0;
        uStack_cf = 0;
        uStack_ca = 0;
        uStack_c9 = 0;
                    /* try { // try from 00a66d18 to 00b66d77 has its CatchHandler @ 00a66d18
                       catch() { ... } // from try @ 00a66d18 with catch @ 00a66d18
                       catch() { ... } // from try @ 00a6711c with catch @ 00a66d18 */
        bVar2 = *pbVar15;
        uVar8 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar15 + 8);
        }
        __n = (basic_string *)(uVar8 - uVar6);
        if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar13 = *(byte **)(pbVar15 + 0x10);
        if ((bVar2 & 1) == 0) {
          pbVar13 = pbVar15 + 1;
        }
        if ((basic_string *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < (basic_string *)0x17) {
          local_e0 = SUB41((int)__n << 1,0);
          __dest = (void *)((ulong)&local_e0 | 1);
          if (__n != (basic_string *)0x0) goto LAB_00a66d84;
        }
        else {
          uVar8 = (ulong)(__n + 0x10) & 0xfffffffffffffff0;
          __dest = operator_new(uVar8);
          local_e0 = (ManifestAsset)((byte)uVar8 | 1);
                    /* try { // try from 00a66d78 to 00b66d8f has its CatchHandler @ 00a67170 */
          uStack_d8 = SUB81(__n,0);
          uStack_d7 = (undefined5)((ulong)__n >> 8);
          uStack_d2 = (undefined2)((ulong)__n >> 0x30);
          uStack_d0 = SUB81(__dest,0);
          uStack_cf = (undefined5)((ulong)__dest >> 8);
          uStack_ca = (undefined1)((ulong)__dest >> 0x30);
          uStack_c9 = (undefined1)((ulong)__dest >> 0x38);
          uStack_df = (undefined7)(uVar8 >> 8);
LAB_00a66d84:
          pbVar11 = __n;
          memcpy(__dest,pbVar13 + uVar6,(size_t)__n);
        }
                    /* try { // try from 00a66d98 to 00b66da3 has its CatchHandler @ 00a6716c */
        *(basic_string *)((long)__dest + (long)__n) = (basic_string)0x0;
        if ((local_110 & 1) != 0) {
          *local_100 = 0;
                    /* try { // try from 00a66db0 to 00b66dc7 has its CatchHandler @ 00a671e4 */
          uStack_108 = 0;
          if ((local_110 & 1) != 0) {
            operator_delete(local_100);
          }
        }
        local_100 = (undefined1 *)
                    CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0)));
        uStack_108 = CONCAT26(uStack_d2,CONCAT51(uStack_d7,uStack_d8));
        local_110 = CONCAT71(uStack_df,local_e0);
        std::__ndk1::operator+((__ndk1 *)(this + 0x50),(basic_string *)&local_110,pbVar11);
        if ((local_130 & 1) != 0) {
          *local_120 = 0;
          uStack_128 = 0;
          if ((local_130 & 1) != 0) {
                    /* try { // try from 00a66e0c to 00b66eb3 has its CatchHandler @ 00a67180 */
            operator_delete(local_120);
          }
        }
        local_120 = (undefined1 *)
                    CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0)));
        uStack_128 = CONCAT26(uStack_d2,CONCAT51(uStack_d7,uStack_d8));
        local_130 = CONCAT71(uStack_df,local_e0);
        plVar7 = *(long **)(this + 0x28);
        uVar8 = local_110 >> 1 & 0x7f;
        puVar4 = (undefined1 *)((ulong)&local_110 | 1);
        if ((local_110 & 1) != 0) {
          uVar8 = uStack_108;
          puVar4 = local_100;
        }
        if (puVar4[uVar8 - 1] == '/') {
          (**(code **)(*plVar7 + 0x128))(plVar7,&local_130);
        }
        else {
          uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7,&local_130);
          if ((uVar8 & 1) != 0) {
            (**(code **)(**(long **)(this + 0x28) + 0x138))(*(long **)(this + 0x28),&local_130);
          }
          pbVar11 = (basic_string *)&local_130;
          (**(code **)(**(long **)(this + 0x28) + 0x148))(*(long **)(this + 0x28),pbVar15);
        }
        lVar9 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          (&local_98,(basic_string *)&local_130);
        if (lVar9 != 0) {
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
          ::erase(&local_98);
        }
                    /* try { // try from 00a66ec4 to 00b66ecb has its CatchHandler @ 00a67164 */
        pbVar15 = pbVar15 + 0x18;
      } while (pbVar15 != local_f0);
    }
    plVar7 = (long *)CONCAT62(uStack_86,CONCAT11(uStack_87,uStack_88));
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00a66edc to 00b66ee3 has its CatchHandler @ 00a67180 */
      do {
        while( true ) {
          ManifestAsset::ManifestAsset(&local_e0,(ManifestAsset *)(plVar7 + 5));
                    /* try { // try from 00a66ef4 to 00b66efb has its CatchHandler @ 00a67160 */
          local_a0 = (int)plVar7[0xd];
          if (local_a0 == 1) {
            std::__ndk1::operator+((__ndk1 *)(this + 0x50),local_c8,pbVar11);
            (**(code **)(**(long **)(this + 0x28) + 0x138))(*(long **)(this + 0x28),local_148);
            if ((local_148[0] & 1) != 0) {
              operator_delete(local_138);
            }
          }
          if (((byte)local_c8[0] & 1) == 0) break;
                    /* try { // try from 00a66f54 to 00b66f7f has its CatchHandler @ 00a67180 */
          operator_delete(local_b8);
          if (((byte)local_e0 & 1) != 0) goto LAB_00a66f64;
LAB_00a66f48:
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00a66f74;
        }
        if (((byte)local_e0 & 1) == 0) goto LAB_00a66f48;
LAB_00a66f64:
        operator_delete((void *)CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0))
                                        ));
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
LAB_00a66f74:
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    pbVar15 = local_f8;
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
      pbVar15 = local_f8;
    }
    local_f8 = pbVar15;
    pbVar13 = local_f0;
    if (pbVar15 != (byte *)0x0) {
                    /* try { // try from 00a66fb8 to 00b6705b has its CatchHandler @ 00a671e4 */
      while (pbVar5 = pbVar13, pbVar5 != pbVar15) {
        pbVar13 = pbVar5 + -0x18;
        if ((*pbVar13 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
      }
      local_f0 = pbVar15;
      operator_delete(local_f8);
    }
  }
  if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xe0));
  }
  this_00 = *(Manifest **)(this + 0xf0);
  *(Manifest **)(this + 0xe0) = this_00;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this_00 + 0x18) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x50)) {
    uVar6 = *(ulong *)(this + 0x58);
    pAVar1 = *(AssetsManagerEx **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pAVar1 = this + 0x51;
      uVar6 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x18),(char *)pAVar1,uVar6);
    this_00 = *(Manifest **)(this + 0xe0);
  }
  *(undefined8 *)(this + 0xf0) = 0;
  uVar10 = Manifest::getAssets(this_00);
  *(undefined8 *)(this + 0x48) = uVar10;
  Manifest::prependSearchPaths();
  *(undefined4 *)(this + 0x30) = 0xc;
  local_e0 = (ManifestAsset)0x0;
  uStack_df = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_d2 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  local_f8 = (byte *)0x0;
  local_f0 = (byte *)0x0;
  local_e8 = (void *)0x0;
  dispatchUpdateEvent(this,8,&local_e0,&local_f8,0,0);
  if (((ulong)local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  if (((byte)local_e0 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0))));
  }
  (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),pAVar14);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
  ::~__hash_table(&local_98);
  if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 00a670d8 to 00b6711b has its CatchHandler @ 00a67180 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

