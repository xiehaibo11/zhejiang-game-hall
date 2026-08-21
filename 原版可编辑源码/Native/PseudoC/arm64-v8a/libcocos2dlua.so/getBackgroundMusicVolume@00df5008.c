
/* CocosDenshion::android::AndroidJavaEngine::getBackgroundMusicVolume() */

undefined1  [16] CocosDenshion::android::AndroidJavaEngine::getBackgroundMusicVolume(void)

{
  long lVar1;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df5064 with catch @ 00df5008
                       catch(type#1 @ 00000000) { ... } // from try @ 00df5230 with catch @ 00df5008
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  builtin_strncpy(local_30,"getBackgroundMusicVolume",0x19);
                    /* try { // try from 00df505c to 00ef5063 has its CatchHandler @ 00df533c */
                    /* try { // try from 00df5064 to 00ef51bf has its CatchHandler @ 00df5008 */
  local_40[1] = 0x18;
  local_40[0] = 0x21;
  auVar2._0_4_ = cocos2d::JniHelper::callStaticFloatMethod<>
                           ((basic_string *)&DAT_01788b10,(basic_string *)local_40);
  auVar2._4_4_ = extraout_var;
  uVar3 = extraout_var_00;
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

