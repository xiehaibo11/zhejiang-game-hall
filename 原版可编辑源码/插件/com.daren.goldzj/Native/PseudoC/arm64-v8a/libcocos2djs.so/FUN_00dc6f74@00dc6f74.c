
void FUN_00dc6f74(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  long lVar8;
  ushort *puVar9;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar4 = *(ushort *)(param_1 + 0x1e);
    lVar6 = *(long *)(param_1 + 0x80);
    puVar7 = (ushort *)(param_9 + 4);
    do {
      lVar8 = 0;
      param_6 = param_6 + -1;
      puVar9 = puVar7;
      do {
        puVar2 = puVar9 + -2;
        puVar3 = puVar9 + -1;
        uVar5 = *puVar9;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + uVar4;
        *(uint *)(param_2 + lVar8 * 4) =
             CONCAT13(*(undefined1 *)(lVar6 + (ulong)*puVar1),
                      CONCAT12(*(undefined1 *)(lVar6 + (ulong)uVar5),
                               CONCAT11(*(undefined1 *)(lVar6 + (ulong)*puVar3),
                                        *(undefined1 *)(lVar6 + (ulong)*puVar2))));
        lVar8 = lVar8 + 1;
      } while (param_5 != (int)lVar8);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
      puVar7 = (ushort *)
               ((long)puVar7 +
               ((ulong)(param_5 - 1) * 2 + 2) * (ulong)uVar4 +
               (long)(int)((uint)uVar4 * param_7) * 2);
    } while (param_6 != 0);
  }
  return;
}

