
void Java_com_github_sisong_ApkPatch_initApkDiff
               (undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  long lVar1;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0013fa88();
  DAT_0016b9a0 = param_4 == '\x01';
  FUN_0013fac4(auStack_40,param_3 == '\x01');
  __android_log_print(3,"apk_diff_native",&DAT_00117276);
  __android_log_print(3,"apk_diff_native","| initApkDiff #is_need_log : %d\n",param_3);
  __android_log_print(3,"apk_diff_native","| initApkDiff #is_debug    : %d\n",param_4);
  __android_log_print(3,"apk_diff_native",&DAT_00119f37);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

