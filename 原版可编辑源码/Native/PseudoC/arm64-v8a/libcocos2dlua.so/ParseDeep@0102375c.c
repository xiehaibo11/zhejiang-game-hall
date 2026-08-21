
/* tinyxml2::XMLUnknown::ParseDeep(char*, tinyxml2::StrPair*) */

StrPair * tinyxml2::XMLUnknown::ParseDeep(char *param_1,StrPair *param_2)

{
  StrPair SVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  StrPair *__s1;
  
  __n = __strlen_chk(">",2);
  SVar1 = *param_2;
  __s1 = param_2;
  do {
    if (SVar1 == (StrPair)0x0) {
LAB_010237f4:
      lVar3 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar3 + 0x5c) = 0xe;
      *(StrPair **)(lVar3 + 0x68) = param_2;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      return (StrPair *)0x0;
    }
    if ((SVar1 == (StrPair)0x3e) && (iVar2 = strncmp((char *)__s1,">",__n), iVar2 == 0)) {
      if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete__(*(void **)(param_1 + 0x20));
      }
      *(StrPair **)(param_1 + 0x20) = param_2;
      *(StrPair **)(param_1 + 0x28) = __s1;
      param_1[0x18] = '\x02';
      param_1[0x19] = '\x01';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (__s1 + __n != (StrPair *)0x0) {
        return __s1 + __n;
      }
      goto LAB_010237f4;
    }
    __s1 = __s1 + 1;
    SVar1 = *__s1;
  } while( true );
}

