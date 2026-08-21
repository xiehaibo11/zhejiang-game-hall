
/* cc_assert_script_compatible(char const*) */

undefined8 cc_assert_script_compatible(char *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (DAT_0178fd20 == (long *)0x0) {
    DAT_0178fd20 = operator_new(8,(nothrow_t *)&std::nothrow);
    if (DAT_0178fd20 != (long *)0x0) {
      *DAT_0178fd20 = 0;
    }
    plVar1 = (long *)*DAT_0178fd20;
  }
  else {
    plVar1 = (long *)*DAT_0178fd20;
  }
  if ((plVar1 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

