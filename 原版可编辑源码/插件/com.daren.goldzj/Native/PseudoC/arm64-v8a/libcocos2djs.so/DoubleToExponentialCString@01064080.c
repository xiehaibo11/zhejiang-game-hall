
/* v8::internal::DoubleToExponentialCString(double, int) */

void v8::internal::DoubleToExponentialCString(double param_1,int param_2)

{
  long lVar1;
  internal *piVar2;
  int local_ac;
  undefined1 auStack_a8 [4];
  int local_a4;
  undefined1 auStack_a0 [104];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar2 = (internal *)-param_1;
  if (0.0 <= param_1) {
    piVar2 = (internal *)param_1;
  }
  if (param_2 == -1) {
    DoubleToAscii(piVar2,0,0,auStack_a0,0x66,auStack_a8,&local_ac,&local_a4);
  }
  else {
    DoubleToAscii(piVar2,2,param_2 + 1,auStack_a0,0x66,auStack_a8,&local_ac,&local_a4);
    local_ac = param_2 + 1;
  }
  FUN_01064148(auStack_a0,local_a4 + -1,param_1 < 0.0,local_ac);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

