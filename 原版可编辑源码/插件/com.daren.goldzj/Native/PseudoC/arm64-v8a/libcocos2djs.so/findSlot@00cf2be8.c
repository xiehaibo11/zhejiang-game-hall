
/* spine::Skeleton::findSlot(spine::String const&) */

Slot * __thiscall spine::Skeleton::findSlot(Skeleton *this,String *param_1)

{
  int iVar1;
  SlotData *this_00;
  long lVar2;
  char *__s1;
  char *__s2;
  Slot *this_01;
  ulong uVar3;
  
  if (*(long *)(this + 0x38) != 0) {
    uVar3 = 0;
    do {
      this_01 = *(Slot **)(*(long *)(this + 0x48) + uVar3 * 8);
      this_00 = (SlotData *)Slot::getData(this_01);
      lVar2 = SlotData::getName(this_00);
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
    } while (uVar3 < *(ulong *)(this + 0x38));
  }
  return (Slot *)0x0;
}

