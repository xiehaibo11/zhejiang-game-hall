
/* v8::internal::LayoutDescriptor::EnsureCapacity(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::LayoutDescriptor>, int) */

ulong * v8::internal::LayoutDescriptor::EnsureCapacity(Isolate *param_1,ulong *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  
  if ((*param_2 & 1) == 0) {
    iVar4 = 0x1e;
  }
  else {
    iVar4 = (*(uint *)(*param_2 + 3) & 0x3ffffffe) << 2;
  }
  if (iVar4 < param_3) {
    if (param_3 < 0x1f) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(param_1 + 0x95a0);
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
        *puVar3 = 0;
        uVar5 = *param_2;
        param_2 = puVar3;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
        uVar5 = *param_2;
        param_2 = puVar3;
      }
    }
    else {
      uVar1 = param_3 + 0x1fU & 0xffffffe0;
      uVar2 = uVar1 | 7;
      if (-1 < (int)(param_3 + 0x1fU)) {
        uVar2 = uVar1;
      }
      puVar3 = (ulong *)Factory::NewByteArray((Factory *)param_1,(int)uVar2 >> 3,1);
      memset((void *)(*puVar3 + 7),0,(long)(int)((*(int *)(*puVar3 + 3) >> 1) + 3U & 0xfffffffc));
      uVar5 = *param_2;
      param_2 = puVar3;
    }
    if ((uVar5 & 1) == 0) {
      *(int *)(*param_2 + 7) = (int)uVar5 >> 1;
    }
    else {
      memcpy((void *)(*param_2 + 7),(void *)(uVar5 + 7),
             (long)(int)((*(int *)(uVar5 + 3) >> 1) + 3U & 0xfffffffc));
    }
  }
  return param_2;
}

