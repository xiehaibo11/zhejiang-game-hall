
void FUN_009d657c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
                    /* try { // try from 009d6580 to 00ad65eb has its CatchHandler @ 009d80ac */
  plVar1 = (long *)param_1[8];
  *param_1 = &PTR_FUN_0169f980;
  if (param_1 + 4 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_009d65c4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009d65c4:
  operator_delete(param_1);
  return;
}

