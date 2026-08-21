
/* cocos2d::experimental::TMXLayer::setTileGID(int, cocos2d::Vec2 const&, cocos2d::TMXTileFlags_) */

void __thiscall
cocos2d::experimental::TMXLayer::setTileGID(TMXLayer *this,uint param_1,float *param_2,uint param_4)

{
  TMXLayer *pTVar1;
  TMXLayer *pTVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  TMXLayer *pTVar6;
  int iVar7;
  uint uVar8;
  TMXLayer *pTVar9;
  TMXLayer *pTVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Rect aRStack_98 [16];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  iVar7 = (int)(*(float *)(this + 0x310) * (float)(int)param_2[1] + (float)(int)*param_2);
  uVar4 = *(uint *)(*(long *)(this + 800) + (long)iVar7 * 4);
  pTVar6 = *(TMXLayer **)(this + 0x370);
  pTVar2 = this + 0x370;
  pTVar9 = pTVar2;
  pTVar10 = pTVar6;
  if (pTVar6 == (TMXLayer *)0x0) {
LAB_00efa934:
    pTVar9 = pTVar2;
  }
  else {
    do {
      if (iVar7 <= *(int *)(pTVar10 + 0x20)) {
        pTVar9 = pTVar10;
      }
      pTVar1 = pTVar10 + (ulong)(*(int *)(pTVar10 + 0x20) < iVar7) * 8;
      pTVar10 = *(TMXLayer **)pTVar1;
    } while (*(TMXLayer **)pTVar1 != (TMXLayer *)0x0);
    if ((pTVar9 == pTVar2) || (iVar7 < *(int *)(pTVar9 + 0x20))) goto LAB_00efa934;
  }
  uVar8 = uVar4;
  if (uVar4 == 0) {
    if (pTVar9 == pTVar2) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(pTVar9 + 0x30);
    }
  }
  if (((uVar8 & 0x1fffffff) != param_1) || ((uVar8 & 0xe0000000) != param_4)) {
    if (param_1 == 0) {
      removeTileAt(this,(Vec2 *)param_2);
    }
    else {
      param_1 = param_4 | param_1;
      if (((uVar8 & 0x1fffffff) != 0) && (pTVar9 = pTVar2, pTVar6 != (TMXLayer *)0x0)) {
        do {
          if (iVar7 <= *(int *)(pTVar6 + 0x20)) {
            pTVar9 = pTVar6;
          }
          pTVar6 = *(TMXLayer **)(pTVar6 + (ulong)(*(int *)(pTVar6 + 0x20) < iVar7) * 8);
        } while (pTVar6 != (TMXLayer *)0x0);
        if ((pTVar9 != pTVar2) && (*(int *)(pTVar9 + 0x20) <= iVar7)) {
          plVar11 = *(long **)(pTVar9 + 0x28);
          TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x328));
          lVar5 = Director::getInstance();
          fVar12 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          fVar13 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          fVar14 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          Rect::Rect(aRStack_98,local_88 / fVar12,local_84 / fVar13,local_80 / fVar14,
                     local_7c / *(float *)(lVar5 + 0x1a0));
          Rect::operator=((Rect *)&local_88,aRStack_98);
          (**(code **)(*plVar11 + 0x560))(plVar11,&local_88,0,&local_80);
          (**(code **)(*(long *)this + 0x2a8))(this,plVar11,iVar7);
          if (param_4 != 0) {
            uVar4 = (**(code **)(*plVar11 + 0xb0))(plVar11);
            setupTileSprite((Sprite *)this,(Vec2 *)plVar11,uVar4);
          }
          *(uint *)(pTVar9 + 0x30) = param_1;
          goto LAB_00efa9d0;
        }
      }
      if (uVar4 != param_1) {
        *(uint *)(*(long *)(this + 800) + (long)iVar7 * 4) = param_1;
        this[0x3e4] = (TMXLayer)0x1;
        this[0x488] = (TMXLayer)0x1;
      }
    }
  }
LAB_00efa9d0:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

