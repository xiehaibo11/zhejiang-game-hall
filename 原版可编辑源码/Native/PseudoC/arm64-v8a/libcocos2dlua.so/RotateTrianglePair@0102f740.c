
/* p2t::Sweep::RotateTrianglePair(p2t::Triangle&, p2t::Point&, p2t::Triangle&, p2t::Point&) const */

void __thiscall
p2t::Sweep::RotateTrianglePair
          (Sweep *this,Triangle *param_1,Point *param_2,Triangle *param_3,Point *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  Triangle *pTVar9;
  Triangle *pTVar10;
  Triangle *pTVar11;
  Triangle *pTVar12;
  
                    /* catch() { ... } // from try @ 0102f704 with catch @ 0102f774 */
  pTVar9 = (Triangle *)Triangle::NeighborCCW(param_1,param_2);
  pTVar10 = (Triangle *)Triangle::NeighborCW(param_1,param_2);
  pTVar11 = (Triangle *)Triangle::NeighborCCW(param_3,param_4);
  pTVar12 = (Triangle *)Triangle::NeighborCW(param_3,param_4);
  bVar1 = Triangle::GetConstrainedEdgeCCW(param_1,param_2);
  bVar2 = Triangle::GetConstrainedEdgeCW(param_1,param_2);
  bVar3 = Triangle::GetConstrainedEdgeCCW(param_3,param_4);
  bVar4 = Triangle::GetConstrainedEdgeCW(param_3,param_4);
  bVar5 = Triangle::GetDelunayEdgeCCW(param_1,param_2);
  bVar6 = Triangle::GetDelunayEdgeCW(param_1,param_2);
  bVar7 = Triangle::GetDelunayEdgeCCW(param_3,param_4);
  bVar8 = Triangle::GetDelunayEdgeCW(param_3,param_4);
  Triangle::Legalize(param_1,param_2,param_4);
  Triangle::Legalize(param_3,param_4,param_2);
  Triangle::SetDelunayEdgeCCW(param_3,param_2,(bool)(bVar5 & 1));
  Triangle::SetDelunayEdgeCW(param_1,param_2,(bool)(bVar6 & 1));
  Triangle::SetDelunayEdgeCCW(param_1,param_4,(bool)(bVar7 & 1));
  Triangle::SetDelunayEdgeCW(param_3,param_4,(bool)(bVar8 & 1));
  Triangle::SetConstrainedEdgeCCW(param_3,param_2,(bool)(bVar1 & 1));
  Triangle::SetConstrainedEdgeCW(param_1,param_2,(bool)(bVar2 & 1));
  Triangle::SetConstrainedEdgeCCW(param_1,param_4,(bool)(bVar3 & 1));
  Triangle::SetConstrainedEdgeCW(param_3,param_4,(bool)(bVar4 & 1));
  Triangle::ClearNeighbors(param_1);
  Triangle::ClearNeighbors(param_3);
  if (pTVar9 != (Triangle *)0x0) {
    Triangle::MarkNeighbor(param_3,pTVar9);
  }
  if (pTVar10 != (Triangle *)0x0) {
    Triangle::MarkNeighbor(param_1,pTVar10);
  }
  if (pTVar11 != (Triangle *)0x0) {
    Triangle::MarkNeighbor(param_1,pTVar11);
  }
  if (pTVar12 != (Triangle *)0x0) {
    Triangle::MarkNeighbor(param_3,pTVar12);
  }
  Triangle::MarkNeighbor(param_1,param_3);
  return;
}

