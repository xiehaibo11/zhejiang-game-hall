
/* cocos2d::experimental::TMXLayer::getTileAt(cocos2d::Vec2 const&) */

long * __thiscall cocos2d::experimental::TMXLayer::getTileAt(TMXLayer *this,Vec2 *param_1)

{
  TMXLayer *pTVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  int iVar8;
  TMXLayer *pTVar9;
  TMXLayer *pTVar10;
  TMXLayer *pTVar11;
  int iVar12;
  TMXLayer *pTVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_98;
  float fStack_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
                    /* try { // try from 00efa1c8 to 00ffa1cf has its CatchHandler @ 00efa310 */
                    /* try { // try from 00efa1e0 to 00ffa1eb has its CatchHandler @ 00efa30c */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  pTVar13 = this + 0x370;
  iVar12 = (int)(*(float *)(this + 0x310) * (float)(int)*(float *)(param_1 + 4) +
                (float)(int)*(float *)param_1);
  pTVar9 = *(TMXLayer **)(this + 0x370);
                    /* try { // try from 00efa230 to 00ffa237 has its CatchHandler @ 00efa310 */
  uVar2 = *(uint *)(*(long *)(this + 800) + (long)iVar12 * 4);
  pTVar10 = pTVar13;
  pTVar11 = pTVar9;
  if (pTVar9 == (TMXLayer *)0x0) {
LAB_00efa26c:
    pTVar10 = pTVar13;
  }
  else {
    do {
      if (iVar12 <= *(int *)(pTVar11 + 0x20)) {
        pTVar10 = pTVar11;
      }
      pTVar1 = pTVar11 + (ulong)(*(int *)(pTVar11 + 0x20) < iVar12) * 8;
      pTVar11 = *(TMXLayer **)pTVar1;
    } while (*(TMXLayer **)pTVar1 != (TMXLayer *)0x0);
    if ((pTVar10 == pTVar13) || (iVar12 < *(int *)(pTVar10 + 0x20))) goto LAB_00efa26c;
  }
  if (uVar2 == 0) {
    if (pTVar10 != pTVar13) {
      uVar2 = *(uint *)(pTVar10 + 0x30);
      goto joined_r0x00efa3b8;
    }
  }
  else {
joined_r0x00efa3b8:
    if ((uVar2 & 0x1fffffff) != 0) {
      pTVar10 = pTVar13;
      if (pTVar9 != (TMXLayer *)0x0) {
        do {
          if (iVar12 <= *(int *)(pTVar9 + 0x20)) {
            pTVar10 = pTVar9;
          }
          pTVar9 = *(TMXLayer **)(pTVar9 + (ulong)(*(int *)(pTVar9 + 0x20) < iVar12) * 8);
        } while (pTVar9 != (TMXLayer *)0x0);
        if ((pTVar10 != pTVar13) && (*(int *)(pTVar10 + 0x20) <= iVar12)) {
          plVar6 = *(long **)(pTVar10 + 0x28);
          goto LAB_00efa524;
        }
      }
      TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x328));
      lVar5 = Director::getInstance();
      fVar14 = *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
      fVar16 = local_84 / *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
      fVar15 = *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
                    /* try { // try from 00efa300 to 00ffa307 has its CatchHandler @ 00efa308 */
                    /* catch() { ... } // from try @ 00efa300 with catch @ 00efa308
                       try { // try from 00efa308 to 00ffa32b has its CatchHandler @ 00efa188 */
                    /* catch() { ... } // from try @ 00efa1e0 with catch @ 00efa30c */
                    /* catch() { ... } // from try @ 00efa1c8 with catch @ 00efa310
                       catch() { ... } // from try @ 00efa230 with catch @ 00efa310 */
      Rect::Rect((Rect *)&local_98,local_88 / fVar14,fVar16,local_80 / fVar15,
                 local_7c / *(float *)(lVar5 + 0x1a0));
      Rect::operator=((Rect *)&local_88,(Rect *)&local_98);
      plVar6 = (long *)Sprite::createWithTexture
                                 (*(Texture2D **)(this + 0x360),(Rect *)&local_88,false);
      local_98 = PointApplyTransform(param_1,(Mat4 *)(this + 0x3a4));
      fStack_94 = fVar16;
      (**(code **)(*plVar6 + 0x148))(plVar6,&Vec2::ZERO);
      (**(code **)(*plVar6 + 0x98))(plVar6,&local_98);
      if (this[0x3a0] == (TMXLayer)0x0) {
        iVar8 = *(int *)(this + 0x39c);
      }
      else {
        if (*(int *)(this + 0x330) == 0) {
          fVar14 = *(float *)(this + 0x314);
          fVar15 = *(float *)(param_1 + 4);
        }
        else {
          if (*(int *)(this + 0x330) != 2) {
            iVar8 = 0;
            goto LAB_00efa3f0;
          }
          fVar14 = (float)(int)(*(float *)(this + 0x310) + *(float *)(this + 0x314));
          fVar15 = *(float *)param_1 + *(float *)(param_1 + 4);
        }
        iVar8 = (int)-(fVar14 - fVar15);
      }
LAB_00efa3f0:
      (**(code **)(*plVar6 + 0x108))((float)iVar8,plVar6);
      uVar4 = (**(code **)(*(long *)this + 0x480))(this);
      (**(code **)(*plVar6 + 0x490))(plVar6,uVar4);
      (**(code **)(*plVar6 + 0x2c0))(plVar6,iVar12);
      (**(code **)(*(long *)this + 0x210))(this,plVar6,iVar12);
      pTVar10 = pTVar13;
      if (*(TMXLayer **)(this + 0x370) != (TMXLayer *)0x0) {
        pTVar11 = *(TMXLayer **)(this + 0x370);
        pTVar13 = this + 0x370;
        do {
          while (pTVar10 = pTVar11, iVar12 < *(int *)(pTVar10 + 0x20)) {
            pTVar11 = *(TMXLayer **)pTVar10;
            pTVar13 = pTVar10;
            if (*(TMXLayer **)pTVar10 == (TMXLayer *)0x0) goto LAB_00efa4ac;
          }
          if (iVar12 <= *(int *)(pTVar10 + 0x20)) break;
          pTVar13 = pTVar10 + 8;
          pTVar11 = *(TMXLayer **)pTVar13;
        } while (*(TMXLayer **)pTVar13 != (TMXLayer *)0x0);
      }
LAB_00efa4ac:
      if (*(long *)pTVar13 == 0) {
        p_Var7 = operator_new(0x38);
        *(int *)(p_Var7 + 0x20) = iVar12;
        *(long **)(p_Var7 + 0x28) = plVar6;
        *(uint *)(p_Var7 + 0x30) = uVar2 & 0x1fffffff;
        *(undefined8 *)p_Var7 = 0;
        *(undefined8 *)(p_Var7 + 8) = 0;
        *(TMXLayer **)(p_Var7 + 0x10) = pTVar10;
        *(__tree_node_base **)pTVar13 = p_Var7;
        if (**(long **)(this + 0x368) != 0) {
          *(long *)(this + 0x368) = **(long **)(this + 0x368);
          p_Var7 = *(__tree_node_base **)pTVar13;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x370),p_Var7);
        *(long *)(this + 0x378) = *(long *)(this + 0x378) + 1;
      }
      if (*(int *)(*(long *)(this + 800) + (long)iVar12 * 4) != 0) {
        *(undefined4 *)(*(long *)(this + 800) + (long)iVar12 * 4) = 0;
        this[0x3e4] = (TMXLayer)0x1;
        this[0x488] = (TMXLayer)0x1;
      }
      goto LAB_00efa524;
    }
  }
  plVar6 = (long *)0x0;
LAB_00efa524:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

