
/* cocostudio::ActionNode::valueToInt(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

int __thiscall cocostudio::ActionNode::valueToInt(ActionNode *this,basic_string *param_1)

{
  int iVar1;
  basic_string *__nptr;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  iVar1 = atoi((char *)__nptr);
  return iVar1;
}

