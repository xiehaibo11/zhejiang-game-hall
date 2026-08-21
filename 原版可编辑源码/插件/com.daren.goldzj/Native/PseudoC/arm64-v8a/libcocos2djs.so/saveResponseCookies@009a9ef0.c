
/* cocos2d::network::HttpURLConnection::saveResponseCookies(char const*, unsigned long) */

void __thiscall
cocos2d::network::HttpURLConnection::saveResponseCookies
          (HttpURLConnection *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  HttpURLConnection *pHVar5;
  FILE *__s;
  HttpURLConnection *pHVar6;
  HttpURLConnection HVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 009a9d20 with catch @ 009a9ef8 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009a9f14 to 00aa9f67 has its CatchHandler @ 009a9f14
                       catch() { ... } // from try @ 009a9f14 with catch @ 009a9f14
                       catch() { ... } // from try @ 009aa0d0 with catch @ 009a9f14 */
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
    goto LAB_009aa054;
  }
  uVar3 = 0;
  if ((param_2 == 0) || (*param_1 == '\0')) goto LAB_009aa054;
  pHVar6 = this + 0x40;
  HVar7 = *pHVar6;
  if (((byte)HVar7 & 1) == 0) {
    if ((byte)HVar7 >> 1 == 0) {
LAB_009a9f60:
      plVar4 = (long *)FileUtils::getInstance();
                    /* try { // try from 009a9f68 to 00aa9f7f has its CatchHandler @ 009aa14c */
      (**(code **)(*plVar4 + 0x90))(local_80);
      pHVar5 = (HttpURLConnection *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(local_80,"cookieFile.txt",0xe);
                    /* try { // try from 009a9f88 to 00aa9f93 has its CatchHandler @ 009aa148 */
      uVar1 = *(undefined8 *)(pHVar5 + 0x10);
      HVar7 = *pHVar5;
                    /* try { // try from 009a9f94 to 00aa9f9f has its CatchHandler @ 009aa144 */
      uStack_60 = (undefined7)((ulong)*(undefined8 *)(pHVar5 + 8) >> 8);
      uStack_68 = (undefined7)*(undefined8 *)(pHVar5 + 1);
      local_61 = (undefined1)((ulong)*(undefined8 *)(pHVar5 + 1) >> 0x38);
      *(undefined8 *)pHVar5 = 0;
      *(undefined8 *)(pHVar5 + 8) = 0;
                    /* try { // try from 009a9fa0 to 00aaa0cf has its CatchHandler @ 009aa15c */
      *(undefined8 *)(pHVar5 + 0x10) = 0;
      if (((byte)*pHVar6 & 1) == 0) {
        *(undefined2 *)(this + 0x40) = 0;
      }
      else {
        **(undefined1 **)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        if (((byte)this[0x40] & 1) != 0) {
          operator_delete(*(void **)(this + 0x50));
          *(undefined8 *)pHVar6 = 0;
        }
      }
      this[0x40] = HVar7;
      *(ulong *)(this + 0x48) = CONCAT71(uStack_60,local_61);
      *(ulong *)(this + 0x41) = CONCAT17(local_61,uStack_68);
      *(undefined8 *)(this + 0x50) = uVar1;
      uStack_60 = 0;
      uStack_68 = 0;
      local_61 = 0;
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
        HVar7 = *pHVar6;
      }
    }
  }
  else if (*(long *)(this + 0x48) == 0) goto LAB_009a9f60;
  if (((byte)HVar7 & 1) == 0) {
    pHVar6 = this + 0x41;
  }
  else {
    pHVar6 = *(HttpURLConnection **)(this + 0x50);
  }
  __s = fopen((char *)pHVar6,"w");
  uVar3 = 0;
  if (__s != (FILE *)0x0) {
    fwrite(param_1,1,param_2,__s);
    fclose(__s);
    uVar3 = param_2;
  }
LAB_009aa054:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

