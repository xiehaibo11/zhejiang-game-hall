
/* ClipperLib::GetHorzDirection(ClipperLib::TEdge&, ClipperLib::Direction&, long long&, long long&)
    */

void ClipperLib::GetHorzDirection
               (TEdge *param_1,Direction *param_2,longlong *param_3,longlong *param_4)

{
  TEdge *pTVar1;
  longlong lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)param_1;
  lVar4 = *(long *)(param_1 + 0x20);
  pTVar1 = param_1 + 0x20;
  lVar2 = lVar3;
  if (lVar4 <= lVar3) {
    pTVar1 = param_1;
    lVar2 = lVar4;
  }
  *param_3 = lVar2;
  *param_4 = *(longlong *)pTVar1;
  *(uint *)param_2 = (uint)(lVar3 < lVar4);
  return;
}

