
/* tinyxml2::XMLText::~XMLText() */

void __thiscall tinyxml2::XMLText::~XMLText(XMLText *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}

