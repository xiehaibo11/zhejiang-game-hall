
char * png_error(long param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x118) != (code *)0x0)) {
    (**(code **)(param_1 + 0x118))(param_1,param_2);
  }
  if (param_2 == (char *)0x0) {
    param_2 = "undefined";
  }
  fprintf((FILE *)__cxa_thread_atexit_impl,"libpng error: %s");
  fputc(10,(FILE *)__cxa_thread_atexit_impl);
  auVar4 = png_longjmp(param_1,1);
  lVar2 = auVar4._0_8_;
  if ((lVar2 != 0) && (param_2 < auVar4._8_8_)) {
    if ((param_4 != (char *)0x0) && (pcVar3 = auVar4._8_8_ + -1, param_2 < pcVar3)) {
      cVar1 = *param_4;
      do {
        if (cVar1 == '\0') break;
        param_4 = param_4 + 1;
        param_2[lVar2] = cVar1;
        cVar1 = *param_4;
        param_2 = param_2 + 1;
      } while (param_2 < pcVar3);
    }
    param_2[lVar2] = '\0';
  }
  return param_2;
}

