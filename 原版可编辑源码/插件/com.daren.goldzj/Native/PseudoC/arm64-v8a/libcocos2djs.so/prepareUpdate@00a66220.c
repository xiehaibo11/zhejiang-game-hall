
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::extension::AssetsManagerEx::prepareUpdate() */

void cocos2d::extension::AssetsManagerEx::prepareUpdate(void)

{
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  *this;
  AssetsManagerEx *pAVar1;
  DownloadState *pDVar2;
  char *pcVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  AssetsManagerEx *in_x0;
  ulong uVar8;
  Manifest *this_00;
  ulong *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  DownloadState *in_x2;
  basic_string *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  DownloadState *pDVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1d8 [16];
  void *local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  ulong local_1a0;
  DownloadState *pDStack_198;
  void *local_190;
  ulong local_180;
  DownloadState *pDStack_178;
  void *local_170;
  ManifestAsset local_160 [8];
  basic_string *local_158;
  char *local_150;
  byte local_148;
  undefined7 uStack_147;
  DownloadState *pDStack_140;
  void *local_138;
  float local_12c;
  int local_120;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
  a_Stack_118 [16];
  long *local_108;
  long local_100;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  float local_a8;
  void *local_98;
  float local_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  
                    /* try { // try from 00a66230 to 00b6623b has its CatchHandler @ 00a66424 */
                    /* try { // try from 00a6623c to 00b66247 has its CatchHandler @ 00a66420 */
  lVar5 = tpidr_el0;
  lVar13 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a66248 to 00b663a7 has its CatchHandler @ 00a66438 */
  if (*(int *)(in_x0 + 0x30) != 8) goto LAB_00a6691c;
  if (*(long *)(in_x0 + 0x140) != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
    ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                         *)(in_x0 + 0x128),*(__hash_node_base **)(in_x0 + 0x138));
    lVar14 = *(long *)(in_x0 + 0x130);
    *(undefined8 *)(in_x0 + 0x138) = 0;
    if (lVar14 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x128) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar14 != lVar15);
    }
    *(undefined8 *)(in_x0 + 0x140) = 0;
  }
  this = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
          *)(in_x0 + 0x100);
  if (*(long *)(in_x0 + 0x118) != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
    ::__deallocate_node(this,*(__hash_node_base **)(in_x0 + 0x110));
    lVar14 = *(long *)(in_x0 + 0x108);
    *(undefined8 *)(in_x0 + 0x110) = 0;
    if (lVar14 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar14 != lVar15);
    }
    *(undefined8 *)(in_x0 + 0x118) = 0;
  }
  *(undefined8 *)(in_x0 + 0x1c0) = 0;
  *(undefined4 *)(in_x0 + 0x1c8) = 0;
  *(undefined4 *)(in_x0 + 0x180) = 0;
  *(undefined4 *)(in_x0 + 0x178) = 0;
  *(undefined4 *)(in_x0 + 0x174) = 0;
  in_x0[0x168] = (AssetsManagerEx)0x0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 400) = 0;
  if (*(long *)(in_x0 + 0x1b0) != 0) {
    puVar11 = *(void **)(in_x0 + 0x1a8);
    while (puVar11 != (void *)0x0) {
      pvVar16 = (void *)*puVar11;
      if ((*(byte *)(puVar11 + 2) & 1) != 0) {
        operator_delete((void *)puVar11[4]);
      }
      operator_delete(puVar11);
      puVar11 = pvVar16;
    }
    lVar14 = *(long *)(in_x0 + 0x1a0);
    *(undefined8 *)(in_x0 + 0x1a8) = 0;
    if (lVar14 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x198) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar14 != lVar15);
    }
    *(undefined8 *)(in_x0 + 0x1b0) = 0;
  }
  pAVar1 = in_x0 + 0x188;
  *(undefined4 *)(in_x0 + 0x17c) = 0;
  if (*(Manifest **)(in_x0 + 0xe8) == (Manifest *)0x0) {
LAB_00a664a4:
    *(undefined8 *)(in_x0 + 0xe8) = *(undefined8 *)(in_x0 + 0xf0);
    Manifest::genDiff(*(Manifest **)(in_x0 + 0xe0));
    if (local_100 == 0) {
      updateSucceed(in_x0);
                    /* try { // try from 00a66504 to 00b6650f has its CatchHandler @ 00a666c8 */
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
      ::~__hash_table(a_Stack_118);
      goto LAB_00a6691c;
    }
    puVar9 = (ulong *)Manifest::getPackageUrl(*(Manifest **)(in_x0 + 0xf0));
    pDStack_178 = (DownloadState *)0x0;
    local_170 = (void *)0x0;
    local_180 = 0;
    if ((*puVar9 & 1) == 0) {
      local_170 = (void *)puVar9[2];
      pDStack_178 = (DownloadState *)puVar9[1];
      local_180 = *puVar9;
                    /* try { // try from 00a664e4 to 00b664fb has its CatchHandler @ 00a666cc */
      plVar17 = local_108;
    }
    else {
      pDVar18 = (DownloadState *)puVar9[1];
                    /* try { // try from 00a66510 to 00b6651b has its CatchHandler @ 00a666c4 */
      if ((DownloadState *)0xffffffffffffffef < pDVar18) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a6695c to 00b66a3f has its CatchHandler @ 00a66734 */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar16 = (void *)puVar9[2];
                    /* try { // try from 00a6651c to 00b6664f has its CatchHandler @ 00a666dc */
      if (pDVar18 < (DownloadState *)0x17) {
        pvVar10 = (void *)((ulong)&local_180 | 1);
        local_180 = (ulong)(byte)((int)pDVar18 << 1);
        if (pDVar18 != (DownloadState *)0x0) goto LAB_00a6655c;
      }
      else {
        pvVar10 = operator_new((ulong)(pDVar18 + 0x10) & 0xfffffffffffffff0);
        local_180 = (ulong)(pDVar18 + 0x10) & 0xfffffffffffffff0 | 1;
        pDStack_178 = pDVar18;
        local_170 = pvVar10;
LAB_00a6655c:
        in_x2 = pDVar18;
        memcpy(pvVar10,pvVar16,(size_t)pDVar18);
      }
      *(DownloadState *)((long)pvVar10 + (long)pDVar18) = (DownloadState)0x0;
      plVar17 = local_108;
    }
    if (plVar17 != (long *)0x0) {
LAB_00a66610:
      do {
        ManifestAsset::ManifestAsset(local_160,(ManifestAsset *)(plVar17 + 5));
        pvVar16 = local_138;
        pDVar18 = pDStack_140;
        local_120 = (int)plVar17[0xd];
        if (local_120 != 1) {
          local_1a0 = 0;
          pDStack_198 = (DownloadState *)0x0;
          local_190 = (void *)0x0;
          if ((local_148 & 1) == 0) {
            local_190 = local_138;
            pDStack_198 = pDStack_140;
            local_1a0 = CONCAT71(uStack_147,local_148);
                    /* try { // try from 00a66650 to 00b66733 has its CatchHandler @ 00a66490 */
          }
          else {
            if ((DownloadState *)0xffffffffffffffef < pDStack_140) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pDStack_140 < (DownloadState *)0x17) {
              local_1a0 = (ulong)(byte)((int)pDStack_140 << 1);
              pvVar10 = (void *)((ulong)&local_1a0 | 1);
              if (pDStack_140 != (DownloadState *)0x0) goto LAB_00a666bc;
            }
            else {
              pDVar2 = pDStack_140 + 0x10;
              pvVar10 = operator_new((ulong)pDVar2 & 0xfffffffffffffff0);
              local_1a0 = (ulong)pDVar2 & 0xfffffffffffffff0 | 1;
              pDStack_198 = pDVar18;
              local_190 = pvVar10;
LAB_00a666bc:
              in_x2 = pDVar18;
                    /* catch() { ... } // from try @ 00a66510 with catch @ 00a666c4 */
                    /* catch() { ... } // from try @ 00a66504 with catch @ 00a666c8 */
              memcpy(pvVar10,pvVar16,(size_t)pDVar18);
            }
                    /* catch() { ... } // from try @ 00a664e4 with catch @ 00a666cc */
            *(DownloadState *)((long)pvVar10 + (long)pDVar18) = (DownloadState)0x0;
          }
                    /* catch() { ... } // from try @ 00a6651c with catch @ 00a666dc */
          local_b0 = (void *)0x0;
          puStack_c8 = (undefined1 *)0x0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_e8 = 0;
          local_f0 = 0;
          local_d8 = 0;
          local_e0 = (undefined1 *)0x0;
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_c0 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (plVar17 + 2)) {
            in_x2 = (DownloadState *)plVar17[3];
            pcVar3 = (char *)plVar17[4];
            if ((*(byte *)(plVar17 + 2) & 1) == 0) {
              pcVar3 = (char *)((long)plVar17 + 0x11);
              in_x2 = (DownloadState *)(ulong)(*(byte *)(plVar17 + 2) >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_c0,pcVar3,(ulong)in_x2);
          }
          std::__ndk1::operator+
                    ((__ndk1 *)&local_180,(basic_string *)&local_1a0,(basic_string *)in_x2);
          puVar9 = (ulong *)std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append(local_1d8,"?md5=",5);
          local_1b0 = (void *)puVar9[2];
                    /* try { // try from 00a66734 to 00b66787 has its CatchHandler @ 00a66734
                       catch() { ... } // from try @ 00a66734 with catch @ 00a66734
                       catch() { ... } // from try @ 00a6695c with catch @ 00a66734 */
          uStack_1b8 = puVar9[1];
          local_1c0 = *puVar9;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          pcVar3 = (char *)((ulong)local_160 | 1);
          pbVar12 = (basic_string *)(ulong)((byte)local_160[0] >> 1);
          if (((byte)local_160[0] & 1) != 0) {
            pcVar3 = local_150;
            pbVar12 = local_158;
          }
          puVar11 = (undefined8 *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1c0,pcVar3,(ulong)pbVar12);
          pvVar16 = (void *)puVar11[2];
          uVar4 = *(undefined1 *)puVar11;
          uStack_80 = (undefined7)((ulong)puVar11[1] >> 8);
          uStack_88 = (undefined7)*(undefined8 *)((long)puVar11 + 1);
          local_81 = (undefined1)((ulong)*(undefined8 *)((long)puVar11 + 1) >> 0x38);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
                    /* try { // try from 00a66788 to 00b6679f has its CatchHandler @ 00a669d8 */
          if ((local_f0 & 1) == 0) {
            local_f0 = local_f0 & 0xffffffffffff0000;
          }
          else {
            *local_e0 = 0;
            uStack_e8 = 0;
                    /* try { // try from 00a667a8 to 00b667b3 has its CatchHandler @ 00a669d4 */
            if ((local_f0 & 1) != 0) {
              operator_delete(local_e0);
                    /* try { // try from 00a667b4 to 00b667bf has its CatchHandler @ 00a669d0 */
              local_f0 = 0;
            }
          }
          uVar7 = CONCAT71(uStack_80,local_81);
          uVar6 = CONCAT17(local_81,uStack_88);
                    /* try { // try from 00a667c0 to 00b6695b has its CatchHandler @ 00a669e8 */
          local_f0 = CONCAT71(local_f0._1_7_,uVar4);
          uStack_80 = 0;
          uStack_88 = 0;
          local_81 = 0;
          *(undefined8 *)((long)((ulong)&local_f0 | 1) + 7) = uVar7;
          *(undefined8 *)((ulong)&local_f0 | 1) = uVar6;
          local_e0 = pvVar16;
          if ((local_1c0 & 1) != 0) {
            operator_delete(local_1b0);
          }
          if (((byte)local_1d8[0] & 1) != 0) {
            operator_delete(local_1c8);
          }
          std::__ndk1::operator+((__ndk1 *)(in_x0 + 0x68),(basic_string *)&local_1a0,pbVar12);
          if ((local_d8 & 1) != 0) {
            *puStack_c8 = 0;
            uStack_d0 = 0;
            if ((local_d8 & 1) != 0) {
              operator_delete(puStack_c8);
            }
          }
          puStack_c8 = local_1b0;
          uStack_d0 = uStack_1b8;
          local_d8 = local_1c0;
          local_a8 = local_12c;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
                    ((basic_string *)this,(basic_string *)&local_c0,(DownloadUnit *)&local_c0);
          local_1c0 = local_1c0 & 0xffffffff00000000;
          in_x2 = (DownloadState *)&local_1c0;
          Manifest::setAssetDownloadState
                    (*(Manifest **)(in_x0 + 0xe8),(basic_string *)(plVar17 + 2),in_x2);
          *(double *)pAVar1 = *(double *)pAVar1 + (double)local_a8;
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((local_d8 & 1) != 0) {
            operator_delete(puStack_c8);
          }
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
        }
        if ((local_148 & 1) != 0) {
          operator_delete(local_138);
          if (((byte)local_160[0] & 1) != 0) goto LAB_00a665c8;
LAB_00a668cc:
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) break;
          goto LAB_00a66610;
        }
        if (((byte)local_160[0] & 1) == 0) goto LAB_00a668cc;
LAB_00a665c8:
        operator_delete(local_150);
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    Manifest::setUpdating(*(Manifest **)(in_x0 + 0xe8),true);
    Manifest::saveToFile(*(Manifest **)(in_x0 + 0xe8),(basic_string *)(in_x0 + 0xb0));
    *(undefined4 *)(in_x0 + 0x1c0) = *(undefined4 *)(in_x0 + 0x118);
    *(undefined4 *)(in_x0 + 0x1c4) = *(undefined4 *)(in_x0 + 0x118);
    if ((local_180 & 1) != 0) {
      operator_delete(local_170);
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
    ::~__hash_table(a_Stack_118);
  }
  else {
    uVar8 = Manifest::isLoaded(*(Manifest **)(in_x0 + 0xe8));
    if ((uVar8 & 1) == 0) {
LAB_00a66458:
      this_00 = *(Manifest **)(in_x0 + 0xe8);
LAB_00a6645c:
      if (this_00 != (Manifest *)0x0) {
        (**(code **)(**(long **)(in_x0 + 0x28) + 0x130))(*(long **)(in_x0 + 0x28),in_x0 + 0x68);
        if (*(Ref **)(in_x0 + 0xe8) != (Ref *)0x0) {
          Ref::release(*(Ref **)(in_x0 + 0xe8));
        }
                    /* try { // try from 00a66490 to 00b664e3 has its CatchHandler @ 00a66490
                       catch() { ... } // from try @ 00a66490 with catch @ 00a66490
                       catch() { ... } // from try @ 00a66650 with catch @ 00a66490 */
        (**(code **)(**(long **)(in_x0 + 0x28) + 0x128))(*(long **)(in_x0 + 0x28),in_x0 + 0x68);
        Manifest::saveToFile(*(Manifest **)(in_x0 + 0xf0),(basic_string *)(in_x0 + 0xb0));
      }
      goto LAB_00a664a4;
    }
    this_00 = *(Manifest **)(in_x0 + 0xe8);
    if (this_00[0xe] == (Manifest)0x0) goto LAB_00a6645c;
    uVar8 = Manifest::versionEquals(this_00,*(Manifest **)(in_x0 + 0xf0));
    if ((uVar8 & 1) == 0) goto LAB_00a66458;
    Manifest::saveToFile(*(Manifest **)(in_x0 + 0xe8),(basic_string *)(in_x0 + 0xb0));
    Manifest::genResumeAssetsList(*(unordered_map **)(in_x0 + 0xe8));
    plVar17 = *(long **)(in_x0 + 0x110);
                    /* try { // try from 00a663a8 to 00b6648f has its CatchHandler @ 00a661b8 */
    in_x0[0x168] = (AssetsManagerEx)0x1;
    *(undefined4 *)(in_x0 + 0x1c0) = *(undefined4 *)(in_x0 + 0x118);
    *(undefined4 *)(in_x0 + 0x1c4) = *(undefined4 *)(in_x0 + 0x118);
    for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      while( true ) {
        std::__ndk1::
        pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
        ::pair((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
                *)&local_f0,(pair *)(plVar17 + 2));
        if (0.0 < local_90) {
          *(double *)pAVar1 = *(double *)pAVar1 + (double)local_90;
        }
        if (((uint)local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
                    /* catch() { ... } // from try @ 00a66248 with catch @ 00a66438 */
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8 & 1) != 0) {
          operator_delete(puStack_c8);
        }
        if ((local_f0 & 1) == 0) break;
        operator_delete(local_e0);
                    /* catch() { ... } // from try @ 00a6623c with catch @ 00a66420 */
        plVar17 = (long *)*plVar17;
                    /* catch() { ... } // from try @ 00a66230 with catch @ 00a66424 */
        if (plVar17 == (long *)0x0) goto LAB_00a66914;
      }
    }
  }
LAB_00a66914:
  *(undefined4 *)(in_x0 + 0x30) = 9;
LAB_00a6691c:
  if (*(long *)(lVar5 + 0x28) == lVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

