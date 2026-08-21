
bool ft_corner_is_flat(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = -param_4;
  if (-1 < param_4) {
    lVar2 = param_4;
  }
  lVar3 = -param_3;
  if (-1 < param_3) {
    lVar3 = param_3;
  }
  lVar4 = -param_2;
  if (-1 < param_2) {
    lVar4 = param_2;
  }
  lVar5 = -param_1;
  if (-1 < param_1) {
    lVar5 = param_1;
  }
  param_3 = param_3 + param_1;
  lVar1 = -param_3;
  if (-1 < param_3) {
    lVar1 = param_3;
  }
  param_4 = param_4 + param_2;
  lVar6 = -param_4;
  if (-1 < param_4) {
    lVar6 = param_4;
  }
  lVar7 = lVar5;
  if (lVar5 <= lVar4) {
    lVar7 = lVar4;
    lVar4 = lVar5;
  }
                    /* try { // try from 0105ae5c to 0115ae6b has its CatchHandler @ 0105ae7c */
  lVar5 = lVar3;
  if (lVar3 <= lVar2) {
    lVar5 = lVar2;
    lVar2 = lVar3;
  }
  lVar3 = lVar6;
  if (lVar1 <= lVar6) {
    lVar3 = lVar1;
  }
  if (lVar1 <= lVar6) {
    lVar1 = lVar6;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105ae5c with catch @ 0105ae7c
                        */
  lVar1 = lVar1 + (lVar3 * 3 >> 3);
  return (lVar7 + (lVar4 * 3 >> 3) + lVar5 + (lVar2 * 3 >> 3)) - lVar1 < lVar1 >> 4;
}

