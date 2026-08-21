
undefined8
FUN_0013e4d4(long param_1,long param_2,int param_3,uint param_4,ulong param_5,ulong param_6,
            int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    lVar7 = *(long *)(param_2 + 0x50) +
            (ulong)*(uint *)(*(long *)(param_2 + 0x58) + (long)param_3 * 4);
    bVar3 = *(byte *)(lVar7 + 10) | *(byte *)(lVar7 + 0xb);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x121);
  }
  bVar4 = bVar3 == 0;
  if (!bVar4 && (param_4 & 1) == 0) {
    if (8 < param_7 - 1U) {
      pcVar8 = "(Z_BEST_SPEED<=curFileCompressLevel)&&(curFileCompressLevel<=Z_BEST_COMPRESSION)";
      goto LAB_0013e6e8;
    }
    if (8 < param_8 - 1U) {
      pcVar8 = "(1<=curFileCompressMemLevel)&&(curFileCompressMemLevel<=MAX_MEM_LEVEL)";
      goto LAB_0013e6e8;
    }
  }
  if (bVar4 && ((param_4 ^ 1) & 1) == 0) {
    return 0;
  }
  if (param_6 == 0) {
    if (((param_4 ^ 1) & 1) == 0 && param_5 != 0) {
      pcVar8 = "(!appendDataIsCompressed)||(dataUncompressedSize==0)";
      goto LAB_0013e6e8;
    }
    if (param_5 == 0) {
      param_6 = 0;
    }
    else {
      param_6 = (ulong)*(uint *)(*(long *)(param_2 + 0x60) + (long)param_3 * 4);
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < *(int *)(param_1 + 0x5c)) {
    uVar5 = param_6;
    if (bVar4) {
      uVar5 = param_5;
    }
    *(int *)(param_1 + 0x60) = iVar1 + 1;
    *(int *)(*(long *)(param_1 + 0x88) + (long)iVar1 * 4) = (int)uVar5;
    uVar5 = FUN_0013e768(param_1,iVar1,param_2,param_3,0);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_6;
      if ((param_4 & 1) == 0) {
        uVar5 = param_5;
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(long *)(param_1 + 200) = param_1;
      *(int *)(param_1 + 0x100) = iVar1;
      *(long *)(param_1 + 0x98) = param_1 + 0x98;
      *(ulong *)(param_1 + 0xa0) = uVar5;
      *(code **)(param_1 + 0xb0) = FUN_0013e2bc;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      if (!bVar4 && (param_4 & 1) == 0) {
        if ((1 < *(int *)(param_1 + 0x124)) && (param_6 != 0)) {
          FUN_00138094(*(undefined8 *)(param_1 + 0x128),1);
          uVar2 = *(uint *)(param_1 + 0x58);
          plVar6 = malloc(param_5 + param_6 + 0x30);
          if (plVar6 == (long *)0x0) {
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
          else {
            plVar6[2] = param_5;
            plVar6[3] = param_6;
            plVar6[4] = (ulong)uVar2;
            *(int *)(plVar6 + 5) = param_7;
            *(int *)((long)plVar6 + 0x2c) = param_8;
            *plVar6 = (long)(plVar6 + 6);
            plVar6[1] = (long)(plVar6 + 6) + param_5;
            *(long **)(param_1 + 0xd0) = plVar6;
            uVar5 = FUN_0013ed5c(param_1,param_6);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
        }
        if (*(long *)(param_1 + 0xd0) == 0) {
          *(long *)(param_1 + 0xe0) = param_1 + 0x98;
          *(ulong *)(param_1 + 0xe8) = (ulong)*(uint *)(*(long *)(param_1 + 0x88) + (long)iVar1 * 4)
          ;
          *(code **)(param_1 + 0xf8) = FUN_0013e3a8;
          lVar7 = FUN_0013e0b4(&PTR_FUN_001670b8,param_7,param_8,(long *)(param_1 + 0xe0),
                               *(undefined8 *)(param_1 + 0x90),0x4000);
          *(long *)(param_1 + 0xd8) = lVar7;
          if (lVar7 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
    pcVar8 = "_write_fileHeaderInfo(self,curFileIndex,srcZip,srcFileIndex,false)";
  }
  else {
    pcVar8 = "curFileIndex < self->_fileEntryMaxCount";
  }
LAB_0013e6e8:
  FUN_0013fb24(&DAT_0016ba80,pcVar8,DAT_0016ba88);
  return 0;
}

