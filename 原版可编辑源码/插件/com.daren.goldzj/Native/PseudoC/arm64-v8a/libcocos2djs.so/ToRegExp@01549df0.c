
/* v8::internal::RegExpBuilder::ToRegExp() */

RegExpDisjunction * __thiscall v8::internal::RegExpBuilder::ToRegExp(RegExpBuilder *this)

{
  Zone *pZVar1;
  ZoneList *pZVar2;
  int iVar3;
  long lVar4;
  RegExpDisjunction *this_00;
  
  FlushTerms(this);
  lVar4 = *(long *)(this + 0x40);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  this_00 = *(RegExpDisjunction **)(this + 0x48);
  if (this_00 != (RegExpDisjunction *)0x0) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 1) {
    if (iVar3 == 0) {
      pZVar1 = *(Zone **)this;
      this_00 = *(RegExpDisjunction **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_00) < 8) {
        this_00 = (RegExpDisjunction *)Zone::NewExpand(pZVar1,8);
      }
      else {
        *(RegExpDisjunction **)(pZVar1 + 0x10) = this_00 + 8;
      }
      *(undefined ***)this_00 = &PTR__RegExpTree_01cc7e90;
    }
    else {
      pZVar1 = *(Zone **)this;
      this_00 = *(RegExpDisjunction **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_00) < 0x18) {
        this_00 = (RegExpDisjunction *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(RegExpDisjunction **)(pZVar1 + 0x10) = this_00 + 0x18;
      }
      pZVar2 = (ZoneList *)
               BufferedZoneList<v8::internal::RegExpTree,2>::GetList
                         ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x40),
                          *(Zone **)this);
      RegExpDisjunction::RegExpDisjunction(this_00,pZVar2);
    }
  }
  return this_00;
}

