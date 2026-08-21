
undefined8 recordRegisterInfo2File(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0xb8 + uVar3 * 8);
      iVar2 = log2File(param_2,"r%d=0x%016lx\n",uVar3 & 0xffffffff,uVar4);
      if (iVar2 < 1) {
        return 0;
      }
      if (param_3 != -1) {
        iVar2 = DAT_0013fe00 + 1;
        bVar1 = DAT_0013fe00 == (DAT_0013fe00 / 3) * 3;
        DAT_0013fe00 = iVar2;
        if (bVar1) {
          log2Report(param_3,1,&DAT_0012693b);
        }
        log2Report(param_3,0,"  r%d: 0x%016lx",uVar3 & 0xffffffff,uVar4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1f);
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    iVar2 = log2File(param_2,"%s=0x%016lx\n",&DAT_0012690a,uVar4);
    if (0 < iVar2) {
      if (param_3 != -1) {
        iVar2 = DAT_0013fe00 + 1;
        bVar1 = DAT_0013fe00 == (DAT_0013fe00 / 3) * 3;
        DAT_0013fe00 = iVar2;
        if (bVar1) {
          log2Report(param_3,1,&DAT_0012693b);
        }
        log2Report(param_3,0,"  %s: 0x%016lx",&DAT_0012690a,uVar4);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1b8);
      iVar2 = log2File(param_2,"%s=0x%016lx\n",&DAT_00126263,uVar4);
      if (0 < iVar2) {
        if (param_3 != -1) {
          iVar2 = DAT_0013fe00 + 1;
          bVar1 = DAT_0013fe00 == (DAT_0013fe00 / 3) * 3;
          DAT_0013fe00 = iVar2;
          if (bVar1) {
            log2Report(param_3,1,&DAT_0012693b);
          }
          log2Report(param_3,0,"  %s: 0x%016lx",&DAT_00126263,uVar4);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x1c0);
        iVar2 = log2File(param_2,"%s=0x%016lx\n","pstate",uVar4);
        if (0 < iVar2) {
          if (param_3 != -1) {
            iVar2 = DAT_0013fe00 + 1;
            bVar1 = DAT_0013fe00 == (DAT_0013fe00 / 3) * 3;
            DAT_0013fe00 = iVar2;
            if (bVar1) {
              log2Report(param_3,1,&DAT_0012693b);
            }
            log2Report(param_3,0,"  %s: 0x%016lx","pstate",uVar4);
            log2Report(param_3,1,&DAT_001281ad);
          }
          log2Console(4,"eup","Record register info end");
          return 1;
        }
      }
    }
  }
  return 0;
}

