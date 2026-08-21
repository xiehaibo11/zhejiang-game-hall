
/* dragonBones::CCTextureAtlasData::setRenderTexture(cocos2d::middleware::Texture2D*) */

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
  CCTextureAtlasData *pCVar8;
  CCTextureAtlasData *pCVar9;
  long lVar10;
  Size aSStack_78 [8];
  undefined8 local_70;
  Rect aRStack_68 [8];
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(Texture2D **)(this + 0x68) != param_1) {
    *(Texture2D **)(this + 0x68) = param_1;
    if (param_1 == (Texture2D *)0x0) {
      pCVar8 = *(CCTextureAtlasData **)(this + 0x50);
      while (pCVar8 != this + 0x58) {
        lVar10 = *(long *)(pCVar8 + 0x38);
        pRVar5 = *(Ref **)(lVar10 + 0x48);
        if (pRVar5 != (Ref *)0x0) {
          cocos2d::Ref::release(pRVar5);
          *(undefined8 *)(lVar10 + 0x48) = 0;
        }
        pCVar9 = *(CCTextureAtlasData **)(pCVar8 + 8);
        if (*(CCTextureAtlasData **)(pCVar8 + 8) == (CCTextureAtlasData *)0x0) {
          pCVar9 = pCVar8 + 0x10;
          bVar4 = *(CCTextureAtlasData **)*(CCTextureAtlasData **)pCVar9 != pCVar8;
          pCVar8 = *(CCTextureAtlasData **)pCVar9;
          if (bVar4) {
            do {
              lVar10 = *(long *)pCVar9;
              pCVar9 = (CCTextureAtlasData *)(lVar10 + 0x10);
              pCVar8 = *(CCTextureAtlasData **)pCVar9;
            } while (*(long *)pCVar8 != lVar10);
          }
        }
        else {
          do {
            pCVar8 = pCVar9;
            pCVar9 = *(CCTextureAtlasData **)pCVar8;
          } while (*(CCTextureAtlasData **)pCVar8 != (CCTextureAtlasData *)0x0);
        }
      }
    }
    else {
      cocos2d::Ref::retain((Ref *)param_1);
      pCVar8 = this + 0x58;
      if (*(CCTextureAtlasData **)(this + 0x50) != pCVar8) {
        pCVar9 = *(CCTextureAtlasData **)(this + 0x50);
LAB_00d53200:
        do {
          lVar10 = *(long *)(pCVar9 + 0x38);
          if (*(long *)(lVar10 + 0x48) == 0) {
            bVar4 = *(char *)(lVar10 + 0xd) != '\0';
            lVar1 = 0x30;
            if (bVar4) {
              lVar1 = 0x34;
            }
            lVar2 = 0x34;
            if (bVar4) {
              lVar2 = 0x30;
            }
            cocos2d::Rect::Rect(aRStack_68,*(float *)(lVar10 + 0x28),*(float *)(lVar10 + 0x2c),
                                *(float *)(lVar10 + lVar1),*(float *)(lVar10 + lVar2));
            local_70 = 0;
            cocos2d::Size::Size(aSStack_78,local_60,fStack_5c);
            pRVar5 = (Ref *)cocos2d::middleware::SpriteFrame::createWithTexture
                                      (*(Texture2D **)(this + 0x68),aRStack_68,
                                       *(bool *)(lVar10 + 0xd),(Vec2 *)&local_70,aSStack_78);
            *(Ref **)(lVar10 + 0x48) = pRVar5;
            cocos2d::Ref::retain(pRVar5);
            pCVar6 = *(CCTextureAtlasData **)(pCVar9 + 8);
            if (*(CCTextureAtlasData **)(pCVar9 + 8) == (CCTextureAtlasData *)0x0)
            goto LAB_00d53284;
LAB_00d53274:
            do {
              pCVar9 = pCVar6;
              pCVar6 = *(CCTextureAtlasData **)pCVar9;
            } while (*(CCTextureAtlasData **)pCVar9 != (CCTextureAtlasData *)0x0);
          }
          else {
            pCVar6 = *(CCTextureAtlasData **)(pCVar9 + 8);
            if (*(CCTextureAtlasData **)(pCVar9 + 8) != (CCTextureAtlasData *)0x0)
            goto LAB_00d53274;
LAB_00d53284:
            pCVar6 = pCVar9 + 0x10;
            pCVar7 = *(CCTextureAtlasData **)pCVar6;
            if (*(CCTextureAtlasData **)pCVar7 == pCVar9) {
              pCVar9 = pCVar7;
              if (pCVar7 == pCVar8) break;
              goto LAB_00d53200;
            }
            do {
              lVar10 = *(long *)pCVar6;
              pCVar6 = (CCTextureAtlasData *)(lVar10 + 0x10);
              pCVar9 = *(CCTextureAtlasData **)pCVar6;
            } while (*(long *)pCVar9 != lVar10);
          }
        } while (pCVar9 != pCVar8);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

