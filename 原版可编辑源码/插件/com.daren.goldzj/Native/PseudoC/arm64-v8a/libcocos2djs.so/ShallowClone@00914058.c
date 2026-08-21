
/* tinyxml2::XMLUnknown::ShallowClone(tinyxml2::XMLDocument*) const */

undefined8 * __thiscall tinyxml2::XMLUnknown::ShallowClone(XMLUnknown *this,XMLDocument *param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  void *__dest;
  
  if (param_1 == (XMLDocument *)0x0) {
    param_1 = *(XMLDocument **)(this + 8);
  }
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  puVar1 = (undefined8 *)MemPoolT<88>::Alloc((MemPoolT<88> *)(param_1 + 0x200));
  puVar1[2] = 0;
  puVar1[10] = (MemPoolT<88> *)(param_1 + 0x200);
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_ToElement_01c68e08;
  puVar1[1] = param_1;
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

