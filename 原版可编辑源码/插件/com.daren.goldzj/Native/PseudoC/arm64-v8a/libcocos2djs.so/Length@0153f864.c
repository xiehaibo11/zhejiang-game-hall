
/* v8::internal::TextNode::Length() */

int __thiscall v8::internal::TextNode::Length(TextNode *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = **(long **)(this + 0x40);
  lVar5 = (long)*(int *)((long)*(long **)(this + 0x40) + 0xc) + -1;
  piVar1 = (int *)(lVar4 + lVar5 * 0x10);
  iVar2 = piVar1[1];
  iVar3 = 1;
  if (iVar2 != 1) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar3 = *(int *)(*(long *)(lVar4 + lVar5 * 0x10 + 8) + 0x10);
  }
  return iVar3 + *piVar1;
}

