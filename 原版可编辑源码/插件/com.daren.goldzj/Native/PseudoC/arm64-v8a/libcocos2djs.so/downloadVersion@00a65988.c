
/* cocos2d::extension::AssetsManagerEx::downloadVersion() */

void __thiscall cocos2d::extension::AssetsManagerEx::downloadVersion(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  void *__src;
  void *__dest;
  ulong uVar8;
  __shared_weak_count *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00a65940 with catch @ 00a659b4 */
  if (2 < *(int *)(this + 0x30)) goto LAB_00a65aec;
  puVar5 = (ulong *)Manifest::getVersionFileUrl(*(Manifest **)(this + 0xe0));
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*puVar5 & 1) == 0) {
    local_50 = (void *)puVar5[2];
    uStack_58 = puVar5[1];
    local_60 = *puVar5;
  }
  else {
    uVar7 = puVar5[1];
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)puVar5[2];
    if (uVar7 < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_00a65a38;
    }
    else {
      uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      local_60 = uVar8 | 1;
      uStack_58 = uVar7;
      local_50 = __dest;
LAB_00a65a38:
      memcpy(__dest,__src,uVar7);
    }
    *(undefined1 *)((long)__dest + uVar7) = 0;
  }
  uVar7 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar7 = uStack_58;
  }
  if (uVar7 == 0) {
    *(undefined4 *)(this + 0x30) = 5;
    downloadManifest(this);
  }
  else {
    *(undefined4 *)(this + 0x30) = 3;
    network::Downloader::createDownloadFileTask
              (*(basic_string **)(this + 0x38),(basic_string *)&local_60,
               (basic_string *)(this + 0x80));
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
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
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00a65aec:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

