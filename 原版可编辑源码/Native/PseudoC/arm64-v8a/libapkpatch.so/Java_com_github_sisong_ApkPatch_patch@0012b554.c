
int Java_com_github_sisong_ApkPatch_patch
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  uVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  uVar5 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
  if (DAT_0016b9a0 != '\0') {
    __android_log_print(4,"apk_diff_native",&DAT_00117b8a);
    if (DAT_0016b9a0 != '\0') {
      __android_log_print(4,"apk_diff_native","| cOldApkPath     : %s ",uVar3);
      if (DAT_0016b9a0 != '\0') {
        __android_log_print(4,"apk_diff_native","| cPatchFilePath  : %s",uVar4);
        if (DAT_0016b9a0 != '\0') {
          __android_log_print(4,"apk_diff_native","| cOutNewApkPath  : %s",uVar5);
          if (DAT_0016b9a0 != '\0') {
            __android_log_print(4,"apk_diff_native",&DAT_00119100);
            if (DAT_0016b9a0 != '\0') {
              __android_log_print(4,"apk_diff_native",&DAT_0011a500);
            }
          }
        }
      }
    }
  }
  if (param_7 != 0) {
    pcVar6 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_7,0);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) goto LAB_0012b708;
    (**(code **)(*param_1 + 0x550))(param_1,param_7,pcVar6);
  }
  pcVar6 = (char *)0x0;
LAB_0012b708:
  iVar2 = ApkPatch(uVar3,uVar4,uVar5,param_6,pcVar6,param_8);
  if (iVar2 == 0) {
    FUN_0013fb24(auStack_70,"TPatchResult: ","finally , the apk diff patch is generated success.");
  }
  if (pcVar6 != (char *)0x0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_7,pcVar6);
  }
  (**(code **)(*param_1 + 0x550))(param_1,param_5,uVar5);
  (**(code **)(*param_1 + 0x550))(param_1,param_4,uVar4);
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

