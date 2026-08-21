
/* v8::internal::Map::ComputeMinObjectSlack(v8::internal::Isolate*) */

void __thiscall v8::internal::Map::ComputeMinObjectSlack(Map *this,Isolate *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint local_5c;
  PerThreadAssertScopeDebugOnly aPStack_58 [8];
  Isolate *local_50;
  undefined8 uStack_48;
  long local_40;
  Isolate *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40 = *(long *)this;
  bVar1 = *(byte *)(local_40 + 5);
  local_5c = (uint)bVar1;
  if (2 < bVar1) {
    local_5c = (uint)*(byte *)(local_40 + 3) - (uint)bVar1;
  }
  uStack_48 = 0;
  local_38 = param_1 + *(uint *)(local_40 + 0x23);
  local_50 = param_1;
  if ((((ulong)local_38 & 1) == 0) || ((int)local_38 == 3)) {
    local_30 = 1;
  }
  else if (((ulong)local_38 & 3) == 1) {
    uVar3 = (ulong)local_38 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar3 + *(uint *)(local_38 + -1)) == 0x98) {
      local_30 = 4;
    }
    else if (*(short *)(uVar3 + *(uint *)(local_38 + -1)) == 100) {
      local_30 = 0;
    }
    else {
      local_30 = 2;
    }
  }
  else {
    if (((ulong)local_38 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_30 = 3;
  }
  TransitionsAccessor::TraverseTransitionTreeInternal
            ((TransitionsAccessor *)&local_50,FUN_010f1a28,&local_5c,aPStack_58);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_5c);
  }
  return;
}

