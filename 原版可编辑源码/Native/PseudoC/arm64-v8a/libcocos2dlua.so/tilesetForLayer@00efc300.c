
/* cocos2d::experimental::TMXTiledMap::tilesetForLayer(cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*)
    */

void __thiscall
cocos2d::experimental::TMXTiledMap::tilesetForLayer
          (TMXTiledMap *this,TMXLayerInfo *param_1,TMXMapInfo *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Size::Size((Size *)&local_40,(Size *)(param_1 + 0x68));
  if (*(long **)(param_2 + 0x70) != *(long **)(param_2 + 0x68)) {
    plVar4 = *(long **)(param_2 + 0x70) + -1;
    lVar3 = *plVar4;
    while( true ) {
      if ((lVar3 != 0) && (0.0 < fStack_3c)) {
        iVar5 = 0;
        fVar7 = 0.0;
        do {
          if (0.0 < local_40) {
            fVar8 = 0.0;
            iVar6 = 1;
            do {
                    /* try { // try from 00efc3b8 to 00ffc40f has its CatchHandler @ 00efc62c */
              uVar1 = *(uint *)(*(long *)(param_1 + 0x70) +
                               (ulong)(uint)(int)(fVar8 + fVar7 * local_40) * 4);
              if ((uVar1 != 0) && (*(uint *)(lVar3 + 0x40) <= (uVar1 & 0x1fffffff)))
              goto LAB_00efc3d8;
              fVar8 = (float)iVar6;
              iVar6 = iVar6 + 1;
            } while (fVar8 < local_40);
          }
          iVar5 = iVar5 + 1;
          fVar7 = (float)iVar5;
        } while (fVar7 < fStack_3c);
      }
      if (plVar4 == *(long **)(param_2 + 0x68)) break;
      plVar4 = plVar4 + -1;
      lVar3 = *plVar4;
    }
  }
  lVar3 = 0;
LAB_00efc3d8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

