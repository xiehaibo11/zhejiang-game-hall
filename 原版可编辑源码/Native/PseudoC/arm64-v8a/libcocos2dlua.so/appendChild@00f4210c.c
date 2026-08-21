
/* cocos2d::SpriteBatchNode::appendChild(cocos2d::Sprite*) */

void __thiscall cocos2d::SpriteBatchNode::appendChild(SpriteBatchNode *this,Sprite *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  Sprite *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x1fb] = (SpriteBatchNode)0x1;
                    /* catch() { ... } // from try @ 00f42278 with catch @ 00f42140 */
  local_40 = param_1;
  (**(code **)(*(long *)param_1 + 0x538))(param_1,this);
  (**(code **)(*(long *)param_1 + 0x5d8))(param_1,1);
  lVar2 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
  lVar3 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
  if (lVar2 == lVar3) {
    lVar2 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
                    /* try { // try from 00f42198 to 0104219f has its CatchHandler @ 00f422f0 */
    lVar2 = SUB168(SEXT816(lVar2 * 4 + 4) * SEXT816(0x5555555555555556),8);
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),lVar2 - (lVar2 >> 0x3f));
  }
  puVar5 = *(undefined8 **)(this + 0x390);
                    /* try { // try from 00f421b4 to 01042277 has its CatchHandler @ 00f422ec */
  if (puVar5 == *(undefined8 **)(this + 0x398)) {
    std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::
    __push_back_slow_path<cocos2d::Sprite*const&>
              ((vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *)(this + 0x388),
               &local_40);
    puVar6 = *(undefined8 **)(this + 0x390);
  }
  else {
    puVar6 = puVar5 + 1;
    *puVar5 = param_1;
    *(undefined8 **)(this + 0x390) = puVar6;
  }
  uStack_98 = *(undefined8 *)(local_40 + 0x458);
  local_a0 = *(undefined8 *)(local_40 + 0x450);
  uStack_88 = *(undefined8 *)(local_40 + 0x468);
  uStack_90 = *(undefined8 *)(local_40 + 0x460);
  lVar2 = ((long)puVar6 - *(long *)(this + 0x388)) * 0x20000000 + -0x100000000 >> 0x20;
  *(long *)(local_40 + 0x308) = lVar2;
  uStack_48 = *(undefined8 *)(local_40 + 0x4a8);
  uStack_50 = *(undefined8 *)(local_40 + 0x4a0);
  uStack_58 = *(undefined8 *)(local_40 + 0x498);
  local_60 = *(undefined8 *)(local_40 + 0x490);
  uStack_68 = *(undefined8 *)(local_40 + 0x488);
  uStack_70 = *(undefined8 *)(local_40 + 0x480);
  uStack_78 = *(undefined8 *)(local_40 + 0x478);
  local_80 = *(undefined8 *)(local_40 + 0x470);
  TextureAtlas::insertQuad(*(TextureAtlas **)(this + 0x300),(V3F_C4B_T2F_Quad *)&local_a0,lVar2);
  plVar4 = (long *)(**(code **)(*(long *)local_40 + 0x240))();
  puVar6 = (undefined8 *)plVar4[1];
  for (puVar5 = (undefined8 *)*plVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    appendChild(this,(Sprite *)*puVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f42278 to 0104233f has its CatchHandler @ 00f42140 */
  return;
}

