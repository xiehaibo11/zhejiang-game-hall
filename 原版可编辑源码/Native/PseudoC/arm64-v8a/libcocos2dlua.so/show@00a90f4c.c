
/* fairygui::PopupMenu::show(fairygui::GObject*, fairygui::PopupDirection) */

void __thiscall fairygui::PopupMenu::show(PopupMenu *this,GObject *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 00a90f4c to 00b90f6b has its CatchHandler @ 00a91008 */
  if (param_1 == (GObject *)0x0) {
    param_1 = (GObject *)0x0;
    uVar1 = GRoot::_inst;
  }
  else {
                    /* try { // try from 00a90f6c to 00b91037 has its CatchHandler @ 00a90e0c */
    uVar1 = GObject::getRoot(param_1);
    lVar2 = __dynamic_cast(param_1,&GObject::typeinfo,&GRoot::typeinfo,0);
    if (lVar2 != 0) {
      param_1 = (GObject *)0x0;
    }
  }
  GRoot::showPopup(uVar1,*(undefined8 *)(this + 0x28),param_1,param_3);
  return;
}

