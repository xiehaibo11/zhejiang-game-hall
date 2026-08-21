
/* spine::Atlas::findRegion(spine::String const&) */

long __thiscall spine::Atlas::findRegion(Atlas *this,String *param_1)

{
  long lVar1;
  char *__s2;
  int iVar2;
  char *__s1;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(this + 0x30);
  if (uVar4 != 0) {
    lVar5 = *(long *)(this + 0x40);
    lVar1 = *(long *)(param_1 + 8);
    __s2 = *(char **)(param_1 + 0x10);
    uVar6 = 0;
    do {
      lVar3 = *(long *)(lVar5 + uVar6 * 8);
      __s1 = *(char **)(lVar3 + 0x20);
      if (__s1 == __s2) {
        return lVar3;
      }
      if ((((*(long *)(lVar3 + 0x18) == lVar1) && (__s1 != (char *)0x0)) && (__s2 != (char *)0x0))
         && (iVar2 = strcmp(__s1,__s2), iVar2 == 0)) {
        return lVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return 0;
}

