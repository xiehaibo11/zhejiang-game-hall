
/* cocos2d::extension::AssetsManagerEx::queueDowload() */

void __thiscall cocos2d::extension::AssetsManagerEx::queueDowload(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  basic_string *pbVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  __shared_weak_count *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_a0 [2];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 00e057bc with catch @ 00e058b4 */
                    /* catch() { ... } // from try @ 00e05840 with catch @ 00e058b8 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(int *)(this + 0x1d4) == 0) {
    onDownloadUnitsFinished(this);
  }
  else {
    if (*(int *)(this + 0x18c) < *(int *)(this + 0x188)) {
      do {
        if (*(long *)(this + 0x178) == *(long *)(this + 0x170)) break;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_88,(basic_string *)(*(long *)(this + 0x178) + -0x18));
        pbVar7 = (byte *)(*(long *)(this + 0x178) + -0x18);
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(*(long *)(this + 0x178) + -8));
        }
        *(byte **)(this + 0x178) = pbVar7;
        *(int *)(this + 0x18c) = *(int *)(this + 0x18c) + 1;
        local_a0[0] = local_88;
        pbVar5 = (basic_string *)
                 std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((basic_string *)(this + 0x120),(piecewise_construct_t *)local_88,
                            (tuple *)&DAT_014214f6,(tuple *)local_a0);
        plVar8 = *(long **)(this + 0x48);
        basename(pbVar5);
        (**(code **)(*plVar8 + 0x158))(plVar8,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        network::Downloader::createDownloadFileTask
                  (*(basic_string **)(this + 0x58),pbVar5 + 0x28,pbVar5 + 0x40);
        if (local_a8 != (__shared_weak_count *)0x0) {
          p_Var1 = local_a8 + 8;
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
            (**(code **)(*(long *)local_a8 + 0x10))(local_a8);
            std::__ndk1::__shared_weak_count::__release_weak(local_a8);
          }
        }
        local_a0[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)CONCAT44(local_a0[0]._4_4_,1);
        Manifest::setAssetDownloadState
                  (*(Manifest **)(this + 0x108),(basic_string *)local_88,(DownloadState *)local_a0);
        if (((byte)local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
      } while (*(int *)(this + 0x18c) < *(int *)(this + 0x188));
    }
    if (*(float *)(this + 0x1d8) < *(float *)(this + 0x194) / 100.0) {
      Manifest::saveToFile(*(Manifest **)(this + 0x108),(basic_string *)(this + 0xd0));
      *(float *)(this + 0x1d8) = *(float *)(this + 0x1d8) + 0.1;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

