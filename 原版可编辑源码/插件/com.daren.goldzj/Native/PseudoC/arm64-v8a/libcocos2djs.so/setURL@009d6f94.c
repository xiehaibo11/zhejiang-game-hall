
/* cocos2d::VideoPlayer::setURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::VideoPlayer::setURL(VideoPlayer *this,basic_string *param_1)

{
  basic_string *pbVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  basic_string *pbVar5;
  long *plVar6;
  ulong uVar7;
  void *__src;
  undefined4 uVar8;
  VideoPlayer *pVVar9;
  ulong uVar10;
  void *__dest;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009d6fc4 to 00ad7003 has its CatchHandler @ 009d7074 */
  uVar10 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar10 = (ulong)((byte)*param_1 >> 1);
  }
  if (2 < (long)uVar10) {
    pbVar5 = pbVar1;
    uVar7 = uVar10;
    do {
                    /* try { // try from 009d7004 to 00ad7087 has its CatchHandler @ 009d6f88 */
      if ((uVar7 - 2 == 0) ||
         (pbVar5 = memchr(pbVar5,0x3a,uVar7 - 2), pbVar5 == (basic_string *)0x0)) break;
      iVar4 = memcmp(pbVar5,&DAT_0188d78f,3);
      if (iVar4 == 0) {
        if ((pbVar5 != pbVar1 + uVar10) && ((long)pbVar5 - (long)pbVar1 != -1)) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x10) !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x10),(char *)pbVar1,uVar10);
          }
          uVar8 = 1;
          *(undefined4 *)(this + 0x28) = 1;
          goto LAB_009d70d4;
        }
        break;
      }
      pbVar5 = pbVar5 + 1;
      uVar7 = (long)(pbVar1 + uVar10) - (long)pbVar5;
    } while (2 < (long)uVar7);
  }
  plVar6 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 009d6fc4 with catch @ 009d7074 */
  (**(code **)(*plVar6 + 0x40))(&local_70,plVar6,param_1);
                    /* try { // try from 009d7088 to 00ad70c7 has its CatchHandler @ 009d7088
                       catch() { ... } // from try @ 009d7088 with catch @ 009d7088
                       catch() { ... } // from try @ 009d710c with catch @ 009d7088 */
  pVVar9 = this + 0x10;
  if (((byte)*pVVar9 & 1) == 0) {
    *(undefined2 *)pVVar9 = 0;
  }
  else {
    **(undefined1 **)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    if (((byte)this[0x10] & 1) != 0) {
      operator_delete(*(void **)(this + 0x20));
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  uVar8 = 0;
                    /* try { // try from 009d70c8 to 00ad710b has its CatchHandler @ 009d71ac */
  *(void **)(this + 0x20) = local_60;
  *(ulong *)(this + 0x18) = CONCAT35(uStack_63,CONCAT41(uStack_67,uStack_68));
  *(ulong *)pVVar9 = CONCAT71(uStack_6f,local_70);
  *(undefined4 *)(this + 0x28) = 0;
LAB_009d70d4:
  uStack_63 = 0;
  local_70 = 0x16;
  local_60 = (void *)0x0;
  uStack_67 = 0x6c7255;
  uStack_6f = 0x65646956746573;
  uStack_68 = 0x6f;
  uVar2 = *(undefined4 *)(this + 0x2c);
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 009d710c to 00ad71bf has its CatchHandler @ 009d7088 */
  if (((byte)this[0x10] & 1) == 0) {
    local_80 = *(void **)(this + 0x20);
    uStack_88 = *(ulong *)(this + 0x18);
    local_90 = *(ulong *)(this + 0x10);
    goto LAB_009d718c;
  }
  uVar10 = *(ulong *)(this + 0x18);
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(this + 0x20);
  if (uVar10 < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uVar10 << 1);
    if (uVar10 != 0) goto LAB_009d7178;
  }
  else {
    uVar7 = uVar10 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_90 = uVar7 | 1;
    uStack_88 = uVar10;
    local_80 = __dest;
LAB_009d7178:
    memcpy(__dest,__src,uVar10);
  }
  *(undefined1 *)((long)__dest + uVar10) = 0;
LAB_009d718c:
  JniHelper::
  callStaticVoidMethod<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38710,&local_70,uVar2,uVar8,&local_90);
                    /* catch() { ... } // from try @ 009d70c8 with catch @ 009d71ac */
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
                    /* try { // try from 009d71c0 to 00ad722f has its CatchHandler @ 009d71c0
                       catch() { ... } // from try @ 009d71c0 with catch @ 009d71c0
                       catch() { ... } // from try @ 009d72d4 with catch @ 009d71c0
                       catch() { ... } // from try @ 009d7444 with catch @ 009d71c0 */
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

