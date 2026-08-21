
/* tinyxml2::XMLText::ShallowClone(tinyxml2::XMLDocument*) const */

void __thiscall tinyxml2::XMLText::ShallowClone(XMLText *this,XMLDocument *param_1)

{
  char *pcVar1;
  long lVar2;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  lVar2 = XMLDocument::NewText(param_1,pcVar1);
  *(XMLText *)(lVar2 + 0x58) = this[0x58];
  return;
}

