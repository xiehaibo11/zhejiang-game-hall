
int FT_Stream_OpenGzip(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int local_48;
  int local_44;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  local_48 = FUN_00e70584(param_2);
  if (local_48 != 0) {
    return local_48;
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = uVar7;
  plVar2 = (long *)FUN_00e1d8b0(uVar7,0x20a8,&local_48);
  if (local_48 == 0) {
    *plVar2 = param_2;
    plVar2[1] = (long)param_1;
    lVar6 = param_1[7];
    plVar2[0x414] = (long)(plVar2 + 0x412);
    plVar2[0x413] = (long)(plVar2 + 0x412);
    plVar2[2] = lVar6;
    plVar2[0x412] = 0;
    iVar1 = FUN_00e70584(param_2);
    if (iVar1 != 0) {
LAB_00e70410:
      local_48 = iVar1;
      FUN_00e139fc(uVar7,plVar2);
      return local_48;
    }
    lVar6 = FUN_00e1d4a0(param_2);
    plVar2[0x11] = lVar6;
    plVar2[0xb] = (long)FUN_00e70a08;
    plVar2[0xc] = (long)thunk_FUN_00e139fc;
    lVar6 = *(long *)(param_2 + 0x38);
    *(undefined4 *)(plVar2 + 4) = 0;
    plVar2[0xd] = lVar6;
    plVar2[3] = (long)(plVar2 + 0x212);
    iVar1 = inflateInit2_(plVar2 + 3,0xfffffff1,"1.2.8",0x70);
    if ((iVar1 != 0) || (plVar2[3] == 0)) {
      iVar1 = 3;
      goto LAB_00e70410;
    }
    local_48 = 0;
    param_1[3] = plVar2;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  iVar1 = FUN_00e1bb5c(param_2,*(long *)(param_2 + 8) + -4);
  if (iVar1 == 0) {
    lVar3 = FUN_00e1dcb4(param_2,&local_44);
    lVar6 = lVar3;
    if (local_44 != 0) {
      lVar6 = 0;
    }
    FUN_00e1bb5c(param_2,uVar4);
    if (lVar6 - 1U < 0x9fff) {
      uVar4 = FUN_00e1388c(uVar7,lVar6,&local_48);
      if (local_48 == 0) {
        lVar5 = FUN_00e70700(plVar2,0,uVar4,lVar6);
        if (lVar5 == lVar6) {
          inflateEnd(plVar2 + 3);
          plVar2[6] = 0;
          *(undefined4 *)(plVar2 + 7) = 0;
          *(undefined4 *)(plVar2 + 4) = 0;
          plVar2[0xc] = 0;
          plVar2[0xd] = 0;
          plVar2[1] = 0;
          *plVar2 = 0;
          plVar2[3] = 0;
          plVar2[2] = 0;
          plVar2[0xb] = 0;
          FUN_00e139fc(uVar7,plVar2);
          *param_1 = uVar4;
          param_1[1] = lVar6;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[5] = 0;
          param_1[6] = FUN_00e7086c;
          return local_48;
        }
        if ((plVar2[0x412] != 0) && (iVar1 = FUN_00e1bb5c(*plVar2,plVar2[0x11]), iVar1 == 0)) {
          inflateReset(plVar2 + 3);
          plVar2[3] = (long)(plVar2 + 0x12);
          *(undefined4 *)(plVar2 + 4) = 0;
          *(undefined4 *)(plVar2 + 7) = 0;
          plVar2[0x414] = (long)(plVar2 + 0x412);
          plVar2[0x413] = (long)(plVar2 + 0x412);
          plVar2[6] = (long)(plVar2 + 0x212);
          plVar2[0x412] = 0;
        }
        FUN_00e139fc(uVar7,uVar4);
      }
      local_48 = 0;
    }
    else if (lVar6 == 0) goto LAB_00e70358;
    param_1[1] = lVar3;
  }
  else {
LAB_00e70358:
    param_1[1] = 0x7fffffff;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[5] = FUN_00e708f8;
  param_1[6] = FUN_00e7086c;
  return local_48;
}

