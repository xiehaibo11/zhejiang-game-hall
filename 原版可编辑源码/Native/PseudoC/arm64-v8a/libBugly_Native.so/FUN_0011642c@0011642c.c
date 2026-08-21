
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0011642c(undefined4 *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int __fd;
  int iVar5;
  pthread_t __th;
  long lVar6;
  char *__s;
  int *piVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  timeval local_a8;
  timeval local_98;
  long local_88 [2];
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  log2Console(3,"eup","anr_dump_trace");
  __th = pthread_self();
  pthread_detach(__th);
  log2Console(3,"eup","anr_dump_trace dump anr trace type anr_dump_args->type is %d",*param_1);
  local_70 = 0;
  pcStack_78 = "bugly_trace";
  local_88[1] = 0x10006;
  local_88[0] = 0;
  log2Console(3,"eup","anr_dump_trace Attach thread to JVM.");
  iVar4 = (**(code **)(*jvm + 0x20))(jvm,local_88,local_88 + 1);
  lVar10 = local_88[0];
  if ((iVar4 == 0) && (local_88[0] != 0)) {
    log2Console(3,"eup","call IsAnr.");
    lVar6 = javaStaticCall_NativeCrashHandler_GetInstance(lVar10);
    if (lVar6 == 0) {
      pcVar8 = "Failed to get crash handler.";
LAB_001166e8:
      log2Console(6,"eup",pcVar8);
LAB_001166f0:
      pcVar8 = "proc is not in anr.";
      uVar11 = 4;
      goto LAB_00116704;
    }
    log2Console(3,"eup","Successfully got crash handler.");
    lVar6 = javaCall_NativeCrashHandler_GetMHandle(lVar10,lVar6);
    if (lVar6 == 0) {
      pcVar8 = "Failed to get exception handler.";
      goto LAB_001166e8;
    }
    log2Console(3,"eup","Successfully got exception handler.");
    cVar3 = GetAndUpdateAnrState(lVar10,lVar6);
    if (cVar3 == '\0') goto LAB_001166f0;
    iVar4 = gettimeofday(&local_98,(__timezone_ptr_t)0x0);
    if (iVar4 < 0) {
      piVar7 = (int *)__errno();
      __s = strerror(*piVar7);
      pcVar8 = "Failed to get start time: %s";
    }
    else {
      __s = calloc(1,0x100);
      iVar4 = snprintf(__s,0x100,"%s/%s_%lu%03lu%s",recordFileDir,"manual_bugly_trace",
                       local_98.tv_sec,local_98.tv_usec / 1000,".txt");
      if (iVar4 < 0) {
        piVar7 = (int *)__errno();
        pcVar8 = strerror(*piVar7);
        log2Console(6,"eup","Failed to set sigquit anr trace path: %s",pcVar8);
      }
      iVar4 = dup(2);
      __fd = open(__s,0x241,0x180);
      if (__fd != -1) {
        log2Console(4,"eup","Create a trace file %s for anr.",__s);
        log2Report(__fd,1,"anr time : %lu%03lu ms\n",local_98.tv_sec,local_98.tv_usec);
        if (((byte)JAR_JNI_VERSION >> 1 & 1) == 0) {
          log2Report(__fd,1,"android trace not enable\n");
          log2Console(3,"eup","dump trace end");
        }
        else {
          iVar5 = dup2(__fd,2);
          if (iVar5 < 0) {
            piVar7 = (int *)__errno();
            pcVar8 = strerror(*piVar7);
            log2Console(6,"eup","Failed to dup2 stderr: %s",pcVar8);
            log2Console(3,"eup","dump trace end");
          }
          else {
            local_68 = 0;
            local_60 = 0;
            iVar5 = getAndroidApiLevel();
            if (iVar5 < 0x1d) {
LAB_001167f8:
              local_60 = dynamic_load_create("/system/lib64/libc++.so");
              if (local_60 != 0) goto LAB_0011680c;
            }
            else {
              local_60 = dynamic_load_create("/apex/com.android.runtime/lib64/libc++.so");
              if (local_60 == 0) goto LAB_001167f8;
LAB_0011680c:
              DAT_00140398 = dynamic_load_sym(local_60,"_ZNSt3__14cerrE");
              if (DAT_00140398 != 0) {
                log2Console(4,"eup","libcpp_cerr=%p",DAT_00140398);
                if (iVar5 < 0x1e) {
                  if (iVar5 == 0x1d) {
                    pcVar8 = "/apex/com.android.runtime/lib64/libart.so";
                    goto LAB_001168a4;
                  }
LAB_001168b4:
                  lVar10 = dynamic_load_create("/system/lib64/libart.so");
                  local_68 = lVar10;
                  if (lVar10 == 0) goto LAB_00116910;
                }
                else {
                  pcVar8 = "/apex/com.android.art/lib64/libart.so";
LAB_001168a4:
                  lVar10 = dynamic_load_create(pcVar8);
                  local_68 = lVar10;
                  if (lVar10 == 0) goto LAB_001168b4;
                }
                local_68 = lVar10;
                DAT_00140390 = (undefined8 *)dynamic_load_sym(lVar10,"_ZN3art7Runtime9instance_E");
                if (DAT_00140390 != (undefined8 *)0x0) {
                  DAT_00140388 = (code *)dynamic_load_sym(lVar10,
                                                  "_ZN3art7Runtime14DumpForSigQuitERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEE"
                                                  );
                  if (DAT_00140388 != (code *)0x0) {
                    DAT_001403a0 = 1;
                  }
                }
              }
LAB_00116910:
              dynamic_load_destroy(&local_60);
              if (local_68 != 0) {
                dynamic_load_destroy(&local_68);
              }
            }
            if ((DAT_001403a0 & 1) == 0) {
              uVar11 = 1;
LAB_00116984:
              log2Report(__fd,uVar11,"anr trace dump failed\n");
            }
            else {
              puVar9 = (undefined1 *)__emutls_get_address(__emutls_v_isDumpingTrace);
              *puVar9 = 1;
              uVar11 = __emutls_get_address(__emutls_v_jmpBuf);
              iVar5 = sigsetjmp(uVar11,1);
              if (iVar5 != 0) {
                uVar11 = 0;
                goto LAB_00116984;
              }
              (*DAT_00140388)(*DAT_00140390,DAT_00140398);
              iVar5 = gettimeofday(&local_a8,(__timezone_ptr_t)0x0);
              if (iVar5 < 0) {
                piVar7 = (int *)__errno();
                pcVar8 = strerror(*piVar7);
                log2Console(5,"eup","Failed to get end time: %s",pcVar8);
              }
              else {
                log2Report(__fd,0,"\ndump trace costs %ld ms\n",
                           (local_a8.tv_usec / 1000 - local_98.tv_usec / 1000) +
                           (local_a8.tv_sec - local_98.tv_sec) * 1000);
              }
            }
            log2Console(3,"eup","dump trace end");
            iVar4 = dup2(iVar4,2);
            if (iVar4 < 0) {
              piVar7 = (int *)__errno();
              pcVar8 = strerror(*piVar7);
              log2Console(5,"eup","Failed to restore stderr: %s",pcVar8);
            }
          }
        }
        free(__s);
        close(__fd);
        goto LAB_0011670c;
      }
      pcVar8 = "Failed to open trace file %s";
    }
    log2Console(6,"eup",pcVar8,__s);
  }
  else {
    pcVar8 = "anr_dump_trace Failed to attach thread to JVM.";
    uVar11 = 6;
LAB_00116704:
    log2Console(uVar11,"eup",pcVar8);
  }
  SendSigquitToSignalCatcher();
LAB_0011670c:
  log2Console(3,"eup","dump trace exit");
  puVar9 = (undefined1 *)__emutls_get_address(__emutls_v_isDumpingTrace);
  plVar2 = jvm;
  *puVar9 = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

