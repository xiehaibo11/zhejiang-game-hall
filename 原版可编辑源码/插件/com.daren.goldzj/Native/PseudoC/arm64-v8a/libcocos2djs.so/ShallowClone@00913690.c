
/* tinyxml2::XMLText::ShallowClone(tinyxml2::XMLDocument*) const */

undefined8 * __thiscall tinyxml2::XMLText::ShallowClone(XMLText *this,XMLDocument *param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  void *__dest;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  puVar1 = (undefined8 *)MemPoolT<96>::Alloc((MemPoolT<96> *)(param_1 + 0x180));
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[10] = (MemPoolT<96> *)(param_1 + 0x180);
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_ToElement_01c69048;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  sVar2 = strlen(__s);
  __dest = operator_new__(sVar2 + 1);
  puVar1[4] = __dest;
  memcpy(__dest,__s,sVar2 + 1);
  puVar1[5] = (long)__dest + sVar2;
  *(undefined4 *)(puVar1 + 3) = 0x200;
  *(XMLText *)(puVar1 + 0xb) = this[0x58];
  return puVar1;
}

