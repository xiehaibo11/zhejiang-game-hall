
/* v8::internal::RegExpAlternative::IsAnchoredAtEnd() */

undefined8 __thiscall v8::internal::RegExpAlternative::IsAnchoredAtEnd(RegExpAlternative *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 8);
  lVar3 = (long)*(int *)((long)plVar5 + 0xc);
  while( true ) {
    if (lVar3 < 1) {
      return 0;
    }
    plVar4 = *(long **)(*plVar5 + lVar3 * 8 + -8);
    uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if ((uVar2 & 1) != 0) break;
    iVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    lVar3 = lVar3 + -1;
    if (0 < iVar1) {
      return 0;
    }
  }
  return 1;
}

