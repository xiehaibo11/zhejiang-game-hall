
/* v8::internal::MarkCompactCollector::ClearPotentialSimpleMapTransition(v8::internal::Map) */

void __thiscall
v8::internal::MarkCompactCollector::ClearPotentialSimpleMapTransition
          (MarkCompactCollector *this,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_60 [3];
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x13);
  if ((uVar1 & 1) != 0) {
    uVar4 = param_2 & 0xffffffff00000000;
    uVar5 = uVar4 | uVar1;
    if ((*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0xa2) &&
       (uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000, uVar3 = uVar5 - uVar4,
       (*(uint *)(*(long *)(uVar4 + 0x10) + (uVar3 >> 7 & 0x1ffffff) * 4) >>
        (ulong)((uint)(uVar3 >> 2) & 0x1f) & 1) != 0)) {
      local_60[0] = *(long *)(this + 8) + -0x8850;
      local_60[1] = 0;
      local_48 = local_60[0] + (ulong)*(uint *)(uVar5 + 0x23);
      local_60[2] = uVar5;
      if (((local_48 & 1) == 0) || ((int)local_48 == 3)) {
        local_40 = 1;
      }
      else if ((local_48 & 3) == 1) {
        uVar4 = local_48 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar4 + *(uint *)(local_48 - 1)) == 0x98) {
          local_40 = 4;
        }
        else if (*(short *)(uVar4 + *(uint *)(local_48 - 1)) == 100) {
          local_40 = 0;
        }
        else {
          local_40 = 2;
        }
      }
      else {
        if ((local_48 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_40 = 3;
      }
      uVar4 = TransitionsAccessor::HasSimpleTransitionTo((TransitionsAccessor *)local_60,param_2);
      if ((uVar4 & 1) != 0) {
        ClearPotentialSimpleMapTransition(this,uVar5,param_2);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

