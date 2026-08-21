
/* v8::internal::RegExpNode::EatsAtLeast(bool) */

RegExpNode __thiscall v8::internal::RegExpNode::EatsAtLeast(RegExpNode *this,bool param_1)

{
  long lVar1;
  
  lVar1 = 0x1a;
  if (param_1) {
    lVar1 = 0x1b;
  }
  return this[lVar1];
}

