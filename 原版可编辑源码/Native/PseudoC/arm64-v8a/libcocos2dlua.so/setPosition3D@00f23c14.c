
/* cocos2d::Node::setPosition3D(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Node::setPosition3D(Node *this,Vec3 *param_1)

{
  (**(code **)(*(long *)this + 0x108))(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00f23c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 200))(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),this);
  return;
}

