
/* unibrow::ToUppercase::Convert(unsigned int, unsigned int, unsigned int*, bool*) */

undefined8 unibrow::ToUppercase::Convert(uint param_1,uint param_2,uint *param_3,bool *param_4)

{
  undefined8 uVar1;
  
  switch(param_1 >> 0xd) {
  case 0:
    uVar1 = FUN_011f7164(&DAT_019e5ff8,0x24e,&DAT_019e7268,param_1,param_2,param_3,param_4);
    return uVar1;
  case 1:
    uVar1 = FUN_011f6f78(&DAT_019e7550,0x49,&DAT_019e7798);
    return uVar1;
  default:
    return 0;
  case 5:
    uVar1 = FUN_011f6f78(&DAT_019e779c,0x5f,&DAT_019e7a94);
    return uVar1;
  case 7:
    uVar1 = FUN_011f7164(&DAT_019e7a98,0xe,&DAT_019e7b08,param_1,param_2,param_3,param_4);
    return uVar1;
  }
}

