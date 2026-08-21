
/* p2t::Triangle::MarkNeighbor(p2t::Point*, p2t::Point*, p2t::Triangle*) */

void __thiscall
p2t::Triangle::MarkNeighbor(Triangle *this,Point *param_1,Point *param_2,Triangle *param_3)

{
  Point *pPVar1;
  Point *pPVar2;
  Triangle *pTVar3;
  Point *pPVar4;
  
  pPVar1 = *(Point **)(this + 0x10);
  pPVar2 = *(Point **)(this + 0x18);
  if (((pPVar2 == param_1) && (pPVar1 == param_2)) || ((pPVar2 == param_2 && (pPVar1 == param_1))))
  {
    pTVar3 = this + 0x20;
  }
  else {
    pPVar4 = *(Point **)(this + 8);
    if ((pPVar2 == param_2 && pPVar4 == param_1) || (pPVar2 == param_1 && pPVar4 == param_2)) {
      pTVar3 = this + 0x28;
    }
    else {
      if ((pPVar1 != param_2 || pPVar4 != param_1) && (pPVar1 != param_1 || pPVar4 != param_2)) {
        return;
      }
      pTVar3 = this + 0x30;
    }
  }
  *(Triangle **)pTVar3 = param_3;
  return;
}

