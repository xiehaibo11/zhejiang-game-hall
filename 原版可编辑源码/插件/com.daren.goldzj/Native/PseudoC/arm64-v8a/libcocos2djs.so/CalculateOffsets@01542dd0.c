
/* v8::internal::TextNode::CalculateOffsets() */

void __thiscall v8::internal::TextNode::CalculateOffsets(TextNode *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  plVar6 = *(long **)(this + 0x40);
  uVar2 = *(uint *)((long)plVar6 + 0xc);
  if (0 < (int)uVar2) {
    lVar4 = 0;
    iVar5 = 0;
    while( true ) {
      lVar7 = *plVar6;
      piVar1 = (int *)(lVar7 + lVar4);
      iVar3 = piVar1[1];
      *piVar1 = iVar5;
      iVar8 = 1;
      if (iVar3 != 1) {
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar8 = *(int *)(*(long *)(lVar7 + lVar4 + 8) + 0x10);
      }
      if ((ulong)uVar2 * 0x10 + -0x10 == lVar4) break;
      plVar6 = *(long **)(this + 0x40);
      iVar5 = iVar8 + iVar5;
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}

