
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::Manifest::genDiff(cocos2d::extension::Manifest const*) const */

void cocos2d::extension::Manifest::genDiff(Manifest *param_1)

{
  size_t __n;
  ulong uVar1;
  char *__s1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long in_x1;
  basic_string *in_x8;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  ulong local_168;
  undefined8 local_160;
  void *local_158;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  ulong uStack_138;
  undefined8 uStack_130;
  void *local_128;
  long local_120;
  undefined4 local_118;
  undefined4 local_110;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  char *pcStack_d8;
  long local_d0;
  undefined4 local_c8;
  ulong local_c0;
  size_t sStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  char *local_98;
  long local_90;
  undefined4 local_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined4 *)(in_x8 + 0x20) = 0x3f800000;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_168 = 0;
  uStack_a8 = 0;
  local_b0 = (char *)0x0;
  local_98 = (char *)0x0;
  local_a0 = 0;
  sStack_b8 = 0;
  local_c0 = 0;
  pcStack_d8 = (char *)0x0;
  local_e0 = 0;
                    /* try { // try from 00dfc024 to 00efc02b has its CatchHandler @ 00dfc0f8 */
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = (char *)0x0;
  plVar8 = *(long **)(param_1 + 0x110);
                    /* try { // try from 00dfc02c to 00efc10b has its CatchHandler @ 00dfbea8 */
  if (plVar8 != (long *)0x0) {
    pcVar10 = (char *)((ulong)&local_c0 | 1);
    do {
      if (&local_168 != (ulong *)(plVar8 + 2)) {
        uVar6 = plVar8[3];
        pcVar9 = (char *)plVar8[4];
        if ((*(byte *)(plVar8 + 2) & 1) == 0) {
          pcVar9 = (char *)((long)plVar8 + 0x11);
          uVar6 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,pcVar9,uVar6);
      }
      if (&local_c0 != (ulong *)(plVar8 + 5)) {
        uVar6 = plVar8[6];
        pcVar9 = (char *)plVar8[7];
        if ((*(byte *)(plVar8 + 5) & 1) == 0) {
          pcVar9 = (char *)((long)plVar8 + 0x29);
          uVar6 = (ulong)(*(byte *)(plVar8 + 5) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,pcVar9,uVar6);
                    /* catch() { ... } // from try @ 00dfc024 with catch @ 00dfc0f8 */
        uVar6 = (ulong)(*(byte *)(plVar8 + 8) >> 1);
        pcVar9 = (char *)((long)plVar8 + 0x41);
        if ((*(byte *)(plVar8 + 8) & 1) != 0) {
          uVar6 = plVar8[9];
          pcVar9 = (char *)plVar8[10];
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_a8,pcVar9,uVar6);
      }
      local_88 = (undefined4)plVar8[0xc];
      local_90 = plVar8[0xb];
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                          *)(in_x1 + 0x100),(basic_string *)&local_168);
      if (lVar5 == 0) {
        uStack_138 = 0;
        local_140 = (void *)0x0;
        local_128 = (void *)0x0;
        uStack_130 = 0;
        bVar3 = (local_c0 & 1) != 0;
        pcVar9 = pcVar10;
        if (bVar3) {
          pcVar9 = local_b0;
        }
        uStack_148 = 0;
        local_150 = 0;
        uVar6 = local_c0 >> 1 & 0x7f;
        if (bVar3) {
          uVar6 = sStack_b8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar9,uVar6);
        pcVar9 = (char *)((long)&uStack_a8 + 1);
        uVar6 = uStack_a8 >> 1 & 0x7f;
        if ((uStack_a8 & 1) != 0) {
          pcVar9 = local_98;
          uVar6 = local_a0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_138,pcVar9,uVar6);
        local_118 = local_88;
        local_120 = local_90;
        local_110 = 1;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                  (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
LAB_00dfc318:
        if ((uStack_138 & 1) != 0) {
          operator_delete(local_128);
        }
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
      }
      else {
        if (&local_100 != (ulong *)(lVar5 + 0x28)) {
          uVar6 = *(ulong *)(lVar5 + 0x30);
          pcVar9 = *(char **)(lVar5 + 0x38);
          if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
            pcVar9 = (char *)(lVar5 + 0x29);
            uVar6 = (ulong)(*(byte *)(lVar5 + 0x28) >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_100,pcVar9,uVar6);
          uVar6 = (ulong)(*(byte *)(lVar5 + 0x40) >> 1);
          pcVar9 = (char *)(lVar5 + 0x41);
          if ((*(byte *)(lVar5 + 0x40) & 1) != 0) {
            uVar6 = *(ulong *)(lVar5 + 0x48);
            pcVar9 = *(char **)(lVar5 + 0x50);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e8,pcVar9,uVar6);
        }
        local_c8 = *(undefined4 *)(lVar5 + 0x60);
        local_d0 = *(long *)(lVar5 + 0x58);
        uVar6 = local_c0 >> 1 & 0x7f;
        __n = uVar6;
        if ((local_c0 & 1) != 0) {
          __n = sStack_b8;
        }
        uVar1 = local_100 >> 1 & 0x7f;
        if ((local_100 & 1) != 0) {
          uVar1 = uStack_f8;
        }
        pcVar9 = (char *)((ulong)&local_100 | 1);
        if (__n != uVar1) {
          if ((local_100 & 1) != 0) {
            pcVar9 = local_f0;
          }
LAB_00dfc2ac:
          uStack_138 = 0;
          local_140 = (void *)0x0;
          local_128 = (void *)0x0;
          uStack_130 = 0;
          uStack_148 = 0;
          local_150 = 0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_150,pcVar9,uVar1);
          pcVar9 = (char *)((long)&local_e8 + 1);
          uVar6 = local_e8 >> 1 & 0x7f;
          if ((local_e8 & 1) != 0) {
            pcVar9 = pcStack_d8;
            uVar6 = local_e0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&uStack_138,pcVar9,uVar6);
          local_118 = local_c8;
          local_120 = local_d0;
          local_110 = 2;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                    (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
          goto LAB_00dfc318;
        }
        __s1 = pcVar10;
        if ((local_c0 & 1) != 0) {
          __s1 = local_b0;
        }
        if ((local_100 & 1) != 0) {
          pcVar9 = local_f0;
        }
        if ((local_c0 & 1) == 0) {
          if (__n != 0) {
            uVar7 = 0;
            do {
              if (pcVar10[uVar7] != pcVar9[uVar7]) goto LAB_00dfc2ac;
              uVar7 = uVar7 + 1;
            } while (uVar6 != uVar7);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,pcVar9,__n), iVar4 != 0)) goto LAB_00dfc2ac;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  plVar8 = *(long **)(in_x1 + 0x110);
  if (plVar8 != (long *)0x0) {
    do {
      if (&local_168 != (ulong *)(plVar8 + 2)) {
        uVar6 = plVar8[3];
        pcVar10 = (char *)plVar8[4];
        if ((*(byte *)(plVar8 + 2) & 1) == 0) {
          pcVar10 = (char *)((long)plVar8 + 0x11);
          uVar6 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,pcVar10,uVar6);
      }
      if (&local_100 != (ulong *)(plVar8 + 5)) {
        uVar6 = plVar8[6];
        pcVar10 = (char *)plVar8[7];
        if ((*(byte *)(plVar8 + 5) & 1) == 0) {
          pcVar10 = (char *)((long)plVar8 + 0x29);
          uVar6 = (ulong)(*(byte *)(plVar8 + 5) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar10,uVar6);
        uVar6 = (ulong)(*(byte *)(plVar8 + 8) >> 1);
        pcVar10 = (char *)((long)plVar8 + 0x41);
        if ((*(byte *)(plVar8 + 8) & 1) != 0) {
          uVar6 = plVar8[9];
          pcVar10 = (char *)plVar8[10];
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_e8,pcVar10,uVar6);
      }
      local_c8 = (undefined4)plVar8[0xc];
      local_d0 = plVar8[0xb];
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                          *)(param_1 + 0x100),(basic_string *)&local_168);
      if (lVar5 == 0) {
        uStack_138 = 0;
        local_140 = (void *)0x0;
        local_128 = (void *)0x0;
        uStack_130 = 0;
        bVar3 = (local_100 & 1) != 0;
        pcVar10 = (char *)((ulong)&local_100 | 1);
        if (bVar3) {
          pcVar10 = local_f0;
        }
        uStack_148 = 0;
        local_150 = 0;
        uVar6 = local_100 >> 1 & 0x7f;
        if (bVar3) {
          uVar6 = uStack_f8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar10,uVar6);
        uVar6 = local_e8 >> 1 & 0x7f;
        pcVar10 = (char *)((long)&local_e8 + 1);
        if ((local_e8 & 1) != 0) {
          uVar6 = local_e0;
          pcVar10 = pcStack_d8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_138,pcVar10,uVar6);
        local_118 = local_c8;
        local_120 = local_d0;
        local_110 = 0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                  (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
        if ((uStack_138 & 1) != 0) {
          operator_delete(local_128);
        }
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(pcStack_d8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((uStack_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_c0 & 1) != 0) {
                    /* try { // try from 00dfc55c to 00efc563 has its CatchHandler @ 00dfc6d8 */
    operator_delete(local_b0);
                    /* try { // try from 00dfc564 to 00efc6db has its CatchHandler @ 00dfc510 */
  }
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfc564 with catch @ 00dfc510
                        */
  return;
}

