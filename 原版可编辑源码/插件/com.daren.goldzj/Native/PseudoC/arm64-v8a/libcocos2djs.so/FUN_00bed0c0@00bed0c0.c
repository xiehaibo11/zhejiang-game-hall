
ulong FUN_00bed0c0(ulong param_1,int param_2,FILE *param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    param_1 = uv_default_loop();
  }
  plVar5 = (long *)(param_1 + 0x10);
  for (plVar4 = (long *)*plVar5; plVar4 != plVar5; plVar4 = (long *)*plVar4) {
    uVar1 = *(uint *)(plVar4 + 7);
    uVar2 = uVar1 & 0x4000;
    if ((param_2 == 0) || ((uVar1 >> 0xe & 1) != 0)) {
      switch(*(undefined4 *)(plVar4 + -2)) {
      case 1:
        pcVar3 = "async";
        break;
      case 2:
        pcVar3 = "check";
        break;
      case 3:
        pcVar3 = "fs_event";
        break;
      case 4:
        pcVar3 = "fs_poll";
        break;
      case 5:
        pcVar3 = "handle";
        break;
      case 6:
        pcVar3 = "idle";
        break;
      case 7:
        pcVar3 = "pipe";
        break;
      case 8:
        pcVar3 = "poll";
        break;
      case 9:
        pcVar3 = "prepare";
        break;
      case 10:
        pcVar3 = "process";
        break;
      case 0xb:
        pcVar3 = "stream";
        break;
      case 0xc:
        pcVar3 = "tcp";
        break;
      case 0xd:
        pcVar3 = "timer";
        break;
      case 0xe:
        pcVar3 = "tty";
        break;
      case 0xf:
        pcVar3 = "udp";
        break;
      case 0x10:
        pcVar3 = "signal";
        break;
      default:
        pcVar3 = "<unknown>";
      }
      uVar2 = fprintf(param_3,"[%c%c%c] %-8s %p\n",
                      (ulong)(byte)(&DAT_018e1650)[((ulong)uVar1 ^ 0x2000) >> 0xd & 1],
                      (ulong)(byte)(&DAT_018e1658)[uVar2 == 0],
                      (ulong)(byte)(&DAT_018e1660)[((ulong)uVar1 ^ 0x8000) >> 0xf & 1],pcVar3);
    }
    param_1 = (ulong)uVar2;
  }
  return param_1;
}

