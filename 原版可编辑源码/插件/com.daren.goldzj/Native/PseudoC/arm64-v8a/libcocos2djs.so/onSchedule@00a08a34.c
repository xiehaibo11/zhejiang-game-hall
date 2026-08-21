
/* universe::MergeFileTask::onSchedule() */

undefined8 __thiscall universe::MergeFileTask::onSchedule(MergeFileTask *this)

{
  byte *pbVar1;
  long lVar2;
  basic_string *pbVar3;
  ulong uVar4;
  MergeFileTask *__filename;
  FILE *__s;
  void *__ptr;
  char *pcVar5;
  byte *pbVar6;
  MergeFileTask MVar7;
  undefined1 auVar8 [16];
  size_t local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  auVar8 = CustomFileManager::getInstance();
  pbVar3 = auVar8._0_8_;
  CustomFileManager::dirname((CustomFileManager *)(this + 0x38),auVar8._8_8_);
  uVar4 = CustomFileManager::isDirectoryExist(pbVar3);
                    /* try { // try from 00a08a98 to 00b08b1f has its CatchHandler @ 00a08be0 */
  if (((uVar4 & 1) == 0) &&
     (uVar4 = (**(code **)(*(long *)pbVar3 + 0x30))(pbVar3,local_70), (uVar4 & 1) == 0)) {
    MVar7 = (MergeFileTask)0x1;
  }
  else {
    if (((byte)*(CustomFileManager *)(this + 0x38) & 1) == 0) {
      __filename = this + 0x39;
    }
    else {
      __filename = *(MergeFileTask **)(this + 0x48);
    }
    __s = fopen((char *)__filename,"wb");
    if (__s != (FILE *)0x0) {
      pbVar1 = *(byte **)(this + 0x28);
      for (pbVar6 = *(byte **)(this + 0x20); pbVar6 != pbVar1; pbVar6 = pbVar6 + 0x18) {
        __ptr = (void *)(**(code **)(*(long *)pbVar3 + 0x10))(pbVar3,pbVar6,&local_78);
        if ((__ptr == (void *)0x0) || (local_78 == 0)) {
          pcVar5 = (char *)Translated::getInstance();
          if ((*pbVar6 & 1) == 0) {
            pbVar6 = pbVar6 + 1;
          }
          else {
            pbVar6 = *(byte **)(pbVar6 + 0x10);
          }
                    /* try { // try from 00a08b8c to 00b08bfb has its CatchHandler @ 00a08a2c */
          Translated::log(pcVar5,"MergeFileTask.onSchedule: read file error. %s",pbVar6);
          this[0x58] = (MergeFileTask)0x3;
          break;
        }
        fwrite(__ptr,local_78,1,__s);
        free(__ptr);
      }
      fclose(__s);
      goto joined_r0x00a08bac;
    }
                    /* try { // try from 00a08b24 to 00b08b27 has its CatchHandler @ 00a08bc8 */
    MVar7 = (MergeFileTask)0x2;
  }
  this[0x58] = MVar7;
joined_r0x00a08bac:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
                    /* try { // try from 00a08b4c to 00b08b8b has its CatchHandler @ 00a08be0 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

