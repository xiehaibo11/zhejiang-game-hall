
/* v8::internal::RegExpBuilder::AddTrailSurrogate(unsigned short) */

void __thiscall v8::internal::RegExpBuilder::AddTrailSurrogate(RegExpBuilder *this,ushort param_1)

{
  short sVar1;
  Zone *pZVar2;
  short *psVar3;
  RegExpTree *pRVar4;
  
  sVar1 = *(short *)(this + 0x18);
  if (sVar1 != 0) {
    pZVar2 = *(Zone **)this;
    *(undefined2 *)(this + 0x18) = 0;
    psVar3 = *(short **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)psVar3) < 8) {
      psVar3 = (short *)Zone::NewExpand(pZVar2,8);
    }
    else {
      *(short **)(pZVar2 + 0x10) = psVar3 + 4;
    }
    *psVar3 = sVar1;
    psVar3[1] = param_1;
    pZVar2 = *(Zone **)this;
    pRVar4 = *(RegExpTree **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pRVar4) < 0x20) {
      pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar2,0x20);
    }
    else {
      *(RegExpTree **)(pZVar2 + 0x10) = pRVar4 + 0x20;
    }
    *(undefined4 *)(pRVar4 + 0x18) = *(undefined4 *)(this + 0xc);
    *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7678;
    *(short **)(pRVar4 + 8) = psVar3;
    *(undefined8 *)(pRVar4 + 0x10) = 2;
    AddAtom(this,pRVar4);
    return;
  }
  *(ushort *)(this + 0x18) = param_1;
  if (param_1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)param_1);
    return;
  }
  return;
}

