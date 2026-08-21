
/* cocos2d::network::HttpClient::processResponse(cocos2d::network::HttpResponse*, char*) */

void __thiscall
cocos2d::network::HttpClient::processResponse(HttpClient *this,HttpResponse *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  char *pcVar6;
  size_t sVar7;
  void *__ptr;
  undefined8 uVar8;
  HttpRequest *pHVar9;
  _jclass *local_d8;
  _jmethodID *p_Stack_d0;
  undefined8 local_c8;
  HttpClient *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009a8f04 with catch @ 009a9128 */
                    /* catch() { ... } // from try @ 009a8ef8 with catch @ 009a912c */
                    /* catch() { ... } // from try @ 009a8f50 with catch @ 009a9130
                       catch() { ... } // from try @ 009a90c0 with catch @ 009a9130 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pHVar9 = *(HttpRequest **)(param_1 + 0x10);
  uVar1 = *(uint *)(pHVar9 + 0xc);
  if (3 < uVar1) goto LAB_009a9514;
                    /* catch() { ... } // from try @ 009a8ed8 with catch @ 009a9158 */
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
                    /* catch() { ... } // from try @ 009a8f10 with catch @ 009a9168
                       catch() { ... } // from try @ 009a8fa8 with catch @ 009a9168 */
  uStack_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c0 = this;
  uVar4 = HttpURLConnection::init((HttpURLConnection *)&local_c0,pHVar9);
  if ((uVar4 & 1) == 0) {
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x58);
    param_1[0x18] = (HttpResponse)0x0;
    if (((byte)*pbVar5 & 1) == 0) {
      *(undefined2 *)pbVar5 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar5,"HttpURLConnetcion init failed",0x1d);
  }
  else {
    switch(uVar1) {
    case 0:
                    /* try { // try from 009a91c0 to 00aa9213 has its CatchHandler @ 009a91c0
                       catch() { ... } // from try @ 009a91c0 with catch @ 009a91c0
                       catch() { ... } // from try @ 009a9380 with catch @ 009a91c0 */
      HttpURLConnection::setRequestMethod((HttpURLConnection *)&local_c0,"GET");
      break;
    case 1:
                    /* try { // try from 009a9214 to 00aa922b has its CatchHandler @ 009a93fc */
      HttpURLConnection::setRequestMethod((HttpURLConnection *)&local_c0,"POST");
      break;
    case 2:
      HttpURLConnection::setRequestMethod((HttpURLConnection *)&local_c0,"PUT");
      break;
    case 3:
                    /* try { // try from 009a9234 to 00aa923f has its CatchHandler @ 009a93f8 */
      HttpURLConnection::setRequestMethod((HttpURLConnection *)&local_c0,"DELETE");
    }
                    /* try { // try from 009a9240 to 00aa924b has its CatchHandler @ 009a93f4 */
                    /* try { // try from 009a924c to 00aa937f has its CatchHandler @ 009a940c */
    uVar4 = JniHelper::getStaticMethodInfo
                      ((JniMethodInfo_ *)&local_d8,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                       "connect","(Ljava/net/HttpURLConnection;)I");
    if ((uVar4 & 1) == 0) {
LAB_009a92a4:
      if (uVar1 - 1 < 2) {
        HttpURLConnection::sendRequest((HttpURLConnection *)&local_c0,pHVar9);
      }
      uVar4 = JniHelper::getStaticMethodInfo
                        ((JniMethodInfo_ *)&local_d8,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                         "getResponseCode","(Ljava/net/HttpURLConnection;)I");
      if ((uVar4 & 1) != 0) {
        iVar3 = _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8);
        (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
        if (iVar3 != 0) {
          pcVar6 = (char *)HttpURLConnection::getResponseHeaders((HttpURLConnection *)&local_c0);
          if (pcVar6 != (char *)0x0) {
            sVar7 = strlen(pcVar6);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x40) = uVar8;
            std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                      ((vector<char,std::__ndk1::allocator<char>> *)(param_1 + 0x38),uVar8,pcVar6,
                       pcVar6 + sVar7);
          }
          free(pcVar6);
          pcVar6 = (char *)HttpURLConnection::getResponseHeaderByKey
                                     ((HttpURLConnection *)&local_c0,"set-cookie");
          if (pcVar6 != (char *)0x0) {
            sVar7 = strlen(pcVar6);
            HttpURLConnection::saveResponseCookies((HttpURLConnection *)&local_c0,pcVar6,sVar7);
          }
          free(pcVar6);
                    /* try { // try from 009a9380 to 00aa9463 has its CatchHandler @ 009a91c0 */
          uVar4 = JniHelper::getStaticMethodInfo
                            ((JniMethodInfo_ *)&local_d8,
                             "org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                             "getResponseHeaderByKeyInt",
                             "(Ljava/net/HttpURLConnection;Ljava/lang/String;)I");
          if ((uVar4 & 1) != 0) {
            uVar8 = (**(code **)(*(long *)local_d8 + 0x538))(local_d8,"Content-Length");
            _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8,uVar8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,uVar8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
          }
                    /* catch() { ... } // from try @ 009a9240 with catch @ 009a93f4 */
                    /* catch() { ... } // from try @ 009a9234 with catch @ 009a93f8 */
                    /* catch() { ... } // from try @ 009a9214 with catch @ 009a93fc */
          __ptr = (void *)HttpURLConnection::getResponseContent
                                    ((HttpURLConnection *)&local_c0,param_1);
          if (__ptr != (void *)0x0) {
                    /* catch() { ... } // from try @ 009a924c with catch @ 009a940c */
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0x28) = uVar8;
            std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                      ((vector<char,std::__ndk1::allocator<char>> *)(param_1 + 0x20),uVar8,__ptr,
                       (long)__ptr + (long)local_50);
          }
          free(__ptr);
          pcVar6 = (char *)HttpURLConnection::getResponseMessage((HttpURLConnection *)&local_c0);
          if (pcVar6 != (char *)0x0) {
            strcpy(param_2,pcVar6);
            free(pcVar6);
          }
                    /* try { // try from 009a9464 to 00aa94bb has its CatchHandler @ 009a9464
                       catch() { ... } // from try @ 009a9464 with catch @ 009a9464
                       catch() { ... } // from try @ 009a968c with catch @ 009a9464 */
          uVar4 = JniHelper::getStaticMethodInfo
                            ((JniMethodInfo_ *)&local_d8,
                             "org/cocos2dx/lib/Cocos2dxHttpURLConnection","disconnect",
                             "(Ljava/net/HttpURLConnection;)V");
          if ((uVar4 & 1) != 0) {
            _JNIEnv::CallStaticVoidMethod(local_d8,p_Stack_d0,local_c8,local_b8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
          }
          *(long *)(param_1 + 0x50) = (long)iVar3;
          if (iVar3 == -1) {
            pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x58);
            param_1[0x18] = (HttpResponse)0x0;
            if (param_2 == (char *)0x0) {
              if (((byte)*pbVar5 & 1) == 0) {
                *(undefined2 *)pbVar5 = 0;
              }
              else {
                    /* try { // try from 009a9590 to 00aa95ff has its CatchHandler @ 009a9704 */
                **(undefined1 **)(param_1 + 0x68) = 0;
                *(undefined8 *)(param_1 + 0x60) = 0;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar5,"response code error!",0x14);
            }
            else {
              if (((byte)*pbVar5 & 1) == 0) {
                *(undefined2 *)pbVar5 = 0;
              }
              else {
                **(undefined1 **)(param_1 + 0x68) = 0;
                *(undefined8 *)(param_1 + 0x60) = 0;
              }
              sVar7 = strlen(param_2);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar5,param_2,sVar7);
            }
          }
          else {
            param_1[0x18] = (HttpResponse)0x1;
          }
          goto LAB_009a950c;
        }
      }
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x58);
      param_1[0x18] = (HttpResponse)0x0;
                    /* try { // try from 009a94bc to 00aa94d3 has its CatchHandler @ 009a975c */
      if (((byte)*pbVar5 & 1) == 0) {
        *(undefined2 *)pbVar5 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
                    /* try { // try from 009a94dc to 00aa94e7 has its CatchHandler @ 009a9758 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar5,"connect failed",0xe);
    }
    else {
      iVar3 = _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8);
      (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
      if (iVar3 == 0) goto LAB_009a92a4;
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x58);
      param_1[0x18] = (HttpResponse)0x0;
      if (((byte)*pbVar5 & 1) == 0) {
        *(undefined2 *)pbVar5 = 0;
      }
      else {
                    /* try { // try from 009a94e8 to 00aa94f3 has its CatchHandler @ 009a9754 */
        **(undefined1 **)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
                    /* try { // try from 009a94f4 to 00aa958f has its CatchHandler @ 009a976c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar5,"connect failed",0xe);
    }
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  }
LAB_009a950c:
  HttpURLConnection::~HttpURLConnection((HttpURLConnection *)&local_c0);
LAB_009a9514:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

