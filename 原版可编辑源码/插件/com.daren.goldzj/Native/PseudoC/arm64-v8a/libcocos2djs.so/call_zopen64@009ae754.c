
/* cocos2d::call_zopen64(cocos2d::zlib_filefunc64_32_def_s const*, void const*, int) */

void cocos2d::call_zopen64(zlib_filefunc64_32_def_s *param_1,void *param_2,int param_3)

{
  if (*(code **)param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009ae760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1)(*(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009ae76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  return;
}

