
/* v8::internal::RegExpQuantifier::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*)
    */

void __thiscall
v8::internal::RegExpQuantifier::ToNode
          (RegExpQuantifier *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  ToNode(*(int *)(this + 0x10),*(int *)(this + 0x14),*(int *)(this + 0x20) == 0,
         *(RegExpTree **)(this + 8),param_1,param_2,false);
  return;
}

