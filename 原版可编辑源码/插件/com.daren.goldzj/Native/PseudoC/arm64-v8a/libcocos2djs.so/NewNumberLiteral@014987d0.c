
/* v8::internal::AstNodeFactory::NewNumberLiteral(double, int) */

void __thiscall
v8::internal::AstNodeFactory::NewNumberLiteral(AstNodeFactory *this,double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  Zone *pZVar3;
  
  if ((((1073741823.0 < param_1) || (param_1 < -1073741824.0)) || (param_1 == -0.0)) ||
     ((double)(int)param_1 != param_1)) {
    pZVar3 = *(Zone **)this;
    piVar1 = *(int **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)piVar1) < 0x10) {
      piVar1 = (int *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(int **)(pZVar3 + 0x10) = piVar1 + 4;
    }
    iVar2 = 0xa9;
    *(double *)(piVar1 + 2) = param_1;
  }
  else {
    pZVar3 = *(Zone **)this;
    piVar1 = *(int **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)piVar1) < 0x10) {
      piVar1 = (int *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(int **)(pZVar3 + 0x10) = piVar1 + 4;
    }
    piVar1[2] = (int)param_1;
    iVar2 = 0x29;
  }
  *piVar1 = param_2;
  piVar1[1] = iVar2;
  return;
}

