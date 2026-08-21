
/* v8::internal::IncrementalStringBuilder::AppendStringByCopy(v8::internal::Handle<v8::internal::String>)
    */

void __thiscall
v8::internal::IncrementalStringBuilder::AppendStringByCopy
          (IncrementalStringBuilder *this,long *param_2)

{
  int iVar1;
  
  String::WriteToFlat<unsigned_char>
            (*param_2,**(long **)(this + 0x20) + (long)*(int *)(this + 0x14) + 0xb,0,
             *(undefined4 *)(*param_2 + 7));
  iVar1 = *(int *)(this + 0x14) + *(int *)(*param_2 + 7);
  *(int *)(this + 0x14) = iVar1;
  if (iVar1 == *(int *)(this + 0x10)) {
    Extend(this);
    return;
  }
  return;
}

