
/* v8::internal::Factory::NewClassPositions(int, int) */

void __thiscall v8::internal::Factory::NewClassPositions(Factory *this,int param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NewStruct(this,0x5a,1);
  *(int *)(*plVar1 + 3) = param_1 << 1;
  *(int *)(*plVar1 + 7) = param_2 << 1;
  return;
}

