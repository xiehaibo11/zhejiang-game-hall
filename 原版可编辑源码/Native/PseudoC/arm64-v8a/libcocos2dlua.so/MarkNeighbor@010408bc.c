
/* p2t::Triangle::MarkNeighbor(p2t::Triangle&) */

void __thiscall p2t::Triangle::MarkNeighbor(Triangle *this,Triangle *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(this + 0x10);
  lVar2 = *(long *)(this + 0x18);
  if ((((lVar6 == lVar1) || (lVar7 = *(long *)(param_1 + 0x10), lVar7 == lVar1)) ||
      (lVar8 = *(long *)(param_1 + 0x18), lVar8 == lVar1)) &&
     (((lVar6 == lVar2 || (lVar7 = *(long *)(param_1 + 0x10), lVar7 == lVar2)) ||
      (lVar8 = *(long *)(param_1 + 0x18), lVar8 == lVar2)))) {
    *(Triangle **)(this + 0x20) = param_1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    if (((lVar7 == lVar1) && (lVar6 == lVar2)) || ((lVar7 == lVar2 && (lVar6 == lVar1)))) {
      *(Triangle **)(param_1 + 0x20) = this;
      return;
    }
    lVar8 = *(long *)(param_1 + 8);
    if ((lVar7 == lVar2 && lVar8 == lVar1) || (lVar7 == lVar1 && lVar8 == lVar2)) goto LAB_01040b24;
    if ((lVar6 != lVar2 || lVar8 != lVar1) && (lVar6 != lVar1 || lVar8 != lVar2)) {
      return;
    }
LAB_01040a30:
    *(Triangle **)(param_1 + 0x30) = this;
    return;
  }
  lVar5 = *(long *)(this + 8);
  if (((lVar6 == lVar5) || (lVar7 == lVar5)) || (lVar8 == lVar5)) {
    if (((lVar6 == lVar2) || (lVar7 == lVar2)) || (lVar8 == lVar2)) {
      *(Triangle **)(this + 0x28) = param_1;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if (((lVar1 == lVar5) && (lVar6 == lVar2)) || ((lVar1 == lVar2 && (lVar6 == lVar5)))) {
        *(Triangle **)(param_1 + 0x20) = this;
        return;
      }
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar1 == lVar2 && lVar7 == lVar5) || (lVar1 == lVar5 && lVar7 == lVar2))
      goto LAB_01040b24;
      bVar3 = lVar7 == lVar2;
      bVar4 = lVar6 == lVar2;
    }
    else {
      if (((lVar6 != lVar5) && (lVar7 != lVar5)) && (lVar8 != lVar5)) {
        return;
      }
      if (((lVar6 != lVar1) && (lVar7 != lVar1)) && (lVar8 != lVar1)) {
        return;
      }
      *(Triangle **)(this + 0x30) = param_1;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      if (((lVar2 == lVar5) && (lVar6 == lVar1)) || ((lVar2 == lVar1 && (lVar6 == lVar5)))) {
        *(Triangle **)(param_1 + 0x20) = this;
        return;
      }
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar2 == lVar1 && lVar7 == lVar5) || (lVar2 == lVar5 && lVar7 == lVar1)) {
LAB_01040b24:
        *(Triangle **)(param_1 + 0x28) = this;
        return;
      }
      bVar3 = lVar7 == lVar1;
      bVar4 = lVar6 == lVar1;
    }
    if (((bool)(bVar4 & lVar7 == lVar5)) || ((bool)(lVar6 == lVar5 & bVar3))) goto LAB_01040a30;
  }
  return;
}

