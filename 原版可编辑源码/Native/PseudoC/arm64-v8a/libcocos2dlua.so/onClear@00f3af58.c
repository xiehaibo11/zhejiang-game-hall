
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::RenderTexture::onClear() */

void __thiscall cocos2d::RenderTexture::onClear(RenderTexture *this)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  local_44[0] = 0;
  uVar3 = *(uint *)(this + 0x360);
  if ((uVar3 >> 0xe & 1) != 0) {
                    /* catch() { ... } // from try @ 00f3afb8 with catch @ 00f3afe8 */
    glGetFloatv(0xc22,&local_38);
    glClearColor(*(undefined4 *)(this + 0x364),*(undefined4 *)(this + 0x368),
                 *(undefined4 *)(this + 0x36c),*(undefined4 *)(this + 0x370));
    uVar3 = *(uint *)(this + 0x360);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    glGetFloatv(0xb73,(long)&local_40 + 4);
    glClearDepthf(*(undefined4 *)(this + 0x374));
    glGetBooleanv(0xb72,local_44);
    glDepthMask(1);
    uVar3 = *(uint *)(this + 0x360);
  }
  if ((uVar3 >> 10 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f3afc0 with catch @ 00f3af94 */
    glGetIntegerv(0xb91,&local_40);
    glClearStencil(*(undefined4 *)(this + 0x378));
    uVar3 = *(uint *)(this + 0x360);
  }
  glClear(uVar3);
  uVar3 = *(uint *)(this + 0x360);
  if ((uVar3 >> 0xe & 1) != 0) {
    glClearColor((undefined4)local_38,local_38._4_4_,(undefined4)local_30,local_30._4_4_);
    uVar3 = *(uint *)(this + 0x360);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    local_40._4_4_ = (undefined4)(local_40 >> 0x20);
    uVar2 = local_40._4_4_;
    glClearDepthf(uVar2);
    glDepthMask(local_44[0]);
    uVar3 = *(uint *)(this + 0x360);
  }
  if ((uVar3 >> 10 & 1) != 0) {
                    /* try { // try from 00f3afc0 to 0103b003 has its CatchHandler @ 00f3af94 */
    glClearStencil(local_40 & 0xffffffff);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

