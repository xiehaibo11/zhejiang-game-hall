
/* cocos2d::extension::AssetsManager::checkUpdate() */

void __thiscall cocos2d::extension::AssetsManager::checkUpdate(AssetsManager *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  basic_string *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  __shared_weak_count *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00df70ac to 00ef70df has its CatchHandler @ 00df70ac
                       catch() { ... } // from try @ 00df70ac with catch @ 00df70ac
                       catch() { ... } // from try @ 00df71f4 with catch @ 00df70ac */
  if (((byte)this[0x340] & 1) == 0) {
    if ((byte)this[0x340] >> 1 != 0) {
LAB_00df70c0:
      if (this[0x388] == (AssetsManager)0x0) {
        if (((byte)this[0x310] & 1) == 0) {
          *(undefined2 *)(this + 0x310) = 0;
        }
        else {
          **(undefined1 **)(this + 800) = 0;
          *(undefined8 *)(this + 0x318) = 0;
        }
        pbVar7 = *(basic_string **)(this + 0x370);
        this[0x388] = (AssetsManager)0x1;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"");
        network::Downloader::createDownloadDataTask(pbVar7,(basic_string *)(this + 0x340));
        if (local_40 != (__shared_weak_count *)0x0) {
          p_Var1 = local_40 + 8;
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
            (**(code **)(*(long *)local_40 + 0x10))(local_40);
            std::__ndk1::__shared_weak_count::__release_weak(local_40);
          }
        }
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        uVar5 = 1;
        goto LAB_00df7174;
      }
    }
  }
  else {
                    /* try { // try from 00df70e0 to 00ef70eb has its CatchHandler @ 00df7228 */
    if (*(long *)(this + 0x348) != 0) goto LAB_00df70c0;
  }
  uVar5 = 0;
LAB_00df7174:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

