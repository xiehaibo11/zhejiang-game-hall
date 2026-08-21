
/* fairygui::HtmlObject::~HtmlObject() */

void __thiscall fairygui::HtmlObject::~HtmlObject(HtmlObject *this)

{
  ~HtmlObject(this);
  operator_delete(this);
  return;
}

