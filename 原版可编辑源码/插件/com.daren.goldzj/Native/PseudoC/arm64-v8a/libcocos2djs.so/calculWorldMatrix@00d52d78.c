
/* dragonBones::CCSlot::calculWorldMatrix() */

void __thiscall dragonBones::CCSlot::calculWorldMatrix(CCSlot *this)

{
  long lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(*(long *)(this + 0x68) + 0x30) == 0) {
    *(undefined8 *)(this + 0x1c0) = *(undefined8 *)(this + 0x23c);
    *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(this + 0x234);
    *(undefined8 *)(this + 0x1b0) = *(undefined8 *)(this + 0x22c);
    *(undefined8 *)(this + 0x1a8) = *(undefined8 *)(this + 0x224);
    *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(this + 0x21c);
    *(undefined8 *)(this + 0x198) = *(undefined8 *)(this + 0x214);
    *(undefined8 *)(this + 400) = *(undefined8 *)(this + 0x20c);
    *(undefined8 *)(this + 0x188) = *(undefined8 *)(this + 0x204);
  }
  else {
    cocos2d::Mat4::Mat4((Mat4 *)&local_78,(Mat4 *)(*(long *)(*(long *)(this + 0x68) + 0x30) + 0x188)
                       );
    cocos2d::Mat4::multiply((Mat4 *)&local_78,(Mat4 *)(this + 0x204));
    *(undefined8 *)(this + 0x1c0) = uStack_40;
    *(undefined8 *)(this + 0x1b8) = local_48;
    *(undefined8 *)(this + 0x1b0) = uStack_50;
    *(undefined8 *)(this + 0x1a8) = local_58;
    *(undefined8 *)(this + 0x1a0) = uStack_60;
    *(undefined8 *)(this + 0x198) = local_68;
    *(undefined8 *)(this + 400) = uStack_70;
    *(undefined8 *)(this + 0x188) = local_78;
    cocos2d::Mat4::~Mat4((Mat4 *)&local_78);
  }
  this[0x1c8] = (CCSlot)0x0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

