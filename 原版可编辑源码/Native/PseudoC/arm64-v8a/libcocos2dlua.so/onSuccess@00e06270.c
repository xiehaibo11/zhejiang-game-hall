
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
  basic_string *pbVar1;
  basic_string bVar2;
  char cVar3;
  size_t sVar4;
  long lVar5;
  basic_string *pbVar6;
  size_t sVar7;
  void *pvVar8;
  int iVar9;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
  *this_00;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  basic_string *pbVar14;
  char *pcVar15;
  size_t sVar16;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar2 = *param_3;
  sVar16 = (size_t)((byte)bVar2 >> 1);
  __n = sVar16;
                    /* try { // try from 00e062c4 to 00f0637f has its CatchHandler @ 00e062c4
                       catch() { ... } // from try @ 00e062c4 with catch @ 00e062c4
                       catch() { ... } // from try @ 00e06df4 with catch @ 00e062c4 */
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  sVar4 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar4 = DAT_01788b50;
  }
  if (__n == sVar4) {
    pbVar14 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar14 = param_3 + 1;
    }
    pbVar1 = DAT_01788b58;
    if ((VERSION_ID & 1) == 0) {
      pbVar1 = (basic_string *)&DAT_01788b49;
    }
    sVar4 = sVar16;
    pbVar6 = param_3;
    sVar7 = __n;
    if (((byte)bVar2 & 1) == 0) {
      while (sVar7 != 0) {
        if (pbVar6[1] != *pbVar1) goto LAB_00e0633c;
        pbVar1 = pbVar1 + 1;
        sVar4 = sVar4 - 1;
        pbVar6 = pbVar6 + 1;
        sVar7 = sVar4;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(pbVar14,pbVar1,__n), iVar9 != 0)) goto LAB_00e0633c;
    *(undefined4 *)(this + 0x50) = 3;
    parseVersion(this);
    goto LAB_00e065f4;
  }
LAB_00e0633c:
  sVar4 = (ulong)(MANIFEST_ID >> 1);
  if ((MANIFEST_ID & 1) != 0) {
    sVar4 = DAT_01788b68;
  }
  if (__n == sVar4) {
    pbVar14 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar14 = param_3 + 1;
    }
    pbVar1 = DAT_01788b70;
    if ((MANIFEST_ID & 1) == 0) {
      pbVar1 = (basic_string *)&DAT_01788b61;
    }
    pbVar6 = param_3;
    if (((byte)bVar2 & 1) == 0) {
      while (__n != 0) {
                    /* try { // try from 00e06380 to 00f06387 has its CatchHandler @ 00e06eb0 */
        if (pbVar6[1] != *pbVar1) goto LAB_00e063cc;
        pbVar1 = pbVar1 + 1;
        sVar16 = sVar16 - 1;
        pbVar6 = pbVar6 + 1;
        __n = sVar16;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(pbVar14,pbVar1,__n), iVar9 != 0)) goto LAB_00e063cc;
    *(undefined4 *)(this + 0x50) = 6;
    parseManifest(this);
    goto LAB_00e065f4;
  }
LAB_00e063cc:
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
             *)Manifest::getAssets(*(Manifest **)(this + 0x110));
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,param_3);
  if (lVar10 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(&local_a8,(basic_string *)(lVar10 + 0x28));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(&local_90,(basic_string *)(lVar10 + 0x40));
    pvVar8 = local_98;
    pcVar15 = (char *)(lVar10 + 0x58);
    local_78 = *(undefined8 *)pcVar15;
    local_70 = *(undefined4 *)(lVar10 + 0x60);
    if (*(long *)(this + 0x230) == 0) {
      if (((byte)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (((byte)local_a8 & 1) == 0) goto LAB_00e065cc;
      operator_delete(local_98);
      cVar3 = *pcVar15;
    }
    else {
      uStack_e8 = 0;
      local_e0 = (void *)0x0;
      local_f0 = 0;
      if (((byte)local_a8 & 1) == 0) {
        local_f0 = CONCAT71(uStack_a7,local_a8);
        uStack_e8 = uStack_a0;
        local_e0 = local_98;
      }
      else {
        if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_a0 < 0x17) {
          pvVar11 = (void *)((ulong)&local_f0 | 1);
          local_f0 = (ulong)(byte)((int)uStack_a0 << 1);
          if (uStack_a0 != 0) goto LAB_00e064d4;
        }
        else {
          uVar13 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
          pvVar11 = operator_new(uVar13);
          local_f0 = uVar13 | 1;
          uStack_e8 = uStack_a0;
          local_e0 = pvVar11;
LAB_00e064d4:
                    /* try { // try from 00e064dc to 00f064e3 has its CatchHandler @ 00e06eac */
          memcpy(pvVar11,pvVar8,uStack_a0);
        }
                    /* try { // try from 00e064e4 to 00f064f7 has its CatchHandler @ 00e06ec8 */
        *(undefined1 *)((long)pvVar11 + uStack_a0) = 0;
      }
      pvVar8 = local_80;
      uStack_d0 = 0;
      local_c8 = (void *)0x0;
                    /* try { // try from 00e064f8 to 00f0650f has its CatchHandler @ 00e06ec0 */
      local_d8 = 0;
      if (((byte)local_90 & 1) == 0) {
        local_d8 = CONCAT71(uStack_8f,local_90);
        local_c8 = local_80;
        uStack_d0 = uStack_88;
                    /* try { // try from 00e06510 to 00f0651b has its CatchHandler @ 00e06ebc */
      }
      else {
        if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_88 < 0x17) {
          pvVar11 = (void *)((long)&local_d8 + 1);
          local_d8 = (ulong)(byte)((int)uStack_88 << 1);
          if (uStack_88 != 0) goto LAB_00e06560;
        }
        else {
          uVar13 = uStack_88 + 0x10 & 0xfffffffffffffff0;
          pvVar11 = operator_new(uVar13);
          local_d8 = uVar13 | 1;
          uStack_d0 = uStack_88;
          local_c8 = pvVar11;
LAB_00e06560:
          memcpy(pvVar11,pvVar8,uStack_88);
        }
        *(undefined1 *)((long)pvVar11 + uStack_88) = 0;
      }
      local_b8 = local_70;
      local_c0 = local_78;
      plVar12 = *(long **)(this + 0x230);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar13 = (**(code **)(*plVar12 + 0x30))(plVar12,param_2,&local_f0);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      if (((byte)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (((byte)local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if ((uVar13 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  (&local_a8,"Asset file verification failed after downloaded");
        fileError(this,param_3,(basic_string *)&local_a8,0,0);
        if (((byte)local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        goto LAB_00e065f4;
      }
LAB_00e065cc:
      cVar3 = *pcVar15;
    }
    if (cVar3 != '\0') {
      decompressDownloadedZip(this,param_3,param_2);
      goto LAB_00e065f4;
    }
  }
  fileSuccess((basic_string *)this,param_3);
LAB_00e065f4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

