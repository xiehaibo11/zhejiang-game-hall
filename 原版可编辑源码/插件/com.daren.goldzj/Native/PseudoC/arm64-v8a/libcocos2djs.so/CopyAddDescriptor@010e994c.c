
/* v8::internal::Map::CopyAddDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Descriptor*, v8::internal::TransitionFlag)
    */

void v8::internal::Map::CopyAddDescriptor
               (Isolate *param_1,ulong *param_2,Descriptor *param_3,int param_4)

{
  Isolate *pIVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *local_80;
  ulong *puStack_78;
  ulong local_70;
  Isolate *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  if ((param_4 == 0) && (uVar7 = *param_2, (*(uint *)(uVar7 + 0xb) >> 0x16 & 1) != 0)) {
    uVar6 = uVar7 & 0xffffffff00000000;
    if (((*(uint *)(uVar7 + 0x13) & 1) == 0) ||
       (uVar7 = uVar6 | *(uint *)(uVar7 + 0x13),
       *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2)) {
      uVar7 = *(ulong *)(uVar6 + 0xa0);
    }
    if ((int)uVar7 != *(int *)(param_1 + 0xa0)) {
      local_70 = *param_2;
      local_68 = param_1 + *(uint *)(local_70 + 0x23);
      local_80 = param_1;
      puStack_78 = param_2;
      if ((((ulong)local_68 & 1) == 0) || ((int)local_68 == 3)) {
        local_60 = 1;
      }
      else if (((ulong)local_68 & 3) == 1) {
        uVar7 = (ulong)local_68 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar7 + *(uint *)(local_68 + -1)) == 0x98) {
          local_60 = 4;
        }
        else if (*(short *)(uVar7 + *(uint *)(local_68 + -1)) == 100) {
          local_60 = 0;
        }
        else {
          local_60 = 2;
        }
      }
      else {
        if (((ulong)local_68 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_60 = 3;
      }
      uVar7 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_80);
      if ((uVar7 & 1) != 0) {
        ShareDescriptor(param_1,param_2,puVar3,param_3);
        goto LAB_010e9b24;
      }
    }
  }
  puVar4 = (undefined8 *)
           DescriptorArray::CopyUpTo(param_1,puVar3,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,1);
  local_80 = (Isolate *)*puVar4;
  DescriptorArray::Append((DescriptorArray *)&local_80,param_3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(undefined8 **)pIVar1;
    if (puVar5 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar5 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)pIVar1 = puVar5 + 1;
    *puVar5 = 0;
  }
  else {
    puVar5 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  CopyReplaceDescriptors
            (param_1,param_2,puVar4,puVar5,param_4,*(undefined8 *)param_3,"CopyAddDescriptor",0);
LAB_010e9b24:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

