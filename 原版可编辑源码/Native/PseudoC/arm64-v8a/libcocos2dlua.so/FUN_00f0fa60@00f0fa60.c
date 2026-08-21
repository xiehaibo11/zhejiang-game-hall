
void FUN_00f0fa60(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  if (((*(long *)(lVar1 + 0x3d0) != 0) && (*(int *)(lVar1 + 0x308) == 0)) &&
     (*(long *)(*param_2 + 0x38) == *(long *)(lVar1 + 0x3d0))) {
    for (plVar2 = *(long **)(lVar1 + 0x650); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (**(code **)(*(long *)plVar2[3] + 0x548))((long *)plVar2[3],0);
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x3d8);
    puVar5 = *(undefined8 **)(lVar1 + 0x3e0);
    if (puVar3 != puVar5) {
      do {
        puVar4 = puVar3 + 1;
        cocos2d::Ref::release((Ref *)*puVar3);
        puVar3 = puVar4;
      } while (puVar5 != puVar4);
      puVar3 = *(undefined8 **)(lVar1 + 0x3d8);
    }
    *(undefined8 **)(lVar1 + 0x3e0) = puVar3;
    if (*(FontAtlas **)(lVar1 + 0x3d0) != (FontAtlas *)0x0) {
      cocos2d::FontAtlasCache::releaseFontAtlas(*(FontAtlas **)(lVar1 + 0x3d0));
      return;
    }
  }
  return;
}

