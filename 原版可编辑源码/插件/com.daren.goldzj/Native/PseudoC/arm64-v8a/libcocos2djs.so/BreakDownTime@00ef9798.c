
/* v8::internal::DateCache::BreakDownTime(long, int*, int*, int*, int*, int*, int*, int*, int*) */

void __thiscall
v8::internal::DateCache::BreakDownTime
          (DateCache *this,long param_1,int *param_2,int *param_3,int *param_4,int *param_5,
          int *param_6,int *param_7,int *param_8,int *param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1;
  if (param_1 < 0) {
    lVar1 = param_1 + -86399999;
  }
  iVar2 = (int)(lVar1 / 86400000);
  iVar3 = (int)param_1 + iVar2 * -86400000;
  YearMonthDayFromDays(this,iVar2,param_2,param_3,param_4);
  iVar2 = (iVar2 + 4) % 7;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  *param_5 = iVar2;
  *param_6 = iVar3 / 3600000;
  *param_7 = (iVar3 / 60000) % 0x3c;
  *param_8 = (iVar3 / 1000) % 0x3c;
  *param_9 = iVar3 % 1000;
  return;
}

