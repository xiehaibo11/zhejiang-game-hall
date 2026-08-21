
void FUN_010ed3e0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 < 0) {
    lVar1 = *(long *)(lVar2 + 0x80);
    if ((lVar1 == 0) || (2 < *(int *)(lVar2 + 0x7c))) {
      (**(code **)(lVar2 + 0x10))();
      lVar1 = *(long *)(lVar2 + 0x80);
    }
    *(long *)(lVar2 + 0x80) = lVar1 + 1;
  }
  else if (param_2 <= *(int *)(lVar2 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x010ed40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))();
    return;
  }
  return;
}

