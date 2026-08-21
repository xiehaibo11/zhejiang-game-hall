
undefined8 FUN_00c13cec(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int local_4;
  
  plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar12[2] = param_1;
  uVar2 = FUN_00c132c0(param_1,plVar12,0);
  uVar5 = (ulong)uVar2;
  uVar6 = uVar5;
  while( true ) {
    puVar1 = (uint *)(*plVar12 + uVar6 * 0x18);
    uVar3 = *(uint *)(*plVar12 + uVar6 * 0x18);
    if (uVar3 >> 0x1c != 8) break;
    uVar6 = (ulong)(ushort)uVar3;
  }
  uVar3 = FUN_00c0ecb0(plVar12,uVar5,&local_4);
  if ((uVar3 >> 0x14 & 1) == 0) {
    lVar13 = *(long *)(param_1 + 0x20) + 8;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x20) + 0x10;
    uVar4 = FUN_00c1363c(param_1,2);
    local_4 = FUN_00c0ebec(plVar12,puVar1,uVar4);
  }
  if (local_4 != -1) {
    uVar6 = FUN_00c20df8(plVar12,uVar5);
    *(ulong *)(lVar13 + -8) = uVar6 | 0xfffa800000000000;
    FUN_00c22d28(plVar12,puVar1,local_4,uVar6 + 0x10,lVar13,
                 (ulong)(*(long *)(param_1 + 0x28) - lVar13) >> 3);
    if ((((*puVar1 >> 0x1c == 1) &&
         (puVar7 = (ulong *)FUN_00c1bbc0(plVar12[5],-uVar2), puVar7 != (ulong *)0x0)) &&
        ((int)((long)*puVar7 >> 0x2f) == -0xc)) &&
       (((uVar5 = *puVar7 & 0x7fffffffffff, uVar5 != 0 && ((*(byte *)(uVar5 + 10) >> 2 & 1) == 0))
        && ((puVar8 = (undefined8 *)
                      FUN_00c1ccbc(uVar5,2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x180)),
            puVar8 != (undefined8 *)0x0 && (lVar11 = plVar12[4], *(long *)(lVar11 + 0x20) != 0))))))
    {
      puVar9 = (undefined8 *)FUN_00c1bdd4(param_1,lVar11,lVar13 + -8);
      *puVar9 = *puVar8;
      if ((*(byte *)(lVar11 + 8) >> 2 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x10);
        *(byte *)(lVar11 + 8) = *(byte *)(lVar11 + 8) & 0xfb;
        *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar10 + 0x50);
        *(long *)(lVar10 + 0x50) = lVar11;
      }
      *(byte *)(uVar6 + 8) = *(byte *)(uVar6 + 8) | 0x10;
    }
    *(long *)(param_1 + 0x28) = lVar13;
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28))
    {
      return 1;
    }
    FUN_00c19f80(param_1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,1,0xb92,uVar3);
}

