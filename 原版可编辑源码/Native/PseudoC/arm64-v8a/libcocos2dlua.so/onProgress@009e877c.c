
/* universe::Downloader2::DownloadJob::onProgress(long) */

undefined8 __thiscall universe::Downloader2::DownloadJob::onProgress(DownloadJob *this,long param_1)

{
  ulong uVar1;
  DownloadJob *pDVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  DownloadJob *local_58;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  fVar5 = (float)*(ulong *)(this + 0x80) / (float)param_1;
  if ((*(float *)(this + 0x88) + 0.009 < fVar5) || (0.98 < fVar5)) {
    *(float *)(this + 0x88) = fVar5;
    local_58 = operator_new(0x28);
    *(undefined8 *)(local_58 + 0xc) = 0;
    *(undefined8 *)(local_58 + 4) = 0;
    *(undefined8 *)(local_58 + 0x1c) = 0;
    *(undefined8 *)(local_58 + 0x14) = 0;
    *(undefined4 *)(local_58 + 0x24) = 0xffffffff;
    *local_58 = (DownloadJob)0x2;
    if (this != local_58) {
      uVar1 = *(ulong *)(this + 0x10);
      pDVar2 = *(DownloadJob **)(this + 0x18);
      if (((byte)this[8] & 1) == 0) {
        pDVar2 = this + 9;
        uVar1 = (ulong)((byte)this[8] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (local_58 + 8),(char *)pDVar2,uVar1);
    }
    *(float *)(local_58 + 0x20) = fVar5;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = (void *)0x0;
    *(undefined4 *)(local_58 + 0x24) = *(undefined4 *)(this + 200);
    std::__ndk1::
    vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
    ::__push_back_slow_path<universe::Downloader2::BaseJob*>
              ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                *)&local_50,(BaseJob **)&local_58);
    lVar4 = Downloader2::getInstance();
    JobQueue::push((JobQueue *)(lVar4 + 0xa0),(vector *)&local_50);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

