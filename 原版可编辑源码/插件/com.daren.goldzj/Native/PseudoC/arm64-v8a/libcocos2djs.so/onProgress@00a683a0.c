
/* cocos2d::extension::AssetsManagerEx::onProgress(double, double, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::onProgress
          (AssetsManagerEx *this,double param_1,double param_2,basic_string *param_3,
          basic_string *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  basic_string bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  basic_string *pbVar8;
  long lVar9;
  basic_string *pbVar10;
  void *__s1;
  long *plVar11;
  ulong uVar12;
  double dVar13;
  basic_string *local_90;
  undefined8 uStack_88;
  void *local_80;
  double local_78;
  tuple atStack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *param_4;
  uVar12 = (ulong)((byte)bVar4 >> 1);
  sVar1 = uVar12;
  if (((byte)bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_4 + 8);
  }
  sVar2 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar2 = DAT_01d38c30;
  }
  local_78 = param_2;
                    /* catch() { ... } // from try @ 00a682b4 with catch @ 00a68410 */
                    /* catch() { ... } // from try @ 00a682a8 with catch @ 00a68414 */
  if (sVar1 == sVar2) {
                    /* catch() { ... } // from try @ 00a68288 with catch @ 00a68418 */
    pbVar10 = *(basic_string **)(param_4 + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      pbVar10 = param_4 + 1;
    }
                    /* catch() { ... } // from try @ 00a682c0 with catch @ 00a68428 */
    pbVar8 = DAT_01d38c38;
    if ((VERSION_ID & 1) == 0) {
      pbVar8 = (basic_string *)&DAT_01d38c29;
    }
    if (((byte)bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        lVar9 = -uVar12;
        pbVar10 = param_4;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar8) goto LAB_00a68474;
          lVar9 = lVar9 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar10,pbVar8,sVar1), iVar7 != 0)) goto LAB_00a68474;
