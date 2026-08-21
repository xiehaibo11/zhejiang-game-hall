
/* v8::internal::RegExpBuilder::AddCharacterClass(v8::internal::RegExpCharacterClass*) */

void __thiscall
v8::internal::RegExpBuilder::AddCharacterClass(RegExpBuilder *this,RegExpCharacterClass *param_1)

{
  long lVar1;
  int iVar2;
  ZoneList *pZVar3;
  long lVar4;
  long lVar5;
  
  if ((*(uint *)(this + 0xc) >> 4 & 1) != 0) {
    if ((*(uint *)(this + 0xc) >> 1 & 1) == 0) {
      pZVar3 = (ZoneList *)CharacterSet::ranges((CharacterSet *)(param_1 + 8),*(Zone **)this);
      CharacterRange::Canonicalize(pZVar3);
      lVar4 = (long)*(int *)(pZVar3 + 0xc) + 1;
      lVar5 = (long)*(int *)(pZVar3 + 0xc) << 3;
      do {
        lVar4 = lVar4 + -1;
        if (lVar4 < 1) goto LAB_0154a460;
        lVar1 = *(long *)pZVar3 + lVar5;
        iVar2 = *(int *)(lVar1 + -4);
      } while ((iVar2 < 0x10000) &&
              (lVar5 = lVar5 + -8, 0xdfff < *(int *)(lVar1 + -8) || iVar2 < 0xd800));
    }
    FlushText(this);
    BufferedZoneList<v8::internal::RegExpTree,2>::Add
              ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20),(RegExpTree *)param_1,
               *(Zone **)this);
    return;
  }
LAB_0154a460:
  AddAtom(this,(RegExpTree *)param_1);
  return;
}

