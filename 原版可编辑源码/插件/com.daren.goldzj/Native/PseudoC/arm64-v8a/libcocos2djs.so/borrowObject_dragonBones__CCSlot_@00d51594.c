
/* dragonBones::CCSlot* dragonBones::BaseObject::borrowObject<dragonBones::CCSlot>() */

CCSlot * dragonBones::BaseObject::borrowObject<dragonBones::CCSlot>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CCSlot *pCVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (((CCSlot::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CCSlot::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CCSlot::getTypeIndex()::typeIndex = "N11dragonBones6CCSlotE";
    __cxa_guard_release(&CCSlot::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= CCSlot::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < CCSlot::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= CCSlot::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CCSlot *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CCSlot)0x0;
      return pCVar4;
    }
  }
  this = operator_new(0x248,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x38) = uVar5;
    *(undefined8 *)(this + 0x50) = uVar5;
    auVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0xbc) = 0;
    *(undefined8 *)(this + 0xb4) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(long *)(this + 0xac) = auVar6._8_8_;
    *(long *)(this + 0xa4) = auVar6._0_8_;
    *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x10) = 0x3f800000;
    *(undefined8 *)(this + 0x114) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x10c) = 0x3f800000;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined ***)this = &PTR__CCSlot_01c919b8;
    cocos2d::Mat4::Mat4((Mat4 *)(this + 0x188));
    this[0x1c8] = (BaseObject)0x1;
    *(undefined8 *)(this + 0x1d8) = 0;
    *(undefined8 *)(this + 0x1d0) = 0;
    *(undefined8 *)(this + 0x1e8) = 0;
    *(undefined8 *)(this + 0x1e0) = 0;
    cocos2d::Color4B::Color4B((Color4B *)(this + 0x1f0));
    cocos2d::Rect::Rect((Rect *)(this + 500));
    cocos2d::Mat4::Mat4((Mat4 *)(this + 0x204));
    (**(code **)(*(long *)this + 0x10))(this);
  }
  return (CCSlot *)this;
}

