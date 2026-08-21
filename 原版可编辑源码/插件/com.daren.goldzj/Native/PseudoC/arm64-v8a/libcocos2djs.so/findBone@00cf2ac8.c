
/* spine::Skeleton::findBone(spine::String const&) */

Bone * __thiscall spine::Skeleton::findBone(Skeleton *this,String *param_1)

{
  int iVar1;
  BoneData *this_00;
  long lVar2;
  char *__s1;
  char *__s2;
  Bone *this_01;
  ulong uVar3;
  
  if (*(long *)(this + 0x18) != 0) {
    uVar3 = 0;
    do {
      this_01 = *(Bone **)(*(long *)(this + 0x28) + uVar3 * 8);
      this_00 = (BoneData *)Bone::getData(this_01);
      lVar2 = BoneData::getName(this_00);
      __s1 = *(char **)(lVar2 + 0x10);
      __s2 = *(char **)(param_1 + 0x10);
      if (__s1 == __s2) {
        return this_01;
      }
      if ((((*(long *)(lVar2 + 8) == *(long *)(param_1 + 8)) && (__s1 != (char *)0x0)) &&
          (__s2 != (char *)0x0)) && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)) {
        return this_01;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(this + 0x18));
  }
  return (Bone *)0x0;
}

