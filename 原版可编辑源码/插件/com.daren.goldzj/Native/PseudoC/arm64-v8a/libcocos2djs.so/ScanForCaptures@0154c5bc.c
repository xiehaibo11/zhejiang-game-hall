
/* v8::internal::RegExpParser::ScanForCaptures() */

void __thiscall v8::internal::RegExpParser::ScanForCaptures(RegExpParser *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x38);
  iVar1 = *(int *)(this + 0x40);
  iVar3 = *(int *)(this + 0x44);
joined_r0x0154c5e4:
  if (iVar2 == 0x200000) {
LAB_0154c69c:
    *(int *)(this + 0x48) = iVar3;
    this[0x4f] = (RegExpParser)0x1;
    *(int *)(this + 0x40) = iVar1 + -1;
    this[0x4c] = (RegExpParser)(iVar1 <= *(int *)(*(long *)(this + 0x30) + 0x24));
    Advance(this);
    return;
  }
  Advance(this);
  if (iVar2 == 0x28) {
    if (*(int *)(this + 0x38) == 0x3f) goto code_r0x0154c64c;
    goto LAB_0154c680;
  }
  if (iVar2 == 0x5c) {
    Advance(this);
  }
  else if (iVar2 == 0x5b) {
    do {
      while( true ) {
        iVar2 = *(int *)(this + 0x38);
        if (iVar2 == 0x200000) goto LAB_0154c69c;
        Advance(this);
        if (iVar2 != 0x5c) break;
        Advance(this);
      }
    } while (iVar2 != 0x5d);
  }
  goto LAB_0154c690;
code_r0x0154c64c:
  Advance(this);
  iVar2 = *(int *)(this + 0x38);
  if (iVar2 == 0x3c) {
    Advance(this);
    iVar2 = *(int *)(this + 0x38);
    if ((iVar2 != 0x21) && (iVar2 != 0x3d)) {
      this[0x50] = (RegExpParser)0x1;
LAB_0154c680:
      iVar3 = iVar3 + 1;
LAB_0154c690:
      iVar2 = *(int *)(this + 0x38);
    }
  }
  goto joined_r0x0154c5e4;
}

