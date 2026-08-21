
/* fairygui::HtmlElement::~HtmlElement() */

void __thiscall fairygui::HtmlElement::~HtmlElement(HtmlElement *this)

{
  ~HtmlElement(this);
  operator_delete(this);
  return;
}

