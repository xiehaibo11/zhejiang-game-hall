
/* unibrow::ToLowercase::Convert(unsigned int, unsigned int, unsigned int*, bool*) */

undefined8 unibrow::ToLowercase::Convert(uint param_1,uint param_2,uint *param_3,bool *param_4)

{
  undefined8 uVar1;
  
  switch(param_1 >> 0xd) {
  case 0:
    uVar1 = FUN_011f6e00(&DAT_019e4adc,0x1e8,&DAT_019e5a1c);
    return uVar1;
  case 1:
    uVar1 = FUN_011f6f78(&DAT_019e5a2c,0x4f,&DAT_019e5ca4,param_1,param_2,param_3,param_4);
    return uVar1;
  default:
    return 0;
  case 5:
    uVar1 = FUN_011f6f78(&DAT_019e5ca8,0x67,&DAT_019e5fe0,param_1,param_2,param_3,param_4);
    return uVar1;
  case 7:
    uVar1 = FUN_011f6f78(&DAT_019e5fe4,2,&DAT_019e5ff4,param_1,param_2,param_3,param_4);
    return uVar1;
  }
}

