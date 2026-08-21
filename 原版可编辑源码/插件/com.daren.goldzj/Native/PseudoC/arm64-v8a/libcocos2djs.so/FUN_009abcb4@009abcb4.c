
void FUN_009abcb4(pthread_t *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  __thread_struct *this;
  undefined8 *__arg;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 009abccc to 00aabcd3 has its CatchHandler @ 009ac054 */
                    /* try { // try from 009abcd4 to 00aabcf3 has its CatchHandler @ 009ac060 */
  this = operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this);
                    /* try { // try from 009abcf4 to 00aabd03 has its CatchHandler @ 009ac050 */
  __arg = operator_new(0x30);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar2 = *param_3;
  uVar3 = *param_4;
  uVar4 = *param_5;
                    /* try { // try from 009abd08 to 00aabd13 has its CatchHandler @ 009ac048 */
  *__arg = this;
  __arg[2] = uVar6;
  __arg[1] = uVar5;
                    /* try { // try from 009abd14 to 00aabd23 has its CatchHandler @ 009ac030 */
  __arg[3] = uVar2;
  __arg[4] = uVar3;
  __arg[5] = uVar4;
                    /* try { // try from 009abd28 to 00aabd33 has its CatchHandler @ 009ac020 */
  iVar1 = pthread_create(param_1,(pthread_attr_t *)0x0,
                         std::__ndk1::
                         __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,void(cocos2d::network::HttpClient::*)(cocos2d::network::HttpRequest*,cocos2d::network::HttpResponse*),cocos2d::network::HttpClient*,cocos2d::network::HttpRequest*,cocos2d::network::HttpResponse*>>
                         ,__arg);
  if (iVar1 == 0) {
                    /* try { // try from 009abd38 to 00aabd3f has its CatchHandler @ 009ac010 */
    return;
  }
                    /* try { // try from 009abd54 to 00aabd5f has its CatchHandler @ 009ac000 */
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(iVar1,"thread constructor failed");
}

