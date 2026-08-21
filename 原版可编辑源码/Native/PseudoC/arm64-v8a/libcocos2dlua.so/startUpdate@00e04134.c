
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::AssetsManagerEx::startUpdate() */

void cocos2d::extension::AssetsManagerEx::startUpdate(void)

{
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  *this;
  DownloadState *pDVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  DownloadState *__n;
  AssetsManagerEx *in_x0;
  ulong uVar5;
  basic_string *pbVar6;
  void *__dest;
  DownloadState *in_x2;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  void *local_168;
  ulong local_160;
  DownloadState *pDStack_158;
  void *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148 [16];
  void *local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  undefined4 local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8;
  undefined7 uStack_c7;
  DownloadState *pDStack_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a0;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
  a_Stack_98 [16];
  long *local_88;
  long local_80;
  long local_70;
  
                    /* try { // try from 00e0414c to 00f04157 has its CatchHandler @ 00e047dc */
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(int *)(in_x0 + 0x50) == 7) {
    *(undefined4 *)(in_x0 + 0x50) = 8;
    if (*(long *)(in_x0 + 0x160) != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
      ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                           *)(in_x0 + 0x148),*(__hash_node_base **)(in_x0 + 0x158));
      lVar7 = *(long *)(in_x0 + 0x150);
      *(undefined8 *)(in_x0 + 0x158) = 0;
                    /* try { // try from 00e04198 to 00f0419f has its CatchHandler @ 00e047cc */
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
                    /* try { // try from 00e041a0 to 00f041b3 has its CatchHandler @ 00e047c8 */
          *(undefined8 *)(*(long *)(in_x0 + 0x148) + lVar8 * 8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
      }
      *(undefined8 *)(in_x0 + 0x160) = 0;
    }
    this = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
            *)(in_x0 + 0x120);
    if (*(long *)(in_x0 + 0x138) != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
      ::__deallocate_node(this,*(__hash_node_base **)(in_x0 + 0x130));
      lVar7 = *(long *)(in_x0 + 0x128);
      *(undefined8 *)(in_x0 + 0x130) = 0;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          *(undefined8 *)(*(long *)this + lVar8 * 8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
      }
                    /* try { // try from 00e041f4 to 00f0420b has its CatchHandler @ 00e048e4 */
      *(undefined8 *)(in_x0 + 0x138) = 0;
    }
    *(undefined8 *)(in_x0 + 0x1d0) = 0;
    *(undefined4 *)(in_x0 + 0x1d8) = 0;
    *(undefined8 *)(in_x0 + 0x1a0) = 0;
    *(undefined4 *)(in_x0 + 0x19c) = 0;
                    /* try { // try from 00e0420c to 00f04223 has its CatchHandler @ 00e048d4 */
    *(undefined8 *)(in_x0 + 400) = 0;
    if (*(long *)(in_x0 + 0x1c0) != 0) {
      puVar4 = *(void **)(in_x0 + 0x1b8);
      while (puVar4 != (void *)0x0) {
        pvVar9 = (void *)*puVar4;
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
                    /* try { // try from 00e04224 to 00f0422b has its CatchHandler @ 00e047b0 */
        operator_delete(puVar4);
        puVar4 = pvVar9;
      }
      lVar7 = *(long *)(in_x0 + 0x1b0);
      *(undefined8 *)(in_x0 + 0x1b8) = 0;
                    /* try { // try from 00e04250 to 00f0425b has its CatchHandler @ 00e04798 */
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          *(undefined8 *)(*(long *)(in_x0 + 0x1a8) + lVar8 * 8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
      }
      *(undefined8 *)(in_x0 + 0x1c0) = 0;
    }
    *(undefined4 *)(in_x0 + 0x198) = 0;
    if (*(Manifest **)(in_x0 + 0x108) != (Manifest *)0x0) {
                    /* try { // try from 00e0427c to 00f04287 has its CatchHandler @ 00e04700 */
      uVar5 = Manifest::isLoaded(*(Manifest **)(in_x0 + 0x108));
                    /* try { // try from 00e04288 to 00f042b7 has its CatchHandler @ 00e048fc */
      if (((uVar5 & 1) != 0) &&
         (uVar5 = Manifest::versionEquals
                            (*(Manifest **)(in_x0 + 0x108),*(Manifest **)(in_x0 + 0x110)),
         (uVar5 & 1) != 0)) {
        Manifest::saveToFile(*(Manifest **)(in_x0 + 0x108),(basic_string *)(in_x0 + 0xd0));
        Manifest::genResumeAssetsList(*(unordered_map **)(in_x0 + 0x108));
        *(undefined4 *)(in_x0 + 0x1d0) = *(undefined4 *)(in_x0 + 0x138);
        *(undefined4 *)(in_x0 + 0x1d4) = *(undefined4 *)(in_x0 + 0x138);
                    /* try { // try from 00e042b8 to 00f04303 has its CatchHandler @ 00e040e8 */
        batchDownload(in_x0);
        StringUtils::format("Resuming from previous unfinished update, %d files remains to be finished."
                            ,&local_130,(ulong)*(uint *)(in_x0 + 0x1d0));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_e0,"");
        dispatchUpdateEvent();
        if (((byte)local_e0[0] & 1) != 0) {
                    /* try { // try from 00e04304 to 00f0432f has its CatchHandler @ 00e048fc */
          operator_delete(local_d0);
        }
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        goto LAB_00e04724;
      }
      if (*(long *)(in_x0 + 0x108) != 0) {
                    /* try { // try from 00e04334 to 00f0433f has its CatchHandler @ 00e048f4 */
        (**(code **)(**(long **)(in_x0 + 0x48) + 0x168))(*(long **)(in_x0 + 0x48),in_x0 + 0x88);
                    /* try { // try from 00e04340 to 00f0434f has its CatchHandler @ 00e04758 */
        if (*(Ref **)(in_x0 + 0x108) != (Ref *)0x0) {
          Ref::release(*(Ref **)(in_x0 + 0x108));
        }
        (**(code **)(**(long **)(in_x0 + 0x48) + 0x158))(*(long **)(in_x0 + 0x48),in_x0 + 0x88);
        Manifest::saveToFile(*(Manifest **)(in_x0 + 0x110),(basic_string *)(in_x0 + 0xd0));
      }
    }
                    /* try { // try from 00e04378 to 00f043c7 has its CatchHandler @ 00e048f4 */
    *(undefined8 *)(in_x0 + 0x108) = *(undefined8 *)(in_x0 + 0x110);
    Manifest::genDiff(*(Manifest **)(in_x0 + 0x100));
    if (local_80 == 0) {
      updateSucceed(in_x0);
                    /* catch() { ... } // from try @ 00e0448c with catch @ 00e046f0 */
    }
    else {
      pbVar6 = (basic_string *)Manifest::getPackageUrl(*(Manifest **)(in_x0 + 0x110));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_148,pbVar6);
      Manifest::saveToFile(*(Manifest **)(in_x0 + 0x108),(basic_string *)(in_x0 + 0xd0));
      if (local_88 != (long *)0x0) {
        plVar10 = local_88;
                    /* try { // try from 00e043d4 to 00f043df has its CatchHandler @ 00e046f8 */
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_e0,(basic_string *)(plVar10 + 5));
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(&local_c8,(basic_string *)(plVar10 + 8));
          pvVar9 = local_b8;
          __n = pDStack_c0;
          local_a8 = (undefined4)plVar10[0xc];
          local_b0 = plVar10[0xb];
          local_a0 = (int)plVar10[0xd];
          if (local_a0 != 1) {
                    /* try { // try from 00e04420 to 00f04427 has its CatchHandler @ 00e04730 */
            pDStack_158 = (DownloadState *)0x0;
            local_150 = (void *)0x0;
                    /* try { // try from 00e04428 to 00f04433 has its CatchHandler @ 00e04734 */
            local_160 = 0;
            if (((byte)local_c8 & 1) == 0) {
              local_160 = CONCAT71(uStack_c7,local_c8);
              local_150 = local_b8;
              pDStack_158 = pDStack_c0;
            }
            else {
                    /* try { // try from 00e0444c to 00f04453 has its CatchHandler @ 00e04748 */
              if ((DownloadState *)0xffffffffffffffef < pDStack_c0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00e04340 with catch @ 00e04758 */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
                    /* try { // try from 00e04454 to 00f0448b has its CatchHandler @ 00e040e8 */
              if (pDStack_c0 < (DownloadState *)0x17) {
                local_160 = (ulong)(byte)((int)pDStack_c0 << 1);
                __dest = (void *)((ulong)&local_160 | 1);
                if (pDStack_c0 != (DownloadState *)0x0) goto LAB_00e044cc;
              }
              else {
                pDVar1 = pDStack_c0 + 0x10;
                    /* try { // try from 00e0448c to 00f04497 has its CatchHandler @ 00e046f0 */
                    /* try { // try from 00e04498 to 00f0449f has its CatchHandler @ 00e046e0 */
                __dest = operator_new((ulong)pDVar1 & 0xfffffffffffffff0);
                local_160 = (ulong)pDVar1 & 0xfffffffffffffff0 | 1;
                    /* try { // try from 00e044b8 to 00f044bf has its CatchHandler @ 00e046dc */
                pDStack_158 = __n;
                local_150 = __dest;
LAB_00e044cc:
                in_x2 = __n;
                    /* try { // try from 00e044d0 to 00f044d3 has its CatchHandler @ 00e047f0 */
                memcpy(__dest,pvVar9,(size_t)__n);
              }
              *(DownloadState *)((long)__dest + (long)__n) = (DownloadState)0x0;
            }
            local_f0 = (void *)0x0;
            puStack_108 = (undefined1 *)0x0;
            uStack_110 = 0;
            uStack_f8 = 0;
            local_100 = 0;
            uStack_128 = 0;
            local_130 = 0;
            local_118 = 0;
            local_120 = (undefined1 *)0x0;
            if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_100 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (plVar10 + 2)) {
              in_x2 = (DownloadState *)plVar10[3];
              pcVar2 = (char *)plVar10[4];
              if ((*(byte *)(plVar10 + 2) & 1) == 0) {
                pcVar2 = (char *)((long)plVar10 + 0x11);
                in_x2 = (DownloadState *)(ulong)(*(byte *)(plVar10 + 2) >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_100,pcVar2,(ulong)in_x2);
            }
                    /* try { // try from 00e0451c to 00f04523 has its CatchHandler @ 00e04804 */
                    /* try { // try from 00e04524 to 00f0452f has its CatchHandler @ 00e04718 */
            std::__ndk1::operator+
                      ((__ndk1 *)local_148,(basic_string *)&local_160,(basic_string *)in_x2);
            if ((local_130 & 1) != 0) {
              *local_120 = 0;
              uStack_128 = 0;
                    /* try { // try from 00e04548 to 00f0454f has its CatchHandler @ 00e04804 */
              if ((local_130 & 1) != 0) {
                operator_delete(local_120);
              }
            }
            local_130 = CONCAT44(uStack_174,local_178);
            uStack_128 = uStack_170;
            local_120 = local_168;
                    /* try { // try from 00e04570 to 00f04577 has its CatchHandler @ 00e046d8 */
            std::__ndk1::operator+
                      ((__ndk1 *)(in_x0 + 0x88),(basic_string *)&local_160,(basic_string *)in_x2);
            if ((local_118 & 1) != 0) {
                    /* try { // try from 00e04588 to 00f0458b has its CatchHandler @ 00e048c0 */
                    /* try { // try from 00e0458c to 00f04817 has its CatchHandler @ 00e040e8 */
              *puStack_108 = 0;
              uStack_110 = 0;
              if ((local_118 & 1) != 0) {
                operator_delete(puStack_108);
              }
            }
            local_118 = CONCAT44(uStack_174,local_178);
            puStack_108 = local_168;
            uStack_110 = uStack_170;
            local_e8 = local_b0._4_4_;
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
                      ((basic_string *)this,(basic_string *)&local_100,(DownloadUnit *)&local_100);
            local_178 = 0;
            in_x2 = (DownloadState *)&local_178;
            Manifest::setAssetDownloadState
                      (*(Manifest **)(in_x0 + 0x108),(basic_string *)(plVar10 + 2),in_x2);
            if ((local_100 & 1) != 0) {
              operator_delete(local_f0);
            }
            if ((local_118 & 1) != 0) {
              operator_delete(puStack_108);
            }
            if ((local_130 & 1) != 0) {
              operator_delete(local_120);
            }
            if ((local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
          if (((byte)local_c8 & 1) != 0) {
            operator_delete(local_b8);
          }
          if (((byte)local_e0[0] & 1) != 0) {
            operator_delete(local_d0);
          }
                    /* try { // try from 00e043e0 to 00f043e7 has its CatchHandler @ 00e046f4 */
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      *(undefined4 *)(in_x0 + 0x1d0) = *(undefined4 *)(in_x0 + 0x138);
      *(undefined4 *)(in_x0 + 0x1d4) = *(undefined4 *)(in_x0 + 0x138);
      batchDownload(in_x0);
      StringUtils::format("Start to update %d files from remote package.",&local_130,
                          (ulong)*(uint *)(in_x0 + 0x1d0));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_e0,"");
      dispatchUpdateEvent(in_x0,5,local_e0,&local_130,0,0);
      if (((byte)local_e0[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00e043e0 with catch @ 00e046f4 */
                    /* catch() { ... } // from try @ 00e043d4 with catch @ 00e046f8 */
        operator_delete(local_d0);
      }
                    /* catch() { ... } // from try @ 00e0427c with catch @ 00e04700 */
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
                    /* catch() { ... } // from try @ 00e04498 with catch @ 00e046e0 */
      if (((byte)local_148[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00e04524 with catch @ 00e04718 */
        operator_delete(local_138);
      }
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
    ::~__hash_table(a_Stack_98);
  }
LAB_00e04724:
                    /* catch() { ... } // from try @ 00e04420 with catch @ 00e04730 */
  if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* catch() { ... } // from try @ 00e04428 with catch @ 00e04734 */
                    /* catch() { ... } // from try @ 00e0444c with catch @ 00e04748 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

