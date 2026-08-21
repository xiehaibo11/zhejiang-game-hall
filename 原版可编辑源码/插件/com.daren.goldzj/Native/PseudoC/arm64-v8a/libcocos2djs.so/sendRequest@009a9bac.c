
/* cocos2d::network::HttpURLConnection::sendRequest(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpURLConnection::sendRequest(HttpURLConnection *this,HttpRequest *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009a9a54 with catch @ 009a9bb4 */
                    /* catch() { ... } // from try @ 009a9854 with catch @ 009a9bb8 */
                    /* catch() { ... } // from try @ 009a9a5c with catch @ 009a9bbc */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 009a9840 with catch @ 009a9bcc */
                    /* catch() { ... } // from try @ 009a9814 with catch @ 009a9bd0 */
                    /* catch() { ... } // from try @ 009a9864 with catch @ 009a9be0
                       catch() { ... } // from try @ 009a99a8 with catch @ 009a9be0 */
  uVar5 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                     "sendRequest","(Ljava/net/HttpURLConnection;[B)V");
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    uVar6 = (**(code **)(*(long *)local_60 + 0x580))(local_60,iVar2 - iVar3);
                    /* try { // try from 009a9c38 to 00aa9c7b has its CatchHandler @ 009a9c38
                       catch() { ... } // from try @ 009a9c38 with catch @ 009a9c38
                       catch() { ... } // from try @ 009a9c94 with catch @ 009a9c38 */
    lVar1 = 0;
    if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
      lVar1 = *(long *)(param_1 + 0x28);
    }
    (**(code **)(*(long *)local_60 + 0x680))(local_60,uVar6,0,iVar2 - iVar3,lVar1);
    _JNIEnv::CallStaticVoidMethod(local_60,p_Stack_58,local_50,*(undefined8 *)(this + 8),uVar6);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar6);
                    /* try { // try from 009a9c7c to 00aa9c93 has its CatchHandler @ 009a9cc4 */
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 009a9c94 to 00aa9cd7 has its CatchHandler @ 009a9c38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

