
/* universe::DownloadTask::onWriteContent(unsigned char*, unsigned long, unsigned long) */

void __thiscall
universe::DownloadTask::onWriteContent
          (DownloadTask *this,uchar *param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(this + 0x110) = *(long *)(this + 0x110) + param_3 * param_2;
  fwrite(param_1,param_2,param_3,*(FILE **)(this + 0xe8));
  return;
}

