
void FUN_00fca784(long param_1)

{
  byte bVar1;
  
  bVar1 = cocos2d::Image::saveToFile(*(Image **)(param_1 + 8),(basic_string *)(param_1 + 0x10),true)
  ;
  DAT_01792520 = bVar1 & 1;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00fca7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 8))();
    return;
  }
  return;
}

