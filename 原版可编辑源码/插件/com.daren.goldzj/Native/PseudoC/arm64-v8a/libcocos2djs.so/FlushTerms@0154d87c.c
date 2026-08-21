
/* v8::internal::RegExpBuilder::FlushTerms() */

void __thiscall v8::internal::RegExpBuilder::FlushTerms(RegExpBuilder *this)

{
  Zone *pZVar1;
  ZoneList *pZVar2;
  int iVar3;
  BufferedZoneList<v8::internal::RegExpTree,2> *this_00;
  RegExpAlternative *this_01;
  
  FlushText(this);
  this_00 = (BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20);
  iVar3 = 0;
  if (*(long *)this_00 != 0) {
    iVar3 = *(int *)(*(long *)this_00 + 0xc);
  }
  this_01 = *(RegExpAlternative **)(this + 0x28);
  if (this_01 != (RegExpAlternative *)0x0) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 1) {
    if (iVar3 == 0) {
      pZVar1 = *(Zone **)this;
      this_01 = *(RegExpAlternative **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_01) < 8) {
        this_01 = (RegExpAlternative *)Zone::NewExpand(pZVar1,8);
      }
      else {
        *(RegExpTree **)(pZVar1 + 0x10) = (RegExpTree *)(this_01 + 8);
      }
      *(undefined ***)this_01 = &PTR__RegExpTree_01cc7e90;
    }
    else {
      pZVar1 = *(Zone **)this;
      this_01 = *(RegExpAlternative **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_01) < 0x18) {
        this_01 = (RegExpAlternative *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(RegExpAlternative **)(pZVar1 + 0x10) = this_01 + 0x18;
      }
      pZVar2 = (ZoneList *)
               BufferedZoneList<v8::internal::RegExpTree,2>::GetList(this_00,*(Zone **)this);
      RegExpAlternative::RegExpAlternative(this_01,pZVar2);
    }
  }
  BufferedZoneList<v8::internal::RegExpTree,2>::Add
            ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x40),(RegExpTree *)this_01,
             *(Zone **)this);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

