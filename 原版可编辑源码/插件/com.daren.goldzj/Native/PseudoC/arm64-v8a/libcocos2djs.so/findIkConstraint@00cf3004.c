
/* spine::Skeleton::findIkConstraint(spine::String const&) */

long __thiscall spine::Skeleton::findIkConstraint(Skeleton *this,String *param_1)

{
  int iVar1;
  long lVar2;
  char *__s1;
  char *__s2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(this + 0x78);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(this + 0x88) + uVar5 * 8);
      lVar2 = ConstraintData::getName(*(ConstraintData **)(lVar3 + 8));
      __s1 = *(char **)(lVar2 + 0x10);
      __s2 = *(char **)(param_1 + 0x10);
      if (__s1 == __s2) {
        return lVar3;
      }
      if (((*(long *)(lVar2 + 8) == *(long *)(param_1 + 8) && __s1 != (char *)0x0) &&
           __s2 != (char *)0x0) && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)) {
        return lVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return 0;
}

