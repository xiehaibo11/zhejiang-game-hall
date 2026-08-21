
/* ClipperLib::Clipper::GetOutRec(int) */

void __thiscall ClipperLib::Clipper::GetOutRec(Clipper *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(*(long *)(this + 8) + (long)param_1 * 8);
  do {
    piVar3 = *(int **)(*(long *)(this + 8) + (long)*piVar2 * 8);
    bVar1 = piVar2 != piVar3;
    piVar2 = piVar3;
  } while (bVar1);
  return;
}

