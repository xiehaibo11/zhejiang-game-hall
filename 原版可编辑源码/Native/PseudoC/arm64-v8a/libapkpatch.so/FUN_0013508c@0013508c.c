
void FUN_0013508c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 local_84c;
  char acStack_848 [2048];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __android_log_print(3,"apk_diff_native",
                      "invoke  hpatch_getFileSize  fileName : %s, fileSize : %llu \n\n",param_1,
                      param_2);
  __android_log_print(4,"apk_diff_native","invoke   hpatch_getPathStat: ");
  __android_log_print(4,"apk_diff_native",&DAT_00117bd3);
  __android_log_print(3,"apk_diff_native","file_path: %s,out_type %s , out_fileSize: %llu\n",param_1
                      ,"not Exist",param_2);
  __android_log_print(3,"apk_diff_native","file_default type: %s , out_fileSize: %llu\n","not Exist"
                      ,param_2);
  __android_log_print(4,"apk_diff_native",&DAT_0011b513);
  sVar6 = strlen(param_1);
  if ((sVar6 == 0) || (param_1[sVar6 - 1] != '/')) {
    __android_log_print(6,"apk_diff_native","path is not a dir.\n");
LAB_001351e8:
    iVar5 = FUN_00134cfc(param_1,&local_84c,param_2,0);
    if (iVar5 != 0) {
      if (local_84c != 1) {
        pcVar1 = "path type not exist";
        if (local_84c != 0) {
          pcVar1 = "";
        }
        pcVar2 = "path type is dir";
        if (local_84c != 2) {
          pcVar2 = pcVar1;
        }
        __android_log_print(6,"apk_diff_native",
                            "ERROR by hpatch_getFileSize  because of the TPathType  is: %s , but we expect it is  a  kPathType_file.\n"
                            ,pcVar2);
      }
      bVar4 = local_84c == 1;
      goto LAB_0013524c;
    }
  }
  else {
    __android_log_print(3,"apk_diff_native","path is a dir.\n");
    sVar6 = strlen(param_1);
    if (sVar6 < 0x800) {
      if (sVar6 == 0) {
        sVar7 = 0;
      }
      else {
        sVar7 = sVar6 - 1;
        if (param_1[sVar6 - 1] != '/') {
          sVar7 = sVar6;
        }
      }
      __memcpy_chk(acStack_848,param_1,sVar7,0x800);
      param_1 = acStack_848;
      acStack_848[sVar7] = '\0';
      goto LAB_001351e8;
    }
  }
  __android_log_print(6,"apk_diff_native","ERROR by hpatch_getFileSize  because of getPathStat\n\n")
  ;
  bVar4 = false;
LAB_0013524c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}

