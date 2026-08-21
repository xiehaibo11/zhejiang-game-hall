
/* cocos2d::call_ztell64(cocos2d::zlib_filefunc64_32_def_s const*, void*) */

void cocos2d::call_ztell64(zlib_filefunc64_32_def_s *param_1,void *param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01040584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01040590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x38));
  return;
}

