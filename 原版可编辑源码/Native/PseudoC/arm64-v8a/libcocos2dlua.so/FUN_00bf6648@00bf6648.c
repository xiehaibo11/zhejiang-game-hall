
long FUN_00bf6648(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  
  piVar2 = (int *)BIO_get_data();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  bp = BIO_next(param_1);
  switch(param_2) {
  case 0x95:
    uVar4 = *param_4;
    *(undefined8 *)(piVar2 + 0xc) = param_4[1];
    *(undefined8 *)(piVar2 + 10) = uVar4;
    break;
  case 0x96:
    uVar4 = *(undefined8 *)(piVar2 + 10);
    param_4[1] = *(undefined8 *)(piVar2 + 0xc);
    *param_4 = uVar4;
    break;
  case 0x97:
    uVar4 = *param_4;
    *(undefined8 *)(piVar2 + 0x10) = param_4[1];
    *(undefined8 *)(piVar2 + 0xe) = uVar4;
    break;
  case 0x98:
    uVar4 = *(undefined8 *)(piVar2 + 0xe);
    param_4[1] = *(undefined8 *)(piVar2 + 0x10);
    *param_4 = uVar4;
    break;
  case 0x99:
    *(undefined8 **)(piVar2 + 0x16) = param_4;
    break;
  case 0x9a:
    *param_4 = *(undefined8 *)(piVar2 + 0x16);
    break;
  default:
    if (param_2 == 0xb) {
      if (bp == (BIO *)0x0) {
        return 0;
      }
      iVar1 = *piVar2;
      if (iVar1 == 2) {
        if ((*(code **)(piVar2 + 0xe) != (code *)0x0) &&
           (iVar1 = (**(code **)(piVar2 + 0xe))(param_1,piVar2 + 0x12,piVar2 + 0x14,piVar2 + 0x16),
           iVar1 == 0)) goto LAB_00bf67b4;
        iVar1 = 5;
        if (piVar2[0x14] < 1) {
          iVar1 = 6;
        }
        *piVar2 = iVar1;
      }
      if (iVar1 == 5) {
        iVar1 = FUN_00bf6934(param_1,piVar2,*(undefined8 *)(piVar2 + 0x10),6);
        if (iVar1 < 1) {
          return (long)iVar1;
        }
        iVar1 = *piVar2;
      }
      if (iVar1 != 6) {
LAB_00bf67b4:
        BIO_clear_flags(param_1,0xf);
        return 0;
      }
      param_2 = 0xb;
    }
    else if (bp == (BIO *)0x0) {
      return 0;
    }
    lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar3;
  }
  return 1;
}

