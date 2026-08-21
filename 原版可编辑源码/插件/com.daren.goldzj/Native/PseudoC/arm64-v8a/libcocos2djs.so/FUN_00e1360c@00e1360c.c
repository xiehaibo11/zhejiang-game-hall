
bool FUN_00e1360c(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
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
  lVar6 = -param_3;
  if (-1 < param_3) {
    lVar6 = param_3;
  }
  param_4 = param_4 + param_2;
  lVar7 = -param_4;
  if (-1 < param_4) {
    lVar7 = param_4;
  }
  lVar8 = lVar5;
  if (lVar5 <= lVar4) {
    lVar8 = lVar4;
    lVar4 = lVar5;
  }
  lVar5 = lVar3;
  if (lVar3 <= lVar2) {
    lVar5 = lVar2;
    lVar2 = lVar3;
  }
  lVar3 = lVar6;
  if (lVar6 <= lVar7) {
    lVar3 = lVar7;
    lVar7 = lVar6;
  }
  uVar1 = lVar3 + ((ulong)(lVar7 * 3) >> 3);
  return (long)((lVar5 + ((ulong)(lVar2 * 3) >> 3) + lVar8 + ((ulong)(lVar4 * 3) >> 3)) - uVar1) <
         (long)(uVar1 >> 4);
}

