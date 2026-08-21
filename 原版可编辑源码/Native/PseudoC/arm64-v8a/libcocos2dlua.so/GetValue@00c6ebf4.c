
/* cocostudio::stExpCocoNode::GetValue(cocostudio::CocoLoader*) */

char * __thiscall cocostudio::stExpCocoNode::GetValue(stExpCocoNode *this,CocoLoader *param_1)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                 (ulong)*(uint *)(this + 8));
  iVar1 = strcmp(__s1,"null");
  if ((iVar1 == 0) && (iVar1 = GetType(this,param_1), iVar1 == 5)) {
    *__s1 = '\0';
  }
  return __s1;
}

