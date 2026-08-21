
/* fairygui::GGraph::updateShape() */

void __thiscall fairygui::GGraph::updateShape(GGraph *this)

{
  Color4F *pCVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *this_00;
  DrawNode *pDVar5;
  Vec2 *pVVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  cocos2d::DrawNode::clear(*(DrawNode **)(this + 0x228));
  switch(*(undefined4 *)(this + 0x1d8)) {
  case 0:
    this[0xbc] = (GGraph)0x0;
    break;
  case 1:
    if (*(int *)(this + 0x1fc) < 1) {
      pDVar5 = *(DrawNode **)(this + 0x228);
                    /* try { // try from 00a747ac to 00b747e3 has its CatchHandler @ 00a74868 */
      pfVar9 = (float *)((ulong)&local_90 | 4);
      fVar13 = (float)*(undefined8 *)(this + 200) + 0.0;
      fVar14 = (float)((ulong)*(undefined8 *)(this + 200) >> 0x20) + 0.0;
      local_90 = 0.0;
      local_80 = 0;
                    /* try { // try from 00a747e4 to 00b74813 has its CatchHandler @ 00a7475c */
      local_88 = (ulong)(uint)fVar13;
      *pfVar9 = fVar14;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,
                 (Color4F *)(this + 0x1ec));
      local_90 = 0.0;
      local_80 = (ulong)(uint)fVar13;
      local_88 = CONCAT44(fVar14,fVar13);
    }
    else {
      pDVar5 = *(DrawNode **)(this + 0x228);
      fVar12 = (float)*(int *)(this + 0x1fc);
      pCVar1 = (Color4F *)(this + 0x1dc);
      fVar14 = *(float *)(this + 200) - fVar12;
      fVar10 = fVar14 + 0.0;
      local_80 = 0;
      local_90 = 0.0;
      fVar13 = *(float *)(this + 0xcc) - fVar12;
      local_88 = (ulong)(uint)fVar10;
      local_8c = fVar12;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      local_80 = (ulong)(uint)fVar10;
      local_88 = CONCAT44(fVar12,fVar10);
      local_90 = 0.0;
      local_8c = fVar12;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      pDVar5 = *(DrawNode **)(this + 0x228);
      fVar12 = fVar13 + 0.0;
      fVar10 = fVar14 + (float)*(int *)(this + 0x1fc);
      local_80 = (ulong)(uint)fVar14;
      local_88 = (ulong)(uint)fVar10;
      local_90 = fVar14;
      local_8c = fVar12;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      local_80 = (ulong)(uint)fVar10;
      local_88 = CONCAT44(fVar12,fVar10);
      local_90 = fVar14;
      local_8c = fVar12;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      pDVar5 = *(DrawNode **)(this + 0x228);
      fVar12 = (float)*(int *)(this + 0x1fc);
      fVar14 = fVar14 + fVar12;
      fVar10 = fVar13 + fVar12;
      local_80 = CONCAT44(fVar13,fVar12);
      local_88 = CONCAT44(fVar13,fVar14);
      local_90 = fVar12;
      local_8c = fVar10;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      local_80 = CONCAT44(fVar13,fVar14);
      local_88 = CONCAT44(fVar10,fVar14);
      local_90 = fVar12;
      local_8c = fVar10;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      pDVar5 = *(DrawNode **)(this + 0x228);
      fVar14 = (float)*(int *)(this + 0x1fc);
      fVar13 = fVar13 + fVar14;
      local_80 = (ulong)(uint)fVar14 << 0x20;
      local_88 = CONCAT44(fVar14,fVar14);
      local_90 = 0.0;
      local_8c = fVar13;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      local_80 = CONCAT44(fVar14,fVar14);
      local_88 = CONCAT44(fVar13,fVar14);
      local_90 = 0.0;
      local_8c = fVar13;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,pCVar1);
      pDVar5 = *(DrawNode **)(this + 0x228);
      fVar12 = (float)*(int *)(this + 0x1fc);
      fVar14 = (float)(*(int *)(this + 0x1fc) << 1);
      pfVar9 = (float *)((ulong)&local_90 | 4);
      fVar13 = ((float)*(undefined8 *)(this + 200) - fVar14) + fVar12;
      fVar14 = ((float)((ulong)*(undefined8 *)(this + 200) >> 0x20) - fVar14) + fVar12;
      local_80 = CONCAT44(fVar12,fVar12);
      local_88 = CONCAT44(fVar12,fVar13);
      *pfVar9 = fVar14;
      local_90 = fVar12;
      cocos2d::DrawNode::drawTriangle
                (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,
                 (Color4F *)(this + 0x1ec));
      local_80 = CONCAT44(fVar12,fVar13);
      local_90 = fVar12;
      local_88 = CONCAT44(fVar14,fVar13);
    }
                    /* try { // try from 00a74814 to 00b74827 has its CatchHandler @ 00a74868 */
    *pfVar9 = (float)(local_88 >> 0x20);
    cocos2d::DrawNode::drawTriangle
              (pDVar5,(Vec2 *)&local_80,(Vec2 *)&local_88,(Vec2 *)&local_90,
               (Color4F *)(this + 0x1ec));
    break;
  case 2:
    if (0 < *(int *)(this + 0x1fc)) {
      cocos2d::DrawNode::setLineWidth(*(DrawNode **)(this + 0x228),(float)*(int *)(this + 0x1fc));
      fVar12 = (float)((ulong)*(undefined8 *)(this + 200) >> 0x20);
      fVar14 = (float)*(undefined8 *)(this + 200);
      fVar13 = fVar14 * 0.5;
      local_80 = CONCAT44(fVar12 * 0.5,fVar13);
      cocos2d::DrawNode::drawCircle
                (*(DrawNode **)(this + 0x228),(Vec2 *)&local_80,fVar13,0.0,0x168,false,1.0,
                 fVar12 / fVar14,(Color4F *)(this + 0x1dc));
    }
    fVar12 = (float)((ulong)*(undefined8 *)(this + 200) >> 0x20);
    fVar14 = (float)*(undefined8 *)(this + 200);
    fVar13 = fVar14 * 0.5;
    local_80 = CONCAT44(fVar12 * 0.5,fVar13);
    cocos2d::DrawNode::drawSolidCircle
              (*(DrawNode **)(this + 0x228),(Vec2 *)&local_80,fVar13,0.0,0x168,1.0,fVar12 / fVar14,
               (Color4F *)(this + 0x1ec));
    break;
  case 3:
    iVar11 = *(int *)(this + 0x1fc);
    pDVar5 = *(DrawNode **)(this + 0x228);
    pVVar6 = (Vec2 *)**(long **)(this + 0x208);
    uVar7 = (*(long **)(this + 0x208))[1] - (long)pVVar6;
    goto LAB_00a74798;
  case 4:
    fVar13 = *(float *)(this + 0xcc);
    plVar4 = *(long **)(this + 0x208);
    *(float *)(this + 0x210) = fVar13;
    if (plVar4 == (long *)0x0) {
      plVar4 = operator_new(0x18);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      *(long **)(this + 0x208) = plVar4;
    }
    else {
      plVar4[1] = *plVar4;
    }
    iVar11 = *(int *)(this + 0x214);
    fVar14 = *(float *)(this + 200);
    if (fVar13 <= *(float *)(this + 200)) {
      fVar14 = fVar13;
    }
    if (0 < iVar11) {
      fVar14 = fVar14 * 0.5;
      fVar12 = *(float *)(this + 0x218) * 0.017453292;
      lVar8 = 0;
      do {
        plVar4 = *(long **)(this + 0x220);
        fVar10 = 1.0;
        if (plVar4 != (long *)0x0) {
          fVar10 = 1.0;
          if (lVar8 < (int)((ulong)(plVar4[1] - *plVar4) >> 2)) {
            fVar10 = *(float *)(*plVar4 + lVar8 * 4);
          }
        }
        sincosf(fVar12,&fStack_94,&local_98);
        this_00 = *(vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> **)(this + 0x208);
        local_80 = CONCAT44(fVar13 - (fVar14 + fStack_94 * fVar14 * fVar10),
                            fVar14 + local_98 * fVar14 * fVar10);
        puVar2 = *(ulong **)(this_00 + 8);
                    /* try { // try from 00a7475c to 00b747ab has its CatchHandler @ 00a7475c
                       catch() { ... } // from try @ 00a7475c with catch @ 00a7475c
                       catch() { ... } // from try @ 00a747e4 with catch @ 00a7475c
                       catch() { ... } // from try @ 00a74828 with catch @ 00a7475c */
        if (puVar2 < *(ulong **)(this_00 + 0x10)) {
          *puVar2 = local_80;
          *(ulong **)(this_00 + 8) = puVar2 + 1;
        }
        else {
          std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
          __push_back_slow_path<cocos2d::Vec2>(this_00,(Vec2 *)&local_80);
        }
        lVar8 = lVar8 + 1;
        fVar12 = fVar12 + 6.2831855 / (float)iVar11;
      } while (lVar8 < *(int *)(this + 0x214));
      plVar4 = *(long **)(this + 0x208);
    }
    pVVar6 = (Vec2 *)*plVar4;
    iVar11 = *(int *)(this + 0x1fc);
    pDVar5 = *(DrawNode **)(this + 0x228);
    uVar7 = plVar4[1] - (long)pVVar6;
LAB_00a74798:
    cocos2d::DrawNode::drawPolygon
              (pDVar5,pVVar6,(int)(uVar7 >> 3),(Color4F *)(this + 0x1ec),(float)iVar11 * 0.5,
               (Color4F *)(this + 0x1dc));
  }
                    /* try { // try from 00a74828 to 00b74883 has its CatchHandler @ 00a7475c */
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

