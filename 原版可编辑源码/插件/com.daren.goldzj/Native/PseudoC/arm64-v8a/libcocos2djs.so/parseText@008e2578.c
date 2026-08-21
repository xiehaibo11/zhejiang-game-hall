
/* __JSPlistDelegator::parseText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __JSPlistDelegator::parseText(basic_string *param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte *in_x1;
  ulong *in_x8;
  void *__dest;
  void *__src;
  basic_string *pbVar4;
  ulong uVar5;
  SAXParser aSStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar4 = param_1 + 0x10;
  if (((byte)*pbVar4 & 1) == 0) {
    *(undefined2 *)pbVar4 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  cocos2d::SAXParser::SAXParser(aSStack_50);
  uVar3 = cocos2d::SAXParser::init((char *)aSStack_50);
  if ((uVar3 & 1) != 0) {
    cocos2d::SAXParser::setDelegator(aSStack_50,(SAXDelegator *)param_1);
    uVar3 = *(ulong *)(in_x1 + 8);
    pbVar1 = *(byte **)(in_x1 + 0x10);
    if ((*in_x1 & 1) == 0) {
      pbVar1 = in_x1 + 1;
      uVar3 = (ulong)(*in_x1 >> 1);
    }
    cocos2d::SAXParser::parse(aSStack_50,(char *)pbVar1,uVar3);
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (((byte)*pbVar4 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar3 = *(ulong *)pbVar4;
    in_x8[2] = *(ulong *)(param_1 + 0x20);
    in_x8[1] = uVar5;
    *in_x8 = uVar3;
    goto LAB_008e2690;
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x20);
  if (uVar3 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_008e267c;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    in_x8[1] = uVar3;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
LAB_008e267c:
    memcpy(__dest,__src,uVar3);
  }
  *(undefined1 *)((long)__dest + uVar3) = 0;
LAB_008e2690:
  cocos2d::SAXParser::~SAXParser(aSStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

