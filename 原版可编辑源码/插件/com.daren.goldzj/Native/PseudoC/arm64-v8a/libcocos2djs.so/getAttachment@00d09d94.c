
/* spine::Skin::getAttachment(unsigned long, spine::String const&) */

undefined8 __thiscall spine::Skin::getAttachment(Skin *this,ulong param_1,String *param_2)

{
  long lVar1;
  char *__s2;
  int iVar2;
  char *__s1;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_1 < *(ulong *)(this + 0x30)) {
    lVar4 = *(long *)(this + 0x40) + param_1 * 0x20;
    uVar5 = *(ulong *)(lVar4 + 8);
    if (uVar5 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      lVar1 = *(long *)(param_2 + 8);
      __s2 = *(char **)(param_2 + 0x10);
      lVar4 = 0;
      uVar6 = 0;
      puVar7 = (undefined8 *)(lVar3 + 0x18);
      do {
        __s1 = (char *)*puVar7;
        if ((__s1 == __s2) ||
           ((((__s2 != (char *)0x0 && (__s1 != (char *)0x0)) && (puVar7[-1] == lVar1)) &&
            (iVar2 = strcmp(__s1,__s2), iVar2 == 0)))) {
          if ((int)uVar6 < 0) {
            return 0;
          }
          return *(undefined8 *)(lVar3 + (lVar4 >> 0x20) * 0x28 + 0x20);
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x100000000;
        puVar7 = puVar7 + 5;
      } while (uVar6 < uVar5);
    }
  }
  return 0;
}

