
/* v8::internal::TextNode::GetSuccessorOfOmnivorousTextNode(v8::internal::RegExpCompiler*) */

undefined8 __thiscall
v8::internal::TextNode::GetSuccessorOfOmnivorousTextNode(TextNode *this,RegExpCompiler *param_1)

{
  ZoneList *pZVar1;
  long lVar2;
  int iVar3;
  
  if (((this[0x48] == (TextNode)0x0) && (*(int *)((long)*(long **)(this + 0x40) + 0xc) == 1)) &&
     (lVar2 = **(long **)(this + 0x40), *(int *)(lVar2 + 4) == 1)) {
    lVar2 = *(long *)(lVar2 + 8);
    pZVar1 = (ZoneList *)CharacterSet::ranges((CharacterSet *)(lVar2 + 8),*(Zone **)(this + 0x30));
    CharacterRange::Canonicalize(pZVar1);
    if ((*(byte *)(lVar2 + 0x1c) & 1) == 0) {
      if ((*(int *)(pZVar1 + 0xc) == 1) && (**(int **)pZVar1 == 0)) {
        iVar3 = 0xffff;
        if (param_1[0x30] != (RegExpCompiler)0x0) {
          iVar3 = 0xff;
        }
        if (iVar3 <= (*(int **)pZVar1)[1]) goto LAB_01540a68;
      }
    }
    else if (*(int *)(pZVar1 + 0xc) == 0) {
LAB_01540a68:
      return *(undefined8 *)(this + 0x38);
    }
  }
  return 0;
}

