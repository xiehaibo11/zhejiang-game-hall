
void FUN_00e313dc(long param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  long *plVar4;
  short sVar5;
  short *psVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  ushort *puVar10;
  short sVar11;
  short sVar12;
  long lVar13;
  
  if ((*(byte *)(param_1 + 0x4c9) & 1) != 0) {
    lVar13 = *(long *)(param_1 + 0x4c0);
    puVar10 = *(ushort **)(lVar13 + 0x60);
    uVar1 = *puVar10;
    if ((ulong)uVar1 == 0) {
      sVar12 = 0;
      sVar9 = 0;
      sVar11 = 0;
    }
    else {
      plVar8 = *(long **)(puVar10 + 0x14);
      sVar11 = 0;
      sVar12 = 0;
      sVar9 = 0;
      plVar4 = plVar8;
      while( true ) {
        psVar6 = (short *)FUN_00e30bf8(param_1,*plVar4);
        sVar5 = FUN_00e31898(param_1,puVar10 + 4,(short)plVar4[1],*(undefined2 *)((long)plVar4 + 10)
                            );
        sVar2 = sVar12;
        sVar3 = sVar11;
        if (psVar6 != (short *)0x0) {
          *psVar6 = *(short *)((long)plVar4 + 0xc) + sVar5;
          lVar7 = *plVar4;
          sVar3 = sVar5;
          if (((lVar7 != 0x68617363) && (sVar2 = sVar5, sVar3 = sVar11, lVar7 != 0x686c6770)) &&
             (sVar2 = sVar12, lVar7 == 0x68647363)) {
            sVar9 = sVar5;
          }
        }
        sVar11 = sVar3;
        sVar12 = sVar2;
        if (plVar8 + (ulong)uVar1 * 2 <= plVar4 + 2) break;
        puVar10 = *(ushort **)(lVar13 + 0x60);
        plVar4 = plVar4 + 2;
      }
    }
    sVar2 = *(short *)(param_1 + 0x8a);
    sVar3 = *(short *)(param_1 + 0x8c);
    sVar5 = *(short *)(param_1 + 0x302);
    sVar11 = sVar2 + sVar11;
    sVar9 = sVar3 + sVar9;
    *(short *)(param_1 + 0x8a) = sVar11;
    *(short *)(param_1 + 0x8c) = sVar9;
    *(short *)(param_1 + 0x94) =
         *(short *)(param_1 + 0x300) - (short)((uint)(int)(short)(sVar5 - (sVar5 >> 0xf)) >> 1);
    *(short *)(param_1 + 0x8e) =
         (((*(short *)(param_1 + 0x8e) + sVar12) - sVar2) + sVar3 + sVar11) - sVar9;
    *(short *)(param_1 + 0x96) = sVar5;
    FT_List_Iterate(param_1 + 200,FUN_00e31a00,0);
    return;
  }
  return;
}

