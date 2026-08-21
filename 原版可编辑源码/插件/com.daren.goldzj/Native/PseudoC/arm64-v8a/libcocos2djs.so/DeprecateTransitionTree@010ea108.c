
/* v8::internal::Map::DeprecateTransitionTree(v8::internal::Isolate*) */

void __thiscall v8::internal::Map::DeprecateTransitionTree(Map *this,Isolate *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  Logger *this_00;
  ulong local_78;
  Isolate *local_70;
  undefined8 uStack_68;
  long local_60;
  Isolate *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if ((*(uint *)(lVar4 + 0xb) >> 0x18 & 1) == 0) {
    uStack_68 = 0;
    local_58 = param_1 + *(uint *)(lVar4 + 0x23);
    local_70 = param_1;
    local_60 = lVar4;
    if ((((ulong)local_58 & 1) == 0) || ((int)local_58 == 3)) {
      local_50 = 1;
    }
    else if (((ulong)local_58 & 3) == 1) {
      uVar3 = (ulong)local_58 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar3 + *(uint *)(local_58 + -1)) == 0x98) {
        local_50 = 4;
      }
      else if (*(short *)(uVar3 + *(uint *)(local_58 + -1)) == 100) {
        local_50 = 0;
      }
      else {
        local_50 = 2;
      }
    }
    else {
      if (((ulong)local_58 & 3) != 3) {
LAB_010ea320:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_50 = 3;
    }
    uVar2 = TransitionsAccessor::NumberOfTransitions((TransitionsAccessor *)&local_70);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        if (local_50 == 3) {
          local_78 = (ulong)local_58 & 0xfffffffffffffffd;
        }
        else {
          if (local_50 != 4) goto LAB_010ea320;
          local_78 = (ulong)local_58 & 0xffffffff00000000 |
                     (ulong)*(uint *)(local_58 + (long)((int)lVar4 + 0xc) + 7) & 0xfffffffd;
        }
        DeprecateTransitionTree((Map *)&local_78,param_1);
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar2 * 8 - lVar4 != 0);
    }
    *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) | 0x1000000;
    if (FLAG_trace_maps != '\0') {
      this_00 = *(Logger **)(param_1 + 0x9558);
      uVar3 = Logger::is_logging(this_00);
      if ((uVar3 & 1) != 0) {
        Logger::MapEvent(this_00,"Deprecate",*(undefined8 *)this,0,0,0);
      }
    }
    local_78 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
    DependentCode::DeoptimizeDependentCodeGroup(&local_78,param_1,0);
    lVar4 = *(long *)this;
    if ((*(uint *)(lVar4 + 0xb) >> 0x19 & 1) == 0) {
      *(uint *)(lVar4 + 0xb) = *(uint *)(lVar4 + 0xb) | 0x2000000;
      local_78 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
      DependentCode::DeoptimizeDependentCodeGroup(&local_78,param_1,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

