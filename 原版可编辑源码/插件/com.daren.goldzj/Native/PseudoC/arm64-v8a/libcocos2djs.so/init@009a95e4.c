
/* cocos2d::network::HttpURLConnection::init(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpURLConnection::init(HttpURLConnection *this,HttpRequest *param_1)

{
  _jclass *p_Var1;
  ulong __n;
  char *pcVar2;
  _jclass _Var3;
  long lVar4;
  _jclass *p_Var5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  size_t __n_00;
  _jclass *p_Var12;
  HttpRequest *__s;
  void *pvVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  float fVar17;
  ulong local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  ulong local_a0;
  char *local_98;
  _jclass *local_90;
  _jclass *local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (((byte)param_1[0x10] & 1) == 0) {
    __s = param_1 + 0x11;
  }
  else {
    __s = *(HttpRequest **)(param_1 + 0x20);
  }
  local_90 = (_jclass *)0x0;
  local_88 = (_jclass *)0x0;
  local_80 = (void *)0x0;
  p_Var5 = (_jclass *)strlen((char *)__s);
  if ((_jclass *)0xffffffffffffffef < p_Var5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009a9650 to 00aa968b has its CatchHandler @ 009a976c */
  if (p_Var5 < (_jclass *)0x17) {
    pvVar13 = (void *)((ulong)&local_90 | 1);
    local_90 = (_jclass *)CONCAT71(local_90._1_7_,(char)((int)p_Var5 << 1));
    if (p_Var5 == (_jclass *)0x0) goto LAB_009a96a0;
  }
  else {
    pvVar13 = operator_new((ulong)(p_Var5 + 0x10) & 0xfffffffffffffff0);
    local_90 = (_jclass *)((ulong)(p_Var5 + 0x10) & 0xfffffffffffffff0 | 1);
                    /* try { // try from 009a968c to 00aa97c3 has its CatchHandler @ 009a9464 */
    local_88 = p_Var5;
    local_80 = pvVar13;
  }
  memcpy(pvVar13,__s,(size_t)p_Var5);
