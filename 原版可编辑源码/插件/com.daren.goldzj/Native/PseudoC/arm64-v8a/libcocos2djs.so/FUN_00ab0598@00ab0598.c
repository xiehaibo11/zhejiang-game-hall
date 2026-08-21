
undefined8 FUN_00ab0598(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((((*param_1 == 'h') && (param_1[1] == 't')) && (param_1[2] == 't')) && (param_1[3] == 'p')) {
    pcVar2 = param_1 + 4;
                    /* try { // try from 00ab05d0 to 00bb05db has its CatchHandler @ 00ab0830 */
    if (*pcVar2 == 's') {
      pcVar2 = param_1 + 5;
    }
    param_1 = pcVar2;
                    /* try { // try from 00ab05e8 to 00bb05f3 has its CatchHandler @ 00ab0854 */
    if ((*pcVar2 == ':') && (param_1 = pcVar2 + 1, *param_1 == '/')) {
      param_1 = pcVar2 + 2;
    }
  }
  pcVar2 = param_1 + 2;
  do {
    while (*param_1 == '/') {
      if (param_1[1] != '/') goto LAB_00ab05f8;
      *param_1 = '/';
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3[-1] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    if (*param_1 == '\0') {
      return 0;
    }
LAB_00ab05f8:
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  } while( true );
}

