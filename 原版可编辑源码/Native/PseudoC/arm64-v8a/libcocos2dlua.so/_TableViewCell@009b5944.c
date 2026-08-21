
/* cocos2d::extension::TableViewCell::~TableViewCell() */

void __thiscall cocos2d::extension::TableViewCell::~TableViewCell(TableViewCell *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

