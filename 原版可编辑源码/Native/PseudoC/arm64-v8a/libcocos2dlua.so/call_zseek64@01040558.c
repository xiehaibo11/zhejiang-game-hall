
/* cocos2d::call_zseek64(cocos2d::zlib_filefunc64_32_def_s const*, void*, unsigned long long, int)
    */

void cocos2d::call_zseek64
               (zlib_filefunc64_32_def_s *param_1,void *param_2,ulonglong param_3,int param_4)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01040564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01040570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  return;
}

