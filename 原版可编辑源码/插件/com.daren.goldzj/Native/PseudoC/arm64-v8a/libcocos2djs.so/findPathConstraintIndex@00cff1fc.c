
/* spine::SkeletonData::findPathConstraintIndex(spine::String const&) */

ulong __thiscall spine::SkeletonData::findPathConstraintIndex(SkeletonData *this,String *param_1)

{
  int iVar1;
  long lVar2;
  char *__s1;
  char *__s2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x110);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      lVar2 = ConstraintData::getName(*(ConstraintData **)(*(long *)(this + 0x120) + uVar3 * 8));
      __s1 = *(char **)(lVar2 + 0x10);
      __s2 = *(char **)(param_1 + 0x10);
      if ((__s1 == __s2) ||
         ((((*(long *)(lVar2 + 8) == *(long *)(param_1 + 8) && (__s1 != (char *)0x0)) &&
           (__s2 != (char *)0x0)) && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)))) goto LAB_00cff270;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  uVar3 = 0xffffffff;
LAB_00cff270:
  return uVar3 & 0xffffffff;
}

