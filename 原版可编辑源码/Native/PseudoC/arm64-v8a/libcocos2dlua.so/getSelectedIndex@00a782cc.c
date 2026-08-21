
/* fairygui::GList::getSelectedIndex() const */

ulong __thiscall fairygui::GList::getSelectedIndex(GList *this)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (this[0x338] == (GList)0x0) {
    plVar1 = *(long **)(this + 0x1e0);
    lVar7 = *(long *)(this + 0x1e8);
    if (0 < (int)((ulong)(lVar7 - (long)plVar1) >> 3)) {
      uVar6 = 0;
      lVar5 = *plVar1;
      if (lVar5 != 0) goto LAB_00a783c0;
      do {
        do {
          uVar6 = uVar6 + 1;
          if (((ulong)(lVar7 - (long)plVar1) >> 3 & 0xffffffff) == uVar6) goto LAB_00a783e0;
          lVar5 = plVar1[uVar6];
        } while (lVar5 == 0);
LAB_00a783c0:
        lVar5 = __dynamic_cast(lVar5,&GObject::typeinfo,&GButton::typeinfo,0);
      } while ((lVar5 == 0) || (*(char *)(lVar5 + 0x33c) == '\0'));
      goto LAB_00a783e4;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x340);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      pcVar8 = (char *)(*(long *)(this + 0x368) + 0x14);
      lVar7 = *(long *)(*(long *)(this + 0x368) + 8);
      if (lVar7 != 0) goto LAB_00a78340;
      while (pcVar9 = pcVar8, *pcVar8 == '\0') {
        while( true ) {
          uVar6 = uVar6 + 1;
          pcVar8 = pcVar9 + 0x18;
          if (uVar2 == uVar6) goto LAB_00a783e0;
          lVar7 = *(long *)(pcVar9 + 0xc);
          if (lVar7 == 0) break;
LAB_00a78340:
          lVar5 = __dynamic_cast(lVar7,&GObject::typeinfo,&GButton::typeinfo,0);
          pcVar9 = pcVar8;
          if ((lVar5 != 0) && (*(char *)(lVar7 + 0x33c) != '\0')) goto LAB_00a78360;
        }
      }
LAB_00a78360:
      if (this[0x339] != (GList)0x0) {
        iVar3 = *(int *)(this + 0x33c);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (int)uVar6 / iVar3;
        }
        uVar6 = (ulong)(uint)((int)uVar6 - iVar4 * iVar3);
      }
      goto LAB_00a783e4;
    }
  }
LAB_00a783e0:
  uVar6 = 0xffffffff;
LAB_00a783e4:
  return uVar6 & 0xffffffff;
}

