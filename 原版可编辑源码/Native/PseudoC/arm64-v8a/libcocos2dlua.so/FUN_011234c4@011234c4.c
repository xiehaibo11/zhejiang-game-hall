
void FUN_011234c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar7 = *(ushort *)(param_1 + 0x1e);
    lVar5 = *(long *)(param_1 + 0x78);
    lVar6 = *(long *)(param_1 + 0x80);
    puVar9 = (ushort *)(param_9 + 4);
    do {
      lVar10 = 0;
      param_6 = param_6 + -1;
      puVar11 = puVar9;
      do {
        puVar1 = puVar11 + 1;
        puVar2 = puVar11 + -2;
        puVar3 = puVar11 + -1;
        uVar8 = *puVar11;
        lVar4 = lVar5 + (ulong)*(byte *)(lVar6 + (ulong)*puVar1) * 0x100;
        puVar11 = puVar11 + uVar7;
        *(uint *)(param_2 + lVar10 * 4) =
             CONCAT13(*(byte *)(lVar6 + (ulong)*puVar1),
                      CONCAT12(*(undefined1 *)(lVar4 + (ulong)*(byte *)(lVar6 + (ulong)uVar8)),
                               CONCAT11(*(undefined1 *)
                                         (lVar4 + (ulong)*(byte *)(lVar6 + (ulong)*puVar3)),
                                        *(undefined1 *)
                                         (lVar4 + (ulong)*(byte *)(lVar6 + (ulong)*puVar2)))));
        lVar10 = lVar10 + 1;
      } while (param_5 != (int)lVar10);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
      puVar9 = (ushort *)
               ((long)puVar9 +
               ((ulong)(param_5 - 1) * 2 + 2) * (ulong)uVar7 +
               (long)(int)((uint)uVar7 * param_7) * 2);
    } while (param_6 != 0);
  }
  return;
}

