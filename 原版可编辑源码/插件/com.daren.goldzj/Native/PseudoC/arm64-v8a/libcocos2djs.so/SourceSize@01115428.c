
/* v8::internal::SharedFunctionInfo::SourceSize() */

int __thiscall v8::internal::SharedFunctionInfo::SourceSize(SharedFunctionInfo *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = EndPosition(this);
  iVar2 = StartPosition(this);
  return iVar1 - iVar2;
}

