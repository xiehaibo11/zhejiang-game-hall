
/* cocos2d::network::HttpURLConnection::getResponseMessage() */

char * __thiscall cocos2d::network::HttpURLConnection::getResponseMessage(HttpURLConnection *this)

{
  long lVar1;
  ulong uVar2;
  _JNIEnv *p_Var3;
  char *pcVar4;
  bool *pbVar5;
  _jclass *local_68;
  _jmethodID *p_Stack_60;
  undefined8 local_58;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_68,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                     "getResponseMessage","(Ljava/net/HttpURLConnection;)Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    pcVar4 = (char *)0x0;
  }
  else {
                    /* try { // try from 009aa208 to 00aaa21f has its CatchHandler @ 009aa3f0 */
    pbVar5 = *(bool **)(this + 8);
    p_Var3 = (_JNIEnv *)_JNIEnv::CallStaticObjectMethod(local_68,p_Stack_60,local_58);
    if (p_Var3 == (_JNIEnv *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
                    /* try { // try from 009aa228 to 00aaa233 has its CatchHandler @ 009aa3ec */
      StringUtils::getStringUTFCharsJNI((StringUtils *)local_68,p_Var3,(_jstring *)0x0,pbVar5);
                    /* try { // try from 009aa234 to 00aaa23f has its CatchHandler @ 009aa3e8 */
                    /* try { // try from 009aa240 to 00aaa373 has its CatchHandler @ 009aa400 */
      pcVar4 = (char *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pcVar4 = local_40;
      }
      pcVar4 = strdup(pcVar4);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      (**(code **)(*(long *)local_68 + 0xb8))(local_68,p_Var3);
    }
    (**(code **)(*(long *)local_68 + 0xb8))(local_68,p_Stack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

