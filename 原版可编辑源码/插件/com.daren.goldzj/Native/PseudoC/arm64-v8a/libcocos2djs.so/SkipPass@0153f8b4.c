
/* v8::internal::TextNode::SkipPass(v8::internal::TextNode::TextEmitPassType, bool) */

bool v8::internal::TextNode::SkipPass(uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_1 == 1;
  if ((param_2 & 1) == 0) {
    bVar1 = (param_1 | 1) == 3;
  }
  return bVar1;
}

