
/* v8::internal::Map::TransitionToPrototype(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::HeapObject>) */

long v8::internal::Map::TransitionToPrototype(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_70;
  long *plStack_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  local_58 = (ulong)*(uint *)(local_60 + 0x23) + param_1;
  if (((local_58 & 1) == 0) || ((int)local_58 == 3)) {
    local_50 = 1;
  }
  else if ((local_58 & 3) == 1) {
    uVar3 = local_58 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar3 + *(uint *)(local_58 - 1)) == 0x98) {
      local_50 = 4;
    }
    else if (*(short *)(uVar3 + *(uint *)(local_58 - 1)) == 100) {
      local_50 = 0;
    }
    else {
      local_50 = 2;
    }
  }
  else {
    if ((local_58 & 3) != 3) goto LAB_010ec284;
    local_50 = 3;
  }
  local_70 = param_1;
  plStack_68 = param_2;
  lVar2 = TransitionsAccessor::GetPrototypeTransition((TransitionsAccessor *)&local_70,param_3);
  if (lVar2 == 0) {
    lVar2 = Copy(param_1,param_2,"TransitionToPrototype");
    local_60 = *param_2;
    local_58 = (ulong)*(uint *)(local_60 + 0x23) + param_1;
    if (((local_58 & 1) == 0) || ((int)local_58 == 3)) {
      local_50 = 1;
    }
    else if ((local_58 & 3) == 1) {
      uVar3 = local_58 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar3 + *(uint *)(local_58 - 1)) == 0x98) {
        local_50 = 4;
      }
      else if (*(short *)(uVar3 + *(uint *)(local_58 - 1)) == 100) {
        local_50 = 0;
      }
      else {
        local_50 = 2;
      }
    }
    else {
      if ((local_58 & 3) != 3) {
LAB_010ec284:
        local_70 = param_1;
        plStack_68 = param_2;
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_50 = 3;
    }
    local_70 = param_1;
    plStack_68 = param_2;
    TransitionsAccessor::PutPrototypeTransition((TransitionsAccessor *)&local_70,param_3,lVar2);
    SetPrototype(param_1,lVar2,param_3,1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}

