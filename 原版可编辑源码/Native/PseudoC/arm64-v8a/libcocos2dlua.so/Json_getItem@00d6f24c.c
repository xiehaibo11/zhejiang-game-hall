
long Json_getItem(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  long *plVar2;
  
                    /* try { // try from 00d6f24c to 00e6f263 has its CatchHandler @ 00d70f2c */
  plVar2 = *(long **)(param_1 + 8);
  do {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    __s1 = (char *)plVar2[5];
    if ((param_2 == (char *)0x0) || (__s1 == (char *)0x0)) {
      if ((param_2 <= __s1) && (__s1 == param_2)) {
        return (long)plVar2;
      }
    }
    else {
      iVar1 = strcasecmp(__s1,param_2);
      if (iVar1 == 0) {
        return (long)plVar2;
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

