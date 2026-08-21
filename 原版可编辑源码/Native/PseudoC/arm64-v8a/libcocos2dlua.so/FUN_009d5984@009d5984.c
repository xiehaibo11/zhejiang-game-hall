
void FUN_009d5984(pthread_t *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  __thread_struct *this;
  undefined8 *__arg;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  this = operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this);
  __arg = operator_new(0x28);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = *param_3;
  uVar1 = *param_4;
  *__arg = this;
  __arg[2] = uVar5;
  __arg[1] = uVar4;
  __arg[3] = uVar3;
  *(undefined4 *)(__arg + 4) = uVar1;
  iVar2 = pthread_create(param_1,(pthread_attr_t *)0x0,
                         std::__ndk1::
                         __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,void(universe::core::Service::*)(int),universe::core::Service*,int>>
                         ,__arg);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(iVar2,"thread constructor failed");
}

