
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void anr_dump_trace(int *param_1)

{
  int iVar1;
  pthread_t __th;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  int unaff_w27;
  long local_48;
  long local_40;
  long local_38;
  timeval local_30;
  undefined4 local_20 [2];
  char *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = getAndroidApiLevel();
  if (iVar1 < 0x18) {
    uVar3 = log2Console(6,"CrashReport-Native","does not support version below android 7");
    goto LAB_00112ad0;
  }
  if (jvm == (long *)0x0) {
    log2Console(6,"CrashReport-Native","JVM have not been backed up, should init JNI regist first!")
    ;
    uVar3 = 0;
    goto LAB_00112ad0;
  }
  local_20[0] = 0x10006;
  local_48 = 0;
  local_18 = "bugly_trace";
  local_10 = 0;
  log2Console(3,"CrashReport-Native","Attach thread to JVM.");
  __th = pthread_self();
  pthread_detach(__th);
  iVar1 = (**(code **)(*jvm + 0x20))(jvm,&local_48,local_20);
  if ((iVar1 == 0) && (local_48 != 0)) {
    iVar1 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    if (iVar1 < 0) {
      piVar4 = (int *)__errno();
      pcVar2 = strerror(*piVar4);
      uVar3 = log2Console(5,"CrashReport-Native","Failed to get current time: %s",pcVar2);
      goto LAB_00112ad0;
    }
    pcVar2 = calloc(1,0x100);
    log2Console(3,"CrashReport-Native","dump anr trace type anrDumpArgs->type is %d",*param_1);
    if (*param_1 == 1) {
      iVar1 = snprintf(pcVar2,0x100,"%s/%s_%lu%03lu%s",recordFileDir,"bugly_trace",local_30.tv_sec,
                       local_30.tv_usec / 1000,".txt");
      if (iVar1 < 0) {
        piVar4 = (int *)__errno();
        pcVar5 = strerror(*piVar4);
        log2Console(5,"CrashReport-Native","Failed to set sigquit anr trace path: %s",pcVar5);
      }
LAB_00112ba8:
      unaff_w27 = open(pcVar2,0x241,0x180);
      if (unaff_w27 == -1) {
        log2Console(6,"CrashReport-Native","Failed to open trace file %s",pcVar2);
      }
      else {
        log2Console(4,"CrashReport-Native","Create a trace file %s for anr.",pcVar2);
        log2Report(unaff_w27,1,"anr time : %lu%03lu ms\n",local_30.tv_sec,local_30.tv_usec);
        iVar1 = dup2(unaff_w27,2);
        if (iVar1 < 0) {
          log2Console(6,"CrashReport-Native","dup error");
          remove(pcVar2);
        }
        else if (((JAR_JNI_VERSION >> 1 & 1) == 0) || (*param_1 != 2)) {
          log2Console(6,"CrashReport-Native",
                      "not open trace switch JAR_JNI_VERSION is %d or dump type is sigquit");
        }
        else {
          local_40 = 0;
          local_38 = 0;
          iVar1 = getAndroidApiLevel();
          if (0x1c < iVar1) {
            local_40 = dynamic_load_create("/apex/com.android.runtime/lib64/libc++.so");
          }
          if ((local_40 == 0) &&
             (local_40 = dynamic_load_create("/system/lib64/libc++.so"), local_40 == 0)) {
LAB_00112d1c:
            if (local_38 != 0) {
              dynamic_load_destroy(&local_38);
            }
          }
          else {
            DAT_0013f330 = dynamic_load_sym(local_40,"_ZNSt3__14cerrE");
            if (DAT_0013f330 == 0) {
LAB_00112d0c:
              if (local_40 != 0) {
LAB_00112d14:
                dynamic_load_destroy(&local_40);
              }
              goto LAB_00112d1c;
            }
            log2Console(4,"CrashReport-Native","libcpp_cerr=%p",DAT_0013f330);
            iVar1 = getAndroidApiLevel();
            if (iVar1 == 0x1e) {
              local_38 = dynamic_load_create("/apex/com.android.art/lib64/libart.so");
            }
            else {
              iVar1 = getAndroidApiLevel();
              if (iVar1 == 0x1d) {
                local_38 = dynamic_load_create("/apex/com.android.runtime/lib64/libart.so");
              }
            }
            if ((local_38 != 0) ||
               (local_38 = dynamic_load_create("/system/lib64/libart.so"), local_38 != 0)) {
              DAT_0013f338 = (undefined8 *)dynamic_load_sym(local_38,"_ZN3art7Runtime9instance_E");
              if ((DAT_0013f338 != (undefined8 *)0x0) &&
                 (DAT_0013f340 = (code *)dynamic_load_sym(local_38,
                                                  "_ZN3art7Runtime14DumpForSigQuitERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEE"
                                                  ), DAT_0013f340 != (code *)0x0)) {
                DAT_0013e118 = 0;
              }
              goto LAB_00112d0c;
            }
            if (local_40 != 0) goto LAB_00112d14;
          }
          if (DAT_0013e118 == 0) {
            (*DAT_0013f340)(*DAT_0013f338,DAT_0013f330);
          }
          else {
            log2Console(6,"CrashReport-Native","anr trace load symbols error.");
            remove(pcVar2);
          }
        }
      }
    }
    else {
      if (*param_1 == 2) {
        iVar1 = snprintf(pcVar2,0x100,"%s/%s_%lu%03lu%s",recordFileDir,"jni_mannual_bugly_trace",
                         local_30.tv_sec,local_30.tv_usec / 1000,".txt");
        if (iVar1 < 0) {
          piVar4 = (int *)__errno();
          pcVar5 = strerror(*piVar4);
          log2Console(5,"CrashReport-Native","Failed to set jni mannual anr trace path: %s",pcVar5);
        }
        goto LAB_00112ba8;
      }
      log2Console(5,"CrashReport-Native","unknown anr trace type anrDumpArgs->type is %d");
    }
    free(pcVar2);
    close(unaff_w27);
  }
  else {
    log2Console(6,"CrashReport-Native","Failed to attach thread to JVM.");
  }
  uVar3 = (**(code **)(*jvm + 0x28))(jvm);
LAB_00112ad0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

