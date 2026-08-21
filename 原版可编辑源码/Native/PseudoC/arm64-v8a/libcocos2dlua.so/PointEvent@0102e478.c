
/* p2t::Sweep::PointEvent(p2t::SweepContext&, p2t::Point&) */

Node * __thiscall p2t::Sweep::PointEvent(Sweep *this,SweepContext *param_1,Point *param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar1 = (Node *)SweepContext::LocateNode(param_1,param_2);
  pNVar2 = (Node *)NewFrontTriangle(this,param_1,param_2,pNVar1);
  if (*(double *)param_2 <= **(double **)pNVar1 + 1e-12) {
    Fill(this,param_1,pNVar1);
  }
  FillAdvancingFront(this,param_1,pNVar2);
  return pNVar2;
}

