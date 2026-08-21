
/* CocosDenshion::android::AndroidJavaEngine::getEffectsVolume() */

undefined1  [16] __thiscall
CocosDenshion::android::AndroidJavaEngine::getEffectsVolume(AndroidJavaEngine *this)

{
  long lVar1;
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  ulong uVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df51c0 with catch @ 00df5328
                        */
  lVar1 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df505c with catch @ 00df533c
                        */
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    uStack_2e = 0;
    local_40 = (basic_string)0x20;
    uStack_37 = 0x6d756c6f567374;
    uStack_30 = 0x65;
    uStack_3f = 0x65666645746567;
    uStack_38 = 99;
    uStack_2f = 0;
    fVar2 = cocos2d::JniHelper::callStaticFloatMethod<>((basic_string *)&DAT_01788b10,&local_40);
    uVar3 = CONCAT44(extraout_var,fVar2);
    uVar5 = extraout_var_00;
    if (((byte)local_40 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(this + 0xc);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar4._8_8_ = uVar5;
    auVar4._0_8_ = uVar3;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

