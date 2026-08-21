
/* cocos2d::Node::enumerateChildren(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<bool (cocos2d::Node*)>) const */

void __thiscall cocos2d::Node::enumerateChildren(Node *this,byte *param_1,long *param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *__dest;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_100;
  ulong uStack_f8;
  undefined1 *local_f0;
  ulong local_e8;
  ulong uStack_e0;
  undefined1 *local_d8;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  uVar9 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if (uVar9 < 2 || uVar9 - 2 == 0) {
    bVar3 = false;
    uVar12 = 0;
    iVar10 = 0;
    uVar11 = uVar9;
                    /* try { // try from 00f2444c to 0102445b has its CatchHandler @ 00f244f0 */
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    uVar6 = uVar9;
    if (*pbVar7 == 0x2f) {
      uVar11 = (ulong)(pbVar7[1] == 0x2f);
      uVar12 = uVar11 << 1;
      uVar6 = uVar9 - 2;
      if (pbVar7[1] != 0x2f) {
        uVar6 = uVar9;
      }
      if (uVar9 < 4) goto LAB_00f244a0;
LAB_00f24468:
      iVar10 = (int)uVar11;
      if ((pbVar7[uVar9 - 3] != 0x2f) || (pbVar7[uVar9 - 2] != 0x2e)) goto LAB_00f244a0;
      bVar3 = pbVar7[uVar9 - 1] == 0x2e;
      uVar11 = uVar6 - 3;
      if (!bVar3) {
        uVar11 = uVar6;
      }
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
                    /* try { // try from 00f2445c to 01024503 has its CatchHandler @ 00f23f4c */
      if (3 < uVar9) goto LAB_00f24468;
LAB_00f244a0:
      iVar10 = (int)uVar11;
      bVar3 = false;
      uVar11 = uVar6;
    }
    uStack_e0 = 0;
    local_d8 = (undefined1 *)0x0;
    local_e8 = 0;
    if (uVar9 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
  }
  local_d8 = (undefined1 *)0x0;
  uStack_e0 = 0;
  local_e8 = 0;
  pbVar7 = *(byte **)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  uVar6 = uVar9 - uVar12;
  if (uVar11 <= uVar9 - uVar12) {
    uVar6 = uVar11;
  }
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    puVar8 = (undefined1 *)((ulong)&local_e8 | 1);
    local_e8 = (ulong)(byte)((int)uVar6 << 1);
                    /* catch() { ... } // from try @ 00f2444c with catch @ 00f244f0 */
    if (uVar6 != 0) goto LAB_00f24520;
    *puVar8 = 0;
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    puVar8 = operator_new(uVar9);
    local_e8 = uVar9 | 1;
    uStack_e0 = uVar6;
    local_d8 = puVar8;
LAB_00f24520:
    memcpy(puVar8,pbVar7 + uVar12,uVar6);
    puVar8[uVar6] = 0;
  }
  if (bVar3) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_e8,0,"[[:alnum:]]+/",0xd);
  }
  puVar8 = local_d8;
  uVar9 = uStack_e0;
  if (iVar10 != 0) {
    plVar4 = (long *)param_3[4];
    if (plVar4 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (param_3 == plVar4) {
      local_80 = alStack_a0;
      (**(code **)(*plVar4 + 0x18))(plVar4,alStack_a0);
    }
    else {
      local_80 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
    doEnumerateRecursive(this,this,&local_e8,alStack_a0);
    if (alStack_a0 == local_80) {
      pcVar5 = *(code **)(*local_80 + 0x20);
    }
    else {
      if (local_80 == (long *)0x0) goto joined_r0x00f24704;
      pcVar5 = *(code **)(*local_80 + 0x28);
    }
    (*pcVar5)();
    goto joined_r0x00f24704;
  }
  uStack_f8 = 0;
  local_f0 = (undefined1 *)0x0;
  local_100 = 0;
  if ((local_e8 & 1) == 0) {
    local_f0 = local_d8;
    uStack_f8 = uStack_e0;
    local_100 = local_e8;
    plVar4 = (long *)param_3[4];
    if (plVar4 == (long *)0x0) goto LAB_00f24630;
LAB_00f245a0:
                    /* catch() { ... } // from try @ 00f245d0 with catch @ 00f245a4 */
    if (param_3 == plVar4) {
      local_b0 = alStack_d0;
      (**(code **)(*plVar4 + 0x18))(plVar4,alStack_d0);
    }
    else {
      local_b0 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    if (0xffffffffffffffef < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* try { // try from 00f245c8 to 010245cf has its CatchHandler @ 00f24600 */
                    /* try { // try from 00f245d0 to 0102461b has its CatchHandler @ 00f245a4 */
    if (uStack_e0 < 0x17) {
      __dest = (undefined1 *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uStack_e0 << 1);
      if (uStack_e0 != 0) goto LAB_00f24614;
    }
    else {
      uVar11 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 00f245c8 with catch @ 00f24600 */
      __dest = operator_new(uVar11);
      local_100 = uVar11 | 1;
      uStack_f8 = uVar9;
      local_f0 = __dest;
LAB_00f24614:
      memcpy(__dest,puVar8,uVar9);
    }
    __dest[uVar9] = 0;
    plVar4 = (long *)param_3[4];
    if (plVar4 != (long *)0x0) goto LAB_00f245a0;
LAB_00f24630:
    local_b0 = (long *)0x0;
  }
  doEnumerate(this,&local_100,alStack_d0);
  if (alStack_d0 == local_b0) {
    pcVar5 = *(code **)(*local_b0 + 0x20);
LAB_00f246ec:
    (*pcVar5)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar5 = *(code **)(*local_b0 + 0x28);
    goto LAB_00f246ec;
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
joined_r0x00f24704:
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

