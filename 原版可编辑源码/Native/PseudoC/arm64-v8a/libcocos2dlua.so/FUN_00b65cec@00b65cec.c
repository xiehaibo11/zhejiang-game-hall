
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b65cec(UI *param_1,UI_STRING *param_2,int param_3,int param_4)

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
  
  DAT_01784b34 = 0;
  DAT_01784b30 = 0;
  local_458.sa_handler = (__sighandler_t)0x0;
  uStack_440 = 0;
  local_448 = 0;
  puStack_450 = &LAB_00b662a0;
  sigaction(1,(sigaction *)&local_458,(sigaction *)&DAT_01784bb0);
  sigaction(2,(sigaction *)&local_458,(sigaction *)&DAT_01784bd0);
  sigaction(3,(sigaction *)&local_458,(sigaction *)&DAT_01784bf0);
  sigaction(4,(sigaction *)&local_458,(sigaction *)&DAT_01784c10);
  sigaction(5,(sigaction *)&local_458,(sigaction *)&DAT_01784c30);
  sigaction(6,(sigaction *)&local_458,(sigaction *)&DAT_01784c50);
  sigaction(7,(sigaction *)&local_458,(sigaction *)&DAT_01784c70);
  sigaction(8,(sigaction *)&local_458,(sigaction *)&DAT_01784c90);
  sigaction(0xb,(sigaction *)&local_458,(sigaction *)&DAT_01784cf0);
  sigaction(0xd,(sigaction *)&local_458,(sigaction *)&DAT_01784d30);
  sigaction(0xe,(sigaction *)&local_458,(sigaction *)&DAT_01784d50);
  sigaction(0xf,(sigaction *)&local_458,(sigaction *)&DAT_01784d70);
  sigaction(0x10,(sigaction *)&local_458,(sigaction *)&DAT_01784d90);
  sigaction(0x11,(sigaction *)&local_458,(sigaction *)&DAT_01784db0);
  sigaction(0x12,(sigaction *)&local_458,(sigaction *)&DAT_01784dd0);
  sigaction(0x13,(sigaction *)&local_458,(sigaction *)&DAT_01784df0);
  sigaction(0x14,(sigaction *)&local_458,(sigaction *)&DAT_01784e10);
  sigaction(0x15,(sigaction *)&local_458,(sigaction *)&DAT_01784e30);
  sigaction(0x16,(sigaction *)&local_458,(sigaction *)&DAT_01784e50);
  sigaction(0x17,(sigaction *)&local_458,(sigaction *)&DAT_01784e70);
  sigaction(0x18,(sigaction *)&local_458,(sigaction *)&DAT_01784e90);
  sigaction(0x19,(sigaction *)&local_458,(sigaction *)&DAT_01784eb0);
  sigaction(0x1a,(sigaction *)&local_458,(sigaction *)&DAT_01784ed0);
  sigaction(0x1b,(sigaction *)&local_458,(sigaction *)&DAT_01784ef0);
  sigaction(0x1c,(sigaction *)&local_458,(sigaction *)&DAT_01784f10);
  sigaction(0x1d,(sigaction *)&local_458,(sigaction *)&DAT_01784f30);
  sigaction(0x1e,(sigaction *)&local_458,(sigaction *)&DAT_01784f50);
  sigaction(0x1f,(sigaction *)&local_458,(sigaction *)&DAT_01784f70);
  signal(0x1c,(__sighandler_t)0x0);
  DAT_01784b30 = 1;
  if (param_3 == 0) {
    _DAT_01784b6c = _DAT_01784b48;
    DAT_01784b8c = DAT_01784b68;
    uRam0000000001784b84 = uRam0000000001784b60;
    _DAT_01784b7c = _DAT_01784b58;
    uRam0000000001784b74 = uRam0000000001784b50 & 0xfffffff7ffffffff;
    if (DAT_01784b20 != '\x01') goto LAB_00b65f6c;
    iVar1 = fileno(DAT_01784b38);
    iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_01784b6c);
    if (iVar1 != -1) goto LAB_00b65f6c;
    uVar2 = -(uint)(DAT_01784b34 == 2);
  }
  else {
LAB_00b65f6c:
    DAT_01784b30 = 2;
    local_458.sa_handler = local_458.sa_handler & 0xffffffffffffff00;
    pcVar3 = fgets((char *)&local_458,0x3ff,DAT_01784b38);
    if (((pcVar3 == (char *)0x0) ||
        (iVar1 = feof(DAT_01784b38), __stream = DAT_01784b38, iVar1 != 0)) ||
       (iVar1 = ferror(DAT_01784b38), iVar1 != 0)) {
LAB_00b65fa4:
      uVar2 = 0;
    }
    else {
      pcVar3 = strchr((char *)&local_458,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = fgets(acStack_58,4,__stream);
          if (pcVar3 == (char *)0x0) goto LAB_00b65fa4;
          pcVar3 = strchr(acStack_58,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar2 = UI_set_result(param_1,param_2,(char *)&local_458);
      uVar2 = uVar2 >> 0x1f ^ 1;
    }
    if (DAT_01784b34 == 2) {
      uVar2 = 0xffffffff;
    }
    if (param_3 != 0) goto LAB_00b65fc0;
  }
  fputc(10,DAT_01784b40);
  if ((param_3 == 0) && (1 < DAT_01784b30)) {
    _DAT_01784b6c = _DAT_01784b48;
    DAT_01784b8c = DAT_01784b68;
    uRam0000000001784b84 = uRam0000000001784b60;
    _DAT_01784b7c = _DAT_01784b58;
    uRam0000000001784b74 = uRam0000000001784b50 | 0x800000000;
    if (DAT_01784b20 == '\x01') {
      iVar1 = fileno(DAT_01784b38);
      iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_01784b6c);
      if (iVar1 == -1) {
        uVar2 = 0;
      }
    }
  }
LAB_00b65fc0:
  if (0 < DAT_01784b30) {
    sigaction(1,(sigaction *)&DAT_01784bb0,(sigaction *)0x0);
    sigaction(2,(sigaction *)&DAT_01784bd0,(sigaction *)0x0);
    sigaction(3,(sigaction *)&DAT_01784bf0,(sigaction *)0x0);
    sigaction(4,(sigaction *)&DAT_01784c10,(sigaction *)0x0);
    sigaction(5,(sigaction *)&DAT_01784c30,(sigaction *)0x0);
    sigaction(6,(sigaction *)&DAT_01784c50,(sigaction *)0x0);
    sigaction(7,(sigaction *)&DAT_01784c70,(sigaction *)0x0);
    sigaction(8,(sigaction *)&DAT_01784c90,(sigaction *)0x0);
    sigaction(9,(sigaction *)&DAT_01784cb0,(sigaction *)0x0);
    sigaction(0xb,(sigaction *)&DAT_01784cf0,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&DAT_01784d30,(sigaction *)0x0);
    sigaction(0xe,(sigaction *)&DAT_01784d50,(sigaction *)0x0);
    sigaction(0xf,(sigaction *)&DAT_01784d70,(sigaction *)0x0);
    sigaction(0x10,(sigaction *)&DAT_01784d90,(sigaction *)0x0);
    sigaction(0x11,(sigaction *)&DAT_01784db0,(sigaction *)0x0);
    sigaction(0x12,(sigaction *)&DAT_01784dd0,(sigaction *)0x0);
    sigaction(0x13,(sigaction *)&DAT_01784df0,(sigaction *)0x0);
    sigaction(0x14,(sigaction *)&DAT_01784e10,(sigaction *)0x0);
    sigaction(0x15,(sigaction *)&DAT_01784e30,(sigaction *)0x0);
    sigaction(0x16,(sigaction *)&DAT_01784e50,(sigaction *)0x0);
    sigaction(0x17,(sigaction *)&DAT_01784e70,(sigaction *)0x0);
    sigaction(0x18,(sigaction *)&DAT_01784e90,(sigaction *)0x0);
    sigaction(0x19,(sigaction *)&DAT_01784eb0,(sigaction *)0x0);
    sigaction(0x1a,(sigaction *)&DAT_01784ed0,(sigaction *)0x0);
    sigaction(0x1b,(sigaction *)&DAT_01784ef0,(sigaction *)0x0);
    sigaction(0x1c,(sigaction *)&DAT_01784f10,(sigaction *)0x0);
    sigaction(0x1d,(sigaction *)&DAT_01784f30,(sigaction *)0x0);
    sigaction(0x1e,(sigaction *)&DAT_01784f50,(sigaction *)0x0);
    sigaction(0x1f,(sigaction *)&DAT_01784f70,(sigaction *)0x0);
  }
  OPENSSL_cleanse(&local_458,0x400);
  return uVar2;
}

