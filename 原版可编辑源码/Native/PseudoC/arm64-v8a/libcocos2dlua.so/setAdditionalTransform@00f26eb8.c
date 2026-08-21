
/* cocos2d::Node::setAdditionalTransform(cocos2d::Mat4 const*) */

void __thiscall cocos2d::Node::setAdditionalTransform(Node *this,Mat4 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Mat4 *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  this_00 = *(Mat4 **)(this + 0x158);
  if (param_1 == (Mat4 *)0x0) {
    if (this_00 != (Mat4 *)0x0) {
      uVar5 = *(undefined8 *)(this_00 + 0x68);
      uVar4 = *(undefined8 *)(this_00 + 0x60);
      uVar3 = *(undefined8 *)(this_00 + 0x70);
      uVar9 = *(undefined8 *)(this_00 + 0x48);
      uVar8 = *(undefined8 *)(this_00 + 0x40);
      uVar7 = *(undefined8 *)(this_00 + 0x58);
      uVar6 = *(undefined8 *)(this_00 + 0x50);
      *(undefined8 *)(this + 0x104) = *(undefined8 *)(this_00 + 0x78);
      *(undefined8 *)(this + 0xfc) = uVar3;
      *(undefined8 *)(this + 0xf4) = uVar5;
      *(undefined8 *)(this + 0xec) = uVar4;
      *(undefined8 *)(this + 0xe4) = uVar7;
      *(undefined8 *)(this + 0xdc) = uVar6;
      *(undefined8 *)(this + 0xd4) = uVar9;
      *(undefined8 *)(this + 0xcc) = uVar8;
      lVar2 = *(long *)(this_00 + -8);
      if (lVar2 != 0) {
        lVar2 = lVar2 << 6;
        do {
          Mat4::~Mat4(this_00 + lVar2 + -0x40);
          lVar2 = lVar2 + -0x40;
        } while (lVar2 != 0);
      }
      operator_delete__(this_00 + -8);
    }
    *(undefined8 *)(this + 0x158) = 0;
  }
  else {
    if (this_00 == (Mat4 *)0x0) {
      puVar1 = operator_new__(0x88);
      this_00 = (Mat4 *)(puVar1 + 1);
      *puVar1 = 2;
      Mat4::Mat4(this_00);
      Mat4::Mat4((Mat4 *)(puVar1 + 9));
      uVar3 = *(undefined8 *)(this + 0xfc);
      uVar5 = *(undefined8 *)(this + 0xf4);
      uVar4 = *(undefined8 *)(this + 0xec);
      uVar7 = *(undefined8 *)(this + 0xe4);
      uVar6 = *(undefined8 *)(this + 0xdc);
      uVar9 = *(undefined8 *)(this + 0xd4);
      uVar8 = *(undefined8 *)(this + 0xcc);
      *(Mat4 **)(this + 0x158) = this_00;
      puVar1[0x10] = *(undefined8 *)(this + 0x104);
      puVar1[0xf] = uVar3;
      puVar1[0xe] = uVar5;
      puVar1[0xd] = uVar4;
      puVar1[0xc] = uVar7;
      puVar1[0xb] = uVar6;
      puVar1[10] = uVar9;
      puVar1[9] = uVar8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this_00 + 0x20) = uVar3;
    *(undefined8 *)(this_00 + 0x38) = uVar5;
    *(undefined8 *)(this_00 + 0x30) = uVar4;
    *(undefined8 *)(this_00 + 8) = uVar7;
    *(undefined8 *)this_00 = uVar6;
    *(undefined8 *)(this_00 + 0x18) = uVar9;
    *(undefined8 *)(this_00 + 0x10) = uVar8;
  }
                    /* catch() { ... } // from try @ 00f2629c with catch @ 00f26f88
                       catch() { ... } // from try @ 00f2692c with catch @ 00f26f88
                       catch() { ... } // from try @ 00f26a2c with catch @ 00f26f88 */
  this[0x150] = (Node)0x1;
  *(undefined2 *)(this + 0x160) = 0x101;
  return;
}

