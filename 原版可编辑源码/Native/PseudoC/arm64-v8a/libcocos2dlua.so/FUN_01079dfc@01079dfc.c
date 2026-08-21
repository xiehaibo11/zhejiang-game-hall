
undefined8 FUN_01079dfc(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar5 = *(uint **)(param_1 + 0x348);
  if ((puVar5 == (uint *)0x0) || (puVar5[1] != param_2)) {
    uVar2 = 6;
  }
  else {
    uVar3 = *puVar5;
    if (uVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079d90 with catch @ 01079e30
                        */
      uVar6 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079da0 with catch @ 01079e34
                        */
      do {
        if (param_2 == 0) {
          uVar2 = 0x10000;
        }
        else {
          uVar3 = 0;
          uVar2 = 0x10000;
          do {
            uVar4 = *(ulong *)(param_3 + (ulong)uVar3 * 8);
            uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
            if (0xffff < (long)uVar4) {
              uVar4 = 0x10000;
            }
            uVar1 = 0x10000 - uVar4;
            if ((1 << (ulong)(uVar3 & 0x1f) & uVar6) != 0) {
              uVar1 = uVar4;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079d38 with catch @ 01079e68
                        */
            uVar2 = FT_MulFix(uVar2,uVar1);
            param_2 = puVar5[1];
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_2);
          uVar3 = *puVar5;
        }
        *(undefined8 *)(*(long *)(puVar5 + 0x42) + (ulong)uVar6 * 8) = uVar2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}

