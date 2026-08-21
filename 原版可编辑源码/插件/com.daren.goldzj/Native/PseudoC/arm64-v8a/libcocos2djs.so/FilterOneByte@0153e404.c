
/* v8::internal::NegativeLookaroundChoiceNode::FilterOneByte(int) */

NegativeLookaroundChoiceNode * __thiscall
v8::internal::NegativeLookaroundChoiceNode::FilterOneByte
          (NegativeLookaroundChoiceNode *this,int param_1)

{
  NegativeLookaroundChoiceNode NVar1;
  NegativeLookaroundChoiceNode *pNVar2;
  long lVar3;
  
  NVar1 = this[0x19];
  if ((char)NVar1 < 0) {
    pNVar2 = *(NegativeLookaroundChoiceNode **)(this + 8);
  }
  else {
    pNVar2 = this;
    if ((-1 < param_1) && (((uint)(int)(char)NVar1 >> 6 & 1) == 0)) {
      this[0x19] = (NegativeLookaroundChoiceNode)((byte)NVar1 | 0x40);
      pNVar2 = (NegativeLookaroundChoiceNode *)
               (**(code **)(**(long **)(**(long **)(this + 0x38) + 0x10) + 0x50))
                         (*(long **)(**(long **)(this + 0x38) + 0x10),param_1 + -1);
      if (pNVar2 != (NegativeLookaroundChoiceNode *)0x0) {
        *(NegativeLookaroundChoiceNode **)(**(long **)(this + 0x38) + 0x10) = pNVar2;
        lVar3 = (**(code **)(**(long **)**(undefined8 **)(this + 0x38) + 0x50))
                          (*(long **)**(undefined8 **)(this + 0x38),param_1 + -1);
        if (lVar3 != 0) {
          *(long *)**(undefined8 **)(this + 0x38) = lVar3;
          pNVar2 = this;
        }
      }
      NVar1 = this[0x19];
      this[0x19] = (NegativeLookaroundChoiceNode)((byte)NVar1 | 0x80);
      *(NegativeLookaroundChoiceNode **)(this + 8) = pNVar2;
      this[0x19] = (NegativeLookaroundChoiceNode)((byte)NVar1 & 0xbf | 0x80);
    }
  }
  return pNVar2;
}

