
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
  HttpURLConnection aHStack_c0 [8];
  undefined8 local_b8;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pHVar9 = *(HttpRequest **)(param_1 + 0x28);
  uVar1 = *(uint *)(pHVar9 + 0x24);
  if (3 < uVar1) goto LAB_00e98458;
  HttpURLConnection::HttpURLConnection(aHStack_c0,this);
  uVar4 = HttpURLConnection::init(aHStack_c0,pHVar9);
  if ((uVar4 & 1) == 0) {
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x70);
    param_1[0x30] = (HttpResponse)0x0;
    if (((byte)*pbVar5 & 1) == 0) {
      *(undefined2 *)pbVar5 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar5,"HttpURLConnetcion init failed",0x1d);
  }
  else {
    switch(uVar1) {
    case 0:
      HttpURLConnection::setRequestMethod(aHStack_c0,"GET");
      break;
    case 1:
      HttpURLConnection::setRequestMethod(aHStack_c0,"POST");
      break;
    case 2:
      HttpURLConnection::setRequestMethod(aHStack_c0,"PUT");
      break;
    case 3:
      HttpURLConnection::setRequestMethod(aHStack_c0,"DELETE");
    }
    uVar4 = JniHelper::getStaticMethodInfo
                      ((JniMethodInfo_ *)&local_d8,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                       "connect","(Ljava/net/HttpURLConnection;)I");
    if ((uVar4 & 1) == 0) {
LAB_00e981e4:
      if (uVar1 - 1 < 2) {
        HttpURLConnection::sendRequest(aHStack_c0,pHVar9);
      }
      uVar4 = JniHelper::getStaticMethodInfo
                        ((JniMethodInfo_ *)&local_d8,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                         "getResponseCode","(Ljava/net/HttpURLConnection;)I");
      if ((uVar4 & 1) != 0) {
        iVar3 = _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8);
        (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
        if (iVar3 != 0) {
          pcVar6 = (char *)HttpURLConnection::getResponseHeaders(aHStack_c0);
          if (pcVar6 != (char *)0x0) {
            sVar7 = strlen(pcVar6);
            uVar8 = *(undefined8 *)(param_1 + 0x50);
            *(undefined8 *)(param_1 + 0x58) = uVar8;
            std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                      ((vector<char,std::__ndk1::allocator<char>> *)(param_1 + 0x50),uVar8,pcVar6,
                       pcVar6 + sVar7);
          }
          free(pcVar6);
          pcVar6 = (char *)HttpURLConnection::getResponseHeaderByKey(aHStack_c0,"set-cookie");
          if (pcVar6 != (char *)0x0) {
            sVar7 = strlen(pcVar6);
            HttpURLConnection::saveResponseCookies(aHStack_c0,pcVar6,sVar7);
          }
          free(pcVar6);
          uVar4 = JniHelper::getStaticMethodInfo
                            ((JniMethodInfo_ *)&local_d8,
                             "org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                             "getResponseHeaderByKeyInt",
                             "(Ljava/net/HttpURLConnection;Ljava/lang/String;)I");
          if ((uVar4 & 1) != 0) {
            uVar8 = (**(code **)(*(long *)local_d8 + 0x538))(local_d8,"Content-Length");
            _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8,uVar8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,uVar8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
          }
          __ptr = (void *)HttpURLConnection::getResponseContent(aHStack_c0,param_1);
          if (__ptr != (void *)0x0) {
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x40) = uVar8;
            std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                      ((vector<char,std::__ndk1::allocator<char>> *)(param_1 + 0x38),uVar8,__ptr,
                       (long)__ptr + (long)local_50);
          }
          free(__ptr);
          pcVar6 = (char *)HttpURLConnection::getResponseMessage(aHStack_c0);
          if (pcVar6 != (char *)0x0) {
            strncpy(param_2,pcVar6,0xff);
            free(pcVar6);
          }
          uVar4 = JniHelper::getStaticMethodInfo
                            ((JniMethodInfo_ *)&local_d8,
                             "org.cocos2dx.lib.Cocos2dxHttpURLConnection","disconnect",
                             "(Ljava/net/HttpURLConnection;)V");
          if ((uVar4 & 1) != 0) {
            _JNIEnv::CallStaticVoidMethod(local_d8,p_Stack_d0,local_c8,local_b8);
            (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
          }
          *(long *)(param_1 + 0x68) = (long)iVar3;
          if (iVar3 == -1) {
            pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x70);
            param_1[0x30] = (HttpResponse)0x0;
            if (((byte)*pbVar5 & 1) == 0) {
              *(undefined2 *)pbVar5 = 0;
            }
            else {
              **(undefined1 **)(param_1 + 0x80) = 0;
              *(undefined8 *)(param_1 + 0x78) = 0;
            }
            sVar7 = strlen(param_2);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (pbVar5,param_2,sVar7);
          }
          else {
            param_1[0x30] = (HttpResponse)0x1;
          }
          goto LAB_00e98450;
        }
      }
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x70);
      param_1[0x30] = (HttpResponse)0x0;
      if (((byte)*pbVar5 & 1) == 0) {
        *(undefined2 *)pbVar5 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar5,"connect failed",0xe);
    }
    else {
      iVar3 = _JNIEnv::CallStaticIntMethod(local_d8,p_Stack_d0,local_c8,local_b8);
      (**(code **)(*(long *)local_d8 + 0xb8))(local_d8,p_Stack_d0);
      if (iVar3 == 0) goto LAB_00e981e4;
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x70);
      param_1[0x30] = (HttpResponse)0x0;
      if (((byte)*pbVar5 & 1) == 0) {
        *(undefined2 *)pbVar5 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar5,"connect failed",0xe);
    }
    *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  }
LAB_00e98450:
  HttpURLConnection::~HttpURLConnection(aHStack_c0);
LAB_00e98458:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

