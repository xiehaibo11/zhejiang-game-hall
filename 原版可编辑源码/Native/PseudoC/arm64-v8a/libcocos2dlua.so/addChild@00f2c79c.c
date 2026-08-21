
/* cocos2d::ParallaxNode::addChild(cocos2d::Node*, int, cocos2d::Vec2 const&, cocos2d::Vec2 const&)
    */

void __thiscall
cocos2d::ParallaxNode::addChild
          (ParallaxNode *this,Node *param_1,int param_2,Vec2 *param_3,Vec2 *param_4)

{
  long lVar1;
  Ref *this_00;
  long lVar2;
  ParallaxNode *pPVar3;
  undefined8 *puVar4;
  basic_string *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)param_3;
  uVar7 = *(undefined8 *)param_4;
  this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x2c) = 0;
    *(undefined8 *)(this_00 + 0x24) = 0;
    *(undefined ***)this_00 = &PTR__Ref_01708418;
  }
  *(undefined8 *)(this_00 + 0x24) = uVar6;
  *(undefined8 *)(this_00 + 0x2c) = uVar7;
  *(undefined8 *)(this_00 + 0x38) = 0;
  Ref::autorelease(this_00);
  *(Node **)(this_00 + 0x38) = param_1;
  ccArrayAppendObjectWithResize(*(_ccArray **)(this + 0x300),this_00);
  uVar6 = *(undefined8 *)(this + 0x50);
  lVar2 = (**(code **)(*(long *)this + 0x260))(this);
  pPVar3 = this;
  while( true ) {
    fVar8 = (float)uVar6;
    fVar9 = (float)((ulong)uVar6 >> 0x20);
    if (lVar2 == 0) break;
    pPVar3 = (ParallaxNode *)(**(code **)(*(long *)pPVar3 + 0x260))(pPVar3);
    puVar4 = (undefined8 *)(**(code **)(*(long *)pPVar3 + 0xb0))();
    uVar6 = CONCAT44(fVar9 + (float)((ulong)*puVar4 >> 0x20),fVar8 + (float)*puVar4);
    lVar2 = (**(code **)(*(long *)pPVar3 + 0x260))(pPVar3);
  }
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) +
                      (fVar9 * (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar9),
                      (float)*(undefined8 *)param_4 +
                      (fVar8 * (float)*(undefined8 *)param_3 - fVar8));
  (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_70);
  pbVar5 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
  Node::addChild((Node *)this,param_1,param_2,pbVar5);
                    /* try { // try from 00f2c8fc to 0102c903 has its CatchHandler @ 00f2ccd0 */
                    /* try { // try from 00f2c904 to 0102ca07 has its CatchHandler @ 00f2c744 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

