
/* cocos2d::extension::AssetsManagerEx::downloadVersion() */

void __thiscall cocos2d::extension::AssetsManagerEx::downloadVersion(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  basic_string *pbVar6;
  long lVar7;
  __shared_weak_count *local_48;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00e0389c with catch @ 00e03998 */
                    /* catch() { ... } // from try @ 00e03890 with catch @ 00e0399c */
                    /* catch() { ... } // from try @ 00e0386c with catch @ 00e039a0 */
                    /* catch() { ... } // from try @ 00e0385c with catch @ 00e039a4 */
                    /* catch() { ... } // from try @ 00e03850 with catch @ 00e039a8 */
  lVar5 = tpidr_el0;
                    /* catch() { ... } // from try @ 00e03844 with catch @ 00e039ac */
  local_28 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 00e037f4 with catch @ 00e039b0 */
                    /* catch() { ... } // from try @ 00e037a4 with catch @ 00e039b4 */
                    /* catch() { ... } // from try @ 00e03754 with catch @ 00e039b8 */
  if (*(int *)(this + 0x50) < 2) {
                    /* catch() { ... } // from try @ 00e0380c with catch @ 00e039c8 */
    pbVar6 = (basic_string *)Manifest::getVersionFileUrl(*(Manifest **)(this + 0x100));
                    /* catch() { ... } // from try @ 00e037bc with catch @ 00e039cc */
                    /* catch() { ... } // from try @ 00e0376c with catch @ 00e039d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_40,pbVar6);
    uVar2 = (ulong)((byte)local_40[0] >> 1);
    if (((byte)local_40[0] & 1) != 0) {
      uVar2 = local_38;
    }
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x50) = 4;
      downloadManifest(this);
    }
    else {
      *(undefined4 *)(this + 0x50) = 2;
      network::Downloader::createDownloadFileTask
                (*(basic_string **)(this + 0x58),(basic_string *)local_40,
                 (basic_string *)(this + 0xa0));
      if (local_48 != (__shared_weak_count *)0x0) {
        p_Var1 = local_48 + 8;
        do {
          lVar7 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
                    /* try { // try from 00e03a38 to 00f03acf has its CatchHandler @ 00e03a38
                       catch() { ... } // from try @ 00e03a38 with catch @ 00e03a38
                       catch() { ... } // from try @ 00e03ae0 with catch @ 00e03a38 */
          (**(code **)(*(long *)local_48 + 0x10))(local_48);
          std::__ndk1::__shared_weak_count::__release_weak(local_48);
        }
      }
    }
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

