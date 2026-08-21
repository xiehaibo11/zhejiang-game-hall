
/* p2t::Sweep::NextFlipTriangle(p2t::SweepContext&, int, p2t::Triangle&, p2t::Triangle&,
   p2t::Point&, p2t::Point&) */

Triangle * __thiscall
p2t::Sweep::NextFlipTriangle
          (Sweep *this,SweepContext *param_1,int param_2,Triangle *param_3,Triangle *param_4,
          Point *param_5,Point *param_6)

{
  Triangle *pTVar1;
  int iVar2;
  
  pTVar1 = param_3;
  if (param_2 != 1) {
    pTVar1 = param_4;
    param_4 = param_3;
  }
  iVar2 = Triangle::EdgeIndex(param_4,param_5,param_6);
                    /* catch() { ... } // from try @ 01030404 with catch @ 01030474 */
  param_4[(long)iVar2 + 3] = (Triangle)0x1;
  Legalize(this,param_1,param_4);
  Triangle::ClearDelunayEdges(param_4);
  return pTVar1;
}

