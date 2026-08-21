
/* v8::internal::RegExpDisjunction::IsAnchoredAtEnd() */

undefined8 __thiscall v8::internal::RegExpDisjunction::IsAnchoredAtEnd(RegExpDisjunction *this)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 8);
  if (0 < *(int *)((long)plVar2 + 0xc)) {
    lVar3 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*plVar2 + lVar3 * 8) + 0x30))();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)((long)plVar2 + 0xc));
  }
  return 1;
}

