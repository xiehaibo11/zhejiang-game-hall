
/* v8::internal::RegExpMatchInfo::ReserveCaptures(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>, int) */

long * v8::internal::RegExpMatchInfo::ReserveCaptures(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_2;
  iVar1 = param_3 * 2 + 5;
  iVar2 = *(int *)(lVar4 + 3) >> 1;
  if (iVar2 < iVar1) {
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = param_3 * 2 + 6;
    }
    iVar3 = iVar3 >> 1;
    if (iVar3 < 3) {
      iVar3 = 2;
    }
    param_2 = (long *)Factory::CopyFixedArrayAndGrow(param_1,param_2,(iVar3 + iVar1) - iVar2);
    lVar4 = *param_2;
  }
  *(int *)(lVar4 + 7) = param_3 * 4 + 4;
  return param_2;
}

