
/* v8::internal::Map::CopyAsElementsKind(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::ElementsKind,
   v8::internal::TransitionFlag) */

long * v8::internal::Map::CopyAsElementsKind(long param_1,long *param_2,uint param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long local_70;
  long *plStack_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    local_60 = *param_2;
    plStack_68 = (long *)0x0;
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
      if ((local_58 & 3) != 3) goto LAB_010ece50;
      local_50 = 3;
    }
    local_70 = param_1;
    iVar2 = TransitionsAccessor::SearchSpecial
                      ((TransitionsAccessor *)&local_70,*(undefined8 *)(param_1 + 0xb48));
    local_60 = *param_2;
    local_58 = (ulong)*(uint *)(local_60 + 0x23) + param_1;
    plStack_68 = param_2;
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
LAB_010ece50:
        local_70 = param_1;
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_50 = 3;
    }
    local_70 = param_1;
    uVar3 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_70);
    if (((uVar3 & 1) != 0) && (iVar2 == 0)) {
      plVar4 = (long *)CopyForElementsTransition(param_1,param_2);
      if (0x1b < (param_3 & 0xff)) goto LAB_010ece3c;
      *(byte *)(*plVar4 + 10) = *(byte *)(*plVar4 + 10) & 7 | (byte)(param_3 << 3);
      ConnectTransition(param_1,param_2,plVar4,param_1 + 0xb48,2);
      goto LAB_010ecd44;
    }
  }
  plVar4 = (long *)Copy(param_1,param_2,"CopyAsElementsKind");
  if (0x1b < (param_3 & 0xff)) {
LAB_010ece3c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<int>(elements_kind) < kElementsKindCount");
  }
  *(byte *)(*plVar4 + 10) = *(byte *)(*plVar4 + 10) & 7 | (byte)(param_3 << 3);
LAB_010ecd44:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}

