
/* spine::SkeletonData::findAnimation(spine::String const&) */

Animation * __thiscall spine::SkeletonData::findAnimation(SkeletonData *this,String *param_1)

{
  int iVar1;
  long lVar2;
  char *__s1;
  char *__s2;
  Animation *this_00;
  ulong uVar3;
  
  if (*(long *)(this + 0xb0) != 0) {
    uVar3 = 0;
    do {
      this_00 = *(Animation **)(*(long *)(this + 0xc0) + uVar3 * 8);
      lVar2 = Animation::getName(this_00);
      __s1 = *(char **)(lVar2 + 0x10);
      __s2 = *(char **)(param_1 + 0x10);
      if (__s1 == __s2) {
        return this_00;
      }
      if ((((*(long *)(lVar2 + 8) == *(long *)(param_1 + 8)) && (__s1 != (char *)0x0)) &&
          (__s2 != (char *)0x0)) && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)) {
        return this_00;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(this + 0xb0));
  }
  return (Animation *)0x0;
}

