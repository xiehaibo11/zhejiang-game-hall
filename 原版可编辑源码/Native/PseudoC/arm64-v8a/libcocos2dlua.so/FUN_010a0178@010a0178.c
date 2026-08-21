
long FUN_010a0178(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int local_24;
  
  puVar7 = *(undefined1 **)(param_1 + 0x18);
  uVar3 = *(ushort *)(param_1 + 8) >> 1;
  lVar4 = ft_mem_realloc(param_2,1,0,uVar3 + 1,0,&local_24);
  lVar5 = 0;
  if (local_24 == 0) {
                    /* try { // try from 010a01c8 to 011a0357 has its CatchHandler @ 010a01c8
                       catch() { ... } // from try @ 010a01c8 with catch @ 010a01c8
                       catch() { ... } // from try @ 010a0360 with catch @ 010a01c8
                       catch() { ... } // from try @ 010a0418 with catch @ 010a01c8
                       catch() { ... } // from try @ 010a04b4 with catch @ 010a01c8
                       catch() { ... } // from try @ 010a04f4 with catch @ 010a01c8
                       catch() { ... } // from try @ 010a0540 with catch @ 010a01c8 */
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar1 = (uint)CONCAT11(*puVar7,puVar7[1]);
        if (uVar1 == 0) break;
        uVar2 = 0x3f;
        if (uVar1 - 0x20 < 0x60) {
          uVar2 = puVar7[1];
        }
        *(undefined1 *)(lVar4 + uVar6) = uVar2;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar6 < uVar3);
    }
    *(undefined1 *)(lVar4 + (uVar6 & 0xffffffff)) = 0;
    lVar5 = lVar4;
  }
  return lVar5;
}

