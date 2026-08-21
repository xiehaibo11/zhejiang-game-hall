
/* cocos2d::renderer::InputAssembler::InputAssembler(cocos2d::renderer::InputAssembler const&) */

void __thiscall
cocos2d::renderer::InputAssembler::InputAssembler(InputAssembler *this,InputAssembler *param_1)

{
  Ref *this_00;
  undefined2 uVar1;
  Ref *this_01;
  undefined8 uVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x10) = 4;
  *(undefined8 *)(this + 0x14) = 0xffffffff00000000;
  this_00 = *(Ref **)param_1;
  this_01 = *(Ref **)(param_1 + 8);
                    /* try { // try from 009bfdf0 to 00abfe07 has its CatchHandler @ 009bffc4 */
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  *(Ref **)this = this_00;
  *(Ref **)(this + 8) = this_01;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined2 *)(this + 0x10) = uVar1;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
                    /* try { // try from 009bfe10 to 00abfe1b has its CatchHandler @ 009bffc0 */
    this_01 = *(Ref **)(this + 8);
  }
  if (this_01 != (Ref *)0x0) {
                    /* try { // try from 009bfe1c to 00abfe27 has its CatchHandler @ 009bffbc */
    Ref::retain(this_01);
    return;
  }
                    /* try { // try from 009bfe28 to 00abff47 has its CatchHandler @ 009bffd4 */
  return;
}

