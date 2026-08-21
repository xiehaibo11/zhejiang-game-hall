
void pvmp3_huffman_quad_decoding(long param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (**(code **)(param_1 + 8))(param_3);
  uVar6 = uVar2 & 0xffff;
  if ((uVar2 & 0xffff) == 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    goto LAB_00ecaa7c;
  }
  uVar5 = uVar6 >> 3;
  uVar4 = uVar5;
  if (uVar5 != 0) {
    cVar1 = get1bit(param_3);
    uVar4 = -uVar5;
    if (cVar1 == '\0') {
      uVar4 = uVar5;
    }
  }
  if ((uVar6 >> 2 & 1) == 0) {
    uVar5 = 0;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00ecaa10;
LAB_00ecaa70:
    uVar6 = 0;
  }
  else {
    uVar3 = uVar6 >> 2 & 1;
    cVar1 = get1bit(param_3);
    uVar5 = -uVar3;
    if (cVar1 == '\0') {
      uVar5 = uVar3;
    }
    if ((uVar6 >> 1 & 1) == 0) goto LAB_00ecaa70;
LAB_00ecaa10:
    uVar3 = uVar6 >> 1 & 1;
    cVar1 = get1bit(param_3);
    uVar6 = -uVar3;
    if (cVar1 == '\0') {
      uVar6 = uVar3;
    }
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = get1bit(param_3);
    uVar3 = -(uVar2 & 1);
    if (cVar1 == '\0') {
      uVar3 = uVar2 & 1;
    }
  }
LAB_00ecaa7c:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar3;
  return;
}

