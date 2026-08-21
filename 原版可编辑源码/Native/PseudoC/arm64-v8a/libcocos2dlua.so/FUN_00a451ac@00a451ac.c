
undefined8 FUN_00a451ac(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = (*(code *)PTR_strdup_01769a10)();
    return uVar2;
  }
                    /* try { // try from 00a451dc to 00b45227 has its CatchHandler @ 00a451dc
                       catch() { ... } // from try @ 00a451dc with catch @ 00a451dc
                       catch() { ... } // from try @ 00a4522c with catch @ 00a451dc */
  return 0;
}

