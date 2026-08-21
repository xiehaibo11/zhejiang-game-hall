
void FUN_00a3c5d8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [2];
  undefined1 auStack_76 [2];
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [2];
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [2];
  undefined1 auStack_6c [2];
  undefined1 auStack_6a [2];
  undefined1 auStack_68 [2];
  undefined1 auStack_66 [2];
  undefined1 auStack_64 [2];
  undefined1 auStack_62 [2];
  undefined1 auStack_60 [2];
  undefined1 auStack_5e [6];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  long local_48;
  
                    /* try { // try from 00a3c5e8 to 00b3c5ff has its CatchHandler @ 00a3c804 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x688) = 0;
  }
  else {
                    /* try { // try from 00a3c608 to 00b3c613 has its CatchHandler @ 00a3c800 */
    lVar3 = FUN_00a52d20(&PTR_MD5_Init_01c6e548);
                    /* try { // try from 00a3c614 to 00b3c61f has its CatchHandler @ 00a3c7fc */
    if (lVar3 == 0) {
      uVar4 = 0x1b;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x6c8);
                    /* try { // try from 00a3c620 to 00b3c783 has its CatchHandler @ 00a3c814 */
      strlen(pcVar5);
      uVar2 = FUN_00a16cf8();
      FUN_00a52da0(lVar3,pcVar5,uVar2);
      pcVar5 = *(char **)(param_1 + 0x220);
      strlen(pcVar5);
      uVar2 = FUN_00a16cf8();
      FUN_00a52da0(lVar3,pcVar5,uVar2);
      FUN_00a52dc0(lVar3,&local_58);
      FUN_00a0e7c4(auStack_7c,3,&DAT_01a4ab5e,local_58);
      FUN_00a0e7c4((ulong)auStack_7c | 2,3,&DAT_01a4ab5e,local_57);
      FUN_00a0e7c4(auStack_78,3,&DAT_01a4ab5e,local_56);
      FUN_00a0e7c4(auStack_76,3,&DAT_01a4ab5e,local_55);
      FUN_00a0e7c4(auStack_74,3,&DAT_01a4ab5e,local_54);
      FUN_00a0e7c4(auStack_72,3,&DAT_01a4ab5e,local_53);
      FUN_00a0e7c4(auStack_70,3,&DAT_01a4ab5e,local_52);
      FUN_00a0e7c4(auStack_6e,3,&DAT_01a4ab5e,local_51);
      FUN_00a0e7c4(auStack_6c,3,&DAT_01a4ab5e,local_50);
      FUN_00a0e7c4(auStack_6a,3,&DAT_01a4ab5e,local_4f);
      FUN_00a0e7c4(auStack_68,3,&DAT_01a4ab5e,local_4e);
      FUN_00a0e7c4(auStack_66,3,&DAT_01a4ab5e,local_4d);
      FUN_00a0e7c4(auStack_64,3,&DAT_01a4ab5e,local_4c);
                    /* try { // try from 00a3c784 to 00b3c86b has its CatchHandler @ 00a3c590 */
      FUN_00a0e7c4(auStack_62,3,&DAT_01a4ab5e,local_4b);
      FUN_00a0e7c4(auStack_60,3,&DAT_01a4ab5e,local_4a);
      FUN_00a0e7c4(auStack_5e,3,&DAT_01a4ab5e,local_49);
      uVar4 = FUN_00a3e3a4(param_1 + 0x618,"APOP %s %s",*(undefined8 *)(param_1 + 0x218),auStack_7c)
      ;
      if ((int)uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x688) = 6;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a3c614 with catch @ 00a3c7fc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a3c608 with catch @ 00a3c800 */
                    /* catch() { ... } // from try @ 00a3c5e8 with catch @ 00a3c804 */
                    /* catch() { ... } // from try @ 00a3c620 with catch @ 00a3c814 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

