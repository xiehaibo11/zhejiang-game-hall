
/* fairygui::PackageItem::~PackageItem() */

void __thiscall fairygui::PackageItem::~PackageItem(PackageItem *this)

{
  ~PackageItem(this);
                    /* try { // try from 00a90018 to 00b9002b has its CatchHandler @ 00a90070 */
  operator_delete(this);
  return;
}

