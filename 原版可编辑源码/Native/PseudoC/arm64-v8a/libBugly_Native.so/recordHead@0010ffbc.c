
undefined8 recordHead(FILE *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (param_1 == (FILE *)0x0) {
LAB_001100b0:
    log2Console(6,"eup","write head fail");
    return 0xffffffff;
  }
  sVar2 = fwrite("NATIVE_RQD_REPORT",1,0x11,param_1);
  if ((int)sVar2 != 0x11) {
    log2Console(6,"eup","Failed to write string to file: %s","NATIVE_RQD_REPORT");
    goto LAB_001100b0;
  }
  iVar1 = putc(0,param_1);
  if (iVar1 == -1) {
    log2Console(6,"eup","Failed to write EOF to file.");
    goto LAB_001100b0;
  }
  sVar2 = fwrite("rqd_rv",1,6,param_1);
  if ((int)sVar2 == 6) {
    iVar1 = putc(0,param_1);
    if (iVar1 != -1) {
      sVar2 = fwrite(&DAT_001271da,1,3,param_1);
      if ((int)sVar2 == 3) {
        iVar1 = putc(0,param_1);
        if (iVar1 != -1) {
          return 0x1a;
        }
        log2Console(6,"eup","Failed to write EOF to file.");
      }
      else {
        log2Console(6,"eup","Failed to write string to file: %s",&DAT_001271da);
      }
      pcVar3 = "write value fail";
      goto LAB_00110174;
    }
    log2Console(6,"eup","Failed to write EOF to file.");
  }
  else {
    log2Console(6,"eup","Failed to write string to file: %s","rqd_rv");
  }
  pcVar3 = "write key fail";
LAB_00110174:
  log2Console(6,"eup",pcVar3);
  log2Console(6,"eup","write fail %s %s","rqd_rv",&DAT_001271da);
  return 0xffffffff;
}

