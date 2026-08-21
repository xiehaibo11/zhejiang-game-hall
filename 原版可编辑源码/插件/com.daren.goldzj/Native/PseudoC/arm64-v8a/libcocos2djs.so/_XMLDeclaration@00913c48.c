
/* tinyxml2::XMLDeclaration::~XMLDeclaration() */

void __thiscall tinyxml2::XMLDeclaration::~XMLDeclaration(XMLDeclaration *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}

