
/* v8::internal::EmbedderDataArray::EnsureCapacity(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::EmbedderDataArray>, int) */

long * v8::internal::EmbedderDataArray::EnsureCapacity(Factory *param_1,long *param_2,int param_3)

{
  long *plVar1;
  
  plVar1 = param_2;
  if (*(int *)(*param_2 + 3) >> 1 <= param_3) {
    plVar1 = (long *)Factory::NewEmbedderDataArray(param_1,param_3 + 1);
    MemCopy((void *)(*plVar1 + 7),(void *)(*param_2 + 7),
            (long)(int)((*(uint *)(*param_2 + 3) & 0x3ffffffe) << 2));
  }
  return plVar1;
}

