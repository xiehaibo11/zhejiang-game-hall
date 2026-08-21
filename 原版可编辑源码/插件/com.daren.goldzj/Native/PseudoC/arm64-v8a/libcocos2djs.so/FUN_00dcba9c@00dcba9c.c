
void FUN_00dcba9c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9,long param_10,long param_11,
                 long param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    lVar3 = *(long *)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x80);
    lVar1 = (long)param_7 * 2 + (ulong)(param_5 - 1U) * 2 + 2;
    do {
      lVar6 = 0;
      param_6 = param_6 + -1;
      do {
        lVar7 = lVar6 * 2;
        bVar5 = *(byte *)(lVar4 + (ulong)*(ushort *)(param_12 + lVar7));
        lVar2 = lVar3 + (ulong)bVar5 * 0x100;
        *(uint *)(param_2 + lVar6 * 4) =
             CONCAT13(bVar5,CONCAT12(*(undefined1 *)
                                      (lVar2 + (ulong)*(byte *)(lVar4 + (ulong)*(ushort *)
                                                                                (param_11 + lVar7)))
                                     ,CONCAT11(*(undefined1 *)
                                                (lVar2 + (ulong)*(byte *)(lVar4 + (ulong)*(ushort *)
                                                                                          (param_10 
                                                  + lVar7))),
                                               *(undefined1 *)
                                                (lVar2 + (ulong)*(byte *)(lVar4 + (ulong)*(ushort *)
                                                                                          (param_9 +
                                                                                          lVar7)))))
                     );
        lVar6 = lVar6 + 1;
      } while (param_5 != (int)lVar6);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1U) * 4 + 4;
      param_9 = param_9 + lVar1;
      param_10 = param_10 + lVar1;
      param_12 = param_12 + lVar1;
      param_11 = param_11 + lVar1;
    } while (param_6 != 0);
  }
  return;
}

