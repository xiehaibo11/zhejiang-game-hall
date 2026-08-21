
/* tinyxml2::XMLDocument::~XMLDocument() */

void __thiscall tinyxml2::XMLDocument::~XMLDocument(XMLDocument *this)

{
  ~XMLDocument(this);
  operator_delete(this);
  return;
}

