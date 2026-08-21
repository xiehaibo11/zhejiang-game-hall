
int FUN_00e6c0ec(long param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_c0;
  long lStack_b8;
  undefined4 local_b0;
  int local_54;
  
  local_54 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_2 + 200;
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 2) {
      return 0x13;
    }
    if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) {
      FUN_00e139fc(uVar5,*(undefined8 *)(param_2 + 0xa8));
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(*(long *)(param_2 + 0x128) + 8) =
           *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
    }
    cVar3 = FUN_00e14d30(param_2,2,param_4);
    if (cVar3 == '\0') {
      uVar4 = FUN_00e13bcc(uVar5,(long)*(int *)(param_2 + 0xa0),0,*(undefined4 *)(param_2 + 0x98),0,
                           &local_54);
      *(undefined8 *)(param_2 + 0xa8) = uVar4;
      if (local_54 == 0) {
        *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
        lVar7 = (long)(*(int *)(param_2 + 0xc0) * -0x40);
        lVar6 = (long)((*(int *)(param_2 + 0x98) - *(int *)(param_2 + 0xc4)) * 0x40);
        if (param_4 != (long *)0x0) {
          lVar7 = *param_4 + lVar7;
          lVar6 = param_4[1] + lVar6;
        }
        if (lVar6 != 0 || lVar7 != 0) {
          FT_Outline_Translate(lVar1,lVar7,lVar6);
        }
        local_b0 = 0;
        local_c0 = param_2 + 0x98;
        lStack_b8 = lVar1;
        local_54 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_c0);
        if (local_54 == 0) {
          *(undefined4 *)(param_2 + 0x90) = 0x62697473;
          if (lVar7 == 0 && lVar6 == 0) {
            return 0;
          }
          goto LAB_00e6c1ec;
        }
        goto LAB_00e6c1b8;
      }
      bVar2 = *(byte *)(*(long *)(param_2 + 0x128) + 8);
    }
    else {
      local_54 = 0x62;
      bVar2 = *(byte *)(*(long *)(param_2 + 0x128) + 8);
    }
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    local_54 = 6;
LAB_00e6c1b8:
    bVar2 = *(byte *)(*(long *)(param_2 + 0x128) + 8);
  }
  if ((bVar2 & 1) != 0) {
    FUN_00e139fc(uVar5,*(undefined8 *)(param_2 + 0xa8));
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(*(long *)(param_2 + 0x128) + 8) =
         *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
  }
  if (lVar7 == 0 && lVar6 == 0) {
    return local_54;
  }
LAB_00e6c1ec:
  FT_Outline_Translate(lVar1,-lVar7,-lVar6);
  return local_54;
}

