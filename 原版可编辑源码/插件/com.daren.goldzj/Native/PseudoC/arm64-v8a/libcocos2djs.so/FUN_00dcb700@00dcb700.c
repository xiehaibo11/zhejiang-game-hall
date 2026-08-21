
void FUN_00dcb700(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9,long param_10,long param_11,
                 long param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    lVar4 = *(long *)(param_1 + 0x78);
    lVar3 = (long)param_7;
    lVar1 = (ulong)(param_5 - 1) + 1;
    do {
      lVar5 = 0;
      param_6 = param_6 + -1;
      do {
        lVar2 = lVar4 + (ulong)*(byte *)(param_12 + lVar5) * 0x100;
        *(uint *)(param_2 + lVar5 * 4) =
             CONCAT13(*(byte *)(param_12 + lVar5),
                      CONCAT12(*(undefined1 *)(lVar2 + (ulong)*(byte *)(param_11 + lVar5)),
                               CONCAT11(*(undefined1 *)(lVar2 + (ulong)*(byte *)(param_10 + lVar5)),
                                        *(undefined1 *)(lVar2 + (ulong)*(byte *)(param_9 + lVar5))))
                     );
        lVar5 = lVar5 + 1;
      } while (param_5 != (int)lVar5);
      param_9 = param_9 + lVar1 + lVar3;
      param_11 = param_11 + lVar1 + lVar3;
      param_10 = param_10 + lVar1 + lVar3;
      param_12 = param_12 + lVar1 + lVar3;
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

