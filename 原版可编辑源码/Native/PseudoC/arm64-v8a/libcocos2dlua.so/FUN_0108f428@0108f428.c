
void FUN_0108f428(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0108f42c to 0118f433 has its CatchHandler @ 0108f4fc */
                    /* try { // try from 0108f434 to 0118f60b has its CatchHandler @ 0108f1ec */
  lVar2 = *(long *)(param_1 + 0x130);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 0x38);
  ft_glyphslot_free_bitmap(lVar2);
  *(undefined8 *)(lVar2 + 0x120) = 0;
  *(undefined4 *)(lVar2 + 0x90) = 0;
  memset((void *)(lVar2 + 0x30),0,0x50);
  memset((void *)(lVar2 + 0x98),0,0x5c);
  *(undefined8 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0x108) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  iVar1 = (**(code **)(lVar3 + 0x90))
                    (*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_2 + 0x58),param_3,
                     param_4 | 8);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x130);
    uVar4 = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar2 + 0x90);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0xe8);
    uVar4 = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
                    /* catch() { ... } // from try @ 0108f42c with catch @ 0108f4fc */
    uVar4 = *(undefined8 *)(lVar2 + 200);
                    /* catch() { ... } // from try @ 0108f354 with catch @ 0108f500 */
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = uVar4;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
    uVar4 = *(undefined8 *)(lVar2 + 0xa8);
                    /* catch() { ... } // from try @ 0108f404 with catch @ 0108f510 */
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
                    /* catch() { ... } // from try @ 0108f3d0 with catch @ 0108f514 */
    uVar4 = *(undefined8 *)(lVar2 + 0x98);
                    /* catch() { ... } // from try @ 0108f3c0 with catch @ 0108f518 */
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
                    /* catch() { ... } // from try @ 0108f328 with catch @ 0108f51c */
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(lVar2 + 0xc4);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar2 + 0xf0);
    uVar4 = *(undefined8 *)(lVar2 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar2 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = uVar4;
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar2 + 0x108);
  }
  return;
}

