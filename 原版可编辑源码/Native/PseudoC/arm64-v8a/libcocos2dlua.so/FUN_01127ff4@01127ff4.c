
void FUN_01127ff4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    lVar2 = *(long *)(param_1 + 0x80);
    lVar1 = (long)param_7 * 2 + (ulong)(param_5 - 1U) * 2 + 2;
    do {
      lVar3 = 0;
      param_6 = param_6 + -1;
      do {
        lVar4 = lVar3 * 2;
        *(uint *)(param_2 + lVar3 * 4) =
             CONCAT12(*(undefined1 *)(lVar2 + (ulong)*(ushort *)(param_11 + lVar4)),
                      CONCAT11(*(undefined1 *)(lVar2 + (ulong)*(ushort *)(param_10 + lVar4)),
                               *(undefined1 *)(lVar2 + (ulong)*(ushort *)(param_9 + lVar4)))) |
             0xff000000;
        lVar3 = lVar3 + 1;
      } while (param_5 != (int)lVar3);
      param_11 = param_11 + lVar1;
      param_10 = param_10 + lVar1;
      param_9 = param_9 + lVar1;
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1U) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

