
/* tinyxml2::XMLUnknown::~XMLUnknown() */

void __thiscall tinyxml2::XMLUnknown::~XMLUnknown(XMLUnknown *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}

