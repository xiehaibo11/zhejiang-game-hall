
/* v8::internal::LoopChoiceNode::FilterOneByte(int) */

LoopChoiceNode * __thiscall
v8::internal::LoopChoiceNode::FilterOneByte(LoopChoiceNode *this,int param_1)

{
  LoopChoiceNode LVar1;
  long lVar2;
  LoopChoiceNode *pLVar3;
  
  LVar1 = this[0x19];
  if ((char)LVar1 < 0) {
    this = *(LoopChoiceNode **)(this + 8);
  }
  else if ((-1 < param_1) && (((uint)(int)(char)LVar1 >> 6 & 1) == 0)) {
    this[0x19] = (LoopChoiceNode)((byte)LVar1 | 0x40);
    lVar2 = (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50),param_1 + -1);
    if (lVar2 != 0) {
      this[0x19] = (LoopChoiceNode)((byte)this[0x19] & 0xbf);
      pLVar3 = (LoopChoiceNode *)ChoiceNode::FilterOneByte((ChoiceNode *)this,param_1 + -1);
      return pLVar3;
    }
    *(undefined8 *)(this + 8) = 0;
    this[0x19] = (LoopChoiceNode)((byte)this[0x19] & 0x3f | 0x80);
    this = (LoopChoiceNode *)0x0;
  }
  return this;
}

