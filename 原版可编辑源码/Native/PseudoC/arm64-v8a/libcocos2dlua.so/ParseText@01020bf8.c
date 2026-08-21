
/* tinyxml2::StrPair::ParseText(char*, char const*, int) */

char * __thiscall
tinyxml2::StrPair::ParseText(StrPair *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  size_t __n;
  char *pcVar3;
  
  cVar1 = *param_2;
  __n = strlen(param_2);
  if (*param_1 == '\0') {
LAB_01020c90:
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    if (cVar1 == *param_1) goto LAB_01020c54;
    do {
      do {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == '\0') goto LAB_01020c90;
      } while (cVar1 != *pcVar3);
LAB_01020c54:
      iVar2 = strncmp(pcVar3,param_2,__n);
    } while (iVar2 != 0);
    if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 8));
    }
                    /* try { // try from 01020c80 to 01120c87 has its CatchHandler @ 01020d4c */
    *(char **)(this + 8) = param_1;
    *(char **)(this + 0x10) = pcVar3;
    *(uint *)this = param_3 | 0x100;
    pcVar3 = pcVar3 + __n;
  }
  return pcVar3;
}

