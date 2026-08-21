
undefined8 FUN_00a5cd30(long param_1)

{
  int iVar1;
  ENGINE *e;
  char *pcVar2;
  undefined8 uVar3;
  
  e = *(ENGINE **)(param_1 + 0x8c48);
  uVar3 = 0;
  if (e != (ENGINE *)0x0) {
                    /* try { // try from 00a5cd54 to 00b5cd87 has its CatchHandler @ 00a5cb24 */
    iVar1 = ENGINE_set_default(e,0xffff);
    pcVar2 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x8c48));
    if (iVar1 < 1) {
      FUN_00a38a08(param_1,"set default crypto engine \'%s\' failed",pcVar2);
      uVar3 = 0x36;
    }
    else {
      FUN_00a38740(param_1,"set default crypto engine \'%s\'\n");
      uVar3 = 0;
                    /* try { // try from 00a5cd88 to 00b5cd9b has its CatchHandler @ 00a5cec4 */
    }
  }
                    /* try { // try from 00a5cda4 to 00b5cdbb has its CatchHandler @ 00a5cec8 */
  return uVar3;
}

