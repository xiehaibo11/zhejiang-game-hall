
/* v8::internal::AstRawString::Compare(void*, void*) */

bool v8::internal::AstRawString::Compare(void *param_1,void *param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ushort *__s1;
  ushort *__s2;
  size_t __n;
  
  iVar2 = *(int *)((long)param_1 + 0x10);
  iVar3 = *(int *)((long)param_2 + 0x10);
  cVar4 = *(char *)((long)param_2 + 0x1c);
  iVar5 = iVar2;
  if (iVar2 < 0) {
    iVar5 = iVar2 + 1;
  }
  iVar5 = iVar5 >> 1;
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    iVar5 = iVar2;
  }
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 1;
  }
  iVar2 = iVar2 >> 1;
  if (cVar4 != '\0') {
    iVar2 = iVar3;
  }
  if (iVar5 != iVar2) {
    return false;
  }
  if (iVar5 == 0) {
    return true;
  }
  __s1 = *(ushort **)((long)param_1 + 8);
  __s2 = *(ushort **)((long)param_2 + 8);
  __n = (size_t)iVar5;
  if (*(char *)((long)param_1 + 0x1c) == '\0') {
    puVar1 = __s1 + __n;
    if (cVar4 == '\0') {
      if (0 < iVar5) {
        do {
          iVar5 = (uint)*__s1 - (uint)*__s2;
          if (iVar5 != 0) goto LAB_0149348c;
          __s1 = __s1 + 1;
          __s2 = __s2 + 1;
        } while (__s1 < puVar1);
      }
    }
    else if (0 < iVar5) {
      do {
        iVar5 = (uint)*__s1 - (uint)(byte)*__s2;
        if (iVar5 != 0) goto LAB_0149348c;
        __s1 = __s1 + 1;
        __s2 = (ushort *)((long)__s2 + 1);
      } while (__s1 < puVar1);
    }
  }
  else {
    if (cVar4 != '\0') {
      iVar5 = memcmp(__s1,__s2,__n);
      goto LAB_0149348c;
    }
    if (0 < iVar5) {
      puVar1 = (ushort *)((long)__s1 + __n);
      do {
        iVar5 = (uint)(byte)*__s1 - (uint)*__s2;
        if (iVar5 != 0) goto LAB_0149348c;
        __s1 = (ushort *)((long)__s1 + 1);
        __s2 = __s2 + 1;
      } while (__s1 < puVar1);
    }
  }
  iVar5 = 0;
LAB_0149348c:
  return iVar5 == 0;
}

