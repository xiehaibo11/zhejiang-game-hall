
void FUN_00e9a734(pthread_t *param_1,undefined8 *param_2)

{
  int iVar1;
  __thread_struct *this;
  undefined8 *__arg;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this);
  __arg = operator_new(0x20);
  *__arg = this;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  __arg[3] = param_2[2];
  __arg[2] = uVar3;
  __arg[1] = uVar2;
  iVar1 = pthread_create(param_1,(pthread_attr_t *)0x0,
                         std::__ndk1::
                         __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>>>
                         ,__arg);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(iVar1,"thread constructor failed");
}

