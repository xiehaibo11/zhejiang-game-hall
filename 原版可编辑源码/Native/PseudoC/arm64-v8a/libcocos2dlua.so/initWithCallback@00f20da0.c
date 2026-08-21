
/* cocos2d::MenuItemToggle::initWithCallback(std::__ndk1::function<void (cocos2d::Ref*)> const&,
   cocos2d::MenuItem*, std::__va_list) */

undefined8 __thiscall
cocos2d::MenuItemToggle::initWithCallback
          (MenuItemToggle *this,long *param_1,Ref *param_2,long *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  MenuItem *local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_80[0] = (MenuItem *)0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,local_80);
  plVar3 = (long *)param_1[4];
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_1 == plVar3) {
    local_60 = (long *)local_80;
    (**(code **)(*plVar3 + 0x18))(plVar3,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
                    /* try { // try from 00f20e08 to 01020e3f has its CatchHandler @ 00f20e08
                       catch() { ... } // from try @ 00f20e08 with catch @ 00f20e08
                       catch() { ... } // from try @ 00f20eac with catch @ 00f20e08 */
  }
  FUN_00dad434(local_80,this + 0x300);
                    /* try { // try from 00f20e40 to 01020e4b has its CatchHandler @ 00f20f2c */
  if (local_80 == (MenuItem **)local_60) {
                    /* try { // try from 00f20e60 to 01020e6f has its CatchHandler @ 00f20f18 */
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
                    /* try { // try from 00f20e4c to 01020e57 has its CatchHandler @ 00f20f1c */
    if (local_60 == (long *)0x0) goto LAB_00f20e68;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00f20e68:
  *(undefined2 *)(this + 0x2f8) = 0x100;
  if (param_2 != (Ref *)0x0) {
    do {
      while( true ) {
        plVar3 = *(long **)(this + 0x348);
        local_80[0] = (MenuItem *)param_2;
        if (plVar3 == *(long **)(this + 0x350)) {
          std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
          __push_back_slow_path<cocos2d::MenuItem*const&>
                    ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
                     (this + 0x340),local_80);
        }
        else {
          *plVar3 = (long)param_2;
          *(long **)(this + 0x348) = plVar3 + 1;
                    /* try { // try from 00f20eac to 01020f43 has its CatchHandler @ 00f20e08 */
        }
        Ref::retain((Ref *)local_80[0]);
        iVar1 = (int)param_4[3];
        if ((-1 < iVar1) || (*(int *)(param_4 + 3) = iVar1 + 8, 0 < iVar1 + 8)) break;
        param_2 = *(Ref **)(param_4[1] + (long)iVar1);
        if (param_2 == (Ref *)0x0) goto LAB_00f20eec;
      }
      plVar3 = (long *)*param_4;
      *param_4 = (long)(plVar3 + 1);
      param_2 = (Ref *)*plVar3;
                    /* try { // try from 00f20e8c to 01020eab has its CatchHandler @ 00f20f30 */
    } while (param_2 != (Ref *)0x0);
  }
LAB_00f20eec:
  *(undefined4 *)(this + 0x330) = 0xffffffff;
  setSelectedIndex(this,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00f20e60 with catch @ 00f20f18 */
                    /* catch() { ... } // from try @ 00f20e4c with catch @ 00f20f1c */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00f20e40 with catch @ 00f20f2c */
  __stack_chk_fail();
}

