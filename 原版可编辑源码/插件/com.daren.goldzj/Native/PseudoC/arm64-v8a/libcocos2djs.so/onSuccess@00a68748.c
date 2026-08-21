
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::AssetsManagerEx::onSuccess(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::onSuccess
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
  *this_00;
  long *plVar6;
  basic_string *pbVar7;
  long lVar8;
  basic_string *pbVar9;
  ulong uVar10;
  ManifestAsset local_e0 [16];
  void *local_d0;
  byte local_c8;
  void *local_b8;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  byte local_88;
  void *local_78;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00a686ec with catch @ 00a6876c */
  bVar2 = *param_3;
                    /* catch() { ... } // from try @ 00a687e0 with catch @ 00a68780 */
  uVar10 = (ulong)((byte)bVar2 >> 1);
  __n = uVar10;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  sVar1 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar1 = DAT_01d38c30;
  }
  if (__n == sVar1) {
    pbVar9 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar9 = param_3 + 1;
    }
    pbVar7 = DAT_01d38c38;
    if ((VERSION_ID & 1) == 0) {
      pbVar7 = (basic_string *)&DAT_01d38c29;
    }
                    /* try { // try from 00a687cc to 00b687df has its CatchHandler @ 00a689a4 */
    if (((byte)bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar10;
        pbVar9 = param_3;
        do {
          pbVar9 = pbVar9 + 1;
                    /* try { // try from 00a687e0 to 00b689bf has its CatchHandler @ 00a68780 */
          if (*pbVar9 != *pbVar7) goto LAB_00a68810;
          lVar8 = lVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar9,pbVar7,__n), iVar5 != 0)) goto LAB_00a68810;
    *(undefined4 *)(this + 0x30) = 4;
    parseVersion(this);
    goto LAB_00a689c8;
  }
LAB_00a68810:
  sVar1 = (ulong)(MANIFEST_ID >> 1);
  if ((MANIFEST_ID & 1) != 0) {
    sVar1 = DAT_01d38c48;
  }
  if (__n == sVar1) {
    pbVar9 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar9 = param_3 + 1;
    }
    pbVar7 = DAT_01d38c50;
    if ((MANIFEST_ID & 1) == 0) {
      pbVar7 = (basic_string *)&DAT_01d38c41;
    }
    if (((byte)bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar10;
        pbVar9 = param_3;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar7) goto LAB_00a688a4;
          lVar8 = lVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar9,pbVar7,__n), iVar5 != 0)) goto LAB_00a688a4;
    *(undefined4 *)(this + 0x30) = 7;
    parseManifest(this);
    goto LAB_00a689c8;
  }
LAB_00a688a4:
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
             *)Manifest::getAssets(*(Manifest **)(this + 0xf0));
  lVar8 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this_00,param_3);
  if (lVar8 != 0) {
    ManifestAsset::ManifestAsset((ManifestAsset *)&local_a0,(ManifestAsset *)(lVar8 + 0x28));
    if (*(long *)(this + 0x220) == 0) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0 & 1) == 0) goto LAB_00a689a0;
      operator_delete(local_90);
      cVar3 = *(char *)(lVar8 + 0x58);
    }
    else {
      ManifestAsset::ManifestAsset(local_e0,(ManifestAsset *)&local_a0);
      plVar6 = *(long **)(this + 0x220);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar10 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2,local_e0);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if (((byte)local_e0[0] & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((uVar10 & 1) == 0) {
        local_90 = operator_new(0x30);
                    /* try { // try from 00a68a14 to 00b68a2b has its CatchHandler @ 00a68bf8 */
        uStack_98 = 0x2f;
        local_a0 = 0x31;
        builtin_strncpy(local_90,"Asset file verification failed after downloaded",0x30);
                    /* try { // try from 00a68a34 to 00b68a3f has its CatchHandler @ 00a68bf4 */
        fileError(this,param_3,(basic_string *)&local_a0,0,0);
                    /* try { // try from 00a68a40 to 00b68a4b has its CatchHandler @ 00a68bf0 */
        if ((local_a0 & 1) != 0) {
                    /* try { // try from 00a68a4c to 00b68b7b has its CatchHandler @ 00a68c08 */
          operator_delete(local_90);
        }
        goto LAB_00a689c8;
      }
LAB_00a689a0:
      cVar3 = *(char *)(lVar8 + 0x58);
    }
                    /* catch() { ... } // from try @ 00a687cc with catch @ 00a689a4 */
    if (cVar3 != '\0') {
      decompressDownloadedZip(this,param_3,param_2);
      goto LAB_00a689c8;
    }
  }
                    /* try { // try from 00a689c0 to 00b68a13 has its CatchHandler @ 00a689c0
                       catch() { ... } // from try @ 00a689c0 with catch @ 00a689c0
                       catch() { ... } // from try @ 00a68b7c with catch @ 00a689c0 */
  fileSuccess((basic_string *)this,param_3);
LAB_00a689c8:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

