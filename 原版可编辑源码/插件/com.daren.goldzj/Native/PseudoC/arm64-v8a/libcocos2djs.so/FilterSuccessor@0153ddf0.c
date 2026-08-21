
/* v8::internal::SeqRegExpNode::FilterSuccessor(int) */

void __thiscall v8::internal::SeqRegExpNode::FilterSuccessor(SeqRegExpNode *this,int param_1)

{
  long lVar1;
  SeqRegExpNode *pSVar2;
  
  lVar1 = (**(code **)(**(long **)(this + 0x38) + 0x50))(*(long **)(this + 0x38),param_1 + -1);
  pSVar2 = (SeqRegExpNode *)0x0;
  if (lVar1 != 0) {
    *(long *)(this + 0x38) = lVar1;
    pSVar2 = this;
  }
  *(SeqRegExpNode **)(this + 8) = pSVar2;
  this[0x19] = (SeqRegExpNode)((byte)this[0x19] | 0x80);
  return;
}

