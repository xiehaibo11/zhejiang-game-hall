
/* dragonBones::CCSlot::updateWorldMatrix() */

void __thiscall dragonBones::CCSlot::updateWorldMatrix(CCSlot *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  CCSlot *this_00;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x68) != 0) {
    this_00 = *(CCSlot **)(*(long *)(this + 0x68) + 0x30);
    if (this_00 != (CCSlot *)0x0) {
      updateWorldMatrix(this_00);
    }
    if (this[0x1c8] != (CCSlot)0x0) {
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
        cocos2d::Mat4::Mat4((Mat4 *)&local_78,
                            (Mat4 *)(*(long *)(*(long *)(this + 0x68) + 0x30) + 0x188));
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
      lVar5 = *(long *)(this + 0x178);
      this[0x1c8] = (CCSlot)0x0;
      if (lVar5 != 0) {
        lVar3 = *(long *)(lVar5 + 0x78);
        lVar5 = *(long *)(lVar5 + 0x80) - lVar3;
        if (lVar5 != 0) {
          uVar6 = lVar5 >> 3;
          uVar2 = uVar6;
          if (uVar6 < 2) {
            uVar2 = 1;
          }
          if (uVar2 < 2) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar2 & 0xfffffffffffffffe;
            plVar8 = (long *)(lVar3 + 8);
            uVar9 = uVar7;
            do {
              plVar1 = plVar8 + -1;
              lVar5 = *plVar8;
              uVar9 = uVar9 - 2;
              plVar8 = plVar8 + 2;
              *(undefined1 *)(*plVar1 + 0x1c8) = 1;
              *(undefined1 *)(lVar5 + 0x1c8) = 1;
            } while (uVar9 != 0);
            if (uVar2 == uVar7) goto LAB_00d52d50;
          }
          do {
            lVar5 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            *(undefined1 *)(*(long *)(lVar3 + lVar5) + 0x1c8) = 1;
          } while (uVar7 < uVar6);
        }
      }
    }
  }
LAB_00d52d50:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

