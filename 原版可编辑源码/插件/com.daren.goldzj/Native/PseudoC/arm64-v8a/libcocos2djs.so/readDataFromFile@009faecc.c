
/* universe::FileSystemAndroid::readDataFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) const */

void * __thiscall
universe::FileSystemAndroid::readDataFromFile
          (FileSystemAndroid *this,basic_string *param_1,ulong *param_2)

{
  basic_string bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  size_t __size;
  void *__ptr;
  long *plVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  void *local_90 [2];
  void *local_80;
  ulong *local_78;
  size_t sStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_2 = 0;
  uVar4 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (uVar4 == 0) {
    pcVar5 = (char *)Translated::getInstance();
                    /* catch() { ... } // from try @ 009fae24 with catch @ 009faf74 */
                    /* catch() { ... } // from try @ 009fad30 with catch @ 009faf7c */
    Translated::log(pcVar5,"readDataFromFile: file path is empty");
  }
  else {
    uVar4 = isFileExistExternal(this,param_1);
    if ((uVar4 & 1) != 0) {
      pcVar5 = (char *)Translated::getInstance();
      Translated::log(pcVar5,"readDataFromFile: use super method");
      CustomFileManager::getAbsolutePath((basic_string *)this);
      pvVar6 = (void *)CustomFileManager::readDataFromFile
                                 ((CustomFileManager *)this,(basic_string *)local_90,param_2);
                    /* catch() { ... } // from try @ 009fae34 with catch @ 009faf5c */
      if (((ulong)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      goto LAB_009fb0a4;
    }
                    /* catch() { ... } // from try @ 009faca0 with catch @ 009faf88 */
    uVar4 = CustomFileManager::isAbsolutePath((CustomFileManager *)this,param_1);
                    /* catch() { ... } // from try @ 009fad9c with catch @ 009faf90 */
    if ((uVar4 & 1) == 0) {
      uVar4 = (ulong)((byte)*param_1 >> 1);
      if (((byte)*param_1 & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 8);
      }
      if ((uVar4 == 0) ||
         (uVar4 = CustomFileManager::isAbsolutePath((CustomFileManager *)this,param_1),
         (uVar4 & 1) != 0)) {
LAB_009fb080:
        pcVar7 = (char *)Translated::getInstance();
        bVar1 = *param_1;
        pbVar10 = *(basic_string **)(param_1 + 0x10);
        pcVar5 = "readDataFromFile: file not found. %s";
        goto LAB_009fb094;
      }
      pbVar10 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      lVar8 = AAssetManager_open(assetmanager,pbVar10,0);
      if (lVar8 == 0) goto LAB_009fb080;
      pbVar10 = param_1 + 1;
      AAsset_close();
      pbVar11 = pbVar10;
      if (((byte)*param_1 & 1) != 0) {
        pbVar11 = *(basic_string **)(param_1 + 0x10);
      }
      lVar8 = AAssetManager_open(assetmanager,pbVar11,0);
      if (lVar8 == 0) {
        pcVar5 = (char *)Translated::getInstance();
        Translated::log(pcVar5,"asset is nullptr");
        goto LAB_009fb0a0;
      }
      __size = AAsset_getLength();
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        AAsset_close(lVar8);
        pcVar7 = (char *)Translated::getInstance();
        bVar1 = *param_1;
        pbVar11 = *(basic_string **)(param_1 + 0x10);
        pcVar5 = "readDataFromFile: create read buffer failed. %s";
      }
      else {
        iVar3 = AAsset_read(lVar8,__ptr,__size);
                    /* catch() { ... } // from try @ 009fb1d4 with catch @ 009fb050 */
        AAsset_close(lVar8);
        if ((long)__size <= (long)iVar3) {
          plVar9 = *(long **)(this + 0x40);
          if (plVar9 == (long *)0x0) {
            *param_2 = __size;
            pvVar6 = __ptr;
          }
          else {
            local_90[0] = __ptr;
            local_78 = param_2;
            sStack_70 = __size;
            pvVar6 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,local_90,&sStack_70,&local_78);
            if (pvVar6 == (void *)0x0) {
              pcVar5 = (char *)Translated::getInstance();
              if (((byte)*param_1 & 1) != 0) {
                pbVar10 = *(basic_string **)(param_1 + 0x10);
              }
              Translated::log(pcVar5,"FileSystem: decrypt file error. %s",pbVar10);
              free(__ptr);
              *param_2 = 0;
            }
          }
          goto LAB_009fb0a4;
        }
        free(__ptr);
        pcVar7 = (char *)Translated::getInstance();
        bVar1 = *param_1;
        pbVar11 = *(basic_string **)(param_1 + 0x10);
        pcVar5 = "readDataFromFile: read file %s failed.";
      }
      if (((byte)bVar1 & 1) != 0) {
        pbVar10 = pbVar11;
      }
    }
    else {
      pcVar7 = (char *)Translated::getInstance();
      bVar1 = *param_1;
      pbVar10 = *(basic_string **)(param_1 + 0x10);
      pcVar5 = "readDataFromFile: is absolute path. %s";
LAB_009fb094:
      if (((byte)bVar1 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
    }
    Translated::log(pcVar7,pcVar5,pbVar10);
  }
LAB_009fb0a0:
  pvVar6 = (void *)0x0;
LAB_009fb0a4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009fb180 to 00afb1bf has its CatchHandler @ 009fb278 */
    __stack_chk_fail();
  }
                    /* try { // try from 009fb0c0 to 00afb0cb has its CatchHandler @ 009fb270 */
  return pvVar6;
}

