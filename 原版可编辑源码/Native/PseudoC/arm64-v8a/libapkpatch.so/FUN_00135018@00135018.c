
undefined8 FUN_00135018(char *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  FILE *pFVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    __android_log_print(6,"apk_diff_native",
                        "ERROR by _import_fileOpenRead  because of the out_fileHandle is 0.\n");
    uVar1 = 0;
  }
  else if (((param_3 == 0) || (uVar1 = FUN_0013508c(param_1,param_3), (int)uVar1 != 0)) &&
          (pFVar2 = fopen(param_1,"rb"), uVar1 = 0, pFVar2 != (FILE *)0x0)) {
    *param_2 = pFVar2;
    uVar1 = 1;
  }
  return uVar1;
}

