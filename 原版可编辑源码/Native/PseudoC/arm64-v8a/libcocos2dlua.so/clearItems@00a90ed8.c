
/* fairygui::PopupMenu::clearItems() */

void __thiscall fairygui::PopupMenu::clearItems(PopupMenu *this)

{
  int iVar1;
  UIEventDispatcher *this_00;
  int iVar2;
  
                    /* try { // try from 00a90ee0 to 00b90ef7 has its CatchHandler @ 00a9101c */
  iVar1 = GComponent::numChildren(*(GComponent **)(this + 0x30));
  if (0 < iVar1) {
                    /* try { // try from 00a90efc to 00b90f1b has its CatchHandler @ 00a91018 */
    iVar2 = 0;
    do {
      this_00 = (UIEventDispatcher *)GComponent::getChildAt(*(GComponent **)(this + 0x30),iVar2);
                    /* try { // try from 00a90f20 to 00b90f3f has its CatchHandler @ 00a9100c */
      UIEventDispatcher::removeEventListener(this_00,0x34,(EventTag *)&EventTag::None);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  GList::removeChildrenToPool(*(GList **)(this + 0x30));
  return;
}

