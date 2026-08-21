
/* v8::internal::RegExpBuilder::AddAtom(v8::internal::RegExpTree*) */

void __thiscall v8::internal::RegExpBuilder::AddAtom(RegExpBuilder *this,RegExpTree *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  Zone *pZVar4;
  RegExpTree *pRVar5;
  undefined8 uVar6;
  BufferedZoneList<v8::internal::RegExpTree,2> *this_00;
  
  uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
  if ((uVar3 & 1) != 0) {
    this[8] = (RegExpBuilder)0x1;
    return;
  }
  uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  if ((uVar3 & 1) == 0) {
    FlushText(this);
    this_00 = (BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20);
    pZVar4 = *(Zone **)this;
  }
  else {
    uVar1 = *(ushort *)(this + 0x18);
    if (uVar1 != 0) {
      *(undefined2 *)(this + 0x18) = 0;
      AddCharacterClassForDesugaring(this,(uint)uVar1);
    }
    this[8] = (RegExpBuilder)0x0;
    if (*(long *)(this + 0x10) != 0) {
      pZVar4 = *(Zone **)this;
      pRVar5 = *(RegExpTree **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pRVar5) < 0x20) {
        pRVar5 = (RegExpTree *)Zone::NewExpand(pZVar4,0x20);
      }
      else {
        *(RegExpTree **)(pZVar4 + 0x10) = pRVar5 + 0x20;
      }
      uVar6 = **(undefined8 **)(this + 0x10);
      iVar2 = *(int *)((long)*(undefined8 **)(this + 0x10) + 0xc);
      *(undefined4 *)(pRVar5 + 0x18) = *(undefined4 *)(this + 0xc);
      *(undefined ***)pRVar5 = &PTR__RegExpTree_01cc7678;
      *(undefined8 *)(pRVar5 + 8) = uVar6;
      *(long *)(pRVar5 + 0x10) = (long)iVar2;
      *(undefined8 *)(this + 0x10) = 0;
      BufferedZoneList<v8::internal::RegExpTree,2>::Add
                ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x30),pRVar5,*(Zone **)this
                );
    }
    this_00 = (BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x30);
    pZVar4 = *(Zone **)this;
  }
  BufferedZoneList<v8::internal::RegExpTree,2>::Add(this_00,param_1,pZVar4);
  return;
}

