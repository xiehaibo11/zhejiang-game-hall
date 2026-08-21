
/* cocos2d::EventListener::init(cocos2d::EventListener::Type, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Event*)> const&) */

undefined8 __thiscall
cocos2d::EventListener::init
          (EventListener *this,undefined4 param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3,
          long *param_4)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = alStack_80;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00fa7444 to 010a74f7 has its CatchHandler @ 00fa7444
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa7444 with catch @ 00fa7444
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa74fc with catch @ 00fa7444
                        */
  plVar4 = (long *)param_4[4];
  if (plVar4 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_4 == plVar4) {
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_00fa7540(alStack_80,this + 0x30);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00fa74c8;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00fa74c8:
  *(undefined4 *)(this + 0x60) = param_2;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x68) != param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),(char *)pbVar2,uVar1);
  }
                    /* try { // try from 00fa74f8 to 010a74fb has its CatchHandler @ 00fa7594 */
  this[0x80] = (EventListener)0x0;
                    /* try { // try from 00fa74fc to 010a75af has its CatchHandler @ 00fa7444 */
  *(undefined2 *)(this + 0x90) = 0x100;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

