
/* cocos2d::Sprite3D::getAABBRecursivelyImp(cocos2d::Node*) */

void __thiscall cocos2d::Sprite3D::getAABBRecursivelyImp(Sprite3D *this,Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Sprite3D *this_00;
  AABB *pAVar3;
  Node *pNVar4;
  Node *extraout_x1;
  AABB *in_x8;
  undefined8 *puVar5;
  undefined1 auVar7 [16];
  AABB aAStack_60 [24];
  long local_48;
  undefined8 *puVar6;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  AABB::AABB(in_x8);
  auVar7 = (**(code **)(*(long *)this + 0x240))(this);
  pNVar4 = auVar7._8_8_;
  puVar5 = (undefined8 *)*auVar7._0_8_;
  puVar1 = (undefined8 *)auVar7._0_8_[1];
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      getAABBRecursivelyImp((Sprite3D *)*puVar5,pNVar4);
      AABB::merge(in_x8,aAStack_60);
      pNVar4 = extraout_x1;
      puVar5 = puVar6;
    } while (puVar1 != puVar6);
    if (this == (Sprite3D *)0x0) goto LAB_00d3e1e4;
  }
  this_00 = (Sprite3D *)__dynamic_cast(this,&Node::typeinfo,&typeinfo,0);
  if (this_00 != (Sprite3D *)0x0) {
    pAVar3 = (AABB *)getAABB(this_00);
    AABB::merge(in_x8,pAVar3);
  }
LAB_00d3e1e4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

