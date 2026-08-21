
/* tinyxml2::XMLNode::SetValue(char const*, bool) */

void __thiscall tinyxml2::XMLNode::SetValue(XMLNode *this,char *param_1,bool param_2)

{
  XMLNode *pXVar1;
  size_t sVar2;
  void *__dest;
  
  pXVar1 = this + 0x20;
  if (param_2) {
    if (((*(uint *)(this + 0x18) >> 9 & 1) != 0) && (*(void **)pXVar1 != (void *)0x0)) {
      operator_delete__(*(void **)pXVar1);
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(char **)(this + 0x20) = param_1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    if (((*(uint *)(this + 0x18) >> 9 & 1) != 0) && (*(void **)pXVar1 != (void *)0x0)) {
      operator_delete__(*(void **)pXVar1);
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined8 *)pXVar1 = 0;
    *(undefined8 *)(this + 0x28) = 0;
    sVar2 = strlen(param_1);
    __dest = operator_new__(sVar2 + 1);
    *(void **)(this + 0x20) = __dest;
    memcpy(__dest,param_1,sVar2 + 1);
    *(size_t *)(this + 0x28) = (long)__dest + sVar2;
    *(undefined4 *)(this + 0x18) = 0x200;
  }
  return;
}

