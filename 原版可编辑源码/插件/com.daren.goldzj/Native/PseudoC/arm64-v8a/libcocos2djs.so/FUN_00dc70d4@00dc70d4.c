
void FUN_00dc70d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar3 = *(ushort *)(param_1 + 0x1e);
    lVar5 = *(long *)(param_1 + 0x80);
    puVar6 = (ushort *)(param_9 + 2);
    do {
      lVar7 = 0;
      param_6 = param_6 + -1;
      puVar8 = puVar6;
      do {
        puVar2 = puVar8 + -1;
        uVar4 = *puVar8;
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + uVar3;
        *(uint *)(param_2 + lVar7 * 4) =
             CONCAT12(*(undefined1 *)(lVar5 + (ulong)*puVar1),
                      CONCAT11(*(undefined1 *)(lVar5 + (ulong)uVar4),
                               *(undefined1 *)(lVar5 + (ulong)*puVar2))) | 0xff000000;
        lVar7 = lVar7 + 1;
      } while (param_5 != (int)lVar7);
      puVar6 = (ushort *)
               ((long)puVar6 +
               ((ulong)(param_5 - 1) * 2 + 2) * (ulong)uVar3 +
               (long)(int)((uint)uVar3 * param_7) * 2);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

