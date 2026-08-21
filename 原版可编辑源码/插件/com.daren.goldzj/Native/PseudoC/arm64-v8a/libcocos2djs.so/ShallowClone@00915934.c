
/* tinyxml2::XMLElement::ShallowClone(tinyxml2::XMLDocument*) const */

XMLElement * __thiscall tinyxml2::XMLElement::ShallowClone(XMLElement *this,XMLDocument *param_1)

{
  char *pcVar1;
  XMLElement *this_00;
  size_t sVar2;
  void *pvVar3;
  char *__s;
  long lVar4;
  long lVar5;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  this_00 = (XMLElement *)MemPoolT<104>::Alloc((MemPoolT<104> *)(param_1 + 0x80));
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(MemPoolT<104> **)(this_00 + 0x50) = (MemPoolT<104> *)(param_1 + 0x80);
  *(undefined4 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined ***)this_00 = &PTR_ToElement_01c68ea8;
  *(XMLDocument **)(this_00 + 8) = param_1;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  sVar2 = strlen(pcVar1);
  pvVar3 = operator_new__(sVar2 + 1);
  *(void **)(this_00 + 0x20) = pvVar3;
  memcpy(pvVar3,pcVar1,sVar2 + 1);
  *(size_t *)(this_00 + 0x28) = (long)pvVar3 + sVar2;
  *(undefined4 *)(this_00 + 0x18) = 0x200;
  for (lVar5 = *(long *)(this + 0x60); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x38)) {
    pcVar1 = (char *)StrPair::GetStr((StrPair *)(lVar5 + 8));
    __s = (char *)StrPair::GetStr((StrPair *)(lVar5 + 0x20));
    lVar4 = FindOrCreateAttribute(this_00,pcVar1);
    if (((*(byte *)(lVar4 + 0x21) >> 1 & 1) != 0) &&
       (pvVar3 = *(void **)(lVar4 + 0x28), pvVar3 != (void *)0x0)) {
      operator_delete__(pvVar3);
    }
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    sVar2 = strlen(__s);
    pvVar3 = operator_new__(sVar2 + 1);
    *(void **)(lVar4 + 0x28) = pvVar3;
    memcpy(pvVar3,__s,sVar2 + 1);
    *(size_t *)(lVar4 + 0x30) = (long)pvVar3 + sVar2;
    *(undefined4 *)(lVar4 + 0x20) = 0x200;
  }
  return this_00;
}

