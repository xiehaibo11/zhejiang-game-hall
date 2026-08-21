
undefined4
FUN_00a5a570(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  
                    /* try { // try from 00a5a580 to 00b5a5ab has its CatchHandler @ 00a5a458 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a5a5ac to 00b5a5bf has its CatchHandler @ 00a5a644 */
  if (param_2 == (char *)0x0) {
                    /* try { // try from 00a5a5c4 to 00b5a5d7 has its CatchHandler @ 00a5a648 */
    sVar3 = 0;
  }
  else {
    sVar3 = strlen(param_2);
  }
  strlen(param_4);
  uVar2 = FUN_00a2c6e0();
  lVar4 = FUN_00a697fc(&PTR_MD5_Init_016a4cf0,param_4,uVar2);
  if (lVar4 != 0) {
    if (sVar3 != 0) {
      uVar2 = FUN_00a2c6e0(sVar3);
      FUN_00a69990(lVar4,param_2,uVar2);
    }
                    /* try { // try from 00a5a614 to 00b5a61b has its CatchHandler @ 00a5a640 */
    FUN_00a699b0(lVar4,&local_68);
                    /* try { // try from 00a5a620 to 00b5a627 has its CatchHandler @ 00a5a63c */
                    /* try { // try from 00a5a628 to 00b5a663 has its CatchHandler @ 00a5a458 */
                    /* catch() { ... } // from try @ 00a5a54c with catch @ 00a5a63c
                       catch() { ... } // from try @ 00a5a620 with catch @ 00a5a63c */
                    /* catch() { ... } // from try @ 00a5a4c8 with catch @ 00a5a640
                       catch() { ... } // from try @ 00a5a614 with catch @ 00a5a640 */
                    /* catch() { ... } // from try @ 00a5a4ac with catch @ 00a5a644
                       catch() { ... } // from try @ 00a5a5ac with catch @ 00a5a644 */
                    /* catch() { ... } // from try @ 00a5a50c with catch @ 00a5a648
                       catch() { ... } // from try @ 00a5a5c4 with catch @ 00a5a648 */
    lVar4 = FUN_00a24258("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                         param_3,local_68,local_67,local_66,local_65,local_64,local_63,local_62,
                         local_61,local_60,local_5f,local_5e,local_5d,local_5c,local_5b,local_5a,
                         local_59);
    if (lVar4 != 0) {
      uVar2 = FUN_00a2f7a0(param_1,lVar4,0,param_5,param_6);
      (*(code *)PTR_free_01769a00)(lVar4);
      goto LAB_00a5a6d0;
    }
  }
  uVar2 = 0x1b;
LAB_00a5a6d0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

