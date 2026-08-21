
/* cocos2d::Node::setAdditionalTransform(cocos2d::AffineTransform const&) */

void __thiscall cocos2d::Node::setAdditionalTransform(Node *this,AffineTransform *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Mat4 *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4((Mat4 *)&local_88);
  CGAffineToGL(param_1,(float *)&local_88);
  this_00 = *(Mat4 **)(this + 0x158);
  if (this_00 == (Mat4 *)0x0) {
    puVar2 = operator_new__(0x88);
    this_00 = (Mat4 *)(puVar2 + 1);
    *puVar2 = 2;
    Mat4::Mat4(this_00);
    Mat4::Mat4((Mat4 *)(puVar2 + 9));
    uVar3 = *(undefined8 *)(this + 0xec);
    uVar5 = *(undefined8 *)(this + 0x104);
    uVar4 = *(undefined8 *)(this + 0xfc);
    uVar7 = *(undefined8 *)(this + 0xd4);
    uVar6 = *(undefined8 *)(this + 0xcc);
    uVar9 = *(undefined8 *)(this + 0xe4);
    uVar8 = *(undefined8 *)(this + 0xdc);
    *(Mat4 **)(this + 0x158) = this_00;
    puVar2[0xe] = *(undefined8 *)(this + 0xf4);
    puVar2[0xd] = uVar3;
    puVar2[0x10] = uVar5;
    puVar2[0xf] = uVar4;
    puVar2[10] = uVar7;
    puVar2[9] = uVar6;
    puVar2[0xc] = uVar9;
    puVar2[0xb] = uVar8;
  }
  *(undefined8 *)(this_00 + 0x28) = uStack_60;
  *(undefined8 *)(this_00 + 0x20) = local_68;
  *(undefined8 *)(this_00 + 0x38) = uStack_50;
  *(undefined8 *)(this_00 + 0x30) = local_58;
  *(undefined8 *)(this_00 + 8) = uStack_80;
  *(undefined8 *)this_00 = local_88;
  *(undefined8 *)(this_00 + 0x18) = uStack_70;
  *(undefined8 *)(this_00 + 0x10) = local_78;
  this[0x150] = (Node)0x1;
  *(undefined2 *)(this + 0x160) = 0x101;
  Mat4::~Mat4((Mat4 *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

