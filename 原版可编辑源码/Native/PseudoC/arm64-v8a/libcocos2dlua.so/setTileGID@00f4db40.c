
/* cocos2d::TMXLayer::setTileGID(unsigned int, cocos2d::Vec2 const&, cocos2d::TMXTileFlags_) */

void __thiscall
cocos2d::TMXLayer::setTileGID(TMXLayer *this,uint param_1,float *param_2,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Rect aRStack_98 [16];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  iVar6 = (int)(*(float *)(this + 0x3dc) * (float)(int)param_2[1] + (float)(int)*param_2);
  uVar1 = *(uint *)(*(long *)(this + 0x3f0) + (long)iVar6 * 4);
  uVar3 = uVar1 & 0x1fffffff;
  if ((uVar3 != param_1) || ((uVar1 & 0xe0000000) != param_4)) {
    if (param_1 == 0) {
      removeTileAt(this,(Vec2 *)param_2);
    }
    else {
      param_1 = param_4 | param_1;
      if (uVar3 == 0) {
        insertTileForGID(this,param_1,(Vec2 *)param_2);
      }
      else {
        plVar4 = (long *)(**(code **)(*(long *)this + 0x228))(this,iVar6);
        if (plVar4 == (long *)0x0) {
          updateTileForGID(this,param_1,(Vec2 *)param_2);
        }
        else {
          TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x3f8));
          lVar5 = Director::getInstance();
          fVar7 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          fVar8 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          fVar9 = *(float *)(lVar5 + 0x1a0);
          lVar5 = Director::getInstance();
          Rect::Rect(aRStack_98,local_88 / fVar7,local_84 / fVar8,local_80 / fVar9,
                     local_7c / *(float *)(lVar5 + 0x1a0));
          Rect::operator=((Rect *)&local_88,aRStack_98);
          (**(code **)(*plVar4 + 0x560))(plVar4,&local_88,0,&local_80);
          if (param_4 != 0) {
            uVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4);
            setupTileSprite((Sprite *)this,(Vec2 *)plVar4,uVar3);
          }
          *(uint *)(*(long *)(this + 0x3f0) + (long)iVar6 * 4) = param_1;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

