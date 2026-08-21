
void pvmp3_huffman_pair_decoding(long param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (**(code **)(param_1 + 8))(param_3);
  if ((uVar2 & 0xffff) == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = uVar2 >> 4 & 0xfff;
    if (uVar4 != 0) {
      cVar1 = get1bit(param_3);
      uVar3 = -uVar4;
      if (cVar1 == '\0') {
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      if ((uVar2 & 0xf) == 0) {
        uVar3 = 0;
        goto LAB_00e9d678;
      }
    }
    cVar1 = get1bit(param_3);
    uVar3 = -(uVar2 & 0xf);
    if (cVar1 == '\0') {
      uVar3 = uVar2 & 0xf;
    }
  }
LAB_00e9d678:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}

