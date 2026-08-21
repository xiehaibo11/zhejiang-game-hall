
undefined8 FUN_00139be8(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *param_1;
  uVar4 = *(uint *)(lVar3 + 0x58);
  uVar5 = (ulong)uVar4;
  if (param_3 < param_4) {
    lVar6 = *(long *)(lVar3 + 0x38);
    do {
      uVar4 = (uint)uVar5;
      if (param_2 < *(uint *)(lVar6 + (long)(int)uVar4 * 4 + -4)) {
LAB_00139c4c:
        if (*(ulong *)(lVar3 + 0x50) != 0) {
          uVar5 = 0;
          while (*(uint *)(lVar6 + uVar5 * 4) <= (uint)param_2) {
            uVar5 = uVar5 + 1;
            if (*(ulong *)(lVar3 + 0x50) == uVar5) goto LAB_00139cb4;
          }
          if (-1 < (int)uVar5) goto LAB_00139ca8;
        }
LAB_00139cb4:
        puts("curRangeIndex>=0 ERROR!");
        pcVar2 = "curRangeIndex>=0";
LAB_00139cd0:
        FUN_0013fb24(&DAT_0016ba71,pcVar2,"in OldStream");
        return 0;
      }
      uVar7 = (ulong)*(uint *)(lVar6 + (long)(int)uVar4 * 4);
      if ((param_2 + param_4) - param_3 <= uVar7) {
        uVar5 = FUN_00139d5c(lVar3,param_2,param_3,param_4,uVar5 & 0xffffffff);
        if ((uVar5 & 1) == 0) {
          puts("_OldStream_read_do(self,readFromPos,out_data,out_data_end,curRangeIndex) ERROR!");
          pcVar2 = "_OldStream_read_do(self,readFromPos,out_data,out_data_end,curRangeIndex)";
          goto LAB_00139cd0;
        }
        break;
      }
      if (uVar7 < param_2) goto LAB_00139c4c;
      lVar1 = uVar7 - param_2;
      if ((lVar1 != 0) &&
         (uVar5 = FUN_00139d5c(lVar3,param_2,param_3,param_3 + lVar1,uVar5 & 0xffffffff),
         (uVar5 & 1) == 0)) {
        puts("_OldStream_read_do(self,readFromPos,out_data,out_data+leftLen,curRangeIndex) ERROR!");
        pcVar2 = "_OldStream_read_do(self,readFromPos,out_data,out_data+leftLen,curRangeIndex)";
        goto LAB_00139cd0;
      }
      uVar5 = (ulong)(uVar4 + 1);
      param_3 = param_3 + lVar1;
      param_2 = uVar7;
LAB_00139ca8:
      uVar4 = (uint)uVar5;
    } while (param_3 < param_4);
  }
  *(uint *)(lVar3 + 0x58) = uVar4;
  return 1;
}

