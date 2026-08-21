
/* spine::Json::getBoolean(spine::Json*, char const*, bool) */

bool spine::Json::getBoolean(Json *param_1,char *param_2,bool param_3)

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
      if ((param_2 <= __s1) && (__s1 == param_2)) goto LAB_00d58a04;
    }
    else {
      iVar1 = strcasecmp(__s1,param_2);
      if (iVar1 == 0) {
LAB_00d58a04:
        if ((char *)plVar2[3] != (char *)0x0) {
          iVar1 = strcmp((char *)plVar2[3],"true");
          return iVar1 == 0;
        }
        switch(*(undefined4 *)(plVar2 + 2)) {
        case 0:
        case 2:
          return false;
        default:
          return true;
        case 3:
          return *(float *)((long)plVar2 + 0x24) != 0.0;
        }
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

