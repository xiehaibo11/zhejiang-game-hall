
/* tinyxml2::XMLDocument::NewDeclaration(char const*) */

undefined8 * __thiscall tinyxml2::XMLDocument::NewDeclaration(XMLDocument *this,char *param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  void *__dest;
  
  puVar1 = (undefined8 *)MemPoolT<88>::Alloc((MemPoolT<88> *)(this + 0x200));
  puVar1[2] = 0;
  puVar1[10] = (MemPoolT<88> *)(this + 0x200);
  __s = "xml version=\"1.0\" encoding=\"UTF-8\"";
  if (param_1 != (char *)0x0) {
    __s = param_1;
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_ToElement_01c68d68;
  puVar1[1] = this;
  puVar1[4] = 0;
  puVar1[5] = 0;
  sVar2 = strlen(__s);
  __dest = operator_new__(sVar2 + 1);
  puVar1[4] = __dest;
  memcpy(__dest,__s,sVar2 + 1);
  puVar1[5] = (long)__dest + sVar2;
  *(undefined4 *)(puVar1 + 3) = 0x200;
  return puVar1;
}

