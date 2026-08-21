
/* p2t::Triangle::MarkConstrainedEdge(p2t::Edge&) */

void __thiscall p2t::Triangle::MarkConstrainedEdge(Triangle *this,Edge *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  if (((lVar2 == lVar3) && (lVar4 == lVar1)) || ((lVar2 == lVar1 && (lVar4 == lVar3)))) {
    this[2] = (Triangle)0x1;
    return;
  }
  lVar5 = *(long *)(this + 0x18);
  if (((lVar2 != lVar3) || (lVar5 != lVar1)) && ((lVar2 != lVar1 || (lVar5 != lVar3)))) {
    if ((lVar4 == lVar3 && lVar5 == lVar1) || (lVar4 == lVar1 && lVar5 == lVar3)) {
      *this = (Triangle)0x1;
    }
    return;
  }
  this[1] = (Triangle)0x1;
  return;
}

