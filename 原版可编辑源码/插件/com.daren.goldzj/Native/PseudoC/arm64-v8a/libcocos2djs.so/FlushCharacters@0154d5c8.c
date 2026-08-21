
/* v8::internal::RegExpBuilder::FlushCharacters() */

void __thiscall v8::internal::RegExpBuilder::FlushCharacters(RegExpBuilder *this)

{
  ushort uVar1;
  int iVar2;
  Zone *this_00;
  RegExpTree *pRVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)(this + 0x18);
  if (uVar1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar1);
  }
  this[8] = (RegExpBuilder)0x0;
  if (*(long *)(this + 0x10) != 0) {
    this_00 = *(Zone **)this;
    pRVar3 = *(RegExpTree **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pRVar3) < 0x20) {
      pRVar3 = (RegExpTree *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(RegExpTree **)(this_00 + 0x10) = pRVar3 + 0x20;
    }
    uVar4 = **(undefined8 **)(this + 0x10);
    iVar2 = *(int *)((long)*(undefined8 **)(this + 0x10) + 0xc);
    *(undefined4 *)(pRVar3 + 0x18) = *(undefined4 *)(this + 0xc);
    *(undefined ***)pRVar3 = &PTR__RegExpTree_01cc7678;
    *(undefined8 *)(pRVar3 + 8) = uVar4;
    *(long *)(pRVar3 + 0x10) = (long)iVar2;
    *(undefined8 *)(this + 0x10) = 0;
    BufferedZoneList<v8::internal::RegExpTree,2>::Add
              ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x30),pRVar3,*(Zone **)this);
    return;
  }
  return;
}

