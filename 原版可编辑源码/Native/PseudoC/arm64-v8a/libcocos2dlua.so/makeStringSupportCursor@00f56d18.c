
/* cocos2d::TextFieldTTF::makeStringSupportCursor(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
cocos2d::TextFieldTTF::makeStringSupportCursor(TextFieldTTF *this,basic_string *param_1)

{
  uint uVar1;
  basic_string bVar2;
  TextFieldTTF TVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  basic_string *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68 [2];
  void *local_58;
  StringUTF8 aSStack_50 [24];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((this[0x710] == (TextFieldTTF)0x0) || (this[0x728] == (TextFieldTTF)0x0)) goto LAB_00f56f64;
  bVar2 = *param_1;
  uVar7 = (ulong)(byte)bVar2;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar10 = (ulong)((byte)bVar2 >> 1);
  uVar5 = uVar10;
  if (((byte)bVar2 & 1) != 0) {
    uVar5 = uVar9;
  }
  if (uVar5 != 0) {
                    /* try { // try from 00f56d68 to 01056d6f has its CatchHandler @ 00f57660 */
    StringUtils::StringUTF8::StringUTF8(aSStack_50);
    StringUtils::StringUTF8::replace(aSStack_50,param_1);
    uVar10 = *(ulong *)(this + 0x718);
                    /* try { // try from 00f56d80 to 01056d87 has its CatchHandler @ 00f57658 */
    uVar5 = StringUtils::StringUTF8::length(aSStack_50);
                    /* try { // try from 00f56d88 to 01056d93 has its CatchHandler @ 00f57668 */
    if (uVar5 < uVar10) {
      uVar6 = StringUtils::StringUTF8::length(aSStack_50);
      *(undefined8 *)(this + 0x718) = uVar6;
    }
    local_68[1] = 0;
    local_58 = (void *)0x0;
    local_68[0] = 0;
    uVar1 = *(uint *)(this + 0x308);
    if (uVar1 < 2) {
      local_68[0] = 0x802;
    }
                    /* try { // try from 00f56dd4 to 01056ddf has its CatchHandler @ 00f57690 */
    uVar5 = (ulong)local_68 | (ulong)(uVar1 < 2);
    local_68[0] = CONCAT71(local_68[0]._1_7_,(uVar1 < 2) * '\x02' + '\x02');
    *(TextFieldTTF *)(uVar5 + 1) = this[0x720];
                    /* try { // try from 00f56de0 to 01056e0b has its CatchHandler @ 00f576b0 */
    *(undefined1 *)(uVar5 + 2) = 0;
    StringUtils::StringUTF8::insert(aSStack_50,*(ulong *)(this + 0x718),(basic_string *)local_68);
    StringUtils::StringUTF8::getAsCharSequence();
    if (((byte)*param_1 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      if (((byte)*param_1 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x10));
        *(undefined8 *)param_1 = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = local_70;
    *(undefined8 *)(param_1 + 8) = uStack_78;
    *(undefined8 *)param_1 = local_80;
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    StringUtils::StringUTF8::~StringUTF8(aSStack_50);
    goto LAB_00f56f64;
  }
  if (*(uint *)(this + 0x308) < 2) {
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = 0x16;
      uVar9 = uVar10;
      if (uVar10 == 0x16) goto LAB_00f56e94;
    }
    else {
      uVar5 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
                    /* try { // try from 00f56e30 to 01056e43 has its CatchHandler @ 00f5768c */
      uVar10 = uVar9;
      if (uVar9 == uVar5) {
LAB_00f56e94:
                    /* try { // try from 00f56e94 to 01056ebf has its CatchHandler @ 00f576ac */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_1,uVar5,1,uVar5,uVar5,0,0);
        uVar7 = (ulong)(byte)*param_1;
        uVar9 = uVar10;
      }
    }
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 00f56ed0 to 01056ee3 has its CatchHandler @ 00f57688 */
      pbVar8 = param_1 + 1;
      *param_1 = (basic_string)((char)uVar9 * '\x02' + '\x02');
    }
    else {
      pbVar8 = *(basic_string **)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar9 + 1;
    }
    *(undefined2 *)(pbVar8 + uVar9) = 8;
    uVar7 = (ulong)(byte)*param_1;
  }
  TVar3 = this[0x720];
  if ((uVar7 & 1) == 0) {
    uVar5 = uVar7 >> 1;
    uVar10 = 0x16;
    if (uVar5 == 0x16) goto LAB_00f56f14;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar10 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
    if (uVar5 == uVar10) {
LAB_00f56f14:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1,uVar10,1,uVar10,uVar10,0,0);
      uVar7 = (ulong)(byte)*param_1;
    }
  }
  if ((uVar7 & 1) == 0) {
    pbVar8 = param_1 + 1;
    *param_1 = (basic_string)((char)uVar5 * '\x02' + '\x02');
  }
  else {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00f56f40 to 01056f6b has its CatchHandler @ 00f576a8 */
    *(ulong *)(param_1 + 8) = uVar5 + 1;
  }
  *(TextFieldTTF *)(pbVar8 + uVar5) = TVar3;
  ((TextFieldTTF *)(pbVar8 + uVar5))[1] = (TextFieldTTF)0x0;
LAB_00f56f64:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f56f7c to 01056f8f has its CatchHandler @ 00f57684 */
  return;
}

