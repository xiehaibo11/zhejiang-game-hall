
/* WARNING: Type propagation algorithm not settling */

void FUN_00118164(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  if ((int)param_2[0xd8] == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 10);
  lVar3 = param_2[0xd9];
  if ((uVar1 & 1) != 0) {
    *(long *)(lVar3 + 8) = param_2[6];
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(long *)(lVar3 + 0x10) = param_2[7];
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(long *)(lVar3 + 0x18) = param_2[8];
  }
  if ((uVar1 >> 3 & 1) != 0) {
    *(long *)(lVar3 + 0x20) = param_2[9];
  }
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar2 + 0x100);
  *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar2 + 0x108);
  *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(lVar2 + 0x110);
  *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar2 + 0x118);
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar2 + 0x120);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar2 + 0x128);
  *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(lVar2 + 0x130);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar2 + 0x138);
  *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar2 + 0x140);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar2 + 0x148);
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar2 + 0x150);
  *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(lVar2 + 0x158);
  *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(lVar2 + 0x160);
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(lVar2 + 0x168);
  *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)(lVar2 + 0x170);
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar2 + 0x178);
  *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar2 + 0x180);
  *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar2 + 0x188);
  *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar2 + 400);
  *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(lVar2 + 0x198);
  *(undefined8 *)(lVar3 + 0xf0) = *(undefined8 *)(lVar2 + 0x1a0);
  *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(lVar2 + 0x1a8);
  uVar4 = *(undefined8 *)(lVar2 + 0x1b0);
  *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(lVar2 + 0x1b8);
  *(undefined8 *)(lVar3 + 0x100) = uVar4;
  *(undefined8 *)(lVar3 + 0x110) = *(undefined8 *)(lVar2 + 0x1c0);
  return;
}