LAB_009a96a0:
  *(_jclass *)((long)pvVar13 + (long)p_Var5) = (_jclass)0x0;
  createHttpURLConnection(this,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((*(long *)(this + 8) == 0) || (*(long *)this == 0)) {
    uVar8 = 0;
  }
  else {
    fVar17 = *(float *)(param_1 + 0xb0);
    uVar6 = JniHelper::getStaticMethodInfo
                      ((JniMethodInfo_ *)&local_90,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                       "setReadAndConnectTimeout","(Ljava/net/HttpURLConnection;II)V");
    if ((uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 009a9590 with catch @ 009a9704 */
      _JNIEnv::CallStaticVoidMethod
                (local_90,(_jmethodID *)local_88,local_80,*(undefined8 *)(this + 8),
                 (int)(fVar17 * 1000.0),(ulong)(uint)(int)(fVar17 * 1000.0));
      (**(code **)(*(long *)local_90 + 0xb8))(local_90,local_88);
    }
    setVerifySSL(this);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_90,(vector *)(param_1 + 0x98));
    p_Var5 = local_88;
    if (local_90 != local_88) {
                    /* catch() { ... } // from try @ 009a94e8 with catch @ 009a9754 */
                    /* catch() { ... } // from try @ 009a94dc with catch @ 009a9758 */
      pcVar9 = (char *)((ulong)&local_a8 | 1);
                    /* catch() { ... } // from try @ 009a94bc with catch @ 009a975c */
      pcVar15 = (char *)((ulong)&local_c0 | 1);
      p_Var12 = local_90;
      do {
        _Var3 = *p_Var12;
        if (((byte)_Var3 & 1) == 0) {
                    /* catch() { ... } // from try @ 009a94f4 with catch @ 009a976c
                       catch() { ... } // from try @ 009a9650 with catch @ 009a976c */
          __n_00 = (size_t)((byte)_Var3 >> 1);
          p_Var1 = p_Var12 + 1;
        }
        else {
          __n_00 = *(size_t *)(p_Var12 + 8);
          p_Var1 = *(_jclass **)(p_Var12 + 0x10);
        }
        if (__n_00 != 0) {
          pvVar13 = memchr(p_Var1,0x3a,__n_00);
          lVar10 = (long)pvVar13 - (long)p_Var1;
          if (pvVar13 == (void *)0x0) {
            lVar10 = -1;
          }
          uVar16 = (uint)lVar10;
          if ((uVar16 != 0xffffffff) && ((int)uVar16 < (int)__n_00)) {
            local_a8 = 0;
            local_a0 = 0;
            local_98 = (char *)0x0;
            uVar6 = *(ulong *)(p_Var12 + 8);
            p_Var1 = *(_jclass **)(p_Var12 + 0x10);
                    /* try { // try from 009a97c4 to 00aa9813 has its CatchHandler @ 009a97c4
                       catch() { ... } // from try @ 009a97c4 with catch @ 009a97c4
                       catch() { ... } // from try @ 009a9a8c with catch @ 009a97c4 */
            if (((byte)_Var3 & 1) == 0) {
              p_Var1 = p_Var12 + 1;
              uVar6 = (ulong)((byte)_Var3 >> 1);
            }
            if ((ulong)(long)(int)uVar16 <= uVar6) {
              uVar6 = (long)(int)uVar16;
            }
            if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar6 < 0x17) {
              local_a8 = (ulong)(byte)((int)uVar6 << 1);
              pcVar7 = pcVar9;
              if (uVar6 != 0) goto LAB_009a981c;
            }
            else {
              uVar14 = uVar6 + 0x10 & 0xfffffffffffffff0;
              pcVar7 = operator_new(uVar14);
              local_a8 = uVar14 | 1;
                    /* try { // try from 009a9814 to 00aa982b has its CatchHandler @ 009a9bd0 */
              local_a0 = uVar6;
              local_98 = pcVar7;
LAB_009a981c:
              memcpy(pcVar7,p_Var1,uVar6);
            }
            pcVar7[uVar6] = '\0';
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = (char *)0x0;
            _Var3 = *p_Var12;
                    /* try { // try from 009a9840 to 00aa9853 has its CatchHandler @ 009a9bcc */
            uVar14 = (lVar10 << 0x20) + 0x100000000 >> 0x20;
                    /* try { // try from 009a9854 to 00aa9863 has its CatchHandler @ 009a9bb8 */
            uVar6 = (ulong)((byte)_Var3 >> 1);
            if (((byte)_Var3 & 1) != 0) {
              uVar6 = *(ulong *)(p_Var12 + 8);
            }
            if (uVar6 < uVar14) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
                    /* try { // try from 009a9864 to 00aa986b has its CatchHandler @ 009a9be0 */
            uVar11 = (ulong)(int)(~uVar16 + (int)__n_00);
            p_Var1 = p_Var12 + 1;
            if (((byte)_Var3 & 1) != 0) {
              p_Var1 = *(_jclass **)(p_Var12 + 0x10);
            }
            __n = uVar6 - uVar14;
            if (uVar11 <= uVar6 - uVar14) {
              __n = uVar11;
            }
            if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
                    /* try { // try from 009a989c to 00aa98a3 has its CatchHandler @ 009a9b9c */
              local_c0 = (ulong)(byte)((int)__n << 1);
              pcVar7 = pcVar15;
              if (__n != 0) goto LAB_009a98cc;
            }
            else {
              uVar6 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009a98b8 to 00aa98bf has its CatchHandler @ 009a9b4c */
              pcVar7 = operator_new(uVar6);
              local_c0 = uVar6 | 1;
              local_b8 = __n;
              local_b0 = pcVar7;
LAB_009a98cc:
              memcpy(pcVar7,p_Var1 + uVar14,__n);
            }
                    /* try { // try from 009a98dc to 00aa98eb has its CatchHandler @ 009a9b08 */
            pcVar7[__n] = '\0';
                    /* try { // try from 009a98ec to 00aa98fb has its CatchHandler @ 009a9b48 */
            pcVar7 = pcVar9;
            if ((local_a8 & 1) != 0) {
              pcVar7 = local_98;
            }
            pcVar2 = pcVar15;
            if ((local_c0 & 1) != 0) {
              pcVar2 = local_b0;
            }
            addRequestHeader(this,pcVar7,pcVar2);
            if ((local_c0 & 1) != 0) {
                    /* try { // try from 009a9918 to 00aa991f has its CatchHandler @ 009a9b98 */
              operator_delete(local_b0);
            }
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
            }
          }
        }
        p_Var12 = p_Var12 + 0x18;
      } while (p_Var5 != p_Var12);
    }
                    /* try { // try from 009a993c to 00aa9947 has its CatchHandler @ 009a9b28 */
    addCookiesForRequestHeader(this);
    p_Var5 = local_90;
                    /* try { // try from 009a9948 to 00aa9957 has its CatchHandler @ 009a9b94 */
    p_Var12 = local_88;
    if (local_90 != (_jclass *)0x0) {
      while (p_Var1 = p_Var12, p_Var1 != p_Var5) {
        p_Var12 = p_Var1 + -0x18;
        if (((byte)*p_Var12 & 1) != 0) {
          operator_delete(*(void **)(p_Var1 + -8));
        }
      }
                    /* try { // try from 009a998c to 00aa9997 has its CatchHandler @ 009a9b6c */
      local_88 = p_Var5;
      operator_delete(local_90);
    }
    uVar8 = 1;
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
                    /* try { // try from 009a99a8 to 00aa9a53 has its CatchHandler @ 009a9be0 */
  return;
}

