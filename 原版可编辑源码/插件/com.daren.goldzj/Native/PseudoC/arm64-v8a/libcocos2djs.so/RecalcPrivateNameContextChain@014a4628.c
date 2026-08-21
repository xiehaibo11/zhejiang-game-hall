
/* v8::internal::DeclarationScope::RecalcPrivateNameContextChain() */

void __thiscall
v8::internal::DeclarationScope::RecalcPrivateNameContextChain(DeclarationScope *this)

{
  DeclarationScope *pDVar1;
  DeclarationScope *pDVar2;
  long lVar3;
  
  pDVar1 = this;
LAB_014a4634:
  do {
    pDVar2 = pDVar1;
    lVar3 = *(long *)(pDVar2 + 8);
    if (lVar3 == 0) {
LAB_014a467c:
      pDVar1 = *(DeclarationScope **)(pDVar2 + 0x10);
      if (*(DeclarationScope **)(pDVar2 + 0x10) != (DeclarationScope *)0x0) goto LAB_014a4634;
    }
    else {
      if (*(int *)(lVar3 + 0x7c) < 1) {
        *(ushort *)(pDVar2 + 0x81) =
             *(ushort *)(pDVar2 + 0x81) & 0xfdff | *(ushort *)(lVar3 + 0x81) & 0x200;
      }
      if ((pDVar2[0x80] != (DeclarationScope)0x2) || (((byte)pDVar2[0x83] & 0x44) != 0))
      goto LAB_014a467c;
    }
    while( true ) {
      if (*(DeclarationScope **)(pDVar2 + 0x18) != (DeclarationScope *)0x0) break;
      if (pDVar2 == this) {
        return;
      }
      pDVar2 = *(DeclarationScope **)(pDVar2 + 8);
    }
    pDVar1 = *(DeclarationScope **)(pDVar2 + 0x18);
    if (pDVar2 == this) {
      return;
    }
  } while( true );
}

