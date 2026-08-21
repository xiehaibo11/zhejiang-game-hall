
undefined8 FUN_00a46348(long param_1)

{
  int iVar1;
  ENGINE *e;
  char *pcVar2;
  undefined8 uVar3;
  
  e = *(ENGINE **)(param_1 + 0x8c48);
  uVar3 = 0;
  if (e != (ENGINE *)0x0) {
    iVar1 = ENGINE_set_default(e,0xffff);
                    /* try { // try from 00a4637c to 00b463cf has its CatchHandler @ 00a4637c
                       catch() { ... } // from try @ 00a4637c with catch @ 00a4637c
                       catch() { ... } // from try @ 00a46544 with catch @ 00a4637c */
    pcVar2 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x8c48));
    if (iVar1 < 1) {
      FUN_00a23020(param_1,"set default crypto engine \'%s\' failed",pcVar2);
      uVar3 = 0x36;
    }
    else {
      FUN_00a22d58(param_1,"set default crypto engine \'%s\'\n");
      uVar3 = 0;
    }
  }
  return uVar3;
}

