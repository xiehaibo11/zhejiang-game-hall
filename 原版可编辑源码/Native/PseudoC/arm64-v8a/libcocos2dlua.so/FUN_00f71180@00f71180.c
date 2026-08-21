
undefined8 FUN_00f71180(char *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  undefined4 *puVar4;
  DIR *__dirp;
  dirent *pdVar5;
  undefined4 uVar6;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) ||
     (sVar3 = strlen(param_2), sVar3 == 0)) {
    puVar4 = (undefined4 *)__errno();
    uVar6 = 0x16;
  }
  else {
    sVar3 = strlen(param_2);
    if (sVar3 < 0x1000) {
      pcVar1 = param_1 + 0x1018;
      param_1[0x1018] = '\0';
      param_1[0x1019] = '\0';
      param_1[0x101a] = '\0';
      param_1[0x101b] = '\0';
      param_1[0x101c] = '\0';
      param_1[0x101d] = '\0';
      param_1[0x101e] = '\0';
      param_1[0x101f] = '\0';
      param_1[0x1010] = '\0';
      param_1[0x1011] = '\0';
      param_1[0x1012] = '\0';
      param_1[0x1013] = '\0';
      param_1[0x1014] = '\0';
      param_1[0x1015] = '\0';
      param_1[0x1016] = '\0';
      param_1[0x1017] = '\0';
      memset(param_1,0,0x1000);
      param_1[0x1000] = '\0';
      param_1[0x1001] = '\0';
      param_1[0x1002] = '\0';
      param_1[0x1003] = '\0';
      param_1[0x1008] = '\0';
      param_1[0x1009] = '\0';
      param_1[0x100a] = '\0';
      param_1[0x100b] = '\0';
      param_1[0x100c] = '\0';
      param_1[0x100d] = '\0';
      param_1[0x100e] = '\0';
      param_1[0x100f] = '\0';
      free((void *)0x0);
      param_1[0x1010] = '\0';
      param_1[0x1011] = '\0';
      param_1[0x1012] = '\0';
      param_1[0x1013] = '\0';
      param_1[0x1014] = '\0';
      param_1[0x1015] = '\0';
      param_1[0x1016] = '\0';
      param_1[0x1017] = '\0';
      if (*(DIR **)(param_1 + 0x1018) != (DIR *)0x0) {
        closedir(*(DIR **)(param_1 + 0x1018));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      param_1[0x1020] = '\0';
      param_1[0x1021] = '\0';
      param_1[0x1022] = '\0';
      param_1[0x1023] = '\0';
      param_1[0x1024] = '\0';
      param_1[0x1025] = '\0';
      param_1[0x1026] = '\0';
      param_1[0x1027] = '\0';
      __strcpy_chk(param_1,param_2,0x1000);
      sVar3 = strlen(param_1);
      for (lVar2 = sVar3 - 1; (lVar2 != 0 && ((param_1[lVar2] == '\\' || (param_1[lVar2] == '/'))));
          lVar2 = lVar2 + 1) {
        param_1[lVar2] = '\0';
      }
      __dirp = opendir(param_2);
      *(DIR **)pcVar1 = __dirp;
      if (__dirp == (DIR *)0x0) {
        memset(param_1,0,0x1000);
        param_1[0x1000] = '\0';
        param_1[0x1001] = '\0';
        param_1[0x1002] = '\0';
        param_1[0x1003] = '\0';
        param_1[0x1008] = '\0';
        param_1[0x1009] = '\0';
        param_1[0x100a] = '\0';
        param_1[0x100b] = '\0';
        param_1[0x100c] = '\0';
        param_1[0x100d] = '\0';
        param_1[0x100e] = '\0';
        param_1[0x100f] = '\0';
        free(*(void **)(param_1 + 0x1010));
        param_1[0x1010] = '\0';
        param_1[0x1011] = '\0';
        param_1[0x1012] = '\0';
        param_1[0x1013] = '\0';
        param_1[0x1014] = '\0';
        param_1[0x1015] = '\0';
        param_1[0x1016] = '\0';
        param_1[0x1017] = '\0';
        if (*(DIR **)(param_1 + 0x1018) != (DIR *)0x0) {
          closedir(*(DIR **)(param_1 + 0x1018));
        }
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        param_1[0x1020] = '\0';
        param_1[0x1021] = '\0';
        param_1[0x1022] = '\0';
        param_1[0x1023] = '\0';
        param_1[0x1024] = '\0';
        param_1[0x1025] = '\0';
        param_1[0x1026] = '\0';
        param_1[0x1027] = '\0';
        return 0xffffffff;
      }
      param_1[0x1000] = '\x01';
      param_1[0x1001] = '\0';
      param_1[0x1002] = '\0';
      param_1[0x1003] = '\0';
      pdVar5 = readdir(__dirp);
      *(dirent **)(param_1 + 0x1020) = pdVar5;
      if (pdVar5 == (dirent *)0x0) {
        param_1[0x1000] = '\0';
        param_1[0x1001] = '\0';
        param_1[0x1002] = '\0';
        param_1[0x1003] = '\0';
        return 0;
      }
      return 0;
    }
    puVar4 = (undefined4 *)__errno();
    uVar6 = 0x24;
  }
  *puVar4 = uVar6;
  return 0xffffffff;
}

