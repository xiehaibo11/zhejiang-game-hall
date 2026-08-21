
undefined8 FUN_00e6be5c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  short *psVar4;
  int *piVar5;
  undefined1 auStack_47b0 [16384];
  undefined4 local_7b0;
  uint uStack_7ac;
  uint local_7a8;
  uint uStack_7a4;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined1 *local_798;
  undefined4 *local_790;
  undefined2 local_768;
  long local_760;
  undefined8 local_710;
  undefined8 uStack_708;
  long local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  ulong local_6c8;
  code *local_6b0;
  code *local_6a8;
  code *pcStack_6a0;
  code *local_698;
  byte local_690;
  byte local_68f;
  undefined2 local_78;
  short local_76;
  undefined4 local_38;
  
  local_798 = auStack_47b0;
  if (param_1 == 0) {
    return 0x60;
  }
  psVar4 = (short *)param_2[1];
  if (psVar4 != (short *)0x0) {
    if (psVar4[1] == 0) {
      return 0;
    }
    if ((long)*psVar4 < 1) {
      return 0;
    }
    if (((*(long *)(psVar4 + 0xc) != 0) && (*(long *)(psVar4 + 4) != 0)) &&
       (*(short *)(*(long *)(psVar4 + 0xc) + (long)*psVar4 * 2 + -2) + 1 == (int)psVar4[1])) {
      if ((*(byte *)(param_2 + 2) & 3) != 0) {
        return 0x13;
      }
      piVar5 = (int *)*param_2;
      if (piVar5 != (int *)0x0) {
        if ((piVar5[1] != 0) && (*piVar5 != 0)) {
          if (*(long *)(piVar5 + 4) == 0) {
            return 0x14;
          }
          uStack_6e0 = *(undefined8 *)(psVar4 + 4);
          local_6e8 = *(undefined8 *)psVar4;
          uStack_6d0 = *(undefined8 *)(psVar4 + 0xc);
          local_6d8 = *(undefined8 *)(psVar4 + 8);
          local_6c8 = *(ulong *)(psVar4 + 0x10);
          uStack_708 = *(undefined8 *)(piVar5 + 2);
          local_710 = *(undefined8 *)piVar5;
          uStack_6f8 = *(undefined8 *)(piVar5 + 6);
          local_700 = *(long *)(piVar5 + 4);
          local_6f0 = *(undefined8 *)(piVar5 + 8);
          local_7b0 = 6;
          uVar3 = (uint)local_6c8;
          bVar1 = (local_6c8 & 0x100) != 0;
          if (bVar1) {
            local_7b0 = 0xc;
          }
          local_7a0 = 0x20;
          if (bVar1) {
            local_7a0 = 0x100;
          }
          uStack_7ac = 0x40;
          if (bVar1) {
            uStack_7ac = 0x1000;
          }
          local_690 = 2;
          local_790 = &local_7b0;
          uStack_79c = 2;
          if (bVar1) {
            uStack_79c = 0x1e;
          }
          local_7a8 = uStack_7ac >> 1;
          uStack_7a4 = uStack_7ac >> 6;
          if (((uVar3 >> 3 & 1) == 0) && (local_690 = (byte)(uVar3 >> 2) & 4, (uVar3 >> 5 & 1) == 0)
             ) {
            local_690 = local_690 | 1;
          }
          local_68f = ((byte)(uVar3 >> 9) ^ 0xff) & 1;
          local_6b0 = FUN_00e6c394;
          pcStack_6a0 = FUN_00e6c4d8;
          local_6a8 = FUN_00e6c3b0;
          local_698 = FUN_00e6c658;
          local_38 = 0;
          local_78 = 0;
          local_76 = (short)((int)local_710 - 1U);
          local_768 = (undefined2)((ulong)local_710 >> 0x20);
          local_760 = local_700;
          if (0 < (int)uStack_708) {
            local_760 = local_700 + (long)(int)uStack_708 * (ulong)((int)local_710 - 1U);
          }
          uVar2 = FUN_00e6c66c(&local_7b0,0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if ((local_68f != 0) && (local_690 != 2)) {
            local_6b0 = FUN_00e6d758;
            pcStack_6a0 = FUN_00e6d7d8;
            local_6a8 = FUN_00e6d75c;
            local_698 = FUN_00e6d968;
            local_38 = 0;
            local_76 = local_710._4_2_ + -1;
            local_78 = 0;
            uVar2 = FUN_00e6c66c(&local_7b0,1);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0x14;
}

