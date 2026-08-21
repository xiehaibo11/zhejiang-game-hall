
/* dragonBones::CCTextureAtlasData::setRenderTexture(cocos2d::Texture2D*) */

void __thiscall
dragonBones::CCTextureAtlasData::setRenderTexture(CCTextureAtlasData *this,Texture2D *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  Ref *pRVar5;
  CCTextureAtlasData *pCVar6;
  CCTextureAtlasData *pCVar7;
  long lVar8;
  Size aSStack_78 [8];
  undefined8 local_70;
  Rect aRStack_68 [8];
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00da04b0 to 00ea0667 has its CatchHandler @ 00d9f75c */
  if (*(Texture2D **)(this + 0x68) != param_1) {
    *(Texture2D **)(this + 0x68) = param_1;
    if (param_1 == (Texture2D *)0x0) {
      pCVar7 = *(CCTextureAtlasData **)(this + 0x50);
      while (pCVar7 != this + 0x58) {
        lVar8 = *(long *)(pCVar7 + 0x38);
        pRVar5 = *(Ref **)(lVar8 + 0x48);
        if (pRVar5 != (Ref *)0x0) {
          cocos2d::Ref::release(pRVar5);
          *(undefined8 *)(lVar8 + 0x48) = 0;
        }
                    /* catch() { ... } // from try @ 00da02ec with catch @ 00da05dc */
                    /* catch() { ... } // from try @ 00d9ff44 with catch @ 00da05e0 */
        pCVar6 = *(CCTextureAtlasData **)(pCVar7 + 8);
        if (*(CCTextureAtlasData **)(pCVar7 + 8) == (CCTextureAtlasData *)0x0) {
                    /* catch() { ... } // from try @ 00d9ffe8 with catch @ 00da05f8 */
          pCVar6 = pCVar7 + 0x10;
                    /* catch() { ... } // from try @ 00d9ffc8 with catch @ 00da05fc */
                    /* catch() { ... } // from try @ 00da0208 with catch @ 00da0600 */
          bVar4 = *(CCTextureAtlasData **)*(CCTextureAtlasData **)pCVar6 != pCVar7;
          pCVar7 = *(CCTextureAtlasData **)pCVar6;
                    /* catch() { ... } // from try @ 00da0228 with catch @ 00da0604 */
          if (bVar4) {
            do {
                    /* catch() { ... } // from try @ 00da0118 with catch @ 00da0608 */
              lVar8 = *(long *)pCVar6;
                    /* catch() { ... } // from try @ 00da00f8 with catch @ 00da060c */
              pCVar6 = (CCTextureAtlasData *)(lVar8 + 0x10);
              pCVar7 = *(CCTextureAtlasData **)pCVar6;
            } while (*(long *)pCVar7 != lVar8);
          }
        }
        else {
          do {
                    /* catch() { ... } // from try @ 00d9f8a8 with catch @ 00da05e4 */
            pCVar7 = pCVar6;
                    /* catch() { ... } // from try @ 00d9f894 with catch @ 00da05e8 */
            pCVar6 = *(CCTextureAtlasData **)pCVar7;
          } while (*(CCTextureAtlasData **)pCVar7 != (CCTextureAtlasData *)0x0);
        }
      }
    }
    else {
      cocos2d::Ref::retain((Ref *)param_1);
      pCVar7 = *(CCTextureAtlasData **)(this + 0x50);
      while (pCVar7 != this + 0x58) {
        lVar8 = *(long *)(pCVar7 + 0x38);
        if (*(long *)(lVar8 + 0x48) == 0) {
          bVar4 = *(char *)(lVar8 + 0xd) != '\0';
          lVar1 = 0x30;
          if (bVar4) {
            lVar1 = 0x34;
          }
          lVar2 = 0x34;
          if (bVar4) {
            lVar2 = 0x30;
          }
          cocos2d::Rect::Rect(aRStack_68,*(float *)(lVar8 + 0x28),*(float *)(lVar8 + 0x2c),
                              *(float *)(lVar8 + lVar1),*(float *)(lVar8 + lVar2));
          local_70 = 0;
          cocos2d::Size::Size(aSStack_78,local_60,fStack_5c);
                    /* catch() { ... } // from try @ 00d9fed8 with catch @ 00da054c */
                    /* catch() { ... } // from try @ 00d9f810 with catch @ 00da0550 */
          pRVar5 = (Ref *)cocos2d::SpriteFrame::createWithTexture
                                    (*(Texture2D **)(this + 0x68),aRStack_68,*(bool *)(lVar8 + 0xd),
                                     (Vec2 *)&local_70,aSStack_78);
          *(Ref **)(lVar8 + 0x48) = pRVar5;
          cocos2d::Ref::retain(pRVar5);
                    /* catch() { ... } // from try @ 00d9f800 with catch @ 00da0560 */
                    /* catch() { ... } // from try @ 00d9f7f0 with catch @ 00da0564 */
          pCVar6 = *(CCTextureAtlasData **)(pCVar7 + 8);
          if (*(CCTextureAtlasData **)(pCVar7 + 8) == (CCTextureAtlasData *)0x0) goto LAB_00da0578;
LAB_00da0568:
          do {
            pCVar7 = pCVar6;
            pCVar6 = *(CCTextureAtlasData **)pCVar7;
          } while (*(CCTextureAtlasData **)pCVar7 != (CCTextureAtlasData *)0x0);
        }
        else {
          pCVar6 = *(CCTextureAtlasData **)(pCVar7 + 8);
          if (*(CCTextureAtlasData **)(pCVar7 + 8) != (CCTextureAtlasData *)0x0) goto LAB_00da0568;
LAB_00da0578:
          pCVar6 = pCVar7 + 0x10;
                    /* catch() { ... } // from try @ 00d9f924 with catch @ 00da0584 */
          bVar4 = *(CCTextureAtlasData **)*(CCTextureAtlasData **)pCVar6 != pCVar7;
          pCVar7 = *(CCTextureAtlasData **)pCVar6;
                    /* catch() { ... } // from try @ 00da0384 with catch @ 00da0588 */
          if (bVar4) {
            do {
                    /* catch() { ... } // from try @ 00da028c with catch @ 00da058c */
              lVar8 = *(long *)pCVar6;
              pCVar6 = (CCTextureAtlasData *)(lVar8 + 0x10);
              pCVar7 = *(CCTextureAtlasData **)pCVar6;
            } while (*(long *)pCVar7 != lVar8);
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

