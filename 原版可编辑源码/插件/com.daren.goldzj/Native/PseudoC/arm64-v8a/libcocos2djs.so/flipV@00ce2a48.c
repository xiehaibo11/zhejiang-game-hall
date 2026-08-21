
/* spine::Atlas::flipV() */

void __thiscall spine::Atlas::flipV(Atlas *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x30);
  if (lVar1 != 0) {
    plVar2 = *(long **)(this + 0x40);
    do {
      lVar3 = *plVar2;
      lVar1 = lVar1 + -1;
      *(float *)(lVar3 + 0x3c) = 1.0 - *(float *)(lVar3 + 0x3c);
      *(float *)(lVar3 + 0x44) = 1.0 - *(float *)(lVar3 + 0x44);
      plVar2 = plVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

