
void FUN_00c096b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  long *plVar14;
  ushort *puVar6;
  
  plVar12 = *(long **)(param_1 + 0x18);
  plVar14 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 0x18) = *plVar12;
  lVar9 = *plVar14;
  bVar13 = *(byte *)((long)plVar12 + 0xc);
  if ((uint)bVar13 < *(uint *)(lVar9 + 0x38)) {
    uVar3 = *(uint *)(lVar9 + 0x38) - 1;
    lVar8 = plVar14[0x12];
    uVar4 = *(undefined4 *)(lVar9 + 0x28);
    puVar5 = (ushort *)(lVar9 + ((ulong)uVar3 + 0x2e) * 2);
    do {
      puVar6 = puVar5 + -1;
      *(undefined4 *)(lVar8 + (ulong)*puVar5 * 0x18 + 0xc) = uVar4;
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)(lVar9 + (((ulong)uVar3 + 0x2d) - (ulong)(uVar3 - bVar13)) * 2));
    *(uint *)(lVar9 + 0x38) = (uint)bVar13;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  bVar13 = *(byte *)((long)plVar12 + 0xd);
  if ((bVar13 & 0x18) == 8) {
    FUN_00c07f70(param_1,(uint)*(byte *)((long)plVar12 + 0xc) << 8 | 0x80000032);
    bVar13 = *(byte *)((long)plVar12 + 0xd);
  }
  if ((bVar13 >> 1 & 1) == 0) {
    if ((bVar13 >> 2 & 1) == 0) {
      return;
    }
  }
  else if ((bVar13 & 1) != 0) {
    uVar4 = FUN_00c095e8(plVar14,1,4,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)((long)plVar14 + 0x9c) = uVar4;
    FUN_00c087c4(plVar14,(int)plVar12[1],uVar4);
    return;
  }
  plVar7 = (long *)(plVar14[0x12] + (ulong)*(uint *)(plVar12 + 1) * 0x18);
  plVar2 = (long *)(plVar14[0x12] + (ulong)*(uint *)((long)plVar14 + 0x9c) * 0x18);
  if (plVar7 < plVar2) {
    plVar11 = plVar7 + 3;
    lVar9 = *plVar7;
    if (lVar9 == 0) goto joined_r0x00c09894;
    while( true ) {
      if ((*(byte *)((long)plVar11 + -7) >> 2 & 1) == 0) {
        if ((*(byte *)((long)plVar11 + -7) >> 1 & 1) == 0) goto joined_r0x00c09894;
        lVar8 = *plVar12;
        if (lVar8 != 0) {
          bVar13 = 2;
          if (lVar9 != 1) {
            bVar13 = 4;
          }
          *(byte *)(lVar8 + 0xd) = bVar13 | *(byte *)(lVar8 + 0xd);
          *(undefined1 *)(plVar11 + -1) = *(undefined1 *)((long)plVar12 + 0xc);
          if ((*(byte *)((long)plVar12 + 0xd) >> 3 & 1) == 0) goto joined_r0x00c09894;
          FUN_00c088e8(*plVar14,(int)plVar11[-2]);
          goto joined_r0x00c09894;
        }
        *(undefined4 *)(plVar14 + 0xe) =
             *(undefined4 *)(*(long *)(*plVar14 + 0x48) + (ulong)*(uint *)(plVar7 + 1) * 8 + 4);
        if (lVar9 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00c064c4(plVar14,0,0xaeb,lVar9 + 0x18);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00c064c4(plVar14,0,0xada);
      }
      plVar11[-3] = 0;
      plVar10 = plVar11;
      if (plVar2 <= plVar11) break;
      do {
        while ((plVar7 = plVar11, lVar9 == *plVar10 &&
               ((*(byte *)((long)plVar10 + 0x11) >> 1 & 1) != 0))) {
          if ((*(byte *)((long)plVar12 + 0xd) >> 3 & 1) == 0) {
LAB_00c098a8:
            bVar13 = *(byte *)(plVar11 + -1);
          }
          else {
            bVar13 = *(byte *)(plVar11 + -1);
            if (bVar13 < *(byte *)(plVar10 + 2)) {
              FUN_00c088e8(*plVar14,(int)plVar10[1]);
              goto LAB_00c098a8;
            }
          }
          lVar8 = *plVar14;
          plVar1 = plVar10 + 3;
          *plVar10 = 0;
          uVar3 = *(uint *)(plVar10 + 1);
          *(byte *)(*(long *)(lVar8 + 0x48) + (ulong)uVar3 * 8 + 1) = bVar13;
          FUN_00c07ef0(lVar8,(ulong)uVar3,(int)plVar11[-2]);
          plVar10 = plVar1;
          if (plVar2 <= plVar1) goto LAB_00c09820;
        }
        plVar10 = plVar10 + 3;
      } while (plVar10 < plVar2);
LAB_00c09820:
      while( true ) {
        plVar11 = plVar7 + 3;
        lVar9 = *plVar7;
        if (lVar9 != 0) break;
joined_r0x00c09894:
        plVar7 = plVar11;
        if (plVar2 <= plVar11) {
          return;
        }
      }
    }
  }
  return;
}

