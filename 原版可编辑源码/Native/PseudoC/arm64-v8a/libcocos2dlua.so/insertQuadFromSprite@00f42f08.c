
/* cocos2d::SpriteBatchNode::insertQuadFromSprite(cocos2d::Sprite*, long) */

void __thiscall
cocos2d::SpriteBatchNode::insertQuadFromSprite(SpriteBatchNode *this,Sprite *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
                    /* try { // try from 00f42f68 to 01042f8f has its CatchHandler @ 00f43018 */
    lVar2 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
    if (param_2 < lVar2) {
      lVar2 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
      lVar3 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
      if (lVar2 != lVar3) {
                    /* try { // try from 00f42f94 to 01042f9f has its CatchHandler @ 00f43014 */
                    /* try { // try from 00f42fa0 to 01043057 has its CatchHandler @ 00f42eec */
        (**(code **)(*(long *)param_1 + 0x538))(param_1,this);
        uStack_98 = *(undefined8 *)(param_1 + 0x468);
        uStack_a0 = *(undefined8 *)(param_1 + 0x460);
        uStack_a8 = *(undefined8 *)(param_1 + 0x458);
        local_b0 = *(undefined8 *)(param_1 + 0x450);
        *(long *)(param_1 + 0x308) = param_2;
        uStack_58 = *(undefined8 *)(param_1 + 0x4a8);
        uStack_60 = *(undefined8 *)(param_1 + 0x4a0);
        uStack_68 = *(undefined8 *)(param_1 + 0x498);
        local_70 = *(undefined8 *)(param_1 + 0x490);
        uStack_78 = *(undefined8 *)(param_1 + 0x488);
        uStack_80 = *(undefined8 *)(param_1 + 0x480);
        uStack_88 = *(undefined8 *)(param_1 + 0x478);
        local_90 = *(undefined8 *)(param_1 + 0x470);
        TextureAtlas::insertQuad
                  (*(TextureAtlas **)(this + 0x300),(V3F_C4B_T2F_Quad *)&local_b0,param_2);
        (**(code **)(*(long *)param_1 + 0x5d8))(param_1,1);
        (**(code **)(*(long *)param_1 + 0x3e0))(param_1);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f42f94 with catch @ 00f43014
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f42f68 with catch @ 00f43018
                        */
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    lVar2 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
    lVar2 = SUB168(SEXT816(lVar2 * 4 + 4) * SEXT816(0x5555555555555556),8);
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),lVar2 - (lVar2 >> 0x3f));
  } while( true );
}

