
/* v8::internal::Map::ShareDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Descriptor*) */

long * v8::internal::Map::ShareDescriptor
                 (Isolate *param_1,ulong *param_2,ulong *param_3,Descriptor *param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  CanonicalHandleScope *this;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong local_58;
  
  pIVar1 = param_1 + 0x95a0;
  plVar4 = (long *)CopyDropDescriptors();
  puVar7 = *(ulong **)param_4;
  uVar6 = *puVar7;
  if ((*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40) &&
     ((*(byte *)(uVar6 + 7) >> 3 & 1) != 0)) {
    *(uint *)(*plVar4 + 0xb) = *(uint *)(*plVar4 + 0xb) | 0x10000000;
  }
  uVar6 = *param_3;
  if (*(short *)(uVar6 + 3) == *(short *)(uVar6 + 5)) {
    if (*(short *)(uVar6 + 5) == 0) {
      param_3 = (ulong *)DescriptorArray::Allocate(param_1,0,1);
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      goto joined_r0x010ede64;
    }
    uVar3 = (uint)*(short *)(uVar6 + 5);
    if (0x3fc < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 <= max_slack");
    }
    uVar2 = 0x3fc - uVar3;
    if ((int)(uVar3 >> 2) <= (int)(0x3fc - uVar3)) {
      uVar2 = uVar3 >> 2;
    }
    if ((int)uVar3 < 4) {
      uVar2 = 1;
    }
    EnsureDescriptorSlack(param_1,param_2,uVar2);
    uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_3 = *(ulong **)pIVar1;
      if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
        param_3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = param_3 + 1;
      *param_3 = uVar6;
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      goto joined_r0x010ede64;
    }
    param_3 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x010ede64:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar5 = *(undefined8 **)pIVar1;
    if (puVar5 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar5 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)pIVar1 = puVar5 + 1;
    *puVar5 = 0;
  }
  else {
    CanonicalHandleScope::Lookup(this,0);
  }
  local_58 = *param_3;
  DescriptorArray::Append((DescriptorArray *)&local_58,param_4);
  local_58 = *plVar4;
  SetInstanceDescriptors((Map *)&local_58,param_1,*param_3,(int)*(short *)(*param_3 + 5));
  ConnectTransition(param_1,param_2,plVar4,puVar7,0);
  return plVar4;
}

