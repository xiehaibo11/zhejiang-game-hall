
/* fairygui::GList::getFirstChildInView() */

ulong __thiscall fairygui::GList::getFirstChildInView(GList *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = GComponent::getFirstChildInView((GComponent *)this);
  if (this[0x338] != (GList)0x0) {
    uVar4 = *(uint *)(this + 0x344);
    if (*(int *)(this + 0x2e4) == 4) {
      if ((int)uVar4 < *(int *)(this + 0x340)) {
        lVar5 = (long)*(int *)(this + 0x340) - (long)(int)uVar4;
        plVar6 = (long *)(*(long *)(this + 0x368) + (long)(int)uVar4 * 0x18 + 8);
        if (*plVar6 != 0) goto LAB_00a79be8;
        do {
          do {
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + -1;
            plVar6 = plVar6 + 3;
            if (lVar5 == 0) {
              return uVar3;
            }
          } while (*plVar6 == 0);
LAB_00a79be8:
          iVar2 = (int)uVar3;
          uVar3 = (ulong)(iVar2 - 1);
        } while (0 < iVar2);
        uVar3 = (ulong)uVar4;
      }
    }
    else {
      uVar4 = uVar4 + (int)uVar3;
      uVar3 = (ulong)uVar4;
      if ((this[0x339] != (GList)0x0) && (iVar2 = *(int *)(this + 0x33c), 0 < iVar2)) {
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (int)uVar4 / iVar2;
        }
        uVar3 = (ulong)(uVar4 - iVar1 * iVar2);
      }
    }
  }
  return uVar3;
}

