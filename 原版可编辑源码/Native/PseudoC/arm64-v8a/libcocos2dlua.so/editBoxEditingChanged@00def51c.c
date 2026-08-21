
/* cocos2d::ui::EditBoxImplCommon::editBoxEditingChanged(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::editBoxEditingChanged(EditBoxImplCommon *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 local_d8 [2];
  int *local_d0;
  int local_c8 [18];
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def4fc with catch @ 00def51c
                        */
                    /* catch() { ... } // from try @ 00def568 with catch @ 00def530 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)EditBox::getDelegate(*(EditBox **)(this + 0x10));
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00def564 to 00eef567 has its CatchHandler @ 00def5ac */
                    /* try { // try from 00def568 to 00eef5c7 has its CatchHandler @ 00def530 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pbVar2,uVar1);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)(this + 0x10),param_1);
  }
  lVar6 = *(long *)(this + 0x10);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x5cc) != 0)) {
                    /* catch() { ... } // from try @ 00def564 with catch @ 00def5ac */
    local_c8[0] = *(int *)(lVar6 + 0x5cc);
    local_80 = lVar6;
                    /* catch() { ... } // from try @ 00def604 with catch @ 00def5c8 */
    __strncpy_chk2((ulong)local_c8 | 4,"changed",0x40,0x40,8);
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    local_d8[0] = 9;
    local_d0 = local_c8;
    puVar5 = (undefined8 *)ScriptEngineManager::getInstance();
                    /* try { // try from 00def600 to 00eef603 has its CatchHandler @ 00def650 */
                    /* try { // try from 00def604 to 00eef66b has its CatchHandler @ 00def5c8 */
    (**(code **)(*(long *)*puVar5 + 0x78))((long *)*puVar5,local_d8);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

