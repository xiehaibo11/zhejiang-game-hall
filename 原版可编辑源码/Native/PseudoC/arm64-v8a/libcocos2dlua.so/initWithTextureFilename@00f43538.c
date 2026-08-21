
/* cocos2d::SpriteFrame::initWithTextureFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

uint __thiscall
cocos2d::SpriteFrame::initWithTextureFilename(SpriteFrame *this,basic_string *param_1,Rect *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Rect aRStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43524 with catch @ 00f4355c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f434fc with catch @ 00f43560
                        */
  fVar7 = *(float *)param_2;
  lVar3 = Director::getInstance();
  fVar4 = *(float *)(lVar3 + 0x1a0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f434e8 with catch @ 00f43578
                        */
  fVar8 = *(float *)(param_2 + 4);
  lVar3 = Director::getInstance();
  fVar5 = *(float *)(lVar3 + 0x1a0);
  fVar9 = *(float *)(param_2 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f435ec with catch @ 00f43590
                       catch(type#1 @ 00000000) { ... } // from try @ 00f437c0 with catch @ 00f43590
                        */
  lVar3 = Director::getInstance();
  fVar6 = *(float *)(lVar3 + 0x1a0);
  fVar10 = *(float *)(param_2 + 0xc);
  lVar3 = Director::getInstance();
  Rect::Rect(aRStack_68,fVar7 * fVar4,fVar8 * fVar5,fVar9 * fVar6,fVar10 * *(float *)(lVar3 + 0x1a0)
            );
  uVar2 = initWithTextureFilename(this,param_1,aRStack_68,false,(Vec2 *)&Vec2::ZERO,aSStack_60);
                    /* try { // try from 00f435e4 to 010435eb has its CatchHandler @ 00f438ec */
                    /* try { // try from 00f435ec to 01043747 has its CatchHandler @ 00f43590 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

