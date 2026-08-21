
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
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  ulong local_168;
  undefined8 uStack_160;
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
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00a579f4 to 00b57a37 has its CatchHandler @ 00a579f4
                       catch() { ... } // from try @ 00a579f4 with catch @ 00a579f4
                       catch() { ... } // from try @ 00a57a50 with catch @ 00a579f4 */
  lVar6 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined4 *)(in_x8 + 0x20) = 0x3f800000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = (void *)0x0;
  uStack_a8 = 0;
  local_b0 = (char *)0x0;
  local_98 = (char *)0x0;
  local_a0 = 0;
  sStack_b8 = 0;
  local_c0 = 0;
  pcStack_d8 = (char *)0x0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = (char *)0x0;
  plVar9 = *(long **)(param_1 + 0xf8);
                    /* try { // try from 00a57a38 to 00b57a4f has its CatchHandler @ 00a57a80 */
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 00a57a50 to 00b57a93 has its CatchHandler @ 00a579f4 */
    pcVar11 = (char *)((ulong)&local_c0 | 1);
                    /* catch() { ... } // from try @ 00a57a38 with catch @ 00a57a80 */
    do {
      if (&local_168 != (ulong *)(plVar9 + 2)) {
        uVar7 = plVar9[3];
        pcVar10 = (char *)plVar9[4];
        if ((*(byte *)(plVar9 + 2) & 1) == 0) {
          pcVar10 = (char *)((long)plVar9 + 0x11);
          uVar7 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,pcVar10,uVar7);
      }
      if (&local_c0 != (ulong *)(plVar9 + 5)) {
                    /* try { // try from 00a57ae4 to 00b57afb has its CatchHandler @ 00a57c64 */
        uVar7 = plVar9[6];
        pcVar10 = (char *)plVar9[7];
        if ((*(byte *)(plVar9 + 5) & 1) == 0) {
          pcVar10 = (char *)((long)plVar9 + 0x29);
          uVar7 = (ulong)(*(byte *)(plVar9 + 5) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,pcVar10,uVar7);
                    /* try { // try from 00a57b10 to 00b57b23 has its CatchHandler @ 00a57c60 */
        uVar7 = (ulong)(*(byte *)(plVar9 + 8) >> 1);
        pcVar10 = (char *)((long)plVar9 + 0x41);
        if ((*(byte *)(plVar9 + 8) & 1) != 0) {
          uVar7 = plVar9[9];
          pcVar10 = (char *)plVar9[10];
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_a8,pcVar10,uVar7);
      }
                    /* try { // try from 00a57b24 to 00b57b33 has its CatchHandler @ 00a57c34 */
      local_88 = (undefined4)plVar9[0xc];
      local_90 = plVar9[0xb];
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                          *)(in_x1 + 0xe8),(basic_string *)&local_168);
      if (lVar5 == 0) {
                    /* catch() { ... } // from try @ 00a57b64 with catch @ 00a57c30 */
        uStack_138 = 0;
        local_140 = (void *)0x0;
        local_128 = (void *)0x0;
        uStack_130 = 0;
                    /* catch() { ... } // from try @ 00a57b24 with catch @ 00a57c34 */
        bVar3 = (local_c0 & 1) != 0;
                    /* catch() { ... } // from try @ 00a57b6c with catch @ 00a57c38 */
        pcVar10 = pcVar11;
        if (bVar3) {
          pcVar10 = local_b0;
        }
        uStack_148 = 0;
        local_150 = 0;
        uVar7 = local_c0 >> 1 & 0x7f;
        if (bVar3) {
          uVar7 = sStack_b8;
        }
                    /* catch() { ... } // from try @ 00a57b54 with catch @ 00a57c48 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar10,uVar7);
        pcVar10 = (char *)((long)&uStack_a8 + 1);
        uVar7 = uStack_a8 >> 1 & 0x7f;
                    /* catch() { ... } // from try @ 00a57b10 with catch @ 00a57c60 */
                    /* catch() { ... } // from try @ 00a57ae4 with catch @ 00a57c64 */
        if ((uStack_a8 & 1) != 0) {
          pcVar10 = local_98;
          uVar7 = local_a0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_138,pcVar10,uVar7);
        local_118 = local_88;
        local_120 = local_90;
        local_110 = 1;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                  (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
LAB_00a57d20:
        if ((uStack_138 & 1) != 0) {
          operator_delete(local_128);
        }
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
      }
      else {
                    /* try { // try from 00a57b4c to 00b57b53 has its CatchHandler @ 00a57c18 */
                    /* try { // try from 00a57b54 to 00b57b63 has its CatchHandler @ 00a57c48 */
        if (&local_100 != (ulong *)(lVar5 + 0x28)) {
          uVar7 = *(ulong *)(lVar5 + 0x30);
          pcVar10 = *(char **)(lVar5 + 0x38);
                    /* try { // try from 00a57b64 to 00b57b6b has its CatchHandler @ 00a57c30 */
          if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
            pcVar10 = (char *)(lVar5 + 0x29);
            uVar7 = (ulong)(*(byte *)(lVar5 + 0x28) >> 1);
          }
                    /* try { // try from 00a57b6c to 00b57b9b has its CatchHandler @ 00a57c38 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_100,pcVar10,uVar7);
          uVar7 = (ulong)(*(byte *)(lVar5 + 0x40) >> 1);
          pcVar10 = (char *)(lVar5 + 0x41);
          if ((*(byte *)(lVar5 + 0x40) & 1) != 0) {
            uVar7 = *(ulong *)(lVar5 + 0x48);
            pcVar10 = *(char **)(lVar5 + 0x50);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e8,pcVar10,uVar7);
        }
                    /* try { // try from 00a57b9c to 00b57cb3 has its CatchHandler @ 00a57a94 */
        local_c8 = *(undefined4 *)(lVar5 + 0x60);
        local_d0 = *(long *)(lVar5 + 0x58);
        uVar7 = local_c0 >> 1 & 0x7f;
        __n = uVar7;
        if ((local_c0 & 1) != 0) {
          __n = sStack_b8;
        }
        uVar1 = local_100 >> 1 & 0x7f;
        if ((local_100 & 1) != 0) {
          uVar1 = uStack_f8;
        }
        pcVar10 = (char *)((ulong)&local_100 | 1);
        if (__n != uVar1) {
          if ((local_100 & 1) != 0) {
            pcVar10 = local_f0;
          }
LAB_00a57cb4:
                    /* catch() { ... } // from try @ 00a57d18 with catch @ 00a57cb4 */
          uStack_138 = 0;
          local_140 = (void *)0x0;
          local_128 = (void *)0x0;
          uStack_130 = 0;
          uStack_148 = 0;
          local_150 = 0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_150,pcVar10,uVar1);
          pcVar10 = (char *)((long)&local_e8 + 1);
          uVar7 = local_e8 >> 1 & 0x7f;
          if ((local_e8 & 1) != 0) {
            pcVar10 = pcStack_d8;
            uVar7 = local_e0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&uStack_138,pcVar10,uVar7);
          local_118 = local_c8;
          local_120 = local_d0;
                    /* try { // try from 00a57d08 to 00b57d17 has its CatchHandler @ 00a57dec */
          local_110 = 2;
                    /* try { // try from 00a57d18 to 00b57e07 has its CatchHandler @ 00a57cb4 */
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                    (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
          goto LAB_00a57d20;
        }
        __s1 = pcVar11;
        if ((local_c0 & 1) != 0) {
          __s1 = local_b0;
        }
        if ((local_100 & 1) != 0) {
          pcVar10 = local_f0;
        }
        if ((local_c0 & 1) == 0) {
          if (__n != 0) {
            uVar8 = 0;
            do {
              if (pcVar11[uVar8] != pcVar10[uVar8]) goto LAB_00a57cb4;
              uVar8 = uVar8 + 1;
                    /* catch() { ... } // from try @ 00a57b4c with catch @ 00a57c18 */
            } while (uVar7 != uVar8);
          }
        }
        else {
                    /* try { // try from 00a57a94 to 00b57ae3 has its CatchHandler @ 00a57a94
                       catch() { ... } // from try @ 00a57a94 with catch @ 00a57a94
                       catch() { ... } // from try @ 00a57b9c with catch @ 00a57a94 */
          if ((__n != 0) && (iVar4 = memcmp(__s1,pcVar10,__n), iVar4 != 0)) goto LAB_00a57cb4;
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  plVar9 = *(long **)(in_x1 + 0xf8);
  if (plVar9 != (long *)0x0) {
    do {
      if (&local_168 != (ulong *)(plVar9 + 2)) {
        uVar7 = plVar9[3];
        pcVar11 = (char *)plVar9[4];
        if ((*(byte *)(plVar9 + 2) & 1) == 0) {
          pcVar11 = (char *)((long)plVar9 + 0x11);
          uVar7 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,pcVar11,uVar7);
      }
      if (&local_100 != (ulong *)(plVar9 + 5)) {
        uVar7 = plVar9[6];
        pcVar11 = (char *)plVar9[7];
        if ((*(byte *)(plVar9 + 5) & 1) == 0) {
          pcVar11 = (char *)((long)plVar9 + 0x29);
          uVar7 = (ulong)(*(byte *)(plVar9 + 5) >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar11,uVar7);
        uVar7 = (ulong)(*(byte *)(plVar9 + 8) >> 1);
        pcVar11 = (char *)((long)plVar9 + 0x41);
                    /* catch() { ... } // from try @ 00a57d08 with catch @ 00a57dec */
        if ((*(byte *)(plVar9 + 8) & 1) != 0) {
          uVar7 = plVar9[9];
          pcVar11 = (char *)plVar9[10];
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_e8,pcVar11,uVar7);
      }
      local_c8 = (undefined4)plVar9[0xc];
      local_d0 = plVar9[0xb];
                    /* try { // try from 00a57e08 to 00b57e5b has its CatchHandler @ 00a57e08
                       catch() { ... } // from try @ 00a57e08 with catch @ 00a57e08
                       catch() { ... } // from try @ 00a57fe8 with catch @ 00a57e08 */
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                          *)(param_1 + 0xe8),(basic_string *)&local_168);
      if (lVar5 == 0) {
        uStack_138 = 0;
        local_140 = (void *)0x0;
        local_128 = (void *)0x0;
        uStack_130 = 0;
        bVar3 = (local_100 & 1) != 0;
        pcVar11 = (char *)((ulong)&local_100 | 1);
        if (bVar3) {
          pcVar11 = local_f0;
        }
        uStack_148 = 0;
        local_150 = 0;
        uVar7 = local_100 >> 1 & 0x7f;
        if (bVar3) {
          uVar7 = uStack_f8;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar11,uVar7);
        uVar7 = local_e8 >> 1 & 0x7f;
        pcVar11 = (char *)((long)&local_e8 + 1);
        if ((local_e8 & 1) != 0) {
          uVar7 = local_e0;
          pcVar11 = pcStack_d8;
        }
                    /* try { // try from 00a57e5c to 00b57e73 has its CatchHandler @ 00a58064 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &uStack_138,pcVar11,uVar7);
        local_118 = local_c8;
        local_120 = local_d0;
        local_110 = 0;
                    /* try { // try from 00a57e7c to 00b57e87 has its CatchHandler @ 00a58060 */
                    /* try { // try from 00a57e88 to 00b57e93 has its CatchHandler @ 00a5805c */
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                  (in_x8,(basic_string *)&local_168,(AssetDiff *)&local_168);
                    /* try { // try from 00a57e94 to 00b57fe7 has its CatchHandler @ 00a58074 */
        if ((uStack_138 & 1) != 0) {
          operator_delete(local_128);
        }
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
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
    operator_delete(local_b0);
  }
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

