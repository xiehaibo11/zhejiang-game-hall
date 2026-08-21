
undefined4 FUN_01057f38(ulong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar3 = (int)param_1[0x15];
  uVar2 = *(undefined4 *)((long)param_1 + 0xac);
  do {
    bVar1 = *(byte *)((long)param_1 + (long)iVar3 + 0x28);
    switch(uVar2) {
    case 1:
      if (bVar1 != "bytes="[iVar3]) {
        *(undefined4 *)((long)param_1 + 0xac) = 6;
        return 0xffffffff;
      }
      if (iVar3 == 5) {
        uVar2 = 2;
        *(undefined4 *)((long)param_1 + 0xac) = 2;
        iVar3 = 5;
      }
      else {
        uVar2 = 1;
      }
      break;
    case 2:
      *(undefined2 *)(param_1 + 0x16) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)((long)param_1 + 0xac) = 3;
    case 3:
      if (bVar1 == 0x2d) {
        uVar2 = 4;
        *(undefined4 *)((long)param_1 + 0xac) = 4;
      }
      else {
        if (9 < (byte)(bVar1 - 0x30)) {
LAB_010580d0:
          uVar2 = 6;
          goto LAB_010580d8;
        }
        *(undefined1 *)(param_1 + 0x16) = 1;
        *param_1 = ((ulong)bVar1 + *param_1 * 10) - 0x30;
        uVar2 = 3;
      }
      break;
    case 4:
      if ((bVar1 != 0x2c) && (bVar1 != 0)) {
        if ((byte)(bVar1 - 0x30) < 10) {
          *(undefined1 *)((long)param_1 + 0xb1) = 1;
          param_1[1] = ((ulong)bVar1 + param_1[1] * 10) - 0x30;
          uVar2 = 4;
          break;
        }
        goto LAB_010580d0;
      }
      *(undefined4 *)((long)param_1 + 0xac) = 2;
      if (bVar1 == 0x2c) {
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 0x15) = iVar3;
      }
      if ((char)param_1[0x16] == '\0') {
        uVar4 = param_1[2];
        uVar5 = param_1[1];
        if (uVar4 < param_1[1]) {
          param_1[1] = uVar4;
          uVar5 = uVar4;
        }
        *param_1 = uVar4 - uVar5;
LAB_01058098:
        uVar4 = uVar4 - 1;
        param_1[1] = uVar4;
      }
      else {
        if (*(char *)((long)param_1 + 0xb1) == '\0') {
          uVar4 = param_1[2];
          goto LAB_01058098;
        }
        uVar4 = param_1[1];
                    /* try { // try from 01058008 to 01158117 has its CatchHandler @ 01058008
                       catch() { ... } // from try @ 01058008 with catch @ 01058008
                       catch() { ... } // from try @ 010581cc with catch @ 01058008 */
      }
      *(undefined1 *)((long)param_1 + 0xb4) = 1;
      if (*param_1 <= uVar4) {
        return 1;
      }
      if (bVar1 == 0x2c) {
        uVar2 = 2;
        break;
      }
    case 0:
      uVar2 = 5;
LAB_010580d8:
      *(undefined4 *)((long)param_1 + 0xac) = uVar2;
      return 0;
    case 5:
    case 6:
      return 0;
    }
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 0x15) = iVar3;
  } while( true );
}

