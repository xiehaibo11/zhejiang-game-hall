
void FUN_0013fb24(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  void *__s;
  undefined8 uVar3;
  
  if (DAT_0016ba98 != '\0') {
    __android_log_print(6,"apk_diff_native","needLog : func_name: %s,error_type: %s,",param_2,
                        param_3);
    sVar1 = strlen(param_2);
    sVar2 = strlen(param_3);
    sVar1 = sVar1 + sVar2 + 4;
    __s = malloc(sVar1);
    memset(__s,0,sVar1);
    uVar3 = FUN_0013fbf4(__s,0xffffffffffffffff,sVar1);
    FUN_0013fc98(uVar3,__s);
    free(__s);
    return;
  }
  __android_log_print(5,"apk_diff_native","needLog : the diff log switch is off.\n");
  return;
}

