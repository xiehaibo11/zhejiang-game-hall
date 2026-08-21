
/* cocos2d::extension::Manifest::versionGreater(cocos2d::extension::Manifest const*,
   std::__ndk1::function<int (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&) const */

void __thiscall
cocos2d::extension::Manifest::versionGreater(Manifest *this,Manifest *param_1,function *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a576a4 with catch @ 00a577b8 */
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
                    /* try { // try from 00a577d4 to 00b57823 has its CatchHandler @ 00a577d4
                       catch() { ... } // from try @ 00a577d4 with catch @ 00a577d4
                       catch() { ... } // from try @ 00a578dc with catch @ 00a577d4 */
  if (((byte)this[0x78] & 1) == 0) {
    local_60 = *(void **)(this + 0x88);
    uStack_68 = *(ulong *)(this + 0x80);
    local_70 = *(ulong *)(this + 0x78);
  }
  else {
    uVar5 = *(ulong *)(this + 0x80);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a578a4 with catch @ 00a57970 */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(this + 0x88);
    if (uVar5 < 0x17) {
      pvVar6 = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00a57840;
    }
    else {
                    /* try { // try from 00a57824 to 00b5783b has its CatchHandler @ 00a579a4 */
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_70 = uVar7 | 1;
      uStack_68 = uVar5;
      local_60 = pvVar6;
LAB_00a57840:
      memcpy(pvVar6,pvVar4,uVar5);
    }
                    /* try { // try from 00a57850 to 00b57863 has its CatchHandler @ 00a579a0 */
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 00a57864 to 00b57873 has its CatchHandler @ 00a57974 */
  if (((byte)param_1[0x78] & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x88);
    uStack_88 = *(ulong *)(param_1 + 0x80);
    local_90 = *(ulong *)(param_1 + 0x78);
    plVar3 = *(long **)(param_2 + 0x20);
    goto joined_r0x00a57900;
  }
  uVar5 = *(ulong *)(param_1 + 0x80);
  if (0xffffffffffffffef < uVar5) {
                    /* catch() { ... } // from try @ 00a57864 with catch @ 00a57974 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a578ac with catch @ 00a57978 */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00a578a4 to 00b578ab has its CatchHandler @ 00a57970 */
  pvVar4 = *(void **)(param_1 + 0x88);
                    /* try { // try from 00a578ac to 00b578db has its CatchHandler @ 00a57978 */
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_00a578e8;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_90 = uVar7 | 1;
                    /* try { // try from 00a578dc to 00b579f3 has its CatchHandler @ 00a577d4 */
    uStack_88 = uVar5;
    local_80 = pvVar6;
LAB_00a578e8:
    memcpy(pvVar6,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  plVar3 = *(long **)(param_2 + 0x20);
joined_r0x00a57900:
  if (plVar3 == (long *)0x0) {
    iVar2 = FUN_00a57630(&local_70,&local_90);
  }
  else {
                    /* try { // try from 00a5788c to 00b57893 has its CatchHandler @ 00a57958 */
    iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_70,&local_90);
                    /* try { // try from 00a57894 to 00b578a3 has its CatchHandler @ 00a57988 */
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00a5788c with catch @ 00a57958 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0 < iVar2);
}

