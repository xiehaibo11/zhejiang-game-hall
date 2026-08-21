
/* cocos2d::network::HttpURLConnection::addRequestHeader(char const*, char const*) */

void __thiscall
cocos2d::network::HttpURLConnection::addRequestHeader
          (HttpURLConnection *this,char *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009abd08 with catch @ 009ac048 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009abcf4 with catch @ 009ac050 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009abccc with catch @ 009ac054 */
                    /* catch() { ... } // from try @ 009abcb0 with catch @ 009ac05c */
                    /* catch() { ... } // from try @ 009abcd4 with catch @ 009ac060 */
                    /* catch() { ... } // from try @ 009abca4 with catch @ 009ac078
                       catch() { ... } // from try @ 009abfc0 with catch @ 009ac078 */
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                     "addRequestHeader",
                     "(Ljava/net/HttpURLConnection;Ljava/lang/String;Ljava/lang/String;)V");
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_1);
                    /* catch() { ... } // from try @ 009abc58 with catch @ 009ac0b0 */
                    /* catch() { ... } // from try @ 009abc4c with catch @ 009ac0b4 */
    uVar4 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_2);
                    /* catch() { ... } // from try @ 009abc2c with catch @ 009ac0b8 */
                    /* catch() { ... } // from try @ 009abc64 with catch @ 009ac0c8
                       catch() { ... } // from try @ 009abd9c with catch @ 009ac0c8 */
    _JNIEnv::CallStaticVoidMethod
              (local_50,p_Stack_48,local_40,*(undefined8 *)(this + 8),uVar3,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009ac120 to 00aac17b has its CatchHandler @ 009ac120
                       catch() { ... } // from try @ 009ac120 with catch @ 009ac120
                       catch() { ... } // from try @ 009ac390 with catch @ 009ac120
                       catch() { ... } // from try @ 009ac538 with catch @ 009ac120 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

