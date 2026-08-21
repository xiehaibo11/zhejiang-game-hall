
/* ClipperLib::GetOverlapSegment(ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint,
   ClipperLib::IntPoint, ClipperLib::IntPoint&, ClipperLib::IntPoint&) */

bool ClipperLib::GetOverlapSegment
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,long param_8,long *param_9,long *param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 - param_3;
  lVar1 = -lVar3;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  lVar4 = param_2 - param_4;
  lVar3 = -lVar4;
  if (-1 < lVar4) {
    lVar3 = lVar4;
  }
                    /* try { // try from 01031524 to 01131533 has its CatchHandler @ 01031700 */
  if (lVar1 <= lVar3) {
    lVar1 = param_7;
    lVar3 = param_6;
    if (param_8 <= param_6) {
      lVar1 = param_5;
      param_5 = param_7;
      lVar3 = param_8;
      param_8 = param_6;
    }
    lVar4 = param_3;
    lVar2 = param_2;
    if (param_4 <= param_2) {
      lVar4 = param_1;
      param_1 = param_3;
      lVar2 = param_4;
      param_4 = param_2;
    }
    if (param_8 <= param_4) {
      param_4 = param_8;
      lVar4 = lVar1;
    }
    *param_9 = lVar4;
    param_9[1] = param_4;
    if (lVar2 <= lVar3) {
      lVar2 = lVar3;
      param_1 = param_5;
    }
    *param_10 = param_1;
    param_10[1] = lVar2;
    return lVar2 < param_9[1];
  }
  lVar1 = param_8;
  lVar3 = param_5;
  if (param_5 <= param_7) {
    lVar1 = param_6;
    lVar3 = param_7;
    param_6 = param_8;
    param_7 = param_5;
  }
  lVar4 = param_4;
  lVar2 = param_1;
  if (param_1 <= param_3) {
    lVar4 = param_2;
    lVar2 = param_3;
    param_2 = param_4;
    param_3 = param_1;
  }
  if (param_3 <= param_7) {
    lVar4 = lVar1;
    param_3 = param_7;
  }
  *param_9 = param_3;
  param_9[1] = lVar4;
  if (lVar3 <= lVar2) {
    param_2 = param_6;
    lVar2 = lVar3;
  }
  *param_10 = lVar2;
  param_10[1] = param_2;
  return *param_9 < lVar2;
}

