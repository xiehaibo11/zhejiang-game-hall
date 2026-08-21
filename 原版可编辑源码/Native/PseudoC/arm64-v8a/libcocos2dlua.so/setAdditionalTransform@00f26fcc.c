
/* cocos2d::Node::setAdditionalTransform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Node::setAdditionalTransform(Node *this,Mat4 *param_1)

{
  undefined8 *puVar1;
  Mat4 *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* try { // try from 00f26fd0 to 01027003 has its CatchHandler @ 00f26fd0
                       catch() { ... } // from try @ 00f26fd0 with catch @ 00f26fd0
                       catch() { ... } // from try @ 00f27060 with catch @ 00f26fd0 */
  this_00 = *(Mat4 **)(this + 0x158);
  if (this_00 == (Mat4 *)0x0) {
    puVar1 = operator_new__(0x88);
    this_00 = (Mat4 *)(puVar1 + 1);
                    /* try { // try from 00f27004 to 0102700b has its CatchHandler @ 00f2709c */
    *puVar1 = 2;
    Mat4::Mat4(this_00);
    Mat4::Mat4((Mat4 *)(puVar1 + 9));
    uVar2 = *(undefined8 *)(this + 0xec);
    uVar4 = *(undefined8 *)(this + 0x104);
    uVar3 = *(undefined8 *)(this + 0xfc);
    uVar6 = *(undefined8 *)(this + 0xd4);
    uVar5 = *(undefined8 *)(this + 0xcc);
    uVar8 = *(undefined8 *)(this + 0xe4);
    uVar7 = *(undefined8 *)(this + 0xdc);
    *(Mat4 **)(this + 0x158) = this_00;
    puVar1[0xe] = *(undefined8 *)(this + 0xf4);
    puVar1[0xd] = uVar2;
    puVar1[0x10] = uVar4;
    puVar1[0xf] = uVar3;
    puVar1[10] = uVar6;
    puVar1[9] = uVar5;
    puVar1[0xc] = uVar8;
    puVar1[0xb] = uVar7;
  }
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this_00 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this_00 = uVar2;
                    /* try { // try from 00f27040 to 01027047 has its CatchHandler @ 00f27070 */
  *(undefined8 *)(this_00 + 0x18) = uVar4;
  *(undefined8 *)(this_00 + 0x10) = uVar3;
  *(undefined8 *)(this_00 + 0x28) = uVar6;
  *(undefined8 *)(this_00 + 0x20) = uVar5;
  *(undefined8 *)(this_00 + 0x38) = uVar8;
  *(undefined8 *)(this_00 + 0x30) = uVar7;
  this[0x150] = (Node)0x1;
                    /* try { // try from 00f27054 to 0102705f has its CatchHandler @ 00f2708c */
  *(undefined2 *)(this + 0x160) = 0x101;
                    /* try { // try from 00f27060 to 010270af has its CatchHandler @ 00f26fd0 */
  return;
}

