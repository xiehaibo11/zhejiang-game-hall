
/* tinyxml2::XMLDeclaration::ShallowClone(tinyxml2::XMLDocument*) const */

void __thiscall tinyxml2::XMLDeclaration::ShallowClone(XMLDeclaration *this,XMLDocument *param_1)

{
  char *pcVar1;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  XMLDocument::NewDeclaration(param_1,pcVar1);
  return;
}

