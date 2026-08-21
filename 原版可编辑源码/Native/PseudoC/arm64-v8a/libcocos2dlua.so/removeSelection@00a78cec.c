
/* fairygui::GList::removeSelection(int) */

void __thiscall fairygui::GList::removeSelection(GList *this,int param_1)

{
  long lVar1;
  GButton *this_00;
  long lVar2;
  
  if (*(int *)(this + 0x304) != 3) {
    if (this[0x338] == (GList)0x0) {
      lVar1 = GComponent::getChildAt((GComponent *)this,param_1);
      if (lVar1 == 0) {
        return;
      }
      this_00 = (GButton *)__dynamic_cast(lVar1,&GObject::typeinfo,&GButton::typeinfo,0);
    }
    else {
      lVar2 = *(long *)(this + 0x368);
      lVar1 = *(long *)(lVar2 + (long)param_1 * 0x18 + 8);
      this_00 = (GButton *)0x0;
      if (lVar1 != 0) {
        this_00 = (GButton *)__dynamic_cast(lVar1,&GObject::typeinfo,&GButton::typeinfo,0);
      }
      *(undefined1 *)(lVar2 + (long)param_1 * 0x18 + 0x14) = 0;
    }
    if (this_00 != (GButton *)0x0) {
      GButton::setSelected(this_00,false);
      return;
    }
  }
  return;
}

