
undefined4
FUN_00a460d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  
                    /* try { // try from 00a460d4 to 00b46127 has its CatchHandler @ 00a460d4
                       catch() { ... } // from try @ 00a460d4 with catch @ 00a460d4
                       catch() { ... } // from try @ 00a46298 with catch @ 00a460d4 */
  if (param_3 == 0) {
                    /* try { // try from 00a46154 to 00b4615f has its CatchHandler @ 00a4630c */
    if ((param_4 == 0x50) || (param_4 == 0)) {
                    /* try { // try from 00a46160 to 00b46297 has its CatchHandler @ 00a46324 */
      __s = (char *)FUN_00a0e870(&DAT_01896fd7,param_2,param_5);
      goto joined_r0x00a46170;
    }
  }
  else if ((param_4 == 0x50) || (param_4 == 0)) {
    __s = (char *)FUN_00a0e870(&DAT_01896ff0,param_2,param_3,param_5);
    goto joined_r0x00a46170;
  }
  __s = (char *)FUN_00a0e870(&DAT_01897011);
joined_r0x00a46170:
  if (__s == (char *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
                    /* try { // try from 00a46128 to 00b4613f has its CatchHandler @ 00a46314 */
    uVar1 = FUN_00a19db8(param_1,__s,sVar2,param_6,param_7);
                    /* try { // try from 00a46148 to 00b46153 has its CatchHandler @ 00a46310 */
    (*(code *)PTR_free_01d1b748)(__s);
  }
  return uVar1;
}

