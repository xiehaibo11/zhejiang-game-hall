
/* ClipperLib::InitEdge2(ClipperLib::TEdge&, ClipperLib::PolyType) */

void ClipperLib::InitEdge2(long *param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_1[0xc];
  if (param_1[3] < *(long *)(lVar1 + 0x18)) {
    param_1[5] = param_1[3];
    param_1[4] = param_1[2];
    plVar2 = param_1;
  }
  else {
    plVar2 = param_1 + 4;
    param_1[1] = param_1[3];
    *param_1 = param_1[2];
  }
  lVar3 = *(long *)(lVar1 + 0x10);
  plVar2[1] = *(long *)(lVar1 + 0x18);
  *plVar2 = lVar3;
  lVar1 = param_1[5] - param_1[1];
  param_1[6] = param_1[4] - *param_1;
  param_1[7] = lVar1;
  if (lVar1 == 0) {
    dVar4 = -1e+40;
  }
  else {
                    /* try { // try from 010314b4 to 011314c3 has its CatchHandler @ 01031720 */
    dVar4 = (double)(param_1[4] - *param_1) / (double)lVar1;
  }
  param_1[8] = (long)dVar4;
  *(undefined4 *)(param_1 + 9) = param_2;
  return;
}

