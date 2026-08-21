
/* cocos2d::extension::Manifest::versionGreaterOrEquals(cocos2d::extension::Manifest const*,
   std::__ndk1::function<int (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&) const */

uint __thiscall
cocos2d::extension::Manifest::versionGreaterOrEquals
          (Manifest *this,Manifest *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00a573d4 with catch @ 00a5741c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a57430 to 00b5747f has its CatchHandler @ 00a57430
                       catch() { ... } // from try @ 00a57430 with catch @ 00a57430
                       catch() { ... } // from try @ 00a57538 with catch @ 00a57430 */
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if (((byte)this[0x78] & 1) == 0) {
    local_60 = *(void **)(this + 0x88);
    uStack_68 = *(ulong *)(this + 0x80);
    local_70 = *(ulong *)(this + 0x78);
  }
  else {
    uVar3 = *(ulong *)(this + 0x80);
    if (0xffffffffffffffef < uVar3) {
                    /* catch() { ... } // from try @ 00a57508 with catch @ 00a575d4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(this + 0x88);
    if (uVar3 < 0x17) {
      pvVar5 = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar3 << 1);
                    /* try { // try from 00a57480 to 00b57497 has its CatchHandler @ 00a57600 */
      if (uVar3 != 0) goto LAB_00a574a8;
    }
    else {
      uVar6 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar6);
      local_70 = uVar6 | 1;
      uStack_68 = uVar3;
      local_60 = pvVar5;
LAB_00a574a8:
                    /* try { // try from 00a574ac to 00b574bf has its CatchHandler @ 00a575fc */
      memcpy(pvVar5,pvVar4,uVar3);
    }
    *(undefined1 *)((long)pvVar5 + uVar3) = 0;
  }
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00a574c0 to 00b574cf has its CatchHandler @ 00a575d0 */
  local_90 = 0;
  if (((byte)param_1[0x78] & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x88);
    uStack_88 = *(ulong *)(param_1 + 0x80);
    local_90 = *(ulong *)(param_1 + 0x78);
    plVar2 = *(long **)(param_2 + 0x20);
    goto joined_r0x00a57568;
  }
                    /* try { // try from 00a57500 to 00b57507 has its CatchHandler @ 00a575cc */
  uVar3 = *(ulong *)(param_1 + 0x80);
                    /* try { // try from 00a57508 to 00b57537 has its CatchHandler @ 00a575d4 */
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(param_1 + 0x88);
  if (uVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_00a57550;
  }
  else {
    uVar6 = uVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a57538 to 00b5764f has its CatchHandler @ 00a57430 */
    pvVar5 = operator_new(uVar6);
    local_90 = uVar6 | 1;
    uStack_88 = uVar3;
    local_80 = pvVar5;
LAB_00a57550:
    memcpy(pvVar5,pvVar4,uVar3);
  }
  *(undefined1 *)((long)pvVar5 + uVar3) = 0;
  plVar2 = *(long **)(param_2 + 0x20);
joined_r0x00a57568:
  if (plVar2 == (long *)0x0) {
    uVar3 = FUN_00a57630(&local_70,&local_90);
  }
  else {
                    /* try { // try from 00a574e8 to 00b574ef has its CatchHandler @ 00a575b4 */
                    /* try { // try from 00a574f0 to 00b574ff has its CatchHandler @ 00a575e4 */
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_70,&local_90);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00a574e8 with catch @ 00a575b4 */
                    /* catch() { ... } // from try @ 00a57500 with catch @ 00a575cc */
    return (uint)((uVar3 & 0xffffffff) >> 0x1f) ^ 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a574c0 with catch @ 00a575d0 */
  __stack_chk_fail();
}

