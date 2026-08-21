
/* v8::internal::Map::CopyReplaceDescriptors(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Handle<v8::internal::LayoutDescriptor>, v8::internal::TransitionFlag,
   v8::internal::MaybeHandle<v8::internal::Name>, char const*, v8::internal::SimpleTransitionFlag)
    */

long * v8::internal::Map::CopyReplaceDescriptors
                 (long param_1,long *param_2,long *param_3,undefined8 param_4,int param_5,
                 ulong *param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  Logger *this;
  long local_90;
  long *plStack_88;
  long local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)CopyDropDescriptors();
  if (((param_6 != (ulong *)0x0) &&
      (uVar3 = *param_6,
      *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40)) &&
     ((*(byte *)(uVar3 + 7) >> 3 & 1) != 0)) {
    *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) | 0x10000000;
  }
  if ((*(uint *)(*param_2 + 0xb) >> 0x14 & 1) == 0) {
    if (param_5 == 0) {
      local_80 = *param_2;
      local_78 = (ulong)*(uint *)(local_80 + 0x23) + param_1;
      if (((local_78 & 1) == 0) || ((int)local_78 == 3)) {
        local_70 = 1;
      }
      else if ((local_78 & 3) == 1) {
        uVar3 = local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar3 + *(uint *)(local_78 - 1)) == 0x98) {
          local_70 = 4;
        }
        else if (*(short *)(uVar3 + *(uint *)(local_78 - 1)) == 100) {
          local_70 = 0;
        }
        else {
          local_70 = 2;
        }
      }
      else {
        if ((local_78 & 3) != 3) goto LAB_010ef418;
        local_70 = 3;
      }
      local_90 = param_1;
      plStack_88 = param_2;
      uVar3 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_90);
      if ((uVar3 & 1) != 0) {
        local_90 = *plVar2;
        SetInstanceDescriptors((Map *)&local_90,param_1,*param_3,(int)*(short *)(*param_3 + 5));
        ConnectTransition(param_1,param_2,plVar2,param_6,param_8);
        goto LAB_010ef2ac;
      }
    }
    local_90 = *param_3;
    DescriptorArray::GeneralizeAllFields((DescriptorArray *)&local_90);
    local_90 = *plVar2;
    SetInstanceDescriptors((Map *)&local_90,param_1,*param_3,(int)*(short *)(*param_3 + 5));
    if (param_5 == 0) {
      *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) | 0x100000;
    }
  }
  else {
    local_90 = *plVar2;
    SetInstanceDescriptors((Map *)&local_90,param_1,*param_3,(int)*(short *)(*param_3 + 5));
  }
LAB_010ef2ac:
  if (FLAG_trace_maps != '\0') {
    if (((*(uint *)(*param_2 + 0xb) >> 0x14 & 1) == 0) && (param_5 == 0)) {
      local_80 = *param_2;
      local_78 = (ulong)*(uint *)(local_80 + 0x23) + param_1;
      if (((local_78 & 1) == 0) || ((int)local_78 == 3)) {
        local_70 = 1;
      }
      else if ((local_78 & 3) == 1) {
        uVar3 = local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar3 + *(uint *)(local_78 - 1)) == 0x98) {
          local_70 = 4;
        }
        else if (*(short *)(uVar3 + *(uint *)(local_78 - 1)) == 100) {
          local_70 = 0;
        }
        else {
          local_70 = 2;
        }
      }
      else {
        if ((local_78 & 3) != 3) {
LAB_010ef418:
          local_90 = param_1;
          plStack_88 = param_2;
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_70 = 3;
      }
      local_90 = param_1;
      plStack_88 = param_2;
      uVar3 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_90);
      if ((uVar3 & 1) != 0) goto LAB_010ef360;
    }
    this = *(Logger **)(param_1 + 0x9558);
    uVar3 = Logger::is_logging(this);
    if ((uVar3 & 1) != 0) {
      if (param_6 == (ulong *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_6;
      }
      Logger::MapEvent(this,"ReplaceDescriptors",*param_2,*plVar2,param_7,uVar3);
    }
  }
LAB_010ef360:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar2;
}

