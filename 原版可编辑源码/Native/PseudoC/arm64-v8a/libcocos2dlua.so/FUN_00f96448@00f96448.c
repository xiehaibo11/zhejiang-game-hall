
void FUN_00f96448(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = cocos2d::Director::getInstance();
  lVar2 = lVar2 + 0x148;
  (**(code **)(**(long **)(lVar1 + 0x108) + 0xf8))
            (*(long **)(lVar1 + 0x108),1,lVar2,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  lVar1 = cocos2d::Director::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00f964a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x108) + 0x110))
            (*(long **)(lVar1 + 0x108),1,lVar2,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}