LAB_00a686a8:
                    /* try { // try from 00a686a8 to 00b686eb has its CatchHandler @ 00a686a8
                       catch() { ... } // from try @ 00a686a8 with catch @ 00a686a8
                       catch() { ... } // from try @ 00a6873c with catch @ 00a686a8 */
    *(float *)(this + 0x174) = (float)((param_2 * 100.0) / param_1);
    local_90 = (basic_string *)0x0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    dispatchUpdateEvent(this,5,param_4,&local_90,0,0);
  }
  else {
LAB_00a68474:
                    /* try { // try from 00a68480 to 00b684cf has its CatchHandler @ 00a68480
                       catch() { ... } // from try @ 00a68480 with catch @ 00a68480
                       catch() { ... } // from try @ 00a68590 with catch @ 00a68480 */
    sVar2 = (ulong)(MANIFEST_ID >> 1);
    if ((MANIFEST_ID & 1) != 0) {
      sVar2 = DAT_01d38c48;
    }
    if (sVar1 == sVar2) {
      pbVar10 = *(basic_string **)(param_4 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar10 = param_4 + 1;
      }
      pbVar8 = DAT_01d38c50;
      if ((MANIFEST_ID & 1) == 0) {
        pbVar8 = (basic_string *)&DAT_01d38c41;
      }
      if (((byte)bVar4 & 1) == 0) {
        if (sVar1 != 0) {
          lVar9 = -uVar12;
          pbVar10 = param_4;
          do {
            pbVar10 = pbVar10 + 1;
            if (*pbVar10 != *pbVar8) goto LAB_00a684f4;
                    /* try { // try from 00a684d0 to 00b684e7 has its CatchHandler @ 00a68640 */
            lVar9 = lVar9 + 1;
            pbVar8 = pbVar8 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar10,pbVar8,sVar1), iVar7 != 0))
      goto LAB_00a684f4;
      goto LAB_00a686a8;
    }
LAB_00a684f4:
    plVar11 = *(long **)(this + 0x1a8);
    *(undefined8 *)(this + 400) = 0;
                    /* try { // try from 00a684fc to 00b6850f has its CatchHandler @ 00a6863c */
    if (plVar11 == (long *)0x0) {
LAB_00a685b8:
      local_90 = (basic_string *)CONCAT44(local_90._4_4_,1);
      Manifest::setAssetDownloadState
                (*(Manifest **)(this + 0xe8),param_4,(DownloadState *)&local_90);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double&>
                ((basic_string *)(this + 0x198),param_4,(double *)param_4);
      local_90 = param_4;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                          *)(this + 0x100),param_4,(piecewise_construct_t *)&DAT_0189ac4e,
                         (tuple *)&local_90,atStack_70);
                    /* catch() { ... } // from try @ 00a68538 with catch @ 00a6860c */
      if (*(float *)(lVar9 + 0x70) == 0.0) {
        iVar7 = *(int *)(this + 0x180);
                    /* catch() { ... } // from try @ 00a68558 with catch @ 00a68624 */
                    /* catch() { ... } // from try @ 00a68510 with catch @ 00a68628 */
        *(double *)(this + 0x188) = *(double *)(this + 0x188) + param_1;
                    /* catch() { ... } // from try @ 00a68560 with catch @ 00a6862c */
        *(int *)(this + 0x180) = iVar7 + 1;
        if (iVar7 + 1 == *(int *)(this + 0x1c0)) {
          *(undefined4 *)(this + 0x17c) = 1;
        }
      }
    }
    else {
      bVar6 = false;
      dVar13 = 0.0;
      do {
                    /* try { // try from 00a68510 to 00b6851f has its CatchHandler @ 00a68628 */
        bVar3 = *(byte *)(plVar11 + 2);
        bVar4 = *param_4;
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar11[3];
        }
        sVar2 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_4 + 8);
        }
                    /* try { // try from 00a68538 to 00b6853f has its CatchHandler @ 00a6860c */
        if (sVar1 == sVar2) {
                    /* try { // try from 00a68540 to 00b68557 has its CatchHandler @ 00a68650 */
          __s1 = (void *)plVar11[4];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar11 + 0x11);
          }
          pbVar10 = param_4 + 1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar10 = *(basic_string **)(param_4 + 0x10);
          }
                    /* try { // try from 00a68558 to 00b6855f has its CatchHandler @ 00a68624 */
          if ((bVar3 & 1) == 0) {
            if (sVar1 != 0) {
                    /* try { // try from 00a68560 to 00b6858f has its CatchHandler @ 00a6862c */
              pbVar8 = (basic_string *)((long)plVar11 + 0x11);
              lVar9 = -(ulong)(bVar3 >> 1);
              do {
                if (*pbVar8 != *pbVar10) goto LAB_00a685a0;
                pbVar8 = pbVar8 + 1;
                lVar9 = lVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while (lVar9 != 0);
            }
          }
          else {
                    /* try { // try from 00a68590 to 00b686a7 has its CatchHandler @ 00a68480 */
            if ((sVar1 != 0) && (iVar7 = memcmp(__s1,pbVar10,sVar1), iVar7 != 0)) goto LAB_00a685a0;
          }
          bVar6 = true;
          plVar11[5] = (long)param_2;
        }
LAB_00a685a0:
        dVar13 = (double)plVar11[5] + dVar13;
        *(double *)(this + 400) = dVar13;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      if (!bVar6) goto LAB_00a685b8;
    }
                    /* catch() { ... } // from try @ 00a684fc with catch @ 00a6863c */
                    /* catch() { ... } // from try @ 00a684d0 with catch @ 00a68640 */
                    /* catch() { ... } // from try @ 00a68540 with catch @ 00a68650 */
    if (((*(int *)(this + 0x17c) == 0) || (*(int *)(this + 0x30) != 10)) ||
       (dVar13 = (*(double *)(this + 400) * 100.0) / *(double *)(this + 0x188),
       (int)dVar13 == (int)*(float *)(this + 0x174))) goto LAB_00a686f4;
    *(float *)(this + 0x174) = (float)dVar13;
    local_90 = (basic_string *)0x0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    dispatchUpdateEvent(this,5,param_4,&local_90,0,0);
  }
  if (((ulong)local_90 & 1) != 0) {
                    /* try { // try from 00a686ec to 00b6873b has its CatchHandler @ 00a6876c */
    operator_delete(local_80);
  }
LAB_00a686f4:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

