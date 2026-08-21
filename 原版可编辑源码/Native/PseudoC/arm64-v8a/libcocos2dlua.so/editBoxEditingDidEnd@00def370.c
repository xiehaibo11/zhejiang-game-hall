
/* cocos2d::ui::EditBoxImplCommon::editBoxEditingDidEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::EditBoxDelegate::EditBoxEndAction) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::editBoxEditingDidEnd
          (EditBoxImplCommon *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          undefined4 param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_e8 [2];
  int *local_e0;
  int local_d8 [18];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  if (this_00 != param_1) {
    uVar6 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar6 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar6);
  }
  plVar3 = (long *)EditBox::getDelegate(*(EditBox **)(this + 0x10));
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00def3d8 to 00eef3db has its CatchHandler @ 00def3f0 */
    (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(this + 0x10),param_3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def3d8 with catch @ 00def3f0
                        */
    (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(this + 0x10));
  }
  lVar5 = *(long *)(this + 0x10);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x5cc) != 0) {
      uVar6 = (ulong)local_d8 | 4;
      local_d8[0] = *(int *)(lVar5 + 0x5cc);
      local_90 = lVar5;
                    /* try { // try from 00def438 to 00eef43b has its CatchHandler @ 00def450 */
      __strncpy_chk2(uVar6,"ended",0x40,0x40,6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def438 with catch @ 00def450
                        */
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      local_e8[0] = 9;
      local_e0 = local_d8;
      puVar4 = (undefined8 *)ScriptEngineManager::getInstance();
      (**(code **)(*(long *)*puVar4 + 0x78))((long *)*puVar4,local_e8);
      local_d8[3] = 0;
      local_d8[4] = 0;
                    /* try { // try from 00def494 to 00eef497 has its CatchHandler @ 00def4b4 */
      local_d8[1] = 0;
      local_d8[2] = 0;
      local_d8[7] = 0;
      local_d8[8] = 0;
      local_d8[5] = 0;
      local_d8[6] = 0;
      local_d8[0xb] = 0;
      local_d8[0xc] = 0;
      local_d8[9] = 0;
      local_d8[10] = 0;
      local_d8[0xf] = 0;
      local_d8[0x10] = 0;
      local_d8[0xd] = 0;
      local_d8[0xe] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def494 with catch @ 00def4b4
                        */
      __strncpy_chk2(uVar6,"return",0x40,0x40,7);
      local_e0 = local_d8;
      puVar4 = (undefined8 *)ScriptEngineManager::getInstance();
      (**(code **)(*(long *)*puVar4 + 0x78))((long *)*puVar4,local_e8);
      if (*(long *)(this + 0x10) == 0) goto LAB_00def4f0;
    }
    (**(code **)(*(long *)this + 0x138))(this,this_00);
  }
LAB_00def4f0:
                    /* try { // try from 00def4fc to 00eef4ff has its CatchHandler @ 00def51c */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

