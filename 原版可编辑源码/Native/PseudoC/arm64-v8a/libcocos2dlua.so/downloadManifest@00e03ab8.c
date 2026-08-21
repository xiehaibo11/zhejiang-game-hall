
/* cocos2d::extension::AssetsManagerEx::downloadManifest() */

void __thiscall cocos2d::extension::AssetsManagerEx::downloadManifest(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  __shared_weak_count *local_48;
  ulong local_40;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00e03ad0 to 00f03adf has its CatchHandler @ 00e03b10 */
  if (*(int *)(this + 0x50) == 4) {
                    /* try { // try from 00e03ae0 to 00f03b2b has its CatchHandler @ 00e03a38 */
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
    uVar6 = Manifest::isVersionLoaded(*(Manifest **)(this + 0x110));
    if ((uVar6 & 1) == 0) {
      puVar7 = (ulong *)Manifest::getManifestFileUrl(*(Manifest **)(this + 0x100));
      if (&local_40 != puVar7) {
        uVar6 = puVar7[1];
        pbVar2 = (byte *)puVar7[2];
        if (((byte)*puVar7 & 1) == 0) {
          pbVar2 = (byte *)((long)puVar7 + 1);
          uVar6 = (ulong)(byte)((byte)*puVar7 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_40,(char *)pbVar2,uVar6);
      }
    }
    else {
      puVar7 = (ulong *)Manifest::getManifestFileUrl(*(Manifest **)(this + 0x110));
      if (&local_40 != puVar7) {
                    /* catch() { ... } // from try @ 00e03ad0 with catch @ 00e03b10 */
        uVar6 = puVar7[1];
        pbVar2 = (byte *)puVar7[2];
        if (((byte)*puVar7 & 1) == 0) {
          pbVar2 = (byte *)((long)puVar7 + 1);
          uVar6 = (ulong)(byte)((byte)*puVar7 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_40,(char *)pbVar2,uVar6);
      }
    }
    uVar6 = local_40 >> 1 & 0x7f;
    if ((local_40 & 1) != 0) {
      uVar6 = local_38;
    }
    if (uVar6 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,"");
                    /* try { // try from 00e03c14 to 00f03c1f has its CatchHandler @ 00e03e30 */
      dispatchUpdateEvent(this,1,local_68,local_80,0,0);
      if (((byte)local_80[0] & 1) != 0) {
                    /* try { // try from 00e03c28 to 00f03c73 has its CatchHandler @ 00e03e34 */
        operator_delete(local_70);
      }
      if (((byte)local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      *(undefined4 *)(this + 0x50) = 0;
    }
    else {
      *(undefined4 *)(this + 0x50) = 5;
      network::Downloader::createDownloadFileTask
                (*(basic_string **)(this + 0x58),(basic_string *)&local_40,
                 (basic_string *)(this + 0xd0));
      if (local_48 != (__shared_weak_count *)0x0) {
        p_Var1 = local_48 + 8;
        do {
          lVar8 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*(long *)local_48 + 0x10))(local_48);
          std::__ndk1::__shared_weak_count::__release_weak(local_48);
                    /* try { // try from 00e03bdc to 00f03c13 has its CatchHandler @ 00e03bdc
                       catch() { ... } // from try @ 00e03bdc with catch @ 00e03bdc
                       catch() { ... } // from try @ 00e03d88 with catch @ 00e03bdc */
        }
      }
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

