
/* cocos2d::Node::doEnumerateRecursive(cocos2d::Node const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<bool
   (cocos2d::Node*)>) const */

uint __thiscall
cocos2d::Node::doEnumerateRecursive(Node *this,Node *param_1,basic_string *param_2,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e8,param_2);
  plVar4 = (long *)param_4[4];
  if (plVar4 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (param_4 == plVar4) {
    local_80 = alStack_a0;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
  uVar5 = doEnumerate(param_1,local_e8,alStack_a0);
  if (alStack_a0 == local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f248e0;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_00f248e0:
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((uVar5 & 1) == 0) {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x248))(param_1);
    puVar9 = (undefined8 *)*plVar4;
    puVar1 = (undefined8 *)plVar4[1];
    if (puVar9 == puVar1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        plVar4 = (long *)param_4[4];
        uVar7 = *puVar9;
        if (plVar4 == (long *)0x0) {
          local_b0 = (long *)0x0;
        }
        else if (param_4 == plVar4) {
          local_b0 = alStack_d0;
          (**(code **)(*plVar4 + 0x18))(plVar4,alStack_d0);
        }
        else {
          local_b0 = (long *)(**(code **)(*plVar4 + 0x10))();
        }
        uVar3 = doEnumerateRecursive(this,uVar7,param_2,alStack_d0);
        if (alStack_d0 == local_b0) {
          pcVar6 = *(code **)(*local_b0 + 0x20);
LAB_00f24998:
          (*pcVar6)();
        }
        else {
                    /* try { // try from 00f24980 to 01024b17 has its CatchHandler @ 00f24980
                       catch() { ... } // from try @ 00f24980 with catch @ 00f24980
                       catch() { ... } // from try @ 00f24bdc with catch @ 00f24980 */
          if (local_b0 != (long *)0x0) {
            pcVar6 = *(code **)(*local_b0 + 0x28);
            goto LAB_00f24998;
          }
        }
        if ((uVar3 & 1) != 0) goto LAB_00f249b4;
        puVar9 = puVar9 + 1;
        uVar8 = uVar8 | uVar3;
      } while (puVar1 != puVar9);
    }
  }
  else {
LAB_00f249b4:
    uVar8 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8 & 1;
}

