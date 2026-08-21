
/* unibrow::CanonicalizationRange::Convert(unsigned int, unsigned int, unsigned int*, bool*) */

undefined8
unibrow::CanonicalizationRange::Convert(uint param_1,uint param_2,uint *param_3,bool *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1 >> 0xd;
  if (uVar1 == 7) {
    uVar2 = FUN_011f7650(&DAT_019ee330,4,&DAT_019ee350,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (uVar1 != 1) {
    if (uVar1 == 0) {
      uVar2 = FUN_011f7650(&DAT_019ee088,0x46,&DAT_019ee2b8,param_1,param_2,param_3,param_4);
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_011f7650(&DAT_019ee2bc,0xe,&DAT_019ee32c,param_1,param_2,param_3,param_4);
  return uVar2;
}

