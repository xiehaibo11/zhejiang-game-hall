
/* spine::Json::getString(spine::Json*, char const*, char const*) */

char * spine::Json::getString(Json *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *__s1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  do {
    if (plVar2 == (long *)0x0) {
      return param_3;
    }
    __s1 = (char *)plVar2[5];
    if ((param_2 == (char *)0x0) || (__s1 == (char *)0x0)) {
      if ((param_2 <= __s1) && (__s1 == param_2)) goto LAB_00d588b4;
    }
    else {
      iVar1 = strcasecmp(__s1,param_2);
      if (iVar1 == 0) {
LAB_00d588b4:
        return (char *)plVar2[3];
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

