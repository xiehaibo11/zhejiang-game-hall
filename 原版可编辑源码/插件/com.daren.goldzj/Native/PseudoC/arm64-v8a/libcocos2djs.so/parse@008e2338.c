
/* __JSPlistDelegator::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __JSPlistDelegator::parse(basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong *in_x8;
  void *__dest;
  void *__src;
  basic_string *pbVar4;
  ulong uVar5;
  basic_string local_68 [16];
  void *local_58;
  SAXParser aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_1 + 0x10;
  if (((byte)*pbVar4 & 1) == 0) {
    *(undefined2 *)pbVar4 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  cocos2d::SAXParser::SAXParser(aSStack_50);
  uVar2 = cocos2d::SAXParser::init((char *)aSStack_50);
  if ((uVar2 & 1) != 0) {
    cocos2d::SAXParser::setDelegator(aSStack_50,(SAXDelegator *)param_1);
    plVar3 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar3 + 0x40))(local_68);
    cocos2d::SAXParser::parse(aSStack_50,local_68);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (((byte)*pbVar4 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = *(ulong *)pbVar4;
    in_x8[2] = *(ulong *)(param_1 + 0x20);
    in_x8[1] = uVar5;
    *in_x8 = uVar2;
    goto LAB_008e2464;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x20);
  if (uVar2 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_008e2450;
  }
  else {
    uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    in_x8[1] = uVar2;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
LAB_008e2450:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_008e2464:
  cocos2d::SAXParser::~SAXParser(aSStack_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

