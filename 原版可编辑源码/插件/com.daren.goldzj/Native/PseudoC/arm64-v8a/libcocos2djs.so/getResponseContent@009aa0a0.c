
/* cocos2d::network::HttpURLConnection::getResponseContent(cocos2d::network::HttpResponse*) */

void * __thiscall
cocos2d::network::HttpURLConnection::getResponseContent
          (HttpURLConnection *this,HttpResponse *param_1)

{
  long lVar1;
  _jclass *p_Var2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009aa0d0 to 00aaa1b3 has its CatchHandler @ 009a9f14 */
  if ((param_1 == (HttpResponse *)0x0) ||
     (uVar4 = JniHelper::getStaticMethodInfo
                        ((JniMethodInfo_ *)&local_60,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                         "getResponseContent","(Ljava/net/HttpURLConnection;)[B"), (uVar4 & 1) == 0)
     ) {
    pvVar6 = (void *)0x0;
  }
  else {
    lVar5 = _JNIEnv::CallStaticObjectMethod(local_60,p_Stack_58,local_50,*(undefined8 *)(this + 8));
    p_Var2 = local_60;
    if (lVar5 == 0) {
      pvVar6 = (void *)0x0;
      *(undefined4 *)(this + 0x70) = 0;
    }
    else {
      iVar3 = (**(code **)(*(long *)local_60 + 0x558))(local_60,lVar5);
      pvVar6 = malloc((long)iVar3);
                    /* catch() { ... } // from try @ 009a9f94 with catch @ 009aa144 */
                    /* catch() { ... } // from try @ 009a9f88 with catch @ 009aa148 */
                    /* catch() { ... } // from try @ 009a9f68 with catch @ 009aa14c */
      (**(code **)(*(long *)p_Var2 + 0x640))(p_Var2,lVar5,0,iVar3,pvVar6);
      *(int *)(this + 0x70) = iVar3;
                    /* catch() { ... } // from try @ 009a9fa0 with catch @ 009aa15c */
      (**(code **)(*(long *)local_60 + 0xb8))(local_60,lVar5);
    }
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009aa1b4 to 00aaa207 has its CatchHandler @ 009aa1b4
                       catch() { ... } // from try @ 009aa1b4 with catch @ 009aa1b4
                       catch() { ... } // from try @ 009aa374 with catch @ 009aa1b4 */
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

