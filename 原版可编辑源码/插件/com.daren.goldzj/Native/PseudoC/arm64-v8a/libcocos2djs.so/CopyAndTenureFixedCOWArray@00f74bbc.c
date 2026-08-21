
/* v8::internal::Factory::CopyAndTenureFixedCOWArray(v8::internal::Handle<v8::internal::FixedArray>)
    */

void __thiscall v8::internal::Factory::CopyAndTenureFixedCOWArray(Factory *this,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)CopyFixedArrayUpTo(this,param_2,*(int *)(*param_2 + 3) >> 1,1);
  *(undefined4 *)(*plVar1 + -1) = *(undefined4 *)(this + 0xe8);
  return;
}

