
/* v8::internal::Map::ConnectTransition(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::SimpleTransitionFlag) */

void v8::internal::Map::ConnectTransition
               (long param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Logger *this;
  long local_70;
  ulong *puStack_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_2;
  uVar7 = uVar5 & 0xffffffff00000000;
  if (((*(uint *)(uVar5 + 0x13) & 1) == 0) ||
     (uVar6 = uVar7 | *(uint *)(uVar5 + 0x13),
     *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2)) {
    uVar6 = *(ulong *)(uVar7 + 0xa0);
  }
  if ((int)uVar6 != *(int *)(param_1 + 0xa0)) {
    *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) & 0xffbfffff;
    uVar5 = *param_2;
  }
  if ((*(uint *)(uVar5 + 0xb) >> 0x14 & 1) == 0) {
    local_60 = *param_2;
    local_58 = (ulong)*(uint *)(local_60 + 0x23) + param_1;
    local_70 = param_1;
    puStack_68 = param_2;
    if (((local_58 & 1) == 0) || ((int)local_58 == 3)) {
      local_50 = 1;
    }
    else if ((local_58 & 3) == 1) {
      uVar5 = local_58 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar5 + *(uint *)(local_58 - 1)) == 0x98) {
        local_50 = 4;
      }
      else if (*(short *)(uVar5 + *(uint *)(local_58 - 1)) == 100) {
        local_50 = 0;
      }
      else {
        local_50 = 2;
      }
    }
    else {
      if ((local_58 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_50 = 3;
    }
    TransitionsAccessor::Insert((TransitionsAccessor *)&local_70,param_4,param_3,param_5);
    if (FLAG_trace_maps == '\0') goto LAB_010ee0a4;
    this = *(Logger **)(param_1 + 0x9558);
    uVar5 = Logger::is_logging(this);
    if ((uVar5 & 1) == 0) goto LAB_010ee0a4;
    uVar5 = *param_2;
    uVar2 = *param_3;
    uVar4 = *param_4;
    pcVar3 = "";
  }
  else {
    if (FLAG_trace_maps == '\0') goto LAB_010ee0a4;
    this = *(Logger **)(param_1 + 0x9558);
    uVar5 = Logger::is_logging(this);
    if ((uVar5 & 1) == 0) goto LAB_010ee0a4;
    uVar5 = *param_2;
    uVar2 = *param_3;
    uVar4 = *param_4;
    pcVar3 = "prototype";
  }
  Logger::MapEvent(this,"Transition",uVar5,uVar2,pcVar3,uVar4);
LAB_010ee0a4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

