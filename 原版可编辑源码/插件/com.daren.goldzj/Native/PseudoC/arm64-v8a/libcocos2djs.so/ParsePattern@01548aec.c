
/* v8::internal::RegExpParser::ParsePattern() */

long * __thiscall v8::internal::RegExpParser::ParsePattern(RegExpParser *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)ParseDisjunction(this);
  if ((this[0x51] == (RegExpParser)0x0) &&
     (PatchNamedBackReferences(this), this[0x51] == (RegExpParser)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1);
    if (((uVar2 & 1) != 0) &&
       (lVar3 = (**(code **)(*plVar1 + 0x98))(plVar1),
       *(int *)(*(long *)(this + 0x30) + 0x24) == *(int *)(lVar3 + 0x10))) {
      this[0x4d] = (RegExpParser)0x1;
    }
  }
  else {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}

