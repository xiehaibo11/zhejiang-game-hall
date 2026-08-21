
undefined8 FUN_01052d1c(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((((*param_1 == 'h') && (param_1[1] == 't')) && (param_1[2] == 't')) && (param_1[3] == 'p')) {
    pcVar2 = param_1 + 4;
    if (*pcVar2 == 's') {
      pcVar2 = param_1 + 5;
    }
    param_1 = pcVar2;
    if ((*pcVar2 == ':') && (param_1 = pcVar2 + 1, *param_1 == '/')) {
      param_1 = pcVar2 + 2;
    }
  }
  pcVar2 = param_1 + 2;
  do {
    while (*param_1 == '/') {
                    /* try { // try from 01052db8 to 01152dbf has its CatchHandler @ 01053500 */
      if (param_1[1] != '/') goto LAB_01052d7c;
                    /* try { // try from 01052d8c to 01152d93 has its CatchHandler @ 01053504 */
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
LAB_01052d7c:
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  } while( true );
}

