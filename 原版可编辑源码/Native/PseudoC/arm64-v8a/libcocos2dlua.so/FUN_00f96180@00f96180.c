
void FUN_00f96180(long param_1)

{
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00f961b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x108) + 0xc0))
            ((float)*(int *)(param_1 + 8),(float)*(int *)(param_1 + 0xc),*(long **)(lVar1 + 0x108),
             *(undefined4 *)(param_1 + 0x10));
  return;
}

