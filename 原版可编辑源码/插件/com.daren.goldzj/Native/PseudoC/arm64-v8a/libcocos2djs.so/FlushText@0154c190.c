
/* v8::internal::RegExpBuilder::FlushText() */

void __thiscall v8::internal::RegExpBuilder::FlushText(RegExpBuilder *this)

{
  ushort uVar1;
  int iVar2;
  Zone *pZVar3;
  long lVar4;
  RegExpTree *pRVar5;
  uint uVar6;
  long *plVar7;
  RegExpBuilder *pRVar8;
  undefined8 uVar9;
  RegExpBuilder *pRVar10;
  RegExpBuilder *pRVar11;
  ulong uVar12;
  
  uVar1 = *(ushort *)(this + 0x18);
  if (uVar1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar1);
  }
  this[8] = (RegExpBuilder)0x0;
  if (*(long *)(this + 0x10) != 0) {
    pZVar3 = *(Zone **)this;
    pRVar5 = *(RegExpTree **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar5) < 0x20) {
      pRVar5 = (RegExpTree *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(RegExpTree **)(pZVar3 + 0x10) = pRVar5 + 0x20;
    }
    uVar9 = **(undefined8 **)(this + 0x10);
    iVar2 = *(int *)((long)*(undefined8 **)(this + 0x10) + 0xc);
    *(undefined4 *)(pRVar5 + 0x18) = *(undefined4 *)(this + 0xc);
    *(undefined ***)pRVar5 = &PTR__RegExpTree_01cc7678;
    *(undefined8 *)(pRVar5 + 8) = uVar9;
    *(long *)(pRVar5 + 0x10) = (long)iVar2;
    *(undefined8 *)(this + 0x10) = 0;
    BufferedZoneList<v8::internal::RegExpTree,2>::Add
              ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x30),pRVar5,*(Zone **)this);
  }
  pRVar10 = this + 0x30;
  uVar6 = 0;
  if (*(long *)pRVar10 != 0) {
    uVar6 = *(uint *)(*(long *)pRVar10 + 0xc);
  }
  pRVar11 = this + 0x38;
  pRVar5 = *(RegExpTree **)pRVar11;
  if (pRVar5 != (RegExpTree *)0x0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      pZVar3 = *(Zone **)this;
    }
    else {
      pZVar3 = *(Zone **)this;
      pRVar5 = *(RegExpTree **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar5) < 0x20) {
        pRVar5 = (RegExpTree *)Zone::NewExpand(pZVar3,0x20);
      }
      else {
        *(RegExpTree **)(pZVar3 + 0x10) = pRVar5 + 0x20;
      }
      pZVar3 = *(Zone **)this;
      *(undefined ***)pRVar5 = &PTR__RegExpText_01cc77a0;
      lVar4 = *(long *)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar4) < 0x20) {
        lVar4 = Zone::NewExpand(pZVar3,0x20);
      }
      else {
        *(long *)(pZVar3 + 0x10) = lVar4 + 0x20;
      }
      *(long *)(pRVar5 + 8) = lVar4;
      *(undefined4 *)(pRVar5 + 0x18) = 0;
      *(undefined8 *)(pRVar5 + 0x10) = 2;
      if (0 < (int)uVar6) {
        uVar12 = 0;
        do {
          plVar7 = *(long **)pRVar10;
          pRVar8 = pRVar11;
          if ((plVar7 != (long *)0x0) && (uVar12 != *(uint *)((long)plVar7 + 0xc))) {
            pRVar8 = (RegExpBuilder *)(*plVar7 + uVar12 * 8);
          }
          (**(code **)(**(long **)pRVar8 + 0x50))(*(long **)pRVar8,pRVar5,*(undefined8 *)this);
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar6);
      }
      pZVar3 = *(Zone **)this;
    }
    BufferedZoneList<v8::internal::RegExpTree,2>::Add
              ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20),pRVar5,pZVar3);
    *(undefined8 *)pRVar10 = 0;
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

