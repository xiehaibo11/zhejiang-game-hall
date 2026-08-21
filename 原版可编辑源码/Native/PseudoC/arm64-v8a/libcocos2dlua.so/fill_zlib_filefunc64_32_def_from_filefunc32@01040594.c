
/* cocos2d::fill_zlib_filefunc64_32_def_from_filefunc32(cocos2d::zlib_filefunc64_32_def_s*,
   cocos2d::zlib_filefunc_def_s const*) */

void cocos2d::fill_zlib_filefunc64_32_def_from_filefunc32
               (zlib_filefunc64_32_def_s *param_1,zlib_filefunc_def_s *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}

