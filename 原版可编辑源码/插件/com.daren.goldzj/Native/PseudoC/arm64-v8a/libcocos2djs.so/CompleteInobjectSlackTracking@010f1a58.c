
/* v8::internal::Map::CompleteInobjectSlackTracking(v8::internal::Isolate*) */

void __thiscall v8::internal::Map::CompleteInobjectSlackTracking(Map *this,Isolate *param_1)

{
  long lVar1;
  code *pcVar2;
  int *piVar3;
  ulong uVar4;
  int local_6c;
  PerThreadAssertScopeDebugOnly aPStack_68 [8];
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  Isolate *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_6c = ComputeMinObjectSlack(this,param_1);
  local_50 = *(long *)this;
  uStack_58 = 0;
  local_48 = param_1 + *(uint *)(local_50 + 0x23);
  local_60 = param_1;
  if ((((ulong)local_48 & 1) == 0) || ((int)local_48 == 3)) {
    local_40 = 1;
  }
  else if (((ulong)local_48 & 3) == 1) {
    uVar4 = (ulong)local_48 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar4 + *(uint *)(local_48 + -1)) == 0x98) {
      local_40 = 4;
    }
    else if (*(short *)(uVar4 + *(uint *)(local_48 + -1)) == 100) {
      local_40 = 0;
    }
    else {
      local_40 = 2;
    }
  }
  else {
    if (((ulong)local_48 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_40 = 3;
  }
  if (local_6c == 0) {
    pcVar2 = FUN_010f1be8;
    piVar3 = (int *)0x0;
  }
  else {
    pcVar2 = FUN_010f1b90;
    piVar3 = &local_6c;
  }
  TransitionsAccessor::TraverseTransitionTreeInternal
            ((TransitionsAccessor *)&local_60,pcVar2,piVar3,aPStack_68);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

