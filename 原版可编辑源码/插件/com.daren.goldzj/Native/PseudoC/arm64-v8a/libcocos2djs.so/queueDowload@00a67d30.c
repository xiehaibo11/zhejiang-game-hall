
/* cocos2d::extension::AssetsManagerEx::queueDowload() */

void __thiscall cocos2d::extension::AssetsManagerEx::queueDowload(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *__dest;
  basic_string *pbVar4;
  long lVar5;
  long lVar6;
  ulong __n;
  void *__src;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  __shared_weak_count *local_b0;
  ulong *local_a8 [2];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  tuple atStack_70 [8];
  long local_68;
  
                    /* try { // try from 00a67d30 to 00b67d47 has its CatchHandler @ 00a67f20 */
                    /* try { // try from 00a67d50 to 00b67d5b has its CatchHandler @ 00a67f1c */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a67d5c to 00b67d67 has its CatchHandler @ 00a67f18 */
  if (*(int *)(this + 0x1c4) == 0) {
                    /* try { // try from 00a67f88 to 00b67fdb has its CatchHandler @ 00a67f88
                       catch() { ... } // from try @ 00a67f88 with catch @ 00a67f88
                       catch() { ... } // from try @ 00a68150 with catch @ 00a67f88 */
    onDownloadUnitsFinished(this);
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
                    /* try { // try from 00a67d68 to 00b67ea3 has its CatchHandler @ 00a67f30 */
    iVar9 = *(int *)(this + 0x170);
    if (iVar9 < *(int *)(this + 0x16c)) {
      do {
        lVar6 = *(long *)(this + 0x158);
        if (lVar6 == *(long *)(this + 0x150)) break;
        uStack_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        puVar10 = (ulong *)(lVar6 + -0x18);
        if ((*(byte *)puVar10 & 1) == 0) {
          local_80 = *(void **)(lVar6 + -8);
          uStack_88 = *(ulong *)(lVar6 + -0x10);
          local_90 = *puVar10;
        }
        else {
          __n = *(ulong *)(lVar6 + -0x10);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          __src = *(void **)(lVar6 + -8);
          if (__n < 0x17) {
            local_90 = (ulong)(byte)((int)__n << 1);
            __dest = (void *)((ulong)&local_90 | 1);
            if (__n != 0) goto LAB_00a67e20;
          }
          else {
            uVar8 = __n + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar8);
            local_90 = uVar8 | 1;
            uStack_88 = __n;
            local_80 = __dest;
LAB_00a67e20:
            memcpy(__dest,__src,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
          if ((*(byte *)puVar10 & 1) != 0) {
            operator_delete(*(void **)(lVar6 + -8));
            iVar9 = *(int *)(this + 0x170);
          }
        }
        local_a8[0] = &local_90;
        *(ulong **)(this + 0x158) = puVar10;
        *(int *)(this + 0x170) = iVar9 + 1;
        pbVar4 = (basic_string *)
                 std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                             *)(this + 0x100),(basic_string *)&local_90,
                            (piecewise_construct_t *)&DAT_0189ac4e,(tuple *)local_a8,atStack_70);
        plVar7 = *(long **)(this + 0x28);
        basename(pbVar4);
        (**(code **)(*plVar7 + 0x128))(plVar7,local_a8);
        if (((ulong)local_a8[0] & 1) != 0) {
                    /* try { // try from 00a67ea4 to 00b67f87 has its CatchHandler @ 00a67cdc */
          operator_delete(local_98);
        }
        network::Downloader::createDownloadFileTask
                  (*(basic_string **)(this + 0x38),pbVar4 + 0x28,pbVar4 + 0x40);
        if (local_b0 != (__shared_weak_count *)0x0) {
          p_Var1 = local_b0 + 8;
          do {
            lVar6 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*(long *)local_b0 + 0x10))(local_b0);
            std::__ndk1::__shared_weak_count::__release_weak(local_b0);
          }
        }
        local_a8[0] = (ulong *)CONCAT44(local_a8[0]._4_4_,1);
        Manifest::setAssetDownloadState
                  (*(Manifest **)(this + 0xe8),(basic_string *)&local_90,(DownloadState *)local_a8);
                    /* catch() { ... } // from try @ 00a67d5c with catch @ 00a67f18 */
        if ((local_90 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a67d50 with catch @ 00a67f1c */
                    /* catch() { ... } // from try @ 00a67d30 with catch @ 00a67f20 */
          operator_delete(local_80);
        }
        iVar9 = *(int *)(this + 0x170);
                    /* catch() { ... } // from try @ 00a67d68 with catch @ 00a67f30 */
      } while (iVar9 < *(int *)(this + 0x16c));
    }
    if (*(float *)(this + 0x1c8) < *(float *)(this + 0x178) / 100.0) {
      Manifest::saveToFile(*(Manifest **)(this + 0xe8),(basic_string *)(this + 0xb0));
      *(float *)(this + 0x1c8) = *(float *)(this + 0x1c8) + 0.1;
    }
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

