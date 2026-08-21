
undefined8 FUN_001352bc(long param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_00135018(param_2,(long *)(param_1 + 0x20),param_1 + 8);
    if (iVar1 != 0) {
      *(long *)param_1 = param_1;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x10) = FUN_00135348;
      return 1;
    }
    pcVar2 = "ERROR  by _import_fileOpenRead and will stop.";
  }
  else {
    pcVar2 = "ERROR by hpatch_TFileStreamInput_open,and the self->m_file is  0 ";
  }
  __android_log_print(6,"apk_diff_native",pcVar2);
  return 0;
}

