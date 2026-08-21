
/* tinyxml2::XMLDeclaration::ShallowClone(tinyxml2::XMLDocument*) const */

undefined8 * __thiscall
tinyxml2::XMLDeclaration::ShallowClone(XMLDeclaration *this,XMLDocument *param_1)

{
  char *__s;
  char *pcVar1;
  undefined8 *puVar2;
  size_t sVar3;
  void *__dest;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  puVar2 = (undefined8 *)MemPoolT<88>::Alloc((MemPoolT<88> *)(param_1 + 0x200));
  puVar2[2] = 0;
  puVar2[10] = (MemPoolT<88> *)(param_1 + 0x200);
  __s = "xml version=\"1.0\" encoding=\"UTF-8\"";
  if (pcVar1 != (char *)0x0) {
    __s = pcVar1;
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  *puVar2 = &PTR_ToElement_01c68d68;
  puVar2[1] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  sVar3 = strlen(__s);
  __dest = operator_new__(sVar3 + 1);
  puVar2[4] = __dest;
  memcpy(__dest,__s,sVar3 + 1);
  puVar2[5] = (long)__dest + sVar3;
  *(undefined4 *)(puVar2 + 3) = 0x200;
  return puVar2;
}

