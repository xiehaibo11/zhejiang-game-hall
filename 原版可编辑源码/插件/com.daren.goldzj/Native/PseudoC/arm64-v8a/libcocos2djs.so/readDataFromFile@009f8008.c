
/* universe::CustomFileManager::readDataFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) const */

void __thiscall
universe::CustomFileManager::readDataFromFile
          (CustomFileManager *this,basic_string *param_1,ulong *param_2)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  FILE *__stream;
  size_t __size;
  void *__ptr;
  size_t sVar4;
  long *plVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string *pbVar9;
  ulong *local_80;
  size_t local_78;
  void *pvStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar1 = param_1 + 1;
  *param_2 = 0;
                    /* try { // try from 009f8048 to 00af80d3 has its CatchHandler @ 009f8048
                       catch() { ... } // from try @ 009f8048 with catch @ 009f8048
                       catch() { ... } // from try @ 009f80dc with catch @ 009f8048
                       catch() { ... } // from try @ 009f8144 with catch @ 009f8048 */
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  __stream = fopen((char *)pbVar9,"rb");
  if (__stream == (FILE *)0x0) {
    pcVar8 = (char *)Translated::getInstance();
    bVar2 = *param_1;
    pbVar9 = *(basic_string **)(param_1 + 0x10);
    pcVar7 = "CustomFileManager: read file %s error";
LAB_009f8158:
    if (((byte)bVar2 & 1) != 0) {
      pbVar1 = pbVar9;
    }
    Translated::log(pcVar8,pcVar7,pbVar1);
  }
  else {
    fseek(__stream,0,2);
    __size = ftell(__stream);
    rewind(__stream);
    if (__size == 0) {
                    /* try { // try from 009f8140 to 00af8143 has its CatchHandler @ 009f8144 */
      fclose(__stream);
                    /* catch() { ... } // from try @ 009f80d4 with catch @ 009f8144
                       catch() { ... } // from try @ 009f8140 with catch @ 009f8144
                       try { // try from 009f8144 to 00af8157 has its CatchHandler @ 009f8048 */
      pcVar8 = (char *)Translated::getInstance();
      bVar2 = *param_1;
      pbVar9 = *(basic_string **)(param_1 + 0x10);
      pcVar7 = "CustomFileManager: file size is 0. %s";
      goto LAB_009f8158;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      pcVar7 = (char *)Translated::getInstance();
      if (((byte)*param_1 & 1) != 0) {
        pbVar1 = *(basic_string **)(param_1 + 0x10);
      }
      Translated::log(pcVar7,"CustomFileManager: create read buffer error of file %s",pbVar1);
      fclose(__stream);
    }
    else {
      sVar4 = fread(__ptr,1,__size,__stream);
      fclose(__stream);
      if (sVar4 == __size) {
        plVar5 = *(long **)(this + 0x40);
        if (plVar5 == (long *)0x0) {
          *param_2 = __size;
          pvVar6 = __ptr;
        }
        else {
                    /* try { // try from 009f80d4 to 00af80db has its CatchHandler @ 009f8144 */
                    /* try { // try from 009f80dc to 00af813f has its CatchHandler @ 009f8048 */
          local_80 = param_2;
          local_78 = __size;
          pvStack_70 = __ptr;
          pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,&pvStack_70,&local_78,&local_80);
          if (pvVar6 == (void *)0x0) {
            pcVar7 = (char *)Translated::getInstance();
            if (((byte)*param_1 & 1) != 0) {
              pbVar1 = *(basic_string **)(param_1 + 0x10);
            }
            Translated::log(pcVar7,"CustomFileManager: decrypt file error. %s",pbVar1);
            free(__ptr);
            *param_2 = 0;
            pvVar6 = (void *)0x0;
          }
        }
        goto LAB_009f8168;
      }
      pcVar7 = (char *)Translated::getInstance();
      if (((byte)*param_1 & 1) != 0) {
        pbVar1 = *(basic_string **)(param_1 + 0x10);
      }
      Translated::log(pcVar7,"CustomFileManager: read file %s error",pbVar1);
      free(__ptr);
    }
  }
  pvVar6 = (void *)0x0;
LAB_009f8168:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar6);
}

