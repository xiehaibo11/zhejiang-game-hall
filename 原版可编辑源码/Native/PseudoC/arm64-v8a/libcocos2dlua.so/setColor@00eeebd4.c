
/* cocos2d::AtlasNode::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::AtlasNode::setColor(AtlasNode *this,Color3B *param_1)

{
  AtlasNode AVar1;
  long lVar2;
  undefined2 local_30;
  Color3B local_2e;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2e = param_1[2];
  local_30 = *(undefined2 *)param_1;
  AVar1 = *(AtlasNode *)(param_1 + 2);
  *(undefined2 *)(this + 0x310) = *(undefined2 *)param_1;
  this[0x312] = AVar1;
  if (this[800] != (AtlasNode)0x0) {
    AVar1 = this[0x218];
    local_30._1_1_ = (byte)((ushort)local_30 >> 8);
    local_30 = CONCAT11((char)(((uint)local_30._1_1_ * (uint)(byte)AVar1) / 0xff),
                        (char)(((uint)(byte)AVar1 * (uint)(byte)local_30._0_1_) / 0xff));
    local_2e = SUB41(((uint)(byte)local_2e * (uint)(byte)AVar1) / 0xff,0);
  }
  Node::setColor((Node *)this,(Color3B *)&local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

