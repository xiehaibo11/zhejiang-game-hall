
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
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00a01074 to 00b0107f has its CatchHandler @ 00a014dc */
                    /* try { // try from 00a01080 to 00b0108b has its CatchHandler @ 00a014d8 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a0108c to 00b010a3 has its CatchHandler @ 00a014f0 */
  fVar5 = (float)*(ulong *)(this + 0x80) / (float)param_1;
                    /* try { // try from 00a010cc to 00b010d3 has its CatchHandler @ 00a014a0 */
  if ((*(float *)(this + 0x88) + 0.009 < fVar5) || (0.98 < fVar5)) {
                    /* try { // try from 00a010d8 to 00b010ef has its CatchHandler @ 00a01484 */
    *(float *)(this + 0x88) = fVar5;
    local_58 = operator_new(0x28);
                    /* try { // try from 00a010f4 to 00b010fb has its CatchHandler @ 00a0147c */
    *(undefined8 *)(local_58 + 0x1c) = 0;
    *(undefined8 *)(local_58 + 0x14) = 0;
    *(undefined8 *)(local_58 + 0xc) = 0;
    *(undefined8 *)(local_58 + 4) = 0;
                    /* try { // try from 00a010fc to 00b0111b has its CatchHandler @ 00a01488 */
    *(undefined4 *)(local_58 + 0x24) = 0xffffffff;
    *local_58 = (DownloadJob)0x2;
    if (this != local_58) {
      uVar1 = *(ulong *)(this + 0x10);
      pDVar2 = *(DownloadJob **)(this + 0x18);
                    /* try { // try from 00a0111c to 00b0112b has its CatchHandler @ 00a01478 */
      if (((byte)this[8] & 1) == 0) {
        pDVar2 = this + 9;
        uVar1 = (ulong)((byte)this[8] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (local_58 + 8),(char *)pDVar2,uVar1);
    }
    *(float *)(local_58 + 0x20) = fVar5;
                    /* try { // try from 00a01130 to 00b0113b has its CatchHandler @ 00a01470 */
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
                    /* try { // try from 00a0113c to 00b0114b has its CatchHandler @ 00a01458 */
    *(undefined4 *)(local_58 + 0x24) = *(undefined4 *)(this + 200);
    std::__ndk1::
    vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
    ::__push_back_slow_path<universe::Downloader2::BaseJob*>
              ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                *)&local_50,(BaseJob **)&local_58);
                    /* try { // try from 00a01150 to 00b0115b has its CatchHandler @ 00a01448 */
    lVar4 = getInstance();
    JobQueue::push((JobQueue *)(lVar4 + 0xa0),(vector *)&local_50);
                    /* try { // try from 00a01160 to 00b01167 has its CatchHandler @ 00a01438 */
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
                    /* try { // try from 00a0117c to 00b01187 has its CatchHandler @ 00a01428 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a0118c to 00b01193 has its CatchHandler @ 00a01418 */
  return 0;
}

