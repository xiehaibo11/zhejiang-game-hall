
undefined4
TIFFReadRGBAImageOriented
          (long param_1,int param_2,int param_3,long param_4,undefined2 param_5,undefined4 param_6)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long local_4e8 [3];
  int local_4d0;
  undefined2 local_4c6;
  code *local_4a8;
  long local_4a0;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(auStack_458,0,0x400);
  iVar2 = TIFFRGBAImageOK(param_1,auStack_458);
  if ((iVar2 == 0) ||
     (iVar2 = TIFFRGBAImageBegin(local_4e8,param_1,param_6,auStack_458), iVar2 == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x3b8);
    uVar4 = TIFFFileName(param_1);
    TIFFErrorExt(uVar6,uVar4,"%s",auStack_458);
    uVar3 = 0;
    goto LAB_011220ac;
  }
  local_4c6 = param_5;
  if (local_4a8 == (code *)0x0) {
    uVar6 = *(undefined8 *)(local_4e8[0] + 0x3b8);
    uVar4 = TIFFFileName();
    pcVar5 = "No \"get\" routine setup";
LAB_01122098:
    TIFFErrorExt(uVar6,uVar4,pcVar5);
    uVar3 = 0;
  }
  else {
    if (local_4a0 == 0) {
      uVar6 = *(undefined8 *)(local_4e8[0] + 0x3b8);
      uVar4 = TIFFFileName();
      pcVar5 = "No \"put\" routine setupl; probably can not handle image format";
      goto LAB_01122098;
    }
    uVar3 = (*local_4a8)(local_4e8,param_4 + (ulong)(uint)((param_3 - local_4d0) * param_2) * 4,
                         param_2);
  }
  TIFFRGBAImageEnd(local_4e8);
LAB_011220ac:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

