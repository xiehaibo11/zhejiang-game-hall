
/* tinyxml2::StrPair::ParseText(char*, char const*, int) */

char * __thiscall
tinyxml2::StrPair::ParseText(StrPair *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  size_t __n;
  char *__s1;
  
  cVar1 = *param_2;
  __n = strlen(param_2);
  cVar2 = *param_1;
  __s1 = param_1;
  while( true ) {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    if ((cVar1 == cVar2) && (iVar3 = strncmp(__s1,param_2,__n), iVar3 == 0)) break;
    __s1 = __s1 + 1;
    cVar2 = *__s1;
  }
  if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  *(char **)(this + 8) = param_1;
  *(char **)(this + 0x10) = __s1;
  *(uint *)this = param_3 | 0x100;
  return __s1 + __n;
}

