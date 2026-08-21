
/* universe::Downloader2::DownloadJob::onWriteContent(char*, unsigned long, unsigned long) */

void __thiscall
universe::Downloader2::DownloadJob::onWriteContent
          (DownloadJob *this,char *param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + param_3 * param_2;
  fwrite(param_1,param_2,param_3,*(FILE **)(this + 0xd0));
  return;
}

