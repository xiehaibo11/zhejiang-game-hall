
/* v8::internal::RegExpMatchInfo::New(v8::internal::Isolate*, int) */

long * v8::internal::RegExpMatchInfo::New(Isolate *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)Factory::NewRegExpMatchInfo((Factory *)param_1);
  lVar5 = *plVar4;
  iVar1 = param_2 * 2 + 5;
  iVar2 = *(int *)(lVar5 + 3) >> 1;
  if (iVar2 < iVar1) {
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = param_2 * 2 + 6;
    }
    iVar3 = iVar3 >> 1;
    if (iVar3 < 3) {
      iVar3 = 2;
    }
    plVar4 = (long *)Factory::CopyFixedArrayAndGrow(param_1,plVar4,(iVar3 + iVar1) - iVar2);
    lVar5 = *plVar4;
  }
  *(int *)(lVar5 + 7) = param_2 * 4 + 4;
  return plVar4;
}

