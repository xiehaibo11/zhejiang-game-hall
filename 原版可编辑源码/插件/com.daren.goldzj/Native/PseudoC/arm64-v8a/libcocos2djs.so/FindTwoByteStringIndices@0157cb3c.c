
/* v8::internal::FindTwoByteStringIndices(v8::internal::Vector<unsigned short const>, unsigned
   short, std::__ndk1::vector<int, std::__ndk1::allocator<int> >*, unsigned int) */

void __thiscall
v8::internal::FindTwoByteStringIndices
          (internal *this,long param_2,short param_3,
          vector<int,std::__ndk1::allocator<int>> *param_4,int param_5)

{
  internal *piVar1;
  int local_44;
  
  if ((param_5 != 0) && (0 < param_2 << 0x20)) {
    piVar1 = this;
    do {
      if (*(short *)piVar1 == param_3) {
        local_44 = (int)((ulong)((long)piVar1 - (long)this) >> 1);
        if (*(int **)(param_4 + 8) < *(int **)(param_4 + 0x10)) {
          **(int **)(param_4 + 8) = local_44;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
        }
        else {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                    (param_4,&local_44);
        }
        param_5 = param_5 + -1;
      }
    } while ((param_5 != 0) && (piVar1 = piVar1 + 2, piVar1 < this + ((param_2 << 0x20) >> 0x1f)));
  }
  return;
}

