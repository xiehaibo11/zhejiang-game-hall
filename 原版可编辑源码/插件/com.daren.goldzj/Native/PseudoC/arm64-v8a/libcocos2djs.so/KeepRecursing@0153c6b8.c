
/* v8::internal::RegExpNode::KeepRecursing(v8::internal::RegExpCompiler*) */

bool __thiscall v8::internal::RegExpNode::KeepRecursing(RegExpNode *this,RegExpCompiler *param_1)

{
  if (param_1[0x32] != (RegExpCompiler)0x0) {
    return false;
  }
  return *(int *)(param_1 + 0x20) < 0x65;
}

