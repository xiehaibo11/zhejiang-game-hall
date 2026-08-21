
/* fairygui::PopupMenu::removeItem(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall fairygui::PopupMenu::removeItem(PopupMenu *this,basic_string *param_1)

{
  int iVar1;
  GObject *this_00;
  
                    /* try { // try from 00a90e88 to 00b90e9f has its CatchHandler @ 00a91014 */
  this_00 = (GObject *)GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  if (this_00 != (GObject *)0x0) {
    iVar1 = GComponent::getChildIndex(*(GComponent **)(this + 0x30),this_00);
                    /* try { // try from 00a90eac to 00b90ec7 has its CatchHandler @ 00a91010 */
    GList::removeChildToPoolAt(*(GList **)(this + 0x30),iVar1);
    UIEventDispatcher::removeEventListener
              ((UIEventDispatcher *)this_00,0x34,(EventTag *)&EventTag::None);
  }
  return this_00 != (GObject *)0x0;
}

