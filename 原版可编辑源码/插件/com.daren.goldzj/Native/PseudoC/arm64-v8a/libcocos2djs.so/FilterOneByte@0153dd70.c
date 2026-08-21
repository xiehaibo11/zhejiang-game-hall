
/* v8::internal::SeqRegExpNode::FilterOneByte(int) */

SeqRegExpNode * __thiscall
v8::internal::SeqRegExpNode::FilterOneByte(SeqRegExpNode *this,int param_1)

{
  long lVar1;
  SeqRegExpNode *pSVar2;
  SeqRegExpNode SVar3;
  
  if ((char)this[0x19] < '\0') {
    this = *(SeqRegExpNode **)(this + 8);
  }
  else if (-1 < param_1) {
    this[0x19] = (SeqRegExpNode)((byte)this[0x19] | 0x40);
    lVar1 = (**(code **)(**(long **)(this + 0x38) + 0x50))(*(long **)(this + 0x38),param_1 + -2);
    if (lVar1 == 0) {
      SVar3 = this[0x19];
      pSVar2 = (SeqRegExpNode *)0x0;
    }
    else {
      SVar3 = this[0x19];
      *(long *)(this + 0x38) = lVar1;
      pSVar2 = this;
    }
    this[0x19] = (SeqRegExpNode)((byte)SVar3 | 0x80);
    *(SeqRegExpNode **)(this + 8) = pSVar2;
    this[0x19] = (SeqRegExpNode)((byte)SVar3 & 0xbf | 0x80);
    this = pSVar2;
  }
  return this;
}

