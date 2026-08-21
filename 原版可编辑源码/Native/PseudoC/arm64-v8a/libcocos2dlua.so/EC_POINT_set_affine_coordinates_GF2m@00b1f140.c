
undefined8
EC_POINT_set_affine_coordinates_GF2m
          (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x88);
  if (pcVar4 == (code *)0x0) {
    iVar1 = 0x42;
    iVar3 = 0x2d0;
    goto LAB_00b1f228;
  }
  if (*param_1 != *param_2) {
    iVar1 = 0x65;
    iVar3 = 0x2d5;
    goto LAB_00b1f228;
  }
  uVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar4 = *(code **)(*param_1 + 0xd0);
  if (pcVar4 == (code *)0x0) {
    iVar1 = 0x42;
    iVar3 = 0x34b;
LAB_00b1f20c:
    ERR_put_error(0x10,0x77,iVar1,"crypto/ec/ec_lib.c",iVar3);
  }
  else {
    if (*param_1 != *param_2) {
      iVar1 = 0x65;
      iVar3 = 0x34f;
      goto LAB_00b1f20c;
    }
    iVar1 = (*pcVar4)(param_1,param_2,param_5);
    if (0 < iVar1) {
      return 1;
    }
  }
  iVar1 = 0x6b;
  iVar3 = 0x2dd;
LAB_00b1f228:
  ERR_put_error(0x10,0xb9,iVar1,"crypto/ec/ec_lib.c",iVar3);
  return 0;
}

