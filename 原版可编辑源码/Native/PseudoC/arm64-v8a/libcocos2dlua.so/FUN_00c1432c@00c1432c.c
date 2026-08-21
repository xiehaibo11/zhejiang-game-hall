
undefined8 FUN_00c1432c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  puVar4 = (ulong *)FUN_00c142a0();
  uVar1 = *(long *)(param_1 + 0x20) + 0x10;
  if ((uVar1 < *(ulong *)(param_1 + 0x28)) && ((int)((long)*puVar4 >> 0x2f) == -0xb)) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
    plVar5[2] = param_1;
    lVar7 = *plVar5;
    uVar8 = *(uint *)(lVar7 + (ulong)*(ushort *)((*puVar4 & 0x7fffffffffff) + 10) * 0x18);
    uVar6 = (ulong)uVar8;
    if (uVar8 >> 0x1c == 0xc) {
      uVar8 = 0;
      do {
        lVar3 = (uVar6 & 0xffff) * 0x18;
        uVar2 = *(uint *)(lVar7 + lVar3);
        while( true ) {
          if (uVar2 >> 0x1c != 8) {
            if (((uVar8 | uVar2) >> 0x19 & 1) == 0) {
              FUN_00c22594(plVar5,lVar7 + lVar3,*(undefined8 *)((*puVar4 & 0x7fffffffffff) + 0x10),
                           uVar1,0);
              return 0;
            }
            goto LAB_00c14414;
          }
          uVar6 = (ulong)uVar2;
          if ((uVar2 >> 0x10 & 0xff) != 1) break;
          uVar8 = uVar8 | *(uint *)(lVar7 + lVar3 + 4);
          lVar3 = (uVar6 & 0xffff) * 0x18;
          uVar2 = *(uint *)(lVar7 + lVar3);
        }
      } while( true );
    }
  }
LAB_00c14414:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0xdc5);
}

