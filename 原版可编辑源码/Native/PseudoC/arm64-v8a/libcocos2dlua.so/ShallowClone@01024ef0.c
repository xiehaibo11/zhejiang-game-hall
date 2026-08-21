
/* tinyxml2::XMLElement::ShallowClone(tinyxml2::XMLDocument*) const */

XMLElement * __thiscall tinyxml2::XMLElement::ShallowClone(XMLElement *this,XMLDocument *param_1)

{
  char *pcVar1;
  XMLElement *this_00;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 01024fc0 with catch @ 01024f08 */
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  this_00 = (XMLElement *)XMLDocument::NewElement(param_1,pcVar1);
  for (lVar4 = *(long *)(this + 0x60); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x38)) {
    pcVar1 = (char *)StrPair::GetStr((StrPair *)(lVar4 + 8));
    pcVar2 = (char *)StrPair::GetStr((StrPair *)(lVar4 + 0x20));
    lVar3 = FindOrCreateAttribute(this_00,pcVar1);
    StrPair::SetStr((StrPair *)(lVar3 + 0x20),pcVar2,0);
  }
  return this_00;
}

