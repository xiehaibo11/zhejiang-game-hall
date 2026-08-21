
void recordEnd(FILE *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  char local_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = snprintf(local_50,0x14,"%d",(ulong)param_2);
  if (iVar2 == -1) {
    log2Console(6,"eup","snprintf %d",param_2);
    local_50[0] = '-';
    local_50[1] = '1';
    local_50[2] = 0;
    if (param_1 != (FILE *)0x0) goto LAB_00110224;
LAB_0011031c:
    pcVar5 = "write key fail";
LAB_0011032c:
    log2Console(6,"eup",pcVar5);
LAB_00110334:
    log2Console(6,"eup","write property fail %s %d","rqd_bc",local_50);
  }
  else {
    if (param_1 == (FILE *)0x0) goto LAB_0011031c;
LAB_00110224:
    sVar4 = fwrite("rqd_bc",1,6,param_1);
    if ((int)sVar4 != 6) {
      log2Console(6,"eup","Failed to write string to file: %s","rqd_bc");
      goto LAB_0011031c;
    }
    iVar2 = putc(0,param_1);
    if (iVar2 == -1) {
      log2Console(6,"eup","Failed to write EOF to file.");
      goto LAB_0011031c;
    }
    sVar4 = strlen(local_50);
    iVar2 = (int)sVar4;
    sVar4 = fwrite(local_50,1,(long)iVar2,param_1);
    if ((int)sVar4 != iVar2) {
      log2Console(6,"eup","Failed to write string to file: %s",local_50);
LAB_001103b8:
      pcVar5 = "write value fail";
      goto LAB_0011032c;
    }
    iVar3 = putc(0,param_1);
    if (iVar3 == -1) {
      log2Console(6,"eup","Failed to write EOF to file.");
      goto LAB_001103b8;
    }
    if (iVar2 == -7) goto LAB_00110334;
    if (iVar2 == -1) goto LAB_001103b8;
    sVar4 = fwrite("NATIVE_RQD_REPORT",1,0x11,param_1);
    if ((int)sVar4 == 0x11) {
      iVar3 = putc(0,param_1);
      if (iVar3 != -1) {
        iVar2 = iVar2 + 0x17;
        goto LAB_0011035c;
      }
      log2Console(6,"eup","Failed to write EOF to file.");
    }
    else {
      log2Console(6,"eup","Failed to write string to file: %s","NATIVE_RQD_REPORT");
    }
    log2Console(6,"eup","write end fail");
  }
  iVar2 = -1;
LAB_0011035c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

