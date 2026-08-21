
/* v8::internal::TextNode::MakeCaseIndependent(v8::internal::Isolate*, bool) */

void __thiscall
v8::internal::TextNode::MakeCaseIndependent(TextNode *this,Isolate *param_1,bool param_2)

{
  uint uVar1;
  ulong uVar2;
  ZoneList *pZVar3;
  long *plVar4;
  RegExpCharacterClass *this_00;
  long lVar5;
  
  plVar4 = *(long **)(this + 0x40);
  uVar1 = *(uint *)((long)plVar4 + 0xc);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    while( true ) {
      if (((*(int *)(*plVar4 + lVar5 + 4) == 1) &&
          (this_00 = *(RegExpCharacterClass **)(*plVar4 + lVar5 + 8),
          ((byte)this_00[0x18] >> 1 & 1) != 0)) &&
         (uVar2 = RegExpCharacterClass::is_standard(this_00,*(Zone **)(this + 0x30)),
         (uVar2 & 1) == 0)) {
        pZVar3 = (ZoneList *)
                 CharacterSet::ranges((CharacterSet *)(this_00 + 8),*(Zone **)(this + 0x30));
        CharacterRange::AddCaseEquivalents(param_1,*(Zone **)(this + 0x30),pZVar3,param_2);
      }
      if ((ulong)uVar1 * 0x10 + -0x10 == lVar5) break;
      plVar4 = *(long **)(this + 0x40);
      lVar5 = lVar5 + 0x10;
    }
  }
  return;
}

