
/* spine::Skin::AttachmentMap::findInBucket(spine::Vector<spine::Skin::AttachmentMap::Entry>&,
   spine::String const&) */

ulong __thiscall
spine::Skin::AttachmentMap::findInBucket(AttachmentMap *this,Vector *param_1,String *param_2)

{
  long lVar1;
  char *__s2;
  int iVar2;
  char *__s1;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    __s2 = *(char **)(param_2 + 0x10);
    uVar3 = 0;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
    do {
      __s1 = (char *)*puVar5;
      if ((__s1 == __s2) ||
         ((((puVar5[-1] == lVar1 && (__s1 != (char *)0x0)) && (__s2 != (char *)0x0)) &&
          (iVar2 = strcmp(__s1,__s2), iVar2 == 0)))) goto LAB_00d0909c;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar3 < uVar4);
  }
  uVar3 = 0xffffffff;
LAB_00d0909c:
  return uVar3 & 0xffffffff;
}

