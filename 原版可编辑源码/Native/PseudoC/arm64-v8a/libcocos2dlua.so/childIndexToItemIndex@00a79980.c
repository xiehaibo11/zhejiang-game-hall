
/* fairygui::GList::childIndexToItemIndex(int) */

ulong __thiscall fairygui::GList::childIndexToItemIndex(GList *this,int param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = (ulong)(uint)param_1;
  if (this[0x338] != (GList)0x0) {
    iVar3 = *(int *)(this + 0x344);
    uVar6 = (ulong)iVar3;
    if (*(int *)(this + 0x2e4) == 4) {
      if (iVar3 < *(int *)(this + 0x340)) {
        plVar1 = (long *)(*(long *)(this + 0x368) + uVar6 * 0x18 + 8);
        lVar7 = *plVar1;
        while( true ) {
          if ((lVar7 != 0) && (uVar5 = (ulong)(param_1 - 1), param_1 < 1)) {
            return uVar6 & 0xffffffff;
          }
          param_1 = (int)uVar5;
          uVar6 = uVar6 + 1;
          plVar1 = plVar1 + 3;
          if ((long)*(int *)(this + 0x340) <= (long)uVar6) break;
          lVar7 = *plVar1;
        }
      }
    }
    else {
      uVar2 = iVar3 + param_1;
      uVar5 = (ulong)uVar2;
      if ((this[0x339] != (GList)0x0) && (iVar3 = *(int *)(this + 0x33c), 0 < iVar3)) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (int)uVar2 / iVar3;
        }
        uVar5 = (ulong)(uVar2 - iVar4 * iVar3);
      }
    }
  }
  return uVar5;
}

