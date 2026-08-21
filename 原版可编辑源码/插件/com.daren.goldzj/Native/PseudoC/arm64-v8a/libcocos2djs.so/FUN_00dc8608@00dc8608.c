
void FUN_00dc8608(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x1e);
    lVar3 = *(long *)(param_1 + 0x58);
    do {
      lVar4 = 0;
      lVar5 = 0;
      param_6 = param_6 + -1;
      do {
        puVar1 = (ushort *)(param_9 + lVar5);
        lVar5 = lVar5 + (ulong)uVar2 * 2;
        *(undefined4 *)(param_2 + lVar4 * 4) =
             **(undefined4 **)(lVar3 + ((ulong)(*puVar1 >> 5) & 0x7f8));
        lVar4 = lVar4 + 1;
      } while (param_5 != (int)lVar4);
      param_9 = param_9 + ((ulong)(param_5 - 1) * 2 + 2) * (ulong)uVar2 + (long)param_7;
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

