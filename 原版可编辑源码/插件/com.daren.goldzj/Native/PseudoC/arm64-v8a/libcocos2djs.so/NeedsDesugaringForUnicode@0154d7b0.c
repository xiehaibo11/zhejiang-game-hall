
/* v8::internal::RegExpBuilder::NeedsDesugaringForUnicode(v8::internal::RegExpCharacterClass*) */

undefined8 __thiscall
v8::internal::RegExpBuilder::NeedsDesugaringForUnicode
          (RegExpBuilder *this,RegExpCharacterClass *param_1)

{
  long lVar1;
  int iVar2;
  ZoneList *pZVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((*(uint *)(this + 0xc) >> 4 & 1) == 0) {
LAB_0154d834:
    uVar4 = 0;
  }
  else if ((*(uint *)(this + 0xc) >> 1 & 1) == 0) {
    pZVar3 = (ZoneList *)CharacterSet::ranges((CharacterSet *)(param_1 + 8),*(Zone **)this);
    CharacterRange::Canonicalize(pZVar3);
    uVar4 = 1;
    lVar5 = (long)*(int *)(pZVar3 + 0xc) + 1;
    lVar6 = (long)*(int *)(pZVar3 + 0xc) << 3;
    do {
      lVar5 = lVar5 + -1;
      if (lVar5 < 1) goto LAB_0154d834;
      lVar1 = *(long *)pZVar3 + lVar6;
      iVar2 = *(int *)(lVar1 + -4);
    } while ((iVar2 < 0x10000) &&
            (lVar6 = lVar6 + -8, 0xdfff < *(int *)(lVar1 + -8) || iVar2 < 0xd800));
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

