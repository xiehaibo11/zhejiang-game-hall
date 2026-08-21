
/* tinyxml2::XMLAttribute::SetAttribute(char const*) */

void __thiscall tinyxml2::XMLAttribute::SetAttribute(XMLAttribute *this,char *param_1)

{
  void *pvVar1;
  size_t sVar2;
  
  if ((((byte)this[0x21] >> 1 & 1) != 0) &&
     (pvVar1 = *(void **)(this + 0x28), pvVar1 != (void *)0x0)) {
    operator_delete__(pvVar1);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  sVar2 = strlen(param_1);
  pvVar1 = operator_new__(sVar2 + 1);
  *(void **)(this + 0x28) = pvVar1;
  memcpy(pvVar1,param_1,sVar2 + 1);
  *(size_t *)(this + 0x30) = (long)pvVar1 + sVar2;
  *(undefined4 *)(this + 0x20) = 0x200;
  return;
}

