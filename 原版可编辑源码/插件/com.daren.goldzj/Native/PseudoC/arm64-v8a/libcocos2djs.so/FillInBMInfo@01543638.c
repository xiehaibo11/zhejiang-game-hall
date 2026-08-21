
/* v8::internal::SeqRegExpNode::FillInBMInfo(v8::internal::Isolate*, int, int,
   v8::internal::BoyerMooreLookahead*, bool) */

void __thiscall
v8::internal::SeqRegExpNode::FillInBMInfo
          (SeqRegExpNode *this,Isolate *param_1,int param_2,int param_3,BoyerMooreLookahead *param_4
          ,bool param_5)

{
  (**(code **)(**(long **)(this + 0x38) + 0x48))();
  if (param_2 == 0) {
    *(BoyerMooreLookahead **)(this + (ulong)param_5 * 8 + 0x20) = param_4;
  }
  return;
}

