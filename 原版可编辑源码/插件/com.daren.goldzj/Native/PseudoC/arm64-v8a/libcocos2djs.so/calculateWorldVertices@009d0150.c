
/* cocos2d::renderer::AssemblerSprite::calculateWorldVertices(cocos2d::Mat4 const&) */

void __thiscall
cocos2d::renderer::AssemblerSprite::calculateWorldVertices(AssemblerSprite *this,Mat4 *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  RenderDataList *this_00;
  RenderData *this_01;
  long lVar6;
  ulong uVar7;
  Vec3 *pVVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  this_00 = *(RenderDataList **)(this + 0x38);
  if ((this_00 != (RenderDataList *)0x0) && (*(long *)(this + 0x70) != 0)) {
    lVar6 = *(long *)(this + 0x40);
    lVar5 = *(long *)(this + 0x48) - lVar6;
    if (lVar5 != 0) {
      uVar9 = 0;
      iVar2 = *(int *)(*(long *)(this + 0x78) + 0x28);
      lVar10 = (ulong)(*(uint *)(this + 0x58) >> 2) * 4;
      while( true ) {
        lVar1 = lVar6 + uVar9 * 0x20;
        iVar4 = *(int *)(lVar1 + 8);
        uVar7 = (long)iVar4;
        if (iVar4 < 0) {
          uVar7 = uVar9;
        }
        this_01 = (RenderData *)RenderDataList::getRenderData(this_00,uVar7);
        if (this_01 != (RenderData *)0x0) {
          uVar11 = *(uint *)(lVar1 + 0x10);
          if ((int)uVar11 < 0) {
            uVar11 = 0;
            if (*(uint *)(this + 0x58) != 0) {
              uVar11 = *(uint *)(this_01 + 8) / *(uint *)(this + 0x58);
            }
          }
          iVar4 = *(int *)(lVar6 + uVar9 * 0x20 + 0xc);
          lVar6 = RenderData::getVertices(this_01);
          uVar7 = (ulong)(uint)(*(int *)(this + 0x58) * iVar4);
          if (iVar2 == 3) {
            if (uVar11 != 0) {
              pVVar8 = (Vec3 *)(lVar6 + uVar7 + *(long *)(this + 0x60) * 4);
              do {
                Vec3::transformMat4(pVVar8,pVVar8,param_1);
                uVar11 = uVar11 - 1;
                pVVar8 = pVVar8 + lVar10;
              } while (uVar11 != 0);
            }
          }
          else if ((iVar2 == 2) && (uVar11 != 0)) {
            pVVar8 = (Vec3 *)(lVar6 + uVar7 + *(long *)(this + 0x60) * 4);
            do {
              uVar3 = *(undefined4 *)(pVVar8 + 8);
              *(undefined4 *)(pVVar8 + 8) = 0;
              Mat4::transformVector(param_1,*(float *)pVVar8,*(float *)(pVVar8 + 4),0.0,1.0,pVVar8);
              *(undefined4 *)(pVVar8 + 8) = uVar3;
              uVar11 = uVar11 - 1;
              pVVar8 = pVVar8 + lVar10;
            } while (uVar11 != 0);
          }
        }
        uVar9 = uVar9 + 1;
        if ((ulong)(lVar5 >> 5) <= uVar9) break;
        this_00 = *(RenderDataList **)(this + 0x38);
        lVar6 = *(long *)(this + 0x40);
      }
    }
    **(uint **)(this + 0x18) = **(uint **)(this + 0x18) & 0xfffffffd;
  }
  return;
}

