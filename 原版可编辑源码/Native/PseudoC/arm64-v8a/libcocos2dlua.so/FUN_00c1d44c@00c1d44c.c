
ulong * FUN_00c1d44c(long param_1,ulong *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  bVar2 = param_3 < 0;
  if (bVar2) {
    param_3 = -param_3;
  }
  uVar5 = *param_2;
  do {
    uVar3 = (uint)((long)uVar5 >> 0x2f);
    if (((0xfffffff2 < uVar3) && (uVar3 != 0xfffffffb)) ||
       ((uVar7 = (uint)((long)param_2[-1] >> 0x2f), 0xfffffff2 < uVar7 && (uVar7 != 0xfffffffb)))) {
      puVar6 = (ulong *)FUN_00c1cd14(param_1,param_2 + -1,8);
      if ((*puVar6 == 0xffffffffffffffff) &&
         (puVar6 = (ulong *)FUN_00c1cd14(param_1,param_2,8), *puVar6 == 0xffffffffffffffff)) {
        uVar3 = (uint)((long)param_2[-1] >> 0x2f);
        if ((uVar3 < 0xfffffff3) || (puVar6 = param_2 + -1, uVar3 == 0xfffffffb)) {
          puVar6 = param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bfb020(param_1,puVar6,0x1af);
      }
      param_2[3] = param_2[-1];
      param_2[4] = *param_2;
      param_2[1] = *puVar6;
      *param_2 = 0xffffffffffffffff;
      param_2[-1] = (ulong)&DAT_00c1773c;
      param_2[2] = 0xffffffffffffffff;
      return param_2 + 3;
    }
    uVar8 = 0x20;
    puVar6 = param_2;
    if (uVar3 == 0xfffffffb) {
      uVar8 = (ulong)*(uint *)((uVar5 & 0x7fffffffffff) + 0x10);
    }
    do {
      puVar9 = puVar6 + -1;
      uVar5 = 0x20;
      if ((int)((long)*puVar9 >> 0x2f) == -5) {
        uVar5 = (ulong)*(uint *)((*puVar9 & 0x7fffffffffff) + 0x10);
      }
      param_3 = param_3 + -1;
      uVar8 = uVar8 + uVar5;
    } while ((0 < param_3) &&
            ((uVar3 = (uint)((long)puVar6[-2] >> 0x2f), puVar6 = puVar9, uVar3 < 0xfffffff3 ||
             (uVar3 == 0xfffffffb))));
    if (0x7ffffeff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x38);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    lVar1 = lVar10 + 0x88;
    *(long *)(lVar10 + 0xa0) = param_1;
    *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x98);
    puVar6 = puVar9;
    if ((uint)((int)*(undefined8 *)(lVar10 + 0x90) - (int)*(undefined8 *)(lVar10 + 0x98)) <
        (uint)uVar8) {
      FUN_00c1a4a8(lVar1);
    }
joined_r0x00c1d538:
    if (puVar6 <= param_2) {
      do {
        iVar4 = (int)((long)*puVar6 >> 0x2f);
        if (iVar4 == -5) {
          uVar5 = *puVar6 & 0x7fffffffffff;
          FUN_00c1a5d8(lVar1,uVar5 + 0x18,*(undefined4 *)(uVar5 + 0x10));
        }
        else {
          if (iVar4 == -0xe) goto code_r0x00c1d578;
          FUN_00c030d0(*puVar6,lVar1,0xf000035);
        }
        puVar6 = puVar6 + 1;
        if (param_2 < puVar6) break;
      } while( true );
    }
    uVar5 = FUN_00bfba1c(param_1,*(undefined8 *)(lVar10 + 0x98),
                         (int)*(undefined8 *)(lVar10 + 0x88) - (int)*(undefined8 *)(lVar10 + 0x98));
    uVar5 = uVar5 | 0xfffd800000000000;
    *puVar9 = uVar5;
    param_2 = puVar9;
    if (param_3 < 1) {
      if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) <
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
        return (ulong *)0x0;
      }
      if (!bVar2) {
        *(ulong *)(param_1 + 0x28) =
             *(long *)(param_1 + 0x20) +
             (ulong)*(byte *)(*(long *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) &
                                        0x7fffffffffff) + 0x20) + -0x5d) * 8;
      }
      FUN_00c19f80(param_1);
      return (ulong *)0x0;
    }
  } while( true );
code_r0x00c1d578:
  FUN_00bff62c(lVar1,(int)*puVar6);
  puVar6 = puVar6 + 1;
  goto joined_r0x00c1d538;
}

