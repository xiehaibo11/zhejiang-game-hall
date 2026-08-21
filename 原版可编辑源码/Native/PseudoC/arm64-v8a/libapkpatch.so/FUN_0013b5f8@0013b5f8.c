
void FUN_0013b5f8(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 auStack_270 [16];
  undefined4 local_260;
  undefined1 auStack_25c [264];
  undefined4 local_154;
  undefined3 uStack_150;
  undefined1 auStack_14d [260];
  undefined1 local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_49 = 0;
  uVar5 = *(ulong *)(param_1 + 8) & 0xffffffff;
  if (0x10a < *(ulong *)(param_1 + 8)) {
    uVar5 = 0x10b;
  }
  iVar3 = (**(code **)(param_1 + 0x10))(param_1,0,&local_154,(long)&local_154 + uVar5);
  if (iVar3 == 0) {
    puts("diffData->read(diffData, 0, buf, buf + readLen) ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "diffData->read(diffData, 0, buf, buf + readLen) ERROR!\n");
    pcVar4 = "diffData->read(diffData, 0, buf, buf + readLen)";
  }
  else {
    __android_log_print(4,"apk_diff_native",&DAT_00115745);
    __android_log_print(4,"apk_diff_native",&DAT_0011b226);
    __android_log_print(3,"apk_diff_native","| kVersionType    : %s","ZiPat1&");
    __android_log_print(3,"apk_diff_native","| kVersionTypeLen : %d",7);
    __android_log_print(3,"apk_diff_native","| TByte buffer    : %s",&local_154);
    __android_log_print(4,"apk_diff_native",&DAT_0011b272);
    __android_log_print(4,"apk_diff_native",&DAT_00115745);
    if (local_154 == 0x6150695a && CONCAT31(uStack_150,local_154._3_1_) == 0x26317461) {
      if (param_2 == (undefined8 *)0x0) {
        puts("decompressPlugin != 0 ERROR!");
        __android_log_print(6,"apk_diff_native","decompressPlugin != 0 ERROR!\n");
        pcVar4 = "decompressPlugin != 0";
      }
      else {
        uVar5 = __strlen_chk(auStack_14d,0x105);
        if (uVar5 < 0x104) {
          if (param_3 != (long *)0x0) {
            *param_3 = uVar5 + 8;
          }
          memset(auStack_270,0,0x118);
          local_260 = 1;
          __memcpy_chk(auStack_25c,auStack_14d,uVar5 + 1,0x104);
          iVar3 = (*(code *)*param_2)(auStack_25c);
          bVar2 = iVar3 != 0;
          goto LAB_0013b7a8;
        }
        puts("compressTypeLen <= hpatch_kMaxPluginTypeLength ERROR!");
        __android_log_print(6,"apk_diff_native",
                            "compressTypeLen <= hpatch_kMaxPluginTypeLength ERROR!\n");
        pcVar4 = "compressTypeLen <= hpatch_kMaxPluginTypeLength";
      }
    }
    else {
      puts("0 == strncmp((const char *) buf, kVersionType, kVersionTypeLen) ERROR!");
      __android_log_print(6,"apk_diff_native",
                          "0 == strncmp((const char *) buf, kVersionType, kVersionTypeLen) ERROR!\n"
                         );
      pcVar4 = "0 == strncmp((const char *) buf, kVersionType, kVersionTypeLen)";
    }
  }
  FUN_0013fb24(&DAT_0016ba73,pcVar4,DAT_0016ba78);
  bVar2 = false;
LAB_0013b7a8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

