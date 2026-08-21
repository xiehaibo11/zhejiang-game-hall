
/* cocos2d::Node::doEnumerate(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::function<bool (cocos2d::Node*)>) const */

undefined4 __thiscall cocos2d::Node::doEnumerate(Node *this,basic_string *param_2,long *param_3)

{
  __shared_weak_count *p_Var1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  __shared_weak_count *this_00;
  void *pvVar7;
  long *plVar8;
  size_t sVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  basic_string *pbVar15;
  undefined1 *__dest;
  ulong *puVar16;
  ulong uVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  undefined1 *local_f0;
  __shared_weak_count *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (((byte)*param_2 & 1) == 0) {
    pbVar15 = param_2 + 1;
    sVar9 = (size_t)((byte)*param_2 >> 1);
    if (sVar9 == 0) goto LAB_00f24b04;
LAB_00f24ae0:
    pvVar7 = memchr(pbVar15,0x2f,sVar9);
    uVar10 = (long)pvVar7 - (long)pbVar15;
    if (pvVar7 == (void *)0x0) {
      uVar10 = 0xffffffffffffffff;
    }
  }
  else {
    sVar9 = *(size_t *)(param_2 + 8);
    pbVar15 = *(basic_string **)(param_2 + 0x10);
    if (sVar9 != 0) goto LAB_00f24ae0;
LAB_00f24b04:
    uVar10 = 0xffffffffffffffff;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_c0,param_2);
                    /* try { // try from 00f24b18 to 01024b1f has its CatchHandler @ 00f24c64 */
  if (uVar10 == 0xffffffffffffffff) {
    bVar6 = false;
    goto LAB_00f24c44;
  }
  uStack_f8 = 0;
  local_f0 = (undefined1 *)0x0;
  local_100 = 0;
                    /* try { // try from 00f24b24 to 01024b2f has its CatchHandler @ 00f24c54 */
  uVar12 = *(ulong *)(param_2 + 8);
  pbVar15 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
                    /* try { // try from 00f24b38 to 01024b43 has its CatchHandler @ 00f24c50 */
    pbVar15 = param_2 + 1;
    uVar12 = (ulong)((byte)*param_2 >> 1);
  }
  if (uVar10 <= uVar12) {
    uVar12 = uVar10;
  }
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00f24b50 to 01024b57 has its CatchHandler @ 00f24c40 */
  if (uVar12 < 0x17) {
                    /* try { // try from 00f24b58 to 01024b63 has its CatchHandler @ 00f24c3c */
    __dest = (undefined1 *)((ulong)&local_100 | 1);
    local_100 = (ulong)(byte)((int)uVar12 << 1);
                    /* try { // try from 00f24b64 to 01024b6f has its CatchHandler @ 00f24c2c */
    if (uVar12 != 0) goto LAB_00f24b94;
  }
  else {
    uVar17 = uVar12 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar17);
    local_100 = uVar17 | 1;
    uStack_f8 = uVar12;
    local_f0 = __dest;
LAB_00f24b94:
    memcpy(__dest,pbVar15,uVar12);
  }
  __dest[uVar12] = 0;
  if ((local_c0 & 1) != 0) {
    *local_b0 = 0;
    uStack_b8 = 0;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
                    /* try { // try from 00f24bd4 to 01024bdb has its CatchHandler @ 00f24c28 */
    }
  }
                    /* try { // try from 00f24bdc to 01024c77 has its CatchHandler @ 00f24980 */
  uStack_b8 = uStack_f8;
  local_c0 = local_100;
  local_b0 = local_f0;
  if (((byte)*param_2 & 1) == 0) {
    pbVar15 = param_2 + 1;
    uVar12 = (ulong)((byte)*param_2 >> 1);
  }
  else {
    uVar12 = *(ulong *)(param_2 + 8);
    pbVar15 = *(basic_string **)(param_2 + 0x10);
  }
  uVar17 = uVar12;
  if (uVar10 + 1 <= uVar12) {
    uVar17 = uVar10 + 1;
  }
  sVar9 = uVar12 - uVar17;
  if (sVar9 != 0) {
    memmove(pbVar15,pbVar15 + uVar17,sVar9);
  }
                    /* catch() { ... } // from try @ 00f24bd4 with catch @ 00f24c28 */
  if (((byte)*param_2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f24b64 with catch @ 00f24c2c */
    *param_2 = SUB41((int)sVar9 << 1,0);
  }
  else {
    *(size_t *)(param_2 + 8) = sVar9;
  }
                    /* catch() { ... } // from try @ 00f24b58 with catch @ 00f24c3c */
  pbVar15[sVar9] = (basic_string)0x0;
                    /* catch() { ... } // from try @ 00f24b50 with catch @ 00f24c40 */
  bVar6 = true;
LAB_00f24c44:
                    /* catch() { ... } // from try @ 00f24b38 with catch @ 00f24c50 */
  plVar8 = (long *)(**(code **)(*(long *)this + 0x248))(this);
                    /* catch() { ... } // from try @ 00f24b24 with catch @ 00f24c54 */
  puVar16 = (ulong *)*plVar8;
  puVar2 = (ulong *)plVar8[1];
  if (puVar16 != puVar2) {
                    /* catch() { ... } // from try @ 00f24b18 with catch @ 00f24c64 */
    do {
                    /* catch() { ... } // from try @ 00f24ca4 with catch @ 00f24c78 */
      uVar10 = *puVar16;
      std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
      basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&local_100,&local_c0,0);
      uVar10 = FUN_00f24f08(uVar10 + 0x1a8,&local_100,0);
      this_00 = local_d0;
                    /* try { // try from 00f24c9c to 01024ca3 has its CatchHandler @ 00f24ce4 */
                    /* try { // try from 00f24ca4 to 01024cff has its CatchHandler @ 00f24c78 */
      if (local_d0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_d0 + 8;
        do {
          lVar13 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)local_d0 + 0x10))(local_d0);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
      std::__ndk1::locale::~locale((locale *)&local_100);
      if ((uVar10 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f24c9c with catch @ 00f24ce4 */
        uVar10 = *puVar16;
        if (bVar6) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_118,param_2);
          plVar8 = (long *)param_3[4];
          if (plVar8 == (long *)0x0) {
            local_80 = (long *)0x0;
          }
          else if (param_3 == plVar8) {
            local_80 = alStack_a0;
            (**(code **)(*plVar8 + 0x18))(plVar8,alStack_a0);
          }
          else {
            local_80 = (long *)(**(code **)(*plVar8 + 0x10))();
          }
          uVar10 = doEnumerate((Node *)uVar10,local_118,alStack_a0);
          if (alStack_a0 == local_80) {
                    /* try { // try from 00f24d8c to 01024e33 has its CatchHandler @ 00f24d8c
                       catch() { ... } // from try @ 00f24d8c with catch @ 00f24d8c
                       catch() { ... } // from try @ 00f24e38 with catch @ 00f24d8c */
            pcVar11 = *(code **)(*local_80 + 0x20);
LAB_00f24d94:
            (*pcVar11)();
          }
          else if (local_80 != (long *)0x0) {
            pcVar11 = *(code **)(*local_80 + 0x28);
            goto LAB_00f24d94;
          }
          if (((byte)local_118[0] & 1) != 0) {
            operator_delete(local_108);
          }
        }
        else {
          plVar8 = (long *)param_3[4];
          local_100 = uVar10;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar10 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_100);
        }
        if ((uVar10 & 1) != 0) {
          uVar14 = 1;
          goto joined_r0x00f24dfc;
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar2);
  }
  uVar14 = 0;
joined_r0x00f24dfc:
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

