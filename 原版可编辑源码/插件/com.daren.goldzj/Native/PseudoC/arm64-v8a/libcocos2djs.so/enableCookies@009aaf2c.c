
/* cocos2d::network::HttpClient::enableCookies(char const*) */

void __thiscall cocos2d::network::HttpClient::enableCookies(HttpClient *this,char *param_1)

{
  undefined8 uVar1;
  HttpClient HVar2;
  long lVar3;
  size_t __n;
  long *plVar4;
  HttpClient *pHVar5;
  void *__dest;
  ulong uVar6;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009aaf50 to 00aaaf67 has its CatchHandler @ 009ab130 */
  std::__ndk1::mutex::lock((mutex *)(this + 0x160));
  if (param_1 == (char *)0x0) {
    plVar4 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar4 + 0x90))(&local_80);
    pHVar5 = (HttpClient *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_80,"cookieFile.txt",0xe);
    uVar1 = *(undefined8 *)(pHVar5 + 0x10);
    HVar2 = *pHVar5;
    uStack_60 = (undefined7)((ulong)*(undefined8 *)(pHVar5 + 8) >> 8);
    uStack_68 = (undefined7)*(undefined8 *)(pHVar5 + 1);
    local_61 = (undefined1)((ulong)*(undefined8 *)(pHVar5 + 1) >> 0x38);
    *(undefined8 *)pHVar5 = 0;
    *(undefined8 *)(pHVar5 + 8) = 0;
    *(undefined8 *)(pHVar5 + 0x10) = 0;
    if (((byte)this[0x148] & 1) == 0) {
      *(undefined2 *)(this + 0x148) = 0;
    }
    else {
      **(undefined1 **)(this + 0x158) = 0;
      *(undefined8 *)(this + 0x150) = 0;
      if (((byte)this[0x148] & 1) != 0) {
        operator_delete(*(void **)(this + 0x158));
        *(undefined8 *)(this + 0x148) = 0;
      }
    }
    this[0x148] = HVar2;
                    /* try { // try from 009ab0b0 to 00aab197 has its CatchHandler @ 009aaef8 */
    *(ulong *)(this + 0x150) = CONCAT71(uStack_60,local_61);
    *(ulong *)(this + 0x149) = CONCAT17(local_61,uStack_68);
    *(undefined8 *)(this + 0x158) = uVar1;
    uStack_60 = 0;
    uStack_68 = 0;
    local_61 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    goto LAB_009ab0d4;
  }
                    /* try { // try from 009aaf70 to 00aaaf7b has its CatchHandler @ 009ab12c */
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  __n = strlen(param_1);
                    /* try { // try from 009aaf7c to 00aaaf87 has its CatchHandler @ 009ab128 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009aaf88 to 00aab0af has its CatchHandler @ 009ab140 */
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_009ab020;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_80 = uVar6 | 1;
    sStack_78 = __n;
    local_70 = __dest;
LAB_009ab020:
    memcpy(__dest,param_1,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  if (((byte)this[0x148] & 1) == 0) {
    *(undefined2 *)(this + 0x148) = 0;
  }
  else {
    **(undefined1 **)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    if (((byte)this[0x148] & 1) != 0) {
      operator_delete(*(void **)(this + 0x158));
      *(undefined8 *)(this + 0x148) = 0;
    }
  }
  *(void **)(this + 0x158) = local_70;
  *(size_t *)(this + 0x150) = sStack_78;
  *(ulong *)(this + 0x148) = local_80;
LAB_009ab0d4:
  std::__ndk1::mutex::unlock((mutex *)(this + 0x160));
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

