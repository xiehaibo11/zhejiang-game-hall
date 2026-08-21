
/* localStorageGetKey(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*) */

void localStorageGetKey(int param_1,basic_string *param_2)

{
  long lVar1;
  int in_w3;
  basic_string local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  void *local_78;
  ulong local_70 [2];
  char *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = operator_new(0x30);
  local_70[1] = 0x25;
  local_70[0] = 0x31;
  local_88 = (basic_string)0xc;
                    /* catch() { ... } // from try @ 009a4eec with catch @ 009a50a0 */
  local_83 = 0x7965;
                    /* catch() { ... } // from try @ 009a4ee0 with catch @ 009a50a4 */
                    /* catch() { ... } // from try @ 009a4ec0 with catch @ 009a50a8 */
  local_80 = 0;
  local_78 = (void *)0x0;
  local_87 = 0x4b746567;
                    /* catch() { ... } // from try @ 009a4ef8 with catch @ 009a50b8 */
  builtin_strncpy(local_60,"org/cocos2dx/lib/Cocos2dxLocalStorage",0x26);
  local_81 = 0;
  cocos2d::JniHelper::callStaticStringMethod<int>
            ((JniHelper *)local_70,&local_88,(basic_string *)(ulong)(uint)param_1,in_w3);
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
                    /* try { // try from 009a5110 to 00aa5163 has its CatchHandler @ 009a5110
                       catch() { ... } // from try @ 009a5110 with catch @ 009a5110
                       catch() { ... } // from try @ 009a52d0 with catch @ 009a5110 */
  *(undefined8 *)(param_2 + 0x10) = local_40;
  *(undefined8 *)(param_2 + 8) = uStack_48;
  *(undefined8 *)param_2 = local_50;
  uStack_48 = 0;
  local_40 = 0;
  local_50 = 0;
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009a5164 to 00aa517b has its CatchHandler @ 009a534c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

