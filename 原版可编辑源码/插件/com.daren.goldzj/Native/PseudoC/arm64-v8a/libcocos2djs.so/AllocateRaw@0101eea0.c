
/* v8::internal::CodeLargeObjectSpace::AllocateRaw(int) */

void __thiscall
v8::internal::CodeLargeObjectSpace::AllocateRaw(CodeLargeObjectSpace *this,int param_1)

{
  OldLargeObjectSpace::AllocateRaw((OldLargeObjectSpace *)this,param_1,1);
  return;
}

