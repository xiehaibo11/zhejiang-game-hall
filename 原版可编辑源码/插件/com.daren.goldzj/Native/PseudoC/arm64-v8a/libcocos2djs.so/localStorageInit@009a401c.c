
/* WARNING: Type propagation algorithm not settling */
/* localStorageInit(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void localStorageInit(basic_string *param_1)

{
  basic_string bVar1;
  long lVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *__dest;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4080 with catch @ 009a402c
                        */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  uVar6 = *(ulong *)(param_1 + 8);
  uVar9 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar9 = uVar6;
  }
  if (((DAT_01d37fac & 1) != 0) || (uVar9 == 0)) goto LAB_009a4318;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (undefined1 *)0x0;
  if (((byte)bVar1 & 1) == 0) {
                    /* try { // try from 009a4078 to 00aa407f has its CatchHandler @ 009a41e0 */
    local_90 = *(undefined1 **)(param_1 + 0x10);
    uStack_98 = *(ulong *)(param_1 + 8);
    local_a0 = *(ulong *)param_1;
                    /* try { // try from 009a4080 to 00aa41e3 has its CatchHandler @ 009a402c */
  }
  else {
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_1 + 0x10);
    if (uVar6 < 0x17) {
      puVar7 = (undefined1 *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_009a40d8;
    }
    else {
      uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar7 = operator_new(uVar9);
      local_a0 = uVar9 | 1;
      uStack_98 = uVar6;
      local_90 = puVar7;
LAB_009a40d8:
      memcpy(puVar7,pvVar4,uVar6);
    }
    puVar7[uVar6] = 0;
  }
  puVar10 = local_90;
  uVar6 = local_a0;
  uVar5 = local_a0 >> 1 & 0x7f;
  uVar9 = uVar5;
  puVar7 = (undefined1 *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    uVar5 = uStack_98;
    uVar9 = uStack_98;
    puVar7 = local_90;
  }
  do {
    uVar8 = uVar5;
    if (uVar8 == 0) goto LAB_009a41ec;
    pvVar4 = memchr(&DAT_01889e24,(uint)(byte)puVar7[uVar8 - 1],2);
    uVar5 = uVar8 - 1;
  } while (pvVar4 == (void *)0x0);
  if (uVar8 - 1 != 0xffffffffffffffff) {
    uVar5 = uVar9 - uVar8;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (undefined1 *)0x0;
    if (uVar9 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      __dest = (undefined1 *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009a41a8;
      *__dest = 0;
    }
    else {
      uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar9);
      local_80 = uVar9 | 1;
      uStack_78 = uVar5;
      local_70 = __dest;
LAB_009a41a8:
      memcpy(__dest,puVar7 + uVar8,uVar5);
      __dest[uVar5] = 0;
    }
    if ((uVar6 & 1) != 0) {
      *puVar10 = 0;
      uStack_98 = 0;
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4078 with catch @ 009a41e0
                        */
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
  }
LAB_009a41ec:
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_70 = operator_new(0x30);
  puVar7 = local_90;
  uVar9 = uStack_98;
  uStack_b0 = 0;
  uStack_78 = 0x25;
  local_80 = 0x31;
  local_a8 = (void *)0x0;
  builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxLocalStorage",0x26);
  uStack_c8 = 0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = 0x74696e6908;
  local_d0 = 0;
  if ((local_a0 & 1) == 0) {
    local_c0 = local_90;
    uStack_c8 = uStack_98;
    local_d0 = local_a0;
  }
  else {
    if (0xffffffffffffffef < uStack_98) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_98 < 0x17) {
                    /* try { // try from 009a428c to 00aa42e7 has its CatchHandler @ 009a428c
                       catch() { ... } // from try @ 009a428c with catch @ 009a428c
                       catch() { ... } // from try @ 009a4318 with catch @ 009a428c */
      puVar10 = (undefined1 *)((ulong)&local_d0 | 1);
      local_d0 = (ulong)(byte)((int)uStack_98 << 1);
      if (uStack_98 != 0) goto LAB_009a42bc;
    }
    else {
      uVar6 = uStack_98 + 0x10 & 0xfffffffffffffff0;
      puVar10 = operator_new(uVar6);
      local_d0 = uVar6 | 1;
      uStack_c8 = uVar9;
      local_c0 = puVar10;
LAB_009a42bc:
      memcpy(puVar10,puVar7,uVar9);
    }
    puVar10[uVar9] = 0;
  }
  bVar3 = cocos2d::JniHelper::
          callStaticBooleanMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
                    (&local_80,&local_b8,&local_d0,"data");
                    /* try { // try from 009a42e8 to 00aa430b has its CatchHandler @ 009a436c */
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 009a4310 with catch @ 009a4368 */
                    /* catch() { ... } // from try @ 009a42e8 with catch @ 009a436c */
    operator_delete(local_70);
  }
  if (bVar3) {
    DAT_01d37fac = 1;
  }
  if ((local_a0 & 1) != 0) {
                    /* try { // try from 009a4310 to 00aa4317 has its CatchHandler @ 009a4368 */
    operator_delete(local_90);
  }
LAB_009a4318:
                    /* try { // try from 009a4318 to 00aa4387 has its CatchHandler @ 009a428c */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a4388 to 00aa43b7 has its CatchHandler @ 009a4388
                       catch() { ... } // from try @ 009a4388 with catch @ 009a4388
                       catch() { ... } // from try @ 009a43c0 with catch @ 009a4388 */
    __stack_chk_fail();
  }
  return;
}

