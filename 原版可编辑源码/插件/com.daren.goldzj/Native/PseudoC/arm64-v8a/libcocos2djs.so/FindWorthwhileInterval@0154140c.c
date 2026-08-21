
/* v8::internal::BoyerMooreLookahead::FindWorthwhileInterval(int*, int*) */

bool __thiscall
v8::internal::BoyerMooreLookahead::FindWorthwhileInterval
          (BoyerMooreLookahead *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FindBestInterval(this,4,0,param_1,param_2);
  iVar1 = FindBestInterval(this,8,iVar1,param_1,param_2);
  iVar1 = FindBestInterval(this,0x10,iVar1,param_1,param_2);
  return iVar1 != 0;
}

