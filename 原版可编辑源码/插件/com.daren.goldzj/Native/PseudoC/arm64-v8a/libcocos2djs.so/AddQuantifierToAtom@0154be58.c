
/* v8::internal::RegExpBuilder::AddQuantifierToAtom(int, int,
   v8::internal::RegExpQuantifier::QuantifierType) */

undefined8 __thiscall
v8::internal::RegExpBuilder::AddQuantifierToAtom
          (RegExpBuilder *this,uint param_1,uint param_2,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  Zone *pZVar6;
  ulong uVar7;
  RegExpTree *pRVar8;
  RegExpTree *pRVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar2 = *(ushort *)(this + 0x18);
  if (uVar2 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar2);
  }
  if (this[8] != (RegExpBuilder)0x0) {
    this[8] = (RegExpBuilder)0x0;
    return 1;
  }
  plVar10 = *(long **)(this + 0x10);
  if (plVar10 == (long *)0x0) {
    plVar10 = *(long **)(this + 0x30);
    if (plVar10 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((long)plVar10 + 0xc);
    }
    pRVar9 = *(RegExpTree **)(this + 0x38);
    if (pRVar9 != (RegExpTree *)0x0) {
      iVar5 = iVar5 + 1;
    }
    if (0 < iVar5) {
      if ((plVar10 == (long *)0x0) ||
         (iVar5 = *(int *)((long)plVar10 + 0xc) + -1, *(int *)((long)plVar10 + 0xc) < 1)) {
        *(undefined8 *)(this + 0x38) = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*plVar10 + (long)iVar5 * 8);
        *(int *)((long)plVar10 + 0xc) = iVar5;
        *(undefined8 *)(this + 0x38) = uVar11;
      }
      goto LAB_0154bf50;
    }
    plVar10 = *(long **)(this + 0x20);
    if (plVar10 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((long)plVar10 + 0xc);
    }
    pRVar8 = *(RegExpTree **)(this + 0x28);
    if (pRVar8 != (RegExpTree *)0x0) {
      iVar5 = iVar5 + 1;
    }
    if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((plVar10 == (long *)0x0) ||
       (iVar5 = *(int *)((long)plVar10 + 0xc) + -1, *(int *)((long)plVar10 + 0xc) < 1)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*plVar10 + (long)iVar5 * 8);
      *(int *)((long)plVar10 + 0xc) = iVar5;
    }
    *(undefined8 *)(this + 0x28) = uVar11;
    uVar7 = (**(code **)(*(long *)pRVar8 + 0xe0))(pRVar8);
    if (((uVar7 & 1) != 0) &&
       ((((byte)this[0xc] >> 4 & 1) != 0 ||
        (lVar13 = (**(code **)(*(long *)pRVar8 + 0xd8))(pRVar8), *(int *)(lVar13 + 0x1c) == 1)))) {
      return 0;
    }
    iVar5 = (**(code **)(*(long *)pRVar8 + 0x40))(pRVar8);
    pRVar9 = pRVar8;
    if (iVar5 == 0) {
      if (param_1 == 0) {
        return 1;
      }
      pZVar6 = *(Zone **)this;
      goto LAB_0154c01c;
    }
  }
  else {
    iVar5 = *(int *)((long)plVar10 + 0xc);
    lVar12 = (long)iVar5;
    lVar13 = *plVar10;
    if (1 < iVar5) {
      pZVar6 = *(Zone **)this;
      lVar14 = (long)(iVar5 + -1);
      pRVar9 = *(RegExpTree **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar9) < 0x20) {
        pRVar9 = (RegExpTree *)Zone::NewExpand(pZVar6,0x20);
      }
      else {
        *(RegExpTree **)(pZVar6 + 0x10) = pRVar9 + 0x20;
      }
      uVar1 = *(undefined4 *)(this + 0xc);
      *(undefined ***)pRVar9 = &PTR__RegExpTree_01cc7678;
      *(long *)(pRVar9 + 8) = lVar13;
      *(long *)(pRVar9 + 0x10) = lVar14;
      *(undefined4 *)(pRVar9 + 0x18) = uVar1;
      BufferedZoneList<v8::internal::RegExpTree,2>::Add
                ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x30),pRVar9,*(Zone **)this
                );
      lVar13 = lVar13 + lVar14 * 2;
      lVar12 = lVar12 - lVar14;
    }
    pZVar6 = *(Zone **)this;
    *(undefined8 *)(this + 0x10) = 0;
    pRVar9 = *(RegExpTree **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar9) < 0x20) {
      pRVar9 = (RegExpTree *)Zone::NewExpand(pZVar6,0x20);
    }
    else {
      *(RegExpTree **)(pZVar6 + 0x10) = pRVar9 + 0x20;
    }
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined ***)pRVar9 = &PTR__RegExpTree_01cc7678;
    *(long *)(pRVar9 + 8) = lVar13;
    *(long *)(pRVar9 + 0x10) = lVar12;
    *(undefined4 *)(pRVar9 + 0x18) = uVar1;
LAB_0154bf50:
    FlushText(this);
  }
  pZVar6 = *(Zone **)this;
  pRVar8 = *(RegExpTree **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar8) < 0x28) {
    pRVar8 = (RegExpTree *)Zone::NewExpand(pZVar6,0x28);
  }
  else {
    *(RegExpTree **)(pZVar6 + 0x10) = pRVar8 + 0x28;
  }
  *(uint *)(pRVar8 + 0x10) = param_1;
  *(uint *)(pRVar8 + 0x14) = param_2;
  *(undefined4 *)(pRVar8 + 0x20) = param_4;
  *(undefined ***)pRVar8 = &PTR__RegExpTree_01cc78c8;
  *(RegExpTree **)(pRVar8 + 8) = pRVar9;
  if ((int)param_1 < 1) {
LAB_0154bfb8:
    iVar5 = (**(code **)(*(long *)pRVar9 + 0x38))(pRVar9);
    iVar5 = iVar5 * param_1;
  }
  else {
    iVar4 = (**(code **)(*(long *)pRVar9 + 0x38))(pRVar9);
    iVar5 = 0x7fffffff;
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = 0x7fffffff / param_1;
    }
    if (iVar4 <= (int)uVar3) goto LAB_0154bfb8;
  }
  *(int *)(pRVar8 + 0x18) = iVar5;
  if ((int)param_2 < 1) {
LAB_0154bff8:
    iVar5 = (**(code **)(*(long *)pRVar9 + 0x40))(pRVar9);
    iVar5 = iVar5 * param_2;
  }
  else {
    iVar4 = (**(code **)(*(long *)pRVar9 + 0x40))(pRVar9);
    iVar5 = 0x7fffffff;
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = 0x7fffffff / param_2;
    }
    if (iVar4 <= (int)uVar3) goto LAB_0154bff8;
  }
  *(int *)(pRVar8 + 0x1c) = iVar5;
  pZVar6 = *(Zone **)this;
LAB_0154c01c:
  BufferedZoneList<v8::internal::RegExpTree,2>::Add
            ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20),pRVar8,pZVar6);
  return 1;
}

