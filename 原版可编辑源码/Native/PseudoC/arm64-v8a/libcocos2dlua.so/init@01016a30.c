
/* cocos2d::Physics3DCollider::init(cocos2d::Physics3DColliderDes*) */

undefined8 __thiscall
cocos2d::Physics3DCollider::init(Physics3DCollider *this,Physics3DColliderDes *param_1)

{
  uint uVar1;
  btGhostObject *this_00;
  Ref *this_01;
  undefined8 uVar2;
  
  this_01 = *(Ref **)param_1;
  *(Ref **)(this + 0xe8) = this_01;
  Ref::retain(this_01);
  this_00 = (btGhostObject *)btAlignedAllocInternal(0x150,0x10);
  btGhostObject::btGhostObject(this_00);
                    /* try { // try from 01016a70 to 01116a77 has its CatchHandler @ 01016b5c */
  *(Physics3DCollider **)(this_00 + 0x148) = this;
  *(undefined ***)this_00 = &PTR_checkCollideWithOverride_017268c0;
  *(btGhostObject **)(this + 0xe0) = this_00;
  uVar2 = *(undefined8 *)(*(long *)(this + 0xe8) + 0x28);
                    /* try { // try from 01016a94 to 01116aaf has its CatchHandler @ 01016b64 */
  *(undefined8 *)(this_00 + 200) = uVar2;
  *(undefined8 *)(this_00 + 0xd8) = uVar2;
  uVar1 = *(uint *)(this_00 + 0xe0) & 0xfffffffb;
  if (param_1[0x48] != (Physics3DColliderDes)0x0) {
    uVar1 = *(uint *)(this_00 + 0xe0) | 4;
  }
                    /* try { // try from 01016ab0 to 01116ba7 has its CatchHandler @ 01016a28 */
  *(uint *)(this_00 + 0xe0) = uVar1;
  *(undefined4 *)(this_00 + 0xf4) = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(int *)(this_00 + 0x120) = *(int *)(this_00 + 0x120) + 4;
  uVar2 = NEON_rev64(uVar2,4);
  *(undefined8 *)(this_00 + 0xf8) = uVar2;
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(this_00 + 0x118) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x24) = 2;
  return 1;
}

