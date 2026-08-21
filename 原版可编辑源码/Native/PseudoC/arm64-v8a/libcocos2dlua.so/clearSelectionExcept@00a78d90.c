
/* fairygui::GList::clearSelectionExcept(fairygui::GObject*) */

void __thiscall fairygui::GList::clearSelectionExcept(GList *this,GObject *param_1)

{
  long lVar1;
  GButton *pGVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (this[0x338] == (GList)0x0) {
    uVar3 = *(long *)(this + 0x1e8) - (long)*(long **)(this + 0x1e0);
    if (0 < (int)(uVar3 >> 3)) {
      lVar4 = 0;
      lVar5 = **(long **)(this + 0x1e0);
      while( true ) {
        if (((lVar5 != 0) &&
            (pGVar2 = (GButton *)__dynamic_cast(lVar5,&GObject::typeinfo,&GButton::typeinfo,0),
            pGVar2 != (GButton *)0x0)) && (pGVar2 != (GButton *)param_1)) {
          GButton::setSelected(pGVar2,false);
        }
        if ((uVar3 >> 3 & 0xffffffff) - 1 == lVar4) break;
        lVar4 = lVar4 + 1;
        lVar5 = *(long *)(*(long *)(this + 0x1e0) + lVar4 * 8);
      }
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(this + 0x340);
    if (0 < (int)*(uint *)(this + 0x340)) {
      lVar4 = 0;
      do {
        lVar5 = *(long *)(this + 0x368);
        pGVar2 = *(GButton **)(lVar5 + lVar4 + 8);
        if (pGVar2 != (GButton *)param_1) {
          if ((pGVar2 != (GButton *)0x0) &&
             (lVar1 = __dynamic_cast(pGVar2,&GObject::typeinfo,&GButton::typeinfo,0), lVar1 != 0)) {
            GButton::setSelected(pGVar2,false);
          }
          *(undefined1 *)(lVar5 + lVar4 + 0x14) = 0;
        }
        uVar3 = uVar3 - 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar3 != 0);
    }
  }
  return;
}

