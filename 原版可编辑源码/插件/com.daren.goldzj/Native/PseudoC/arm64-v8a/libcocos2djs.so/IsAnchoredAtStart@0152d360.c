
/* v8::internal::RegExpAlternative::IsAnchoredAtStart() */

undefined8 __thiscall v8::internal::RegExpAlternative::IsAnchoredAtStart(RegExpAlternative *this)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 8);
  if (0 < *(int *)((long)plVar4 + 0xc)) {
    lVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar4 + lVar5 * 8);
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      iVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    } while ((iVar1 < 1) && (lVar5 = lVar5 + 1, lVar5 < *(int *)((long)plVar4 + 0xc)));
  }
  return 0;
}

