
/* tinyxml2::XMLComment::~XMLComment() */

void __thiscall tinyxml2::XMLComment::~XMLComment(XMLComment *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}

