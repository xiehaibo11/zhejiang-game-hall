
void FUN_00a52fc0(long param_1)

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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a52fe0 to 00b52fe3 has its CatchHandler @ 00a53048 */
                    /* try { // try from 00a52fe4 to 00b53063 has its CatchHandler @ 00a52f88 */
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x688) = 0;
  }
  else {
    lVar3 = FUN_00a69708(&PTR_MD5_Init_016a4d18);
    if (lVar3 == 0) {
      uVar4 = 0x1b;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x6c8);
      strlen(pcVar5);
      uVar2 = FUN_00a2c6e0();
      FUN_00a69788(lVar3,pcVar5,uVar2);
      pcVar5 = *(char **)(param_1 + 0x220);
      strlen(pcVar5);
      uVar2 = FUN_00a2c6e0();
      FUN_00a69788(lVar3,pcVar5,uVar2);
                    /* catch() { ... } // from try @ 00a52fe0 with catch @ 00a53048 */
      FUN_00a697a8(lVar3,&local_58);
                    /* try { // try from 00a53064 to 00b530a7 has its CatchHandler @ 00a53064
                       catch() { ... } // from try @ 00a53064 with catch @ 00a53064
                       catch() { ... } // from try @ 00a53274 with catch @ 00a53064
                       catch() { ... } // from try @ 00a532f4 with catch @ 00a53064 */
      FUN_00a241ac(auStack_7c,3,&DAT_013c6a4f,local_58);
      FUN_00a241ac((ulong)auStack_7c | 2,3,&DAT_013c6a4f,local_57);
      FUN_00a241ac(auStack_78,3,&DAT_013c6a4f,local_56);
                    /* try { // try from 00a530a8 to 00b530bf has its CatchHandler @ 00a53350 */
      FUN_00a241ac(auStack_76,3,&DAT_013c6a4f,local_55);
      FUN_00a241ac(auStack_74,3,&DAT_013c6a4f,local_54);
                    /* try { // try from 00a530cc to 00b530e3 has its CatchHandler @ 00a5332c */
      FUN_00a241ac(auStack_72,3,&DAT_013c6a4f,local_53);
                    /* try { // try from 00a530e8 to 00b53117 has its CatchHandler @ 00a53310 */
      FUN_00a241ac(auStack_70,3,&DAT_013c6a4f,local_52);
      FUN_00a241ac(auStack_6e,3,&DAT_013c6a4f,local_51);
      FUN_00a241ac(auStack_6c,3,&DAT_013c6a4f,local_50);
                    /* try { // try from 00a53124 to 00b5313b has its CatchHandler @ 00a5334c */
      FUN_00a241ac(auStack_6a,3,&DAT_013c6a4f,local_4f);
      FUN_00a241ac(auStack_68,3,&DAT_013c6a4f,local_4e);
                    /* try { // try from 00a53148 to 00b5315f has its CatchHandler @ 00a53328 */
      FUN_00a241ac(auStack_66,3,&DAT_013c6a4f,local_4d);
      FUN_00a241ac(auStack_64,3,&DAT_013c6a4f,local_4c);
                    /* try { // try from 00a53164 to 00b5317b has its CatchHandler @ 00a5330c */
      FUN_00a241ac(auStack_62,3,&DAT_013c6a4f,local_4b);
                    /* try { // try from 00a53188 to 00b531b3 has its CatchHandler @ 00a53308 */
      FUN_00a241ac(auStack_60,3,&DAT_013c6a4f,local_4a);
      FUN_00a241ac(auStack_5e,3,&DAT_013c6a4f,local_49);
      uVar4 = FUN_00a54d8c(param_1 + 0x618,"APOP %s %s",*(undefined8 *)(param_1 + 0x218),auStack_7c)
      ;
      if ((int)uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x688) = 6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

