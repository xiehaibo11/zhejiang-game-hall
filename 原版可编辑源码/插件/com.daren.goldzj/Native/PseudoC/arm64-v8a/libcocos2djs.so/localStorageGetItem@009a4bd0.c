
/* localStorageGetItem(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

void localStorageGetItem(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  _jstring *p_Var4;
  basic_string *pbVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org/cocos2dx/lib/Cocos2dxLocalStorage","getItem",
                     "(Ljava/lang/String;)Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 009a4c20 to 00aa4c37 has its CatchHandler @ 009a4e04 */
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    uVar3 = (**(code **)(*(long *)local_50 + 0x538))(local_50,pbVar5);
                    /* try { // try from 009a4c40 to 00aa4c4b has its CatchHandler @ 009a4e00 */
                    /* try { // try from 009a4c4c to 00aa4c57 has its CatchHandler @ 009a4dfc */
    p_Var4 = (_jstring *)_JNIEnv::CallStaticObjectMethod(local_50,p_Stack_48,local_40,uVar3);
    if (p_Var4 == (_jstring *)0x0) {
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,0);
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
      uVar3 = 0;
    }
    else {
                    /* try { // try from 009a4c58 to 00aa4d87 has its CatchHandler @ 009a4e14 */
      cocos2d::JniHelper::jstring2string(p_Var4);
      if (((byte)*param_2 & 1) == 0) {
        *(undefined2 *)param_2 = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        if (((byte)*param_2 & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x10));
          *(undefined8 *)param_2 = 0;
        }
      }
      *(undefined8 *)(param_2 + 0x10) = local_58;
      *(undefined8 *)(param_2 + 8) = uStack_60;
      *(undefined8 *)param_2 = local_68;
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Var4);
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
      (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

