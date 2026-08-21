
char recordRegisterInfo2File(long param_1,long param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar6 = (undefined8 *)(param_1 + 0xb8);
    iVar5 = 0;
    do {
      uVar7 = *puVar6;
      iVar4 = log2File(param_2,"r%d=0x%016lx\n",iVar5,uVar7);
      if (iVar4 < 1) {
        return '\0';
      }
      if (param_3 != -1) {
        iVar4 = DAT_0013ed98 + 1;
        bVar1 = DAT_0013ed98 == (DAT_0013ed98 / 3) * 3;
        DAT_0013ed98 = iVar4;
        if (bVar1) {
          log2Report(param_3,1,&DAT_001246d8);
        }
        log2Report(param_3,0,"  r%d: 0x%016lx",iVar5,uVar7);
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 != 0x1f);
    cVar2 = FUN_0010a60c(&DAT_001247b0,*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
    if (cVar2 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x1b8);
      iVar5 = log2File(param_2,"%s=0x%016lx\n",&DAT_00123e40,uVar7);
      if (0 < iVar5) {
        if (param_3 == -1) {
          cVar3 = FUN_0010a60c("pstate",*(undefined8 *)(param_1 + 0x1c0),param_2,0xffffffff);
          if (cVar3 != '\0') goto LAB_0010aa3c;
        }
        else {
          iVar5 = DAT_0013ed98 + 1;
          bVar1 = DAT_0013ed98 == (DAT_0013ed98 / 3) * 3;
          DAT_0013ed98 = iVar5;
          if (bVar1) {
            log2Report(param_3,1,&DAT_001246d8);
          }
          log2Report(param_3,0,"  %s: 0x%016lx",&DAT_00123e40,uVar7);
          cVar3 = FUN_0010a60c("pstate",*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
          if (cVar3 != '\0') {
            log2Report(param_3,1,"\n");
LAB_0010aa3c:
            log2Console(4,"CrashReport-Native","Record register info end");
            return cVar2;
          }
        }
      }
    }
  }
  return '\0';
}

