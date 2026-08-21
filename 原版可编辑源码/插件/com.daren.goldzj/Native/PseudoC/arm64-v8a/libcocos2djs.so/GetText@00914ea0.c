
/* tinyxml2::XMLElement::GetText() const */

undefined8 __thiscall tinyxml2::XMLElement::GetText(XMLElement *this)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long **)(this + 0x30) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))(), lVar1 != 0)) {
    lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))();
    uVar2 = StrPair::GetStr((StrPair *)(lVar1 + 0x18));
    return uVar2;
  }
  return 0;
}

