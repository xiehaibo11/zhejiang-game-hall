
/* v8::internal::ReparentExpressionScope(unsigned long, v8::internal::Expression*,
   v8::internal::Scope*) */

void v8::internal::ReparentExpressionScope(ulong param_1,Expression *param_2,Scope *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_60;
  undefined1 local_58;
  Expression *local_50;
  undefined4 local_48;
  Scope *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_58 = 0;
  local_60 = param_1;
  local_50 = param_2;
  local_40 = param_3;
  uVar2 = GetCurrentStackPosition();
  if (uVar2 < param_1) {
    local_58 = 1;
  }
  else {
    FUN_0152a444(&local_60,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

