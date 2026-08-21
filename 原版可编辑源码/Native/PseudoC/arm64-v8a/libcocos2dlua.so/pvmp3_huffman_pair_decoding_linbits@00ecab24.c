
void pvmp3_huffman_pair_decoding_linbits(int *param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (**(code **)(param_1 + 2))(param_3);
  uVar3 = uVar2 >> 4 & 0xfff;
  uVar4 = uVar3;
  if (uVar3 == 0) {
LAB_00ecab8c:
    uVar3 = 0;
    if ((uVar2 & 0xf) == 0) goto LAB_00ecabf4;
  }
  else {
    if (uVar3 == 0xf) {
      uVar3 = getUpTo17bits(param_3,*param_1 + 1);
      uVar4 = ((int)uVar3 >> 1) + 0xf;
      if ((uVar3 & 1) != 0) {
        uVar4 = -((int)uVar3 >> 1) - 0xf;
      }
      goto LAB_00ecab8c;
    }
    cVar1 = get1bit(param_3);
    uVar4 = -uVar3;
    if (cVar1 == '\0') {
      uVar4 = uVar3;
    }
    if ((uVar2 & 0xf) == 0) {
      uVar3 = 0;
      goto LAB_00ecabf4;
    }
  }
  uVar2 = uVar2 & 0xf;
  if (uVar2 == 0xf) {
    uVar2 = getUpTo17bits(param_3,*param_1 + 1);
    uVar3 = ((int)uVar2 >> 1) + 0xf;
    if ((uVar2 & 1) != 0) {
      uVar3 = -((int)uVar2 >> 1) - 0xf;
    }
  }
  else {
    cVar1 = get1bit(param_3);
    uVar3 = -uVar2;
    if (cVar1 == '\0') {
      uVar3 = uVar2;
    }
  }
LAB_00ecabf4:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}

