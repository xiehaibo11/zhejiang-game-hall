
/* cocos2d::TextRenderGroupItem::addRect(cocos2d::Rect const&, cocos2d::Rect const&,
   cocos2d::Color4B const&, bool) */

void __thiscall
cocos2d::TextRenderGroupItem::addRect
          (TextRenderGroupItem *this,Rect *param_1,Rect *param_2,Color4B *param_3,bool param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = *(long *)(this + 8);
  iVar2 = *(int *)(this + 0x18) * 4;
  uVar3 = *(ulong *)(lVar5 + 0x50);
  if (iVar2 < 0x11) {
    iVar2 = 0x10;
  }
  if (uVar3 < (ulong)(long)(iVar2 * 0x14)) {
    uVar1 = *(long *)(lVar5 + 0x58) + (long)(iVar2 * 0x50);
    if ((*(ulong *)(lVar5 + 0x70) != 0) && (*(ulong *)(lVar5 + 0x70) < uVar1)) {
      if (*(long **)(lVar5 + 0xa0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 0xa0) + 0x30))();
        uVar3 = *(ulong *)(lVar5 + 0x50);
      }
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
    if (uVar3 < uVar1) {
      (**(code **)(*(long *)(lVar5 + 0x40) + 0x10))
                (lVar5 + 0x40,(long)((float)(int)((float)uVar1 * 0.0009765625) * 1024.0),1);
      if (*(long **)(lVar5 + 0xd0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 0xd0) + 0x30))();
      }
    }
  }
  fVar6 = *(float *)(param_1 + 0xc) * 0.21255;
  pfVar4 = (float *)(*(long *)(lVar5 + 0x48) + (long)*(int *)(this + 0x18) * 0x50);
  if (!param_4) {
    fVar6 = 0.0;
  }
  fVar7 = (float)Rect::getMinX(param_1);
  fVar8 = (float)Rect::getMaxY(param_1);
  *pfVar4 = fVar7 + fVar6;
  pfVar4[1] = fVar8;
  fVar7 = (float)Rect::getMaxX(param_1);
  fVar8 = (float)Rect::getMaxY(param_1);
  pfVar4[5] = fVar6 + fVar7;
  pfVar4[6] = fVar8;
  fVar7 = (float)Rect::getMinX(param_1);
  fVar8 = (float)Rect::getMinY(param_1);
  pfVar4[10] = fVar7 - fVar6;
  pfVar4[0xb] = fVar8;
  fVar7 = (float)Rect::getMaxX(param_1);
  fVar8 = (float)Rect::getMinY(param_1);
  pfVar4[0xf] = fVar7 - fVar6;
  pfVar4[0x10] = fVar8;
  fVar6 = (float)Rect::getMinX(param_2);
  fVar7 = (float)Rect::getMinY(param_2);
  pfVar4[2] = fVar6;
  pfVar4[3] = fVar7;
  fVar6 = (float)Rect::getMaxX(param_2);
  fVar7 = (float)Rect::getMinY(param_2);
  pfVar4[7] = fVar6;
  pfVar4[8] = fVar7;
  fVar6 = (float)Rect::getMinX(param_2);
  fVar7 = (float)Rect::getMaxY(param_2);
  pfVar4[0xc] = fVar6;
  pfVar4[0xd] = fVar7;
  fVar6 = (float)Rect::getMaxX(param_2);
  fVar7 = (float)Rect::getMaxY(param_2);
  pfVar4[0x11] = fVar6;
  pfVar4[0x12] = fVar7;
  pfVar4[4] = *(float *)param_3;
  pfVar4[9] = *(float *)param_3;
  pfVar4[0xe] = *(float *)param_3;
  pfVar4[0x13] = *(float *)param_3;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  return;
}

