
/* tinyxml2::XMLDocument::NewText(char const*) */

undefined8 * __thiscall tinyxml2::XMLDocument::NewText(XMLDocument *this,char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *__dest;
  
  puVar1 = (undefined8 *)MemPoolT<96>::Alloc((MemPoolT<96> *)(this + 0x180));
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[10] = (MemPoolT<96> *)(this + 0x180);
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_ToElement_01c69048;
  puVar1[1] = this;
  puVar1[4] = 0;
  puVar1[5] = 0;
  sVar2 = strlen(param_1);
  __dest = operator_new__(sVar2 + 1);
  puVar1[4] = __dest;
  memcpy(__dest,param_1,sVar2 + 1);
  puVar1[5] = (long)__dest + sVar2;
  *(undefined4 *)(puVar1 + 3) = 0x200;
  return puVar1;
}

