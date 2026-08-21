
/* fairygui::GList::clearSelection() */

void __thiscall fairygui::GList::clearSelection(GList *this)

{
  long lVar1;
  long lVar2;
  GButton *pGVar3;
  ulong uVar4;
  long lVar5;
  
  if (this[0x338] == (GList)0x0) {
    uVar4 = *(long *)(this + 0x1e8) - (long)*(long **)(this + 0x1e0);
    if (0 < (int)(uVar4 >> 3)) {
      lVar5 = 0;
      lVar2 = **(long **)(this + 0x1e0);
      while( true ) {
        if ((lVar2 != 0) &&
           (pGVar3 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0),
           pGVar3 != (GButton *)0x0)) {
          GButton::setSelected(pGVar3,false);
        }
        if ((uVar4 >> 3 & 0xffffffff) - 1 == lVar5) break;
        lVar5 = lVar5 + 1;
        lVar2 = *(long *)(*(long *)(this + 0x1e0) + lVar5 * 8);
      }
    }
  }
  else {
    uVar4 = (ulong)*(uint *)(this + 0x340);
    if (0 < (int)*(uint *)(this + 0x340)) {
      lVar5 = 0;
      do {
        lVar2 = *(long *)(this + 0x368) + lVar5;
        pGVar3 = *(GButton **)(lVar2 + 8);
        if ((pGVar3 != (GButton *)0x0) &&
           (lVar1 = __dynamic_cast(pGVar3,&GObject::typeinfo,&GButton::typeinfo,0), lVar1 != 0)) {
          GButton::setSelected(pGVar3,false);
        }
        uVar4 = uVar4 - 1;
        lVar5 = lVar5 + 0x18;
        *(undefined1 *)(lVar2 + 0x14) = 0;
      } while (uVar4 != 0);
    }
  }
  if (*(GController **)(this + 800) != (GController *)0x0) {
    GController::setSelectedIndex(*(GController **)(this + 800),-1,true);
    return;
  }
  return;
}

