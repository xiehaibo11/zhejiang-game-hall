
/* v8::internal::LayoutDescriptor::NewForTesting(v8::internal::Isolate*, int) */

long * v8::internal::LayoutDescriptor::NewForTesting(Isolate *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (param_2 < 0x1f) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      plVar3 = *(long **)(param_1 + 0x95a0);
      if (plVar3 == *(long **)(param_1 + 0x95a8)) {
        plVar3 = (long *)HandleScope::Extend(param_1);
      }
      *(long **)(param_1 + 0x95a0) = plVar3 + 1;
      *plVar3 = 0;
    }
    else {
      plVar3 = (long *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
    }
  }
  else {
    uVar1 = param_2 + 0x1fU & 0xffffffe0;
    uVar2 = uVar1 | 7;
    if (-1 < (int)(param_2 + 0x1fU)) {
      uVar2 = uVar1;
    }
    plVar3 = (long *)Factory::NewByteArray((Factory *)param_1,(int)uVar2 >> 3,1);
    memset((void *)(*plVar3 + 7),0,(long)(int)((*(int *)(*plVar3 + 3) >> 1) + 3U & 0xfffffffc));
  }
  return plVar3;
}

