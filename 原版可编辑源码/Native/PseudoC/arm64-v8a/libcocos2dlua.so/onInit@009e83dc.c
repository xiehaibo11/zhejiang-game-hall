
/* universe::Downloader2::DownloadJob::onInit(char const*) */

undefined4 __thiscall universe::Downloader2::DownloadJob::onInit(DownloadJob *this,char *param_1)

{
  long lVar1;
  basic_string *pbVar2;
  ulong uVar3;
  DownloadJob *__filename;
  FILE *pFVar4;
  DownloadJob DVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  auVar7 = TanGaoXiong::getInstance();
  pbVar2 = auVar7._0_8_;
  TanGaoXiong::dirname((TanGaoXiong *)(this + 0x38),auVar7._8_8_);
  uVar3 = TanGaoXiong::isDirectoryExist(pbVar2);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = (**(code **)(*(long *)pbVar2 + 0x30))(pbVar2,local_60), (uVar3 & 1) == 0)) {
    DVar5 = (DownloadJob)0x1;
  }
  else {
    if (((byte)*(TanGaoXiong *)(this + 0x38) & 1) == 0) {
      __filename = this + 0x39;
    }
    else {
      __filename = *(DownloadJob **)(this + 0x48);
    }
    pFVar4 = fopen((char *)__filename,param_1);
    *(FILE **)(this + 0xd0) = pFVar4;
    if (pFVar4 != (FILE *)0x0) {
      uVar6 = 1;
      goto joined_r0x009e8474;
    }
    DVar5 = (DownloadJob)0x2;
  }
  uVar6 = 0;
  this[0x90] = DVar5;
joined_r0x009e8474:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

