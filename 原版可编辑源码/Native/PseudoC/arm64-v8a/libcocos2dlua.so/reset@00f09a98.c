
/* cocos2d::Label::reset() */

void __thiscall cocos2d::Label::reset(Label *this)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__dest;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined7 uStack_97;
  ulong uStack_90;
  char *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(Ref **)(this + 0x3c0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c0));
    *(undefined8 *)(this + 0x3c0) = 0;
  }
  if (*(Ref **)(this + 0x3c8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c8));
    *(undefined8 *)(this + 0x3c8) = 0;
  }
                    /* try { // try from 00f09ae4 to 01009c1f has its CatchHandler @ 00f09ae4
                       catch() { ... } // from try @ 00f09ae4 with catch @ 00f09ae4
                       catch() { ... } // from try @ 00f09c28 with catch @ 00f09ae4 */
  Node::removeAllChildrenWithCleanup((Node *)this,true);
  if (*(Ref **)(this + 0x408) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x408));
    *(undefined8 *)(this + 0x408) = 0;
  }
  if (*(long *)(this + 0x658) != 0) {
    puVar8 = *(void **)(this + 0x650);
    while (puVar8 != (void *)0x0) {
      pvVar7 = (void *)*puVar8;
      operator_delete(puVar8);
      puVar8 = pvVar7;
    }
    lVar5 = *(long *)(this + 0x648);
    *(undefined8 *)(this + 0x650) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x640) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(this + 0x658) = 0;
  }
  puVar8 = *(undefined8 **)(this + 0x3d8);
  puVar10 = *(undefined8 **)(this + 0x3e0);
  if (puVar8 != puVar10) {
    do {
      puVar9 = puVar8 + 1;
      Ref::release((Ref *)*puVar8);
      puVar8 = puVar9;
    } while (puVar10 != puVar9);
    puVar8 = *(undefined8 **)(this + 0x3d8);
  }
  *(undefined8 **)(this + 0x3e0) = puVar8;
  *(undefined8 *)(this + 0x3f8) = *(undefined8 *)(this + 0x3f0);
  if (*(FontAtlas **)(this + 0x3d0) != (FontAtlas *)0x0) {
    FontAtlasCache::releaseFontAtlas(*(FontAtlas **)(this + 0x3d0));
    *(undefined8 *)(this + 0x3d0) = 0;
  }
  *(undefined4 *)(this + 0x308) = 3;
  *(undefined4 *)(this + 0x49c) = 0;
  this[0x30c] = (Label)0x0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x420) = 0;
  if (((byte)this[0x310] & 1) == 0) {
    *(undefined4 *)(this + 0x314) = 0;
    this[0x310] = (Label)0x0;
    if (((byte)this[0x328] & 1) == 0) goto LAB_00f09bd8;
LAB_00f09bb4:
    **(undefined1 **)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
  }
  else {
    **(undefined4 **)(this + 800) = 0;
    *(undefined8 *)(this + 0x318) = 0;
    if (((byte)this[0x328] & 1) != 0) goto LAB_00f09bb4;
LAB_00f09bd8:
    *(undefined2 *)(this + 0x328) = 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_98,"");
  pcVar2 = local_88;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  if (((byte)local_98 & 1) == 0) {
    local_80 = CONCAT71(uStack_97,local_98);
    bVar3 = false;
    uStack_78 = uStack_90;
    local_70 = local_88;
    goto LAB_00f09c7c;
  }
  if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00f09c20 to 01009c27 has its CatchHandler @ 00f09cf0 */
                    /* try { // try from 00f09c28 to 01009d03 has its CatchHandler @ 00f09ae4 */
  if (uStack_90 < 0x17) {
    __dest = (char *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)uStack_90 << 1);
    if (uStack_90 != 0) goto LAB_00f09c64;
  }
  else {
    uVar11 = uStack_90 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar11);
    local_80 = uVar11 | 1;
    uStack_78 = uStack_90;
    local_70 = __dest;
LAB_00f09c64:
    memcpy(__dest,pcVar2,uStack_90);
  }
  bVar3 = true;
  __dest[uStack_90] = '\0';
LAB_00f09c7c:
  uStack_58 = uStack_58 & 0xffffff00;
  local_68 = 0x41400000;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  if (bVar3) {
    operator_delete(local_88);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x360) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80) {
    uVar11 = local_80 >> 1 & 0x7f;
    pcVar2 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar11 = uStack_78;
      pcVar2 = local_70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x360),pcVar2,uVar11);
  }
  *(undefined8 *)(this + 0x38c) = uStack_54;
  *(ulong *)(this + 900) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)(this + 0x380) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(this + 0x378) = local_68;
  *(undefined4 *)(this + 0x398) = 0;
                    /* catch() { ... } // from try @ 00f09c20 with catch @ 00f09cf0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x348),"",0);
  this[0x39c] = (Label)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x3a0),"Helvetica",9);
  *(undefined4 *)(this + 0x3b8) = 0x41400000;
  if (*(void **)(this + 0x430) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x430));
    *(undefined8 *)(this + 0x430) = 0;
  }
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined8 *)(this + 0x424) = 0;
  this[0x438] = (Label)0x0;
  *(undefined8 *)(this + 0x444) = 0;
  *(undefined8 *)(this + 0x44c) = 0;
  *(undefined8 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x454) = 0;
  uVar4 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x4a8) = Color4F::BLACK._8_8_;
  *(undefined8 *)(this + 0x4a0) = uVar4;
  *(undefined4 *)(this + 0x4b0) = Color4B::WHITE;
  uVar4 = Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 0x4bc) = Color4F::WHITE._8_8_;
  *(undefined8 *)(this + 0x4b4) = uVar4;
  (**(code **)(*(long *)this + 0x4c0))(this,&Color3B::WHITE);
  *(undefined4 *)(this + 0x62c) = 0;
  *(undefined2 *)(this + 0x630) = 0;
  *(undefined8 *)(this + 0x600) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x608) = 0xffffffff;
  *(undefined8 *)(this + 0x634) = 0x30300000001;
  *(undefined2 *)(this + 0x63c) = 1;
  this[0x678] = (Label)0x1;
  *(undefined8 *)(this + 0x67c) = 0x3f800000bf800000;
  this[0x68c] = (Label)0x0;
  *(undefined8 *)(this + 0x684) = 0;
  if (*(long *)(this + 0x690) != 0) {
    (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x690),1);
    *(undefined8 *)(this + 0x690) = 0;
  }
  this[0x698] = (Label)0x0;
  (**(code **)(*(long *)this + 0x1b0))(0,this);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

