
/* v8::internal::compiler::UseInterval::Intersect(v8::internal::compiler::UseInterval const*) const
    */

int __thiscall
v8::internal::compiler::UseInterval::Intersect(UseInterval *this,UseInterval *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 < *(int *)this) {
    iVar1 = Intersect(param_1,this);
  }
  else if (*(int *)(this + 4) <= iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}

