
/* cocos2d::LabelRenderer::genStringLayout() */

void __thiscall cocos2d::LabelRenderer::genStringLayout(LabelRenderer *this)

{
  ulong uVar1;
  long lVar2;
  LabelLayout *this_00;
  undefined8 uVar3;
  basic_string local_58 [8];
  ulong local_50;
  void *local_48;
  basic_string local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  getFontPath();
  getString();
  uVar1 = (ulong)((byte)local_40[0] >> 1);
  if (((byte)local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 != 0) {
    uVar1 = (ulong)((byte)local_58[0] >> 1);
    if (((byte)local_58[0] & 1) != 0) {
      uVar1 = local_50;
    }
    if ((uVar1 != 0) && (*(long *)(this + 0x10) == 0)) {
      this_00 = operator_new(0xb8);
      *(undefined8 *)(this_00 + 0x68) = 0;
      *(undefined8 *)(this_00 + 0x60) = 0;
      *(undefined8 *)(this_00 + 0x78) = 0;
      *(undefined8 *)(this_00 + 0x70) = 0;
      this_00[0x78] = (LabelLayout)0x1;
      uVar3 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(this_00 + 0xb0) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined8 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x58) = uVar3;
      *(undefined8 *)(this_00 + 0x60) = 0;
      *(undefined8 *)(this_00 + 0x68) = 0;
      *(undefined8 *)(this_00 + 0x70) = 0;
      this_00[0x79] = (LabelLayout)0x0;
      *(undefined8 *)(this_00 + 0x98) = 0;
      *(undefined8 *)(this_00 + 0x90) = 0;
      *(undefined8 *)(this_00 + 0xa8) = 0;
      *(undefined8 *)(this_00 + 0xa0) = 0;
      *(undefined8 *)(this_00 + 0x88) = 0;
      *(undefined8 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &PTR__LabelLayout_01c6abb8;
      *(LabelLayout **)(this + 0x10) = this_00;
      LabelLayout::init(this_00,local_40,local_58,*(float *)(*(long *)(this + 0x20) + 4),
                        *(float *)(*(long *)(this + 0x20) + 8),*(LabelLayoutInfo **)(this + 0x28));
    }
  }
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

