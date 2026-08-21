
int FUN_01075d80(long *param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if ((char)param_1[0x40] == '\0') {
    lVar4 = *(long *)(*(long *)(lVar5 + 0xb0) + 0x38);
  }
  else {
    lVar4 = param_1[0x41];
  }
  if (lVar4 == 0) {
    return 0x99;
  }
  iVar1 = FUN_01075b40(lVar4,lVar5,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  *(undefined4 *)(lVar4 + 0x2e8) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined1 *)(lVar4 + 0x358) = 0;
  *(undefined1 *)(lVar4 + 0x3c1) = param_2;
  uVar2 = *(undefined8 *)(lVar5 + 0x408);
  uVar3 = *(undefined8 *)(lVar5 + 0x400);
  *(undefined8 *)(lVar4 + 0x328) = 0;
  *(undefined8 *)(lVar4 + 800) = 0;
  *(undefined8 *)(lVar4 + 0x310) = uVar2;
  *(undefined8 *)(lVar4 + 0x318) = uVar3;
  if (*(long *)(lVar5 + 0x400) != 0) {
    *(undefined8 *)(lVar4 + 0x278) = uVar2;
    *(undefined8 *)(lVar4 + 0x288) = uVar3;
    *(undefined8 *)(lVar4 + 0x280) = 0;
    *(undefined4 *)(lVar4 + 0x270) = 2;
    if ((char)param_1[0x40] == '\0') {
      iVar1 = (**(code **)(lVar5 + 0x420))(lVar4);
      goto LAB_01075e4c;
    }
  }
  iVar1 = 0;
LAB_01075e4c:
  *(int *)((long)param_1 + 0x214) = iVar1;
  *(undefined2 *)(lVar4 + 0x220) = 0;
  *(undefined4 *)(lVar4 + 0x264) = 0x10001;
  *(undefined2 *)(lVar4 + 0x268) = 1;
  *(undefined8 *)(lVar4 + 0x228) = 1;
                    /* try { // try from 01075e7c to 01175ecb has its CatchHandler @ 01075e7c
                       catch() { ... } // from try @ 01075e7c with catch @ 01075e7c
                       catch() { ... } // from try @ 01075f00 with catch @ 01075e7c */
  *(undefined8 *)(lVar4 + 0x218) = 0x4000000040000000;
  *(undefined8 *)(lVar4 + 0x210) = 0x4000000000000000;
  memcpy(param_1 + 0x28,(void *)(lVar4 + 0x210),0x60);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar4 + 0x2c0);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(lVar4 + 0x2d0);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(lVar4 + 0x2e0);
  *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)(lVar4 + 0x2e4);
  lVar5 = *(long *)(lVar4 + 0x300);
  param_1[0x23] = *(long *)(lVar4 + 0x308);
  param_1[0x22] = lVar5;
  lVar5 = *(long *)(lVar4 + 0x310);
  param_1[0x25] = *(long *)(lVar4 + 0x318);
  param_1[0x24] = lVar5;
  lVar5 = *(long *)(lVar4 + 800);
  param_1[0x27] = *(long *)(lVar4 + 0x328);
  param_1[0x26] = lVar5;
                    /* try { // try from 01075ecc to 01175ef3 has its CatchHandler @ 01075f14 */
  return iVar1;
}

