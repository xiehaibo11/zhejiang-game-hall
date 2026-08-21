
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b5786c(UI *param_1,UI_STRING *param_2,int param_3,int param_4)

{
  FILE *__stream;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  _union_1457 local_458;
  undefined1 *puStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  char acStack_58 [8];
  
                    /* try { // try from 00b57888 to 00c57893 has its CatchHandler @ 00b5798c */
  DAT_01d3adb4 = 0;
  DAT_01d3adb0 = 0;
  local_458.sa_handler = (__sighandler_t)0x0;
  uStack_440 = 0;
  local_448 = 0;
  puStack_450 = &LAB_00b57e20;
                    /* try { // try from 00b578d0 to 00c578d7 has its CatchHandler @ 00b5797c */
  sigaction(1,(sigaction *)&local_458,(sigaction *)&DAT_01d3ae30);
                    /* try { // try from 00b578d8 to 00c57973 has its CatchHandler @ 00b57798 */
  sigaction(2,(sigaction *)&local_458,(sigaction *)&DAT_01d3ae50);
  sigaction(3,(sigaction *)&local_458,(sigaction *)&DAT_01d3ae70);
  sigaction(4,(sigaction *)&local_458,(sigaction *)&DAT_01d3ae90);
  sigaction(5,(sigaction *)&local_458,(sigaction *)&DAT_01d3aeb0);
  sigaction(6,(sigaction *)&local_458,(sigaction *)&DAT_01d3aed0);
  sigaction(7,(sigaction *)&local_458,(sigaction *)&DAT_01d3aef0);
  sigaction(8,(sigaction *)&local_458,(sigaction *)&DAT_01d3af10);
  sigaction(0xb,(sigaction *)&local_458,(sigaction *)&DAT_01d3af70);
  sigaction(0xd,(sigaction *)&local_458,(sigaction *)&DAT_01d3afb0);
                    /* try { // try from 00b57974 to 00c5797b has its CatchHandler @ 00b5797c */
  sigaction(0xe,(sigaction *)&local_458,(sigaction *)&DAT_01d3afd0);
                    /* catch() { ... } // from try @ 00b578d0 with catch @ 00b5797c
                       catch() { ... } // from try @ 00b57974 with catch @ 00b5797c
                       try { // try from 00b5797c to 00c579c7 has its CatchHandler @ 00b57798 */
  sigaction(0xf,(sigaction *)&local_458,(sigaction *)&DAT_01d3aff0);
                    /* catch() { ... } // from try @ 00b57888 with catch @ 00b5798c */
  sigaction(0x10,(sigaction *)&local_458,(sigaction *)&DAT_01d3b010);
  sigaction(0x11,(sigaction *)&local_458,(sigaction *)&DAT_01d3b030);
  sigaction(0x12,(sigaction *)&local_458,(sigaction *)&DAT_01d3b050);
  sigaction(0x13,(sigaction *)&local_458,(sigaction *)&DAT_01d3b070);
                    /* catch() { ... } // from try @ 00b57e90 with catch @ 00b579c8 */
  sigaction(0x14,(sigaction *)&local_458,(sigaction *)&DAT_01d3b090);
  sigaction(0x15,(sigaction *)&local_458,(sigaction *)&DAT_01d3b0b0);
  sigaction(0x16,(sigaction *)&local_458,(sigaction *)&DAT_01d3b0d0);
  sigaction(0x17,(sigaction *)&local_458,(sigaction *)&DAT_01d3b0f0);
  sigaction(0x18,(sigaction *)&local_458,(sigaction *)&DAT_01d3b110);
  sigaction(0x19,(sigaction *)&local_458,(sigaction *)&DAT_01d3b130);
  sigaction(0x1a,(sigaction *)&local_458,(sigaction *)&DAT_01d3b150);
  sigaction(0x1b,(sigaction *)&local_458,(sigaction *)&DAT_01d3b170);
  sigaction(0x1c,(sigaction *)&local_458,(sigaction *)&DAT_01d3b190);
  sigaction(0x1d,(sigaction *)&local_458,(sigaction *)&DAT_01d3b1b0);
  sigaction(0x1e,(sigaction *)&local_458,(sigaction *)&DAT_01d3b1d0);
  sigaction(0x1f,(sigaction *)&local_458,(sigaction *)&DAT_01d3b1f0);
  signal(0x1c,(__sighandler_t)0x0);
  DAT_01d3adb0 = 1;
  if (param_3 == 0) {
    _DAT_01d3adec = _DAT_01d3adc8;
    DAT_01d3ae0c = DAT_01d3ade8;
    uRam0000000001d3ae04 = uRam0000000001d3ade0;
    _DAT_01d3adfc = _DAT_01d3add8;
                    /* try { // try from 00b57ac8 to 00c57b23 has its CatchHandler @ 00b58020 */
    uRam0000000001d3adf4 = uRam0000000001d3add0 & 0xfffffff7ffffffff;
    if (DAT_01d3ada0 != '\x01') goto LAB_00b57aec;
    iVar1 = fileno(DAT_01d3adb8);
    iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_01d3adec);
    if (iVar1 != -1) goto LAB_00b57aec;
                    /* try { // try from 00b57da4 to 00c57dfb has its CatchHandler @ 00b5801c */
    uVar2 = -(uint)(DAT_01d3adb4 == 2);
  }
  else {
LAB_00b57aec:
    DAT_01d3adb0 = 2;
    local_458.sa_handler = local_458.sa_handler & 0xffffffffffffff00;
    pcVar3 = fgets((char *)&local_458,0x3ff,DAT_01d3adb8);
    if (((pcVar3 == (char *)0x0) ||
        (iVar1 = feof(DAT_01d3adb8), __stream = DAT_01d3adb8, iVar1 != 0)) ||
       (iVar1 = ferror(DAT_01d3adb8), iVar1 != 0)) {
LAB_00b57b24:
      uVar2 = 0;
    }
    else {
      pcVar3 = strchr((char *)&local_458,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = fgets(acStack_58,4,__stream);
          if (pcVar3 == (char *)0x0) goto LAB_00b57b24;
          pcVar3 = strchr(acStack_58,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar2 = UI_set_result(param_1,param_2,(char *)&local_458);
      uVar2 = uVar2 >> 0x1f ^ 1;
    }
    if (DAT_01d3adb4 == 2) {
      uVar2 = 0xffffffff;
    }
                    /* try { // try from 00b57b34 to 00c57b3f has its CatchHandler @ 00b57f68 */
    if (param_3 != 0) goto LAB_00b57b40;
  }
  fputc(10,DAT_01d3adc0);
  if ((param_3 == 0) && (1 < DAT_01d3adb0)) {
    _DAT_01d3adec = _DAT_01d3adc8;
    DAT_01d3ae0c = DAT_01d3ade8;
    uRam0000000001d3ae04 = uRam0000000001d3ade0;
    _DAT_01d3adfc = _DAT_01d3add8;
    uRam0000000001d3adf4 = uRam0000000001d3add0 | 0x800000000;
    if (DAT_01d3ada0 == '\x01') {
      iVar1 = fileno(DAT_01d3adb8);
                    /* try { // try from 00b57e0c to 00c57e17 has its CatchHandler @ 00b57f64 */
      iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_01d3adec);
      if (iVar1 == -1) {
        uVar2 = 0;
      }
    }
  }
LAB_00b57b40:
  if (0 < DAT_01d3adb0) {
    sigaction(1,(sigaction *)&DAT_01d3ae30,(sigaction *)0x0);
    sigaction(2,(sigaction *)&DAT_01d3ae50,(sigaction *)0x0);
                    /* try { // try from 00b57b70 to 00c57b9b has its CatchHandler @ 00b58020 */
    sigaction(3,(sigaction *)&DAT_01d3ae70,(sigaction *)0x0);
    sigaction(4,(sigaction *)&DAT_01d3ae90,(sigaction *)0x0);
    sigaction(5,(sigaction *)&DAT_01d3aeb0,(sigaction *)0x0);
    sigaction(6,(sigaction *)&DAT_01d3aed0,(sigaction *)0x0);
    sigaction(7,(sigaction *)&DAT_01d3aef0,(sigaction *)0x0);
    sigaction(8,(sigaction *)&DAT_01d3af10,(sigaction *)0x0);
    sigaction(9,(sigaction *)&DAT_01d3af30,(sigaction *)0x0);
    sigaction(0xb,(sigaction *)&DAT_01d3af70,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&DAT_01d3afb0,(sigaction *)0x0);
    sigaction(0xe,(sigaction *)&DAT_01d3afd0,(sigaction *)0x0);
    sigaction(0xf,(sigaction *)&DAT_01d3aff0,(sigaction *)0x0);
    sigaction(0x10,(sigaction *)&DAT_01d3b010,(sigaction *)0x0);
    sigaction(0x11,(sigaction *)&DAT_01d3b030,(sigaction *)0x0);
    sigaction(0x12,(sigaction *)&DAT_01d3b050,(sigaction *)0x0);
                    /* try { // try from 00b57c48 to 00c57c9f has its CatchHandler @ 00b57fa0 */
    sigaction(0x13,(sigaction *)&DAT_01d3b070,(sigaction *)0x0);
    sigaction(0x14,(sigaction *)&DAT_01d3b090,(sigaction *)0x0);
    sigaction(0x15,(sigaction *)&DAT_01d3b0b0,(sigaction *)0x0);
    sigaction(0x16,(sigaction *)&DAT_01d3b0d0,(sigaction *)0x0);
    sigaction(0x17,(sigaction *)&DAT_01d3b0f0,(sigaction *)0x0);
    sigaction(0x18,(sigaction *)&DAT_01d3b110,(sigaction *)0x0);
    sigaction(0x19,(sigaction *)&DAT_01d3b130,(sigaction *)0x0);
                    /* try { // try from 00b57cc0 to 00c57d1f has its CatchHandler @ 00b57fa4 */
    sigaction(0x1a,(sigaction *)&DAT_01d3b150,(sigaction *)0x0);
    sigaction(0x1b,(sigaction *)&DAT_01d3b170,(sigaction *)0x0);
    sigaction(0x1c,(sigaction *)&DAT_01d3b190,(sigaction *)0x0);
    sigaction(0x1d,(sigaction *)&DAT_01d3b1b0,(sigaction *)0x0);
    sigaction(0x1e,(sigaction *)&DAT_01d3b1d0,(sigaction *)0x0);
    sigaction(0x1f,(sigaction *)&DAT_01d3b1f0,(sigaction *)0x0);
  }
  OPENSSL_cleanse(&local_458,0x400);
  return uVar2;
}

