
/* fairygui::RelationItem::RelationItem(fairygui::GObject*) */

void __thiscall fairygui::RelationItem::RelationItem(RelationItem *this,GObject *param_1)

{
  WeakPtr::WeakPtr((WeakPtr *)(this + 8),(GObject *)0x0);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  cocos2d::Vec4::Vec4((Vec4 *)(this + 0x28));
  *(GObject **)this = param_1;
  return;
}

