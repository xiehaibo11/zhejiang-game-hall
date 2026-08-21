
/* p2t::Triangle::MarkConstrainedEdge(p2t::Point*, p2t::Point*) */

void __thiscall p2t::Triangle::MarkConstrainedEdge(Triangle *this,Point *param_1,Point *param_2)

{
  Point *pPVar1;
  Point *pPVar2;
  Point *pPVar3;
  
  pPVar1 = *(Point **)(this + 8);
  pPVar2 = *(Point **)(this + 0x10);
  if (((pPVar1 == param_2) && (pPVar2 == param_1)) || ((pPVar1 == param_1 && (pPVar2 == param_2))))
  {
    this[2] = (Triangle)0x1;
    return;
  }
  pPVar3 = *(Point **)(this + 0x18);
  if (((pPVar1 != param_2) || (pPVar3 != param_1)) && ((pPVar1 != param_1 || (pPVar3 != param_2))))
  {
    if ((pPVar2 == param_2 && pPVar3 == param_1) || (pPVar2 == param_1 && pPVar3 == param_2)) {
      *this = (Triangle)0x1;
    }
    return;
  }
  this[1] = (Triangle)0x1;
  return;
}

