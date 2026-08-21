
/* v8::internal::FindOneByteStringIndices(v8::internal::Vector<unsigned char const>, unsigned char,
   std::__ndk1::vector<int, std::__ndk1::allocator<int> >*, unsigned int) */

void __thiscall
v8::internal::FindOneByteStringIndices
          (internal *this,int param_2,uint param_3,vector<int,std::__ndk1::allocator<int>> *param_4,
          int param_5)

{
  internal *__s;
  void *pvVar1;
  int local_44;
  
  if (param_5 != 0) {
    __s = this;
    do {
      pvVar1 = memchr(__s,param_3 & 0xff,(size_t)(this + ((long)param_2 - (long)__s)));
      if (pvVar1 == (void *)0x0) {
        return;
      }
      local_44 = (int)pvVar1 - (int)this;
      if (*(int **)(param_4 + 8) < *(int **)(param_4 + 0x10)) {
        **(int **)(param_4 + 8) = local_44;
        *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
      }
      else {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                  (param_4,&local_44);
      }
      param_5 = param_5 + -1;
      __s = (internal *)((long)pvVar1 + 1);
    } while (param_5 != 0);
  }
  return;
}

