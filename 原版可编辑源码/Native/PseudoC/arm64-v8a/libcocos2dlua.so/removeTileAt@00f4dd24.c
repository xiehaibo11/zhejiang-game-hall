
/* cocos2d::TMXLayer::removeTileAt(cocos2d::Vec2 const&) */

void __thiscall cocos2d::TMXLayer::removeTileAt(TMXLayer *this,Vec2 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  Node *pNVar5;
  _ccCArray *p_Var6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(uint *)(*(long *)(this + 0x3f0) +
                (long)(int)(*(float *)(this + 0x3dc) * (float)(int)*(float *)(param_1 + 4) +
                           (float)(int)*(float *)param_1) * 4) & 0x1fffffff) != 0) {
    iVar9 = (int)(*(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(this + 0x3dc));
    local_3c = iVar9;
    pvVar4 = bsearch(&local_3c,(void *)(*(size_t **)(this + 0x3d0))[2],**(size_t **)(this + 0x3d0),8
                     ,FUN_00f4db28);
    p_Var6 = *(_ccCArray **)(this + 0x3d0);
    lVar7 = *(long *)(p_Var6 + 0x10);
    *(undefined4 *)(*(long *)(this + 0x3f0) + (long)iVar9 * 4) = 0;
    uVar8 = (ulong)((long)pvVar4 - lVar7) >> 3;
    ccCArrayRemoveValueAtIndex(p_Var6,uVar8);
    pNVar5 = (Node *)(**(code **)(*(long *)this + 0x228))(this,iVar9);
    if (pNVar5 == (Node *)0x0) {
      TextureAtlas::removeQuadAtIndex(*(TextureAtlas **)(this + 0x300),uVar8);
      plVar2 = *(long **)(this + 0x180);
      for (plVar1 = *(long **)(this + 0x178); plVar1 != plVar2; plVar1 = plVar1 + 1) {
        lVar7 = *(long *)(*plVar1 + 0x308);
        if ((long)uVar8 <= lVar7) {
          *(long *)(*plVar1 + 0x308) = lVar7 + -1;
        }
      }
    }
    else {
      SpriteBatchNode::removeChild((SpriteBatchNode *)this,pNVar5,true);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

