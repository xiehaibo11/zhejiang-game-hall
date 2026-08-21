
/* tinyxml2::XMLNode::SetValue(char const*, bool) */

void __thiscall tinyxml2::XMLNode::SetValue(XMLNode *this,char *param_1,bool param_2)

{
  if (param_2) {
    if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(char **)(this + 0x20) = param_1;
    *(undefined8 *)(this + 0x28) = 0;
    return;
  }
  StrPair::SetStr((StrPair *)(this + 0x18),param_1,0);
  return;
}

